class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> res;
        if (s.empty() || words.empty()) return res;
        int n = words.size(), m = words[0].size();
        unordered_map<string, int> m1;
        for (auto &a : words/*对序列进行遍历*/) ++m1[a];
        for (int i = 0; i <= (int)s.size() - n * m; ++i) {
            unordered_map<string, int> m2;
            int j = 0; 
            for (j = 0; j < n; ++j) {
                string t = s.substr(i + j * m, m);
                if (m1.find(t) == m1.end()/*如果key存在，则find返回key对应的迭代器，如果key不存在，则find返回unordered_map::end*/) break;
                ++m2[t];
                if (m2[t] > m1[t]) break;
            }
            if (j == n) res.push_back(i);
        }
        return res;
    }
};