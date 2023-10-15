class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.size();
        string ans = "";
        
        for(int i = 0; i < n; i++){
            string curr = "";
            for(int j = i; j<n; j++){
                curr += s[j];
                if(count(curr.begin(), curr.end(), '1') == k){
                    if(ans == "")
                        ans = curr;
                    else if(ans.size() > curr.size())
                        ans = curr;
                    else if(ans.size() == curr.size())
                        ans = min(ans, curr);
                }
            }
            
        }
        
        return ans;
    }
};