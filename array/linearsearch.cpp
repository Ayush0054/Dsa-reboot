#include<bits/stdc++.h>
    using namespace std;
    bool srch(int* arr,int n,int key){
        for(int i=0;i<n;i++){
           if(key==arr[i]){
            return true;
           }
        }
        return false;
    }
    int main(){
            int arr[] ={1,0,2,3,0,4,5};
            int n = sizeof(arr) / sizeof(arr[0]);
            cout<<srch(arr,n,10);
return 0;
}