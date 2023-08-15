#include<bits/stdc++.h>
    using namespace std;
    void insertion(int arr[],int i,int n){
        if(i==n){
            return;
        }
       
         int j=i;
         while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j],arr[j-1]);
            j--;
         }
         cout<<"i before "<<i<<endl;
         insertion(arr,i+1,n);
                 cout<<"i after "<<i<<endl;
        
    }
    int main(){
            int arr[5] ={43,32,1,4,0};
      insertion(arr,0,5);
    for(int i=0;i<5;i++){
        cout <<" "<<arr[i];
    }
return 0;
}