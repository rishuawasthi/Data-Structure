class Solution {


public:
    bool isSafe(int col,int row,vector <string>& board,int& n){
        int r=row;
        int c=col;
        while(col>=0 && row>=0){
            if(board[row][col]=='Q')
            return false;
            row--;
            col--;
        }

        row=r;
        col=c;

        while(col>=0){
            if(board[row][col]=='Q')
            return false;
            col--;
        }

        col=c;
        
         while(col>=0 && row<n){
            if(board[row][col]=='Q')
            return false;
            row++;
            col--;
        }

        return true;
    }

    void checkQueens(int col,vector<vector<string>>& ans,vector <string>& board,int& n){
        if(col==n){
            ans.push_back(board);
            return;
        }

        for(int row=0;row<n;row++){
            if(isSafe(col,row,board,n)){
                board[row][col]='Q';
                checkQueens(col+1,ans,board,n);
                board[row][col]='.';
            }
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        vector <vector<string>> ans;
        vector <string> board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        checkQueens(0,ans,board,n);
        return ans;
    }
};