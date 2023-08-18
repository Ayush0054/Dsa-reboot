#include<bits/stdc++.h>
    using namespace std;
     void removeduplicates(int *arr,int n){
       unordered_set<int> val; 
      for(int i=0;i<n;i++){
        if(val.find(arr[i])==val.end()){

        val.insert(arr[i]);
        }
      }
     for(auto i:val){
      cout<<i<<" ";
     }

     }
    //approach 2 for sorted array
        int removeduplicates2(int *arr,int n){
      int i=0;
      for(int j=1;j<n;j++){
        if(arr[j]!=arr[i]){
          i++;
          arr[i]=arr[j];
        }
      }
      return i+1;
     }
    int main(){
      //  int arr[] ={1,2,3,4,5,3,4,5,62,3};
      int arr[] = {1,1,2,2,2,3,3};
            int n = sizeof(arr) / sizeof(arr[0]);
            // removeduplicates(arr,n);
int k = removeduplicates2(arr, n);
  cout << "The array after removing duplicate elements is " << endl;
  for (int i = 0; i < k; i++) {
    cout << arr[i] << " ";
  }
return 0;
}