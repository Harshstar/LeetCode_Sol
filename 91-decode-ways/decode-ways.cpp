const int N = 101;
class Solution {
public:

    int answers[N];

    int helper(int i, string &s) {
        if (i >= s.size()) return 1;
        if (s[i] == '0') return 0;
        if (answers[i] > -1) return answers[i];
        int a = 0;
        if (s.size() - i >= 2) {
            if (stoi(s.substr(i, 2)) <= 26) {
                a = helper(i + 2, s);
            }
        }

        return answers[i] = a + helper(i + 1, s);
    }

    int numDecodings(string s) {
        memset(answers, -1, sizeof(answers));
        return helper(0, s);
    }
};