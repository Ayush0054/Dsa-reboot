#include<bits/stdc++.h>
    using namespace std;
    void selection(int arr[],int size){
        for(int i=0;i<size-1;i++){
            int min =i;
            for(int j=i+1;j<size;j++){
                if(arr[min]>arr[j]){
                    min=j;
                }
            }
            swap(arr[i],arr[min]);
        }
    }
    int main(){
    int arr[5] ={43,32,1,4,0};
      selection(arr,5);
    for(int i=0;i<5;i++){
        cout <<" "<<arr[i];
    }
return 0;
}