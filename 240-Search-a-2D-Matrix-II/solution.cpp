class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int nRow,nCol;
        nRow = matrix.size();
        if(!nRow) return false;
        nCol = matrix[0].size();
        int iRow = 0, iCol = nCol - 1;
        while(iRow < nRow && iCol >= 0) {
            if(matrix[iRow][iCol] == target)
                return true;
            else if(matrix[iRow][iCol] > target)
                iCol--;
            else
                iRow++;
        }
        return false;
    }
};