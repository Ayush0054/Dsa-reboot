#include<bits/stdc++.h>
    using namespace std;
    int maxel(int *arr,int n){
        int maxi = INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i]>maxi){
                maxi=arr[i];
            }
        }
        return maxi;
    }
    int main(){
           int arr[] ={43,32,1,4,0};
            int n = sizeof(arr) / sizeof(arr[0]);
     cout<< maxel(arr,n);
return 0;
}