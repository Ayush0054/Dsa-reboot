  #include<bits/stdc++.h>
    using namespace std;
    void rotatebyk( int* arr, int n,int k){
       if (n == 0)
    return;
      k=k%n;
        if (k > n)
    return;
      int temp[k];
      int i=n-1;
   for (int i = n - k; i < n; i++)
  {
    temp[i - n + k] = arr[i];
  }
      for(int i=n-k-1;i>=0;i--){
        arr[i+k]=arr[i];
      }
      for(int i=0;i<k;i++){
        arr[i]=temp[i];
      }

        for(int i=0;i<n;i++){
        cout <<" "<<arr[i];
    }
    }
    int main(){
    int arr[] ={1,2,3,4,5};
            int n = sizeof(arr) / sizeof(arr[0]);
            rotatebyk(arr,n,2);
          
return 0;
}
