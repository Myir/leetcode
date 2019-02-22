class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> res, dst;
        // 初始化字典映射
        unordered_map<int, string> dict;
        dict.insert(make_pair<int, string>(2, "abc"));
        dict.insert(make_pair<int, string>(3, "def"));
        dict.insert(make_pair<int, string>(4, "ghi"));
        dict.insert(make_pair<int, string>(5, "jkl"));
        dict.insert(make_pair<int, string>(6, "mno"));
        dict.insert(make_pair<int, string>(7, "pqrs"));
        dict.insert(make_pair<int, string>(8, "tuv"));
        dict.insert(make_pair<int, string>(9, "wxyz"));
        // 检查输入字符是否在 2 - 9 范围内
        for(int i = 0; i < digits.size(); ++i)
            if(digits[i] < '2' || digits[i] > '9') {
                vector<string> nullstrs;
                return nullstrs;
            }

        // 递归思路
        if(digits.size() > 1) {
            string sub_digits = digits.substr(1, digits.length() - 1);
            res = letterCombinations(sub_digits);
        }

        // 查找字符串首字母对应的所有字符
        string keystr = dict[digits[0] - '0'];
        if(digits.length() == 1) {
            for(int m = 0; m < keystr.length(); ++m) {
                string tmp = ""; tmp += keystr[m];
                dst.push_back(tmp);
            }
        }

        // 双重循环，将vector<string> 与 char 组合，形成一个新的 vector<string>
        for(int m = 0; m < keystr.length(); ++m) {
            for(int n = 0; n < res.size(); ++n) {
                string tmpstr = keystr[m] + res[n];
                dst.push_back(tmpstr);
            }
        }

        return dst;
    }
};
