class Solution {
public:
    bool solve(vector<vector<char>>&board, string word, int r, int c, int idx){
        if(word.size()==idx)return true;
        if(r<0 || r>=board.size() || c<0 || c>=board[0].size())return false;
        if(board[r][c]!=word[idx])return false;
        char ch= board[r][c];
        board[r][c]='#';
        int res= solve(board, word, r, c-1, idx+1)|| solve(board, word, r, c+1, idx+1)|| solve(board, word, r-1, c, idx+1)|| solve(board, word, r+1, c, idx+1);
        board[r][c]=ch;
        return res;
    }
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(solve(board,word, i,j,0))return true;
            }
        }
        return false;
    }
};
