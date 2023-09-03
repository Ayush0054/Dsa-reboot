#include<bits/stdc++.h>
    using namespace std;
    void unions(int *arr1,int n,int *arr2,int m){
        vector<int>ans;
       map<int,int>mp;
       for(int i=0;i<n;i++){
        mp[arr1[i]]++;
       }
         for(int i=0;i<m;i++){
        mp[arr2[i]]++;
       }
       for(auto & it:mp){
           ans.push_back(it.first);
       }

                   for(int i=0;i<ans.size();i++){
        cout <<" "<<ans[i];
    }
    }
        int main(){
            int arr1[] = {1,2,3,4,5};
            int arr2[] = {2,3,4,4,5};
            int n = sizeof(arr1) / sizeof(arr1[0]);
            int m = sizeof(arr2) / sizeof(arr2[0]);
            unions(arr1,n,arr2,m);
return 0;
}