#include<bits/stdc++.h>
    using namespace std;
    void merge(int *arr,int s, int e){
        int mid = (s+e)/2;
        int len1 = mid - s+1;
        int len2 = e - mid;
        int *arr1 = new int[len1];
        int *arr2 = new int[len2];
        int k =s;
        for(int i=0;i<len1;i++){
            arr1[i]=arr[k++];
        }
        k= mid+1;
        for(int i=0;i<len2;i++){
            arr2[i]=arr[k++];
        }
        int index1 = 0;
        int index2 = 0;
        k = s;
      while(index1 < len1 && index2 < len2){
        if(arr1[index1] < arr2[index2]){
            arr[k++] = arr1[index1++];
        }else{
            arr[k++]=arr2[index2++];
        }
      }
      while(index1 < len1){
        arr[k++]=arr1[index1++];
      }
      while(index2 < len2){
        arr[k++]=arr2[index2++];
      }
      delete[] arr1;
      delete[] arr2;

    }
    void mergesort(int *arr,int s, int e){
        if(s>= e){
            return;
        }
        int mid = (s+e)/2;
        mergesort(arr,s,mid);
        mergesort(arr,mid+1,e);
        merge(arr,s,e);
    }
    int main(){
            int arr[5] ={43,32,1,4,0};
     mergesort(arr,0,4);
    for(int i=0;i<5;i++){
        cout <<" "<<arr[i];
    }
return 0;
}
// tc -> nlogn