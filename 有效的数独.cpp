class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int check1[9][9]={0};
        int check2[9][9]={0};
        int check3[3][3][9]={0};
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]=='.')
                    continue;
                if(check1[i][board[i][j]-49]==0)
                    check1[i][board[i][j]-49]++;
                else
                    return false;
                if(check2[board[i][j]-49][j]==0)
                    check2[board[i][j]-49][j]++;
                else
                    return false;
                
                if(check3[i/3][j/3][board[i][j]-49]==0)
                    check3[i/3][j/3][board[i][j]-49]++;
                else
                    return false;
            }
        }
        return true;
    }
};