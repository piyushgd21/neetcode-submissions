class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int c_start = 0;
        int c_end = matrix[0].size()-1;
        int row = 0;
        while(row < matrix.size()){
            if(target > matrix[row][c_end]){
                row++;
            }
            else if(target <= matrix[row][c_end] and target >= matrix[row][c_start]){
                int low = c_start;
                int high = c_end;
                while(low <= high){
                    int mid = (low + high)/2;
                    if(matrix[row][mid] == target){
                        return true;
                    }
                    else if(matrix[row][mid] > target){
                        high = mid - 1;
                    }
                    else{
                        low = mid + 1;
                    }
                }
                return false;
            }
            else{
                return false;
            }

        }
        return false;
        
    }
};
