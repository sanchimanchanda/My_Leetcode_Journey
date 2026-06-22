class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        bool firstRowImpacted = false;
        bool firstColImpacted = false;
        // check first row and col impacted
        for (int col = 0; col < n; col++) {
            if (matrix[0][col] == 0) {
                firstRowImpacted = true;
            }
        }

        for (int row = 0; row < m; row++) {
            if (matrix[row][0] == 0) {
                firstColImpacted = true;
            }
        }

        // set markers
        for(int i = 1; i < m ; i++){
            for(int j = 1 ; j< n ; j++){
                if(matrix[i][j]==0){
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                }
            }
        }

        // make zeroes exlucling first row and col
        for(int i = 1; i < m ; i++){
            for(int j = 1 ; j< n ; j++){
                if(matrix[0][j] == 0 || matrix[i][0] == 0){
                    matrix[i][j] = 0;
                }
            }
        }

        //make first row and col 0 if impacted
        for(int col = 0 ; col < n ; col++){
            if(firstRowImpacted == true){
                matrix[0][col] = 0;
            }
        }

        for(int row = 0 ; row < m ; row++){
            if(firstColImpacted == true){
                matrix[row][0] = 0;
            }
        }

        
    }
};