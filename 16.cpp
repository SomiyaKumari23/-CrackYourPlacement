class Solution {
public:
    bool dfs(int i,int j,int k,vector<vector<char>>&board,string word){
        if(i<0 || i>=board.size()|| j<0|| j>=board[0].size()|| word[k]!=board[i][j] || k>=word.size()||k<0)
        return 0;
        if(k==word.size()-1)
        return 1;
        char value=board[i][j];
        board[i][j]='.';
        int a1=dfs(i+1,j,k+1,board,word);
        int a2=dfs(i-1,j,k+1,board,word);
        int a3=dfs(i,j-1,k+1,board,word);
        int a4=dfs(i,j+1,k+1,board,word);
        board[i][j]=value;
        return a1||a2||a3||a4;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size(),m=board[0].size(),k=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(dfs(i,j,k,board,word))
                return 1;
            }
        }
        return 0;
    }
};