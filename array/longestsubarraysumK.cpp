// Longest Subarray with given Sum K(Positives)
#include<bits/stdc++.h>
    using namespace std;
    //tc->n3
//     int longSub(vector<int>&arr,long long k){
//          int len=0;
//          for(int i=0;i<arr.size();i++){
//             for(int j=0;j<arr.size();j++){
//                 int s=0;
//                 for(int K=0;K<=j;K++){
//                     s+=arr[K];
//                 }
//      if(s==k){
//         len=max(len,j-i+1);
//      }
//             }
//          }
//  return len;
    
//     }

//better approach hashing
//  int longSub(vector<int>&arr,long long k){
//     map<long long,int>preSumMap;
//          long long sum =0;
//          int maxlen=0;
//          for(int i=0;i<arr.size();i++){
//             sum += arr[i];
//             if(sum==k){
//                 maxlen=max(maxlen,i+1);
//             }
//             long long rem=sum-k;
//             if(preSumMap.find(rem) != preSumMap.end()){
//                 int len = i- preSumMap[rem];
//                 maxlen=max(maxlen,len);
//             }
//             if(preSumMap.find(sum) == preSumMap.end()){
//                 preSumMap[sum]=i;
//             }
//          }
//          return maxlen;
    
//     }

//best approach  two pointer

 int longSub(vector<int>&arr,long long k){
        int left =0;
        int right =0;
        long long sum = arr[0];
        int maxlen=0;
        int n=arr.size();
        while(right < n){
            while(left <= right && sum > k){
                sum -= arr[left];
                left++;
            }
            if(sum==k){
                maxlen=max(maxlen,right-left+1);
            }
            right++;
            if(right<n){
                sum+=arr[right];
            }

        }
        return maxlen;
    }
    int main(){
    vector<int> arr ={2,3,5,1,9};
    cout<< longSub(arr,10);
return 0;
}