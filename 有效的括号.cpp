class Solution {
public:
    bool isValid(string s) {
        //too easy
        //int n = s.length();
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==')')
            {
                if(s[i-1]=='(')
                {
                    s.erase(s.begin()+i);
                    s.erase(s.begin()+i-1);
                    i-=2;
                }
            }
            else if(s[i]==']')
            {
                if(s[i-1]=='[')
                {
                    s.erase(s.begin()+i);
                    s.erase(s.begin()+i-1);
                    i-=2;
                }
            }
            else if(s[i]=='}')
            {
                if(s[i-1]=='{')
                {
                    s.erase(s.begin()+i);
                    s.erase(s.begin()+i-1);
                    i-=2;
                }
            }
            
        }
        if(s!="")
            return false;
        else
            return true;
        
    }
};