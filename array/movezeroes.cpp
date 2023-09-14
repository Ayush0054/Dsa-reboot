#include<bits/stdc++.h>
    using namespace std;
    void movezeroes(int* arr,int n){
      vector<int>temp;
        for(int i=0 ;i<n ;i++){
            if( arr[i]!=0){
        temp.push_back(arr[i]);
       
            }
        }
            for(int i=0 ;i<n ;i++){
            if( arr[i]==0){
        temp.push_back(arr[i]);
     
            }
        }
     for(int i=0;i<n;i++){
        cout <<" "<<temp[i];
    }
    }
    int main(){
        int arr[] ={1,0,2,3,0,4,5,0,0};
            int n = sizeof(arr) / sizeof(arr[0]);
            movezeroes(arr,n);
return 0;
}