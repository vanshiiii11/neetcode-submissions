class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        int cnt=0;
        int total=r*c;
        vector<int>arr;
        int startingrow=0;
        int startingcol=0;
        int endingrow=r-1;
        int endingcol=c-1;
        while(cnt<total){
            for(int i=startingcol;cnt<total && i<=endingcol;i++){
                arr.push_back(matrix[startingrow][i]);
                cnt++;
            }
            startingrow++;
            for(int i=startingrow; cnt<total &&i<=endingrow;i++){
                arr.push_back(matrix[i][endingcol]);
                cnt++;
            }
            endingcol--;
            for(int i=endingcol; cnt<total && i>=startingcol;i--){
                arr.push_back(matrix[endingrow][i]);
                cnt++;
            }
            endingrow--;
            for(int i=endingrow; cnt<total && i>=startingrow ; i--){
                arr.push_back(matrix[i][startingcol]);
                cnt++;
            }
            startingcol++;
        }
        return arr;
    }
};
