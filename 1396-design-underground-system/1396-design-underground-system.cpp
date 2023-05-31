class UndergroundSystem {
public:
   
    unordered_map<string, pair<int, int>> records;
    

    unordered_map<int, pair<string, int>> checkIns;
    
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        checkIns[id] = make_pair(stationName, t);
    }
    
    void checkOut(int id, string stationName, int t) {
        int time_started = checkIns[id].second;
        string start_station = checkIns[id].first;
        checkIns.erase(id);
        
 
        if (records.find(start_station + "->" + stationName) == records.end()) {
            records[start_station + "->" + stationName] = make_pair(t - time_started, 1);
        }
        
        else {
            int previous_total_time = records[start_station + "->" + stationName].first;
            int previous_number_of_times = records[start_station + "->" + stationName].second;
            
            records[start_station + "->" + stationName] = make_pair(previous_total_time + (t - time_started), previous_number_of_times + 1);
        }
    }
    
    double getAverageTime(string startStation, string endStation) {
        return (double) records[startStation + "->" + endStation].first / records[startStation + "->" + endStation].second;
    }
};