#include<bits/stdc++.h>
    using namespace std;
    int majorityElement(vector<int>& nums) {
    int el;
    int cnt=0;
    for(int i=0;i<nums.size();i++){
        if(cnt==0){
            cnt=1;
            el=nums[i];
        }
        else if(el==nums[i]){
            cnt++;
        }else{
            cnt--;
        }
    }
    int cnt1;
    for(int i=0;i<nums.size();i++){
        if(el==nums.size()){
            cnt1++;
        }
        
    }
    if(cnt1>(nums.size()/2)){
        return el;
    }
    return -1;
    }
    int main(){
    
return 0;
}