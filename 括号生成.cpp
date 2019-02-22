class Solution {
public:
    vector<string> generateParenthesis(int n) 
    {
        vector<string> res;
        generateDFS(n,n,"",res);
        return res;    
    }

    /*left��right�ֱ�����������ʣ�µ�������*/
    void generateDFS(int left,int right,string temp,vector<string> &res)
    {
        if(left>right) return;
        if(left==0&&right==0)  
            res.push_back(temp);
        else
        {
            if(left>0)
                generateDFS(left-1,right,temp+'(',res);
            if(right>0)
                generateDFS(left,right-1,temp+')',res);
        }
    }
};