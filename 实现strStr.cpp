class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        int m = needle.length();
        if(n<m)
            return -1;
        if(m==0)
            return 0;
        int res = -1;
        int flag = 0;
        for(int i=0;i<=n-m;i++)
        {
            if(haystack[i]==needle[0])
            {
                flag = 1;
                for(int j=1;j<m;j++)
                {
                    if(needle[j]!=haystack[i+j])
                    {
                        flag=0;
                        break;
                    }
                }
                if(flag==1)
                {
                    res=i;
                    return res;
                }
            }
        }
        return res;
    }
};