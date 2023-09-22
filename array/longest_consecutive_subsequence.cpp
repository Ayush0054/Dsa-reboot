#include<bits/stdc++.h>
    using namespace std;
    //brute force
// class Solution {
// public:
// bool linearSearch(vector<int>&nums, int num) {
//     int n = nums.size(); //size of array
//     for (int i = 0; i < n; i++) {
//         if (nums[i] == num)
//             return true;
//     }
//     return false;
// }
//     int longestConsecutive(vector<int>& nums) {
//         if(nums.size()==0){
//             return 0;
//         }
//         int longest=1;
//         for(int i=0;i<nums.size();i++){
//             int x = nums[i];
//             int cnt=1;
//             while(linearSearch(nums,x+1)==true){
//                 x++;
//                 cnt++;
//             }
//             longest=max(longest,cnt);
//         }
//         return longest;
//     }
// };
                   //better
// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         if(nums.size()==0){
//             return 0;
//         }
//         int longest=1;
//         int lastSmaller=INT_MIN;
//         int cnt=0;
//         sort(nums.begin(),nums.end());
//         for(int i=0;i<nums.size();i++){
//            if(nums[i]-1==lastSmaller){
//                cnt++;
//                lastSmaller=nums[i];
//            }
//            else if(nums[i]!=lastSmaller){
//                cnt=1;
//                lastSmaller=nums[i];
//            }
//             longest=max(longest,cnt);
//         }
//         return longest;
//     }
// };

//optimal
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        int longest=1;
        unordered_set<int>st;

        for(int i=0;i<nums.size();i++){
          st.insert(nums[i]);
        }
        for(auto it:st){
            if(st.find(it-1)==st.end()){
                int cnt=1;
                int x=it;
                while(st.find(x+1)!=st.end()){
                    x=x+1;
                    cnt++;
                }
                longest=max(longest,cnt);
            }
        }
        return longest;
    }
};
    int main(){
    
return 0;
}