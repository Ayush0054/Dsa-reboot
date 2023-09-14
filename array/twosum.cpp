#include<bits/stdc++.h>
    using namespace std;
   vector<int> twosum(vector<int>&arr,int target){
        sort(arr.begin(),arr.end());
        vector<int> ans;
        int left =0; int right = arr.size()-1;
        while(left<right){
            int sum=arr[left]+arr[right];
            if(sum==target){
                return {left,right};
            }
            else if(sum<target){
                left++;
            }
            else{
                right--;
            }
        }
        return {-1,-1};
    }
    int main(){

     vector<int> arr = {2,6,5,8,11}; 
    int target = 14;
 vector<int> ans =twosum(arr,target);
 cout<<ans[0]<<" "<<ans[1]<<endl;
return 0;
}