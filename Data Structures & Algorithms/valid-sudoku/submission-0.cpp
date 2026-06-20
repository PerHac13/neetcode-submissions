class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string>seen;
        for(int i=0;i<9;++i){
            for(int j=0;j<9;++j){
                if(board[i][j]=='.')continue;
                string tmp(1,board[i][j]);
                if(!seen.insert(tmp+"@row"+to_string(i)).second||
                    !seen.insert(tmp+"@col"+to_string(j)).second||
                    !seen.insert(tmp+"@square"+to_string(i/3)+to_string(j/3)).second)
                    return 0;
            }
        }
        return 1;
    }
};
