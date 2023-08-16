#include<bits/stdc++.h>
    using namespace std;
        void bubble(int arr[],int n){
     for(int i=1;i<n;i++){
            for(int j=0;j<n-i;j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                }
            }
}
    }
        int maxel(int *arr,int n){
        // int maxi = INT_MIN;
      bubble(arr,n);
        
        // for(int i=0;i<n;i++){
        //     if(arr[i]>maxi){
        //         maxi=arr[i];
        //     }
        // }
        return arr[n-2];
    }

    //better approach
    int secondmax(int*arr,int n){
        int maxi = INT_MIN;
       int maxi2= INT_MIN;
          for(int i=0;i<n;i++){
            if(arr[i]>maxi){
                maxi=arr[i];
            }
        }
          for(int i=0;i<n;i++){
            if(arr[i]>maxi2 &&arr[i]!=maxi){
                maxi2=arr[i];
            }
        }
        return maxi2;

    }
    int main(){
              int arr[] ={43,32,1,4,0};
            int n = sizeof(arr) / sizeof(arr[0]);
            cout<<secondmax(arr,n)<<endl;
return 0;
}