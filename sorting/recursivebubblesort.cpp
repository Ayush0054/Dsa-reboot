#include<bits/stdc++.h>
    using namespace std;
    void bubble(int arr[],int n){
         if(n==1){
            return;
         }
            for(int j=0;j<n-1;j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                }
            }
            bubble(arr,n-1);
         
    }
    int main(){
        int arr[] ={43,32,1,4,0};
            int n = sizeof(arr) / sizeof(arr[0]);
      bubble(arr,n);
    for(int i=0;i<n;i++){
        cout <<" "<<arr[i];
    }
return 0;
}