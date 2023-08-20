#include<bits/stdc++.h>
    using namespace std;
   void rotatebyone(int* arr,int n){
        
         vector<int>temp;
         for(int i=1;i<n;i++){
            temp.push_back(arr[i]);
         }
         temp.push_back(arr[0]);
           for(int i=0;i<n;i++){
        cout <<" "<<temp[i];
    }
    }

    //optimal code
       void rotatebyone2(int* arr,int n){
        
         int temp;
         temp=arr[0];
         for(int i=0;i<n;i++){
            arr[i]=arr[i+1];
         }
      arr[n-1]=temp;
           for(int i=0;i<n;i++){
        cout <<" "<<arr[i];
    }
    }
    int main(){
     int arr[] ={1,2,3,4,5};
            int n = sizeof(arr) / sizeof(arr[0]);
            rotatebyone2(arr,n);
return 0;
}