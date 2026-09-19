class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int col=matrix[0].size();
        int n=rows*col;
        int l=0, h=rows*col-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(matrix[mid/col][mid%col]==target){
                return true;
            }
            else if(matrix[mid/col][mid%col]<target){
                l=mid+1;
            }
            else h=mid-1;
        }
        return false;
    }
};
