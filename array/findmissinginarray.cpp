#include<bits/stdc++.h>
    using namespace std;
//     int missingNumber(vector<int>&arr,int N){
//         int hash[N+1]={0};
// for (int i = 0; i < N - 1; i++){

//         hash[arr[i]]++;
// }
//    for (int i = 1; i <= N; i++) {
//         if (hash[i] == 0) {
//             return i;
//         }
//     }
//      return -1;
//     }

 int missingNumber(vector<int>&arr,int N){
       int xor1=0,xor2=0;
       for(int i=0;i<N-1;i++){
        xor2=xor2 ^ arr[i];
        xor1=xor1 ^ (i+1);
       }
       xor1=xor1 ^ N;
       return (xor1^xor2);
    }
    int main(){
      vector<int> arr ={1,2,3,5};
            // int n = sizeof(arr) / sizeof(arr[0]);
           cout<< missingNumber(arr,5);
return 0;
}