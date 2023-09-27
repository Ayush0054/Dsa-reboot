#include<bits/stdc++.h>
    using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
            int col0 = 1;
            int n = matrix.size();
    int m = matrix[0].size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0) {
              
                matrix[i][0] = 0;

                
                if (j != 0)
                    matrix[0][j] = 0;
                else
                    col0 = 0;
            }
        }
    }

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if (matrix[i][j] != 0) {
              
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }
    }


    if (matrix[0][0] == 0) {
        for (int j = 0; j < m; j++) {
            matrix[0][j] = 0;
        }
    }
    if (col0 == 0) {
        for (int i = 0; i < n; i++) {
            matrix[i][0] = 0;
        }
    }
    }
};
//--------------------------------------------------------------
//better approach
// class Solution {
// public:
//     void setZeroes(vector<vector<int>>& matrix) {
//  int n = matrix.size();
//     int m = matrix[0].size();
//          vector<int> col(matrix[0].size(), 0);
//     vector<int> row(matrix.size(), 0);
//             for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             if (matrix[i][j] == 0) {
//                 row[i] = 1;          
//                 col[j] = 1;
//             }
//         }
//     }
//         for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             if (row[i] || col[j]) {
//                 matrix[i][j] = 0;
//             }
//         }
//     }

//     }
// };
//--------------------------------------------------------
//failed approacch
// class Solution {
// public:
// void markRow(int i,vector<vector<int>>& matrix){
//   for(int j=0;j<matrix[0].size();j++){
//       if(matrix[i][j]!=0){
//           matrix[i][j]=INT_MAX;
//       }
//   }
// }
// void markCol(int j,vector<vector<int>>& matrix){
//   for(int i=0;i<matrix.size();i++){
//       if(matrix[i][j]!=0){
//           matrix[i][j]=INT_MAX;
//       }
//   }
// }
//     void setZeroes(vector<vector<int>>& matrix) {
//         for(int i=0;i<matrix.size();i++){
//             for(int j=0;j<matrix[0].size();j++){
//                 if(matrix[i][j]==0){
//                     markRow(i,matrix);
//                     markCol(j,matrix);
//                 }
//             }
//         }
//            for(int i=0;i<matrix.size();i++){
//             for(int j=0;j<matrix[0].size();j++){
//                 if(matrix[i][j]==INT_MAX){
//                     matrix[i][j]=0;
//                 }
//             }
//         }
        
//     }
// };
    
    int main(){
    
return 0;
}