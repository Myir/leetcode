void Trans(vector<string> s, string digits, string path)
    {
        s.push_back(path);
      
        int n = digits.length();
        if(n==0)
            return;
        char s1,s2,s3,s4;
        if(digits[0]<'7')
        {
            s1=(digits[0]-50)*3+97;
            s2=(digits[0]-50)*3+98;
            s3=(digits[0]-50)*3+99;
            res.push_back(path);
        }
        else if(digits[0]=='7')
        {
            s1=(digits[0]-50)*3+97;
            s2=(digits[0]-50)*3+98;
            s3=(digits[0]-50)*3+99;
            s3=(digits[0]-50)*3+100;
        }
        else if(digits[0]=='8')
        {
            s1=(digits[0]-50)*3+98;
            s2=(digits[0]-50)*3+99;
            s3=(digits[0]-50)*3+100;
        }
        else if(digits[0]=='9')
        {
            s1=(digits[0]-50)*3+98;
            s2=(digits[0]-50)*3+99;
            s3=(digits[0]-50)*3+100;
            s3=(digits[0]-50)*3+101;
        } 
        if(n==1)
        {
            res.push_back(path+=s1);
            res.push_back(path+=s2);
            res.push_back(path+=s3);
            if(digits[0]==7 || digits[0]=='9')
            {
                 res.push_back(path+=s4);
            }
        }

        else if(n>1)
        {
            Trans(res,digits.substr(1),path+=s1);
            Trans(res,digits.substr(1),path+=s2);
            Trans(res,digits.substr(1),path+=s3);
            if(digits[0]=='7' || digits[0]=='9')
                Trans(res,digits.substr(1),path+=s4);
        }
    }