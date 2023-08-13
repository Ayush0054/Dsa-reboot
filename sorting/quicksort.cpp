#include<bits/stdc++.h>
    using namespace std;
    int partition(int arr[],int l,int h){
        int i=l;
        int j=h;
        int pivot=arr[l];
        while(i<j){
            while(arr[i]<=pivot){
                i++;
            }
            while(arr[j]>pivot){
                j--;
            }
            if(i<j){
                swap(arr[i],arr[j]);
            }
        }
        swap(arr[l],arr[j]);
        return j;
    }
    void quicksort(int arr[], int l,int h){
        if(l<h){
            int j = partition(arr,l,h);
            quicksort(arr,l,j);
            quicksort(arr,j+1,h);
        }
    }
    int main(){
    int arr[] ={43,32,1,4,0};
    int n = sizeof(arr)/sizeof(arr[0]);
     quicksort(arr,0,n-1);
    for(int i=0;i<5;i++){
        cout <<" "<<arr[i];
    }
    
return 0;
}