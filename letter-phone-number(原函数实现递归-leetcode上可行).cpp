class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> res, dst;
        // ��ʼ���ֵ�ӳ��
        unordered_map<int, string> dict;
        dict.insert(make_pair<int, string>(2, "abc"));
        dict.insert(make_pair<int, string>(3, "def"));
        dict.insert(make_pair<int, string>(4, "ghi"));
        dict.insert(make_pair<int, string>(5, "jkl"));
        dict.insert(make_pair<int, string>(6, "mno"));
        dict.insert(make_pair<int, string>(7, "pqrs"));
        dict.insert(make_pair<int, string>(8, "tuv"));
        dict.insert(make_pair<int, string>(9, "wxyz"));
        // ��������ַ��Ƿ��� 2 - 9 ��Χ��
        for(int i = 0; i < digits.size(); ++i)
            if(digits[i] < '2' || digits[i] > '9') {
                vector<string> nullstrs;
                return nullstrs;
            }

        // �ݹ�˼·
        if(digits.size() > 1) {
            string sub_digits = digits.substr(1, digits.length() - 1);
            res = letterCombinations(sub_digits);
        }

        // �����ַ�������ĸ��Ӧ�������ַ�
        string keystr = dict[digits[0] - '0'];
        if(digits.length() == 1) {
            for(int m = 0; m < keystr.length(); ++m) {
                string tmp = ""; tmp += keystr[m];
                dst.push_back(tmp);
            }
        }

        // ˫��ѭ������vector<string> �� char ��ϣ��γ�һ���µ� vector<string>
        for(int m = 0; m < keystr.length(); ++m) {
            for(int n = 0; n < res.size(); ++n) {
                string tmpstr = keystr[m] + res[n];
                dst.push_back(tmpstr);
            }
        }

        return dst;
    }
};
