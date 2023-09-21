#include<bits/stdc++.h>
    using namespace std;
    
    // bruteforce
//  void leader(vector<int>&arr){
// vector<int>ans;
// int n=arr.size();
// for(int i=0;i<n;i++){
//     int leader=true;
//     for(int j=i+1;j<n;j++){
//         if(arr[j]>arr[i]){
//             leader=false;
//             break;
//         }
//     }
//     if(leader==true) ans.push_back(arr[i]);
// }
// for(int i=0;i<ans.size();i++){
//     cout<<ans[i]<<" "<<endl;
// }
//     }

// optimal
//tc->n sc->n
 void leader(vector<int>&arr){
vector<int>ans;
int n=arr.size();
int maxi=INT_MIN;
for(int i=n-1;i>=0;i--){
    if(arr[i]>maxi){
        ans.push_back(arr[i]);
    }
    maxi=max(maxi,arr[i]);
}
reverse(ans.begin(),ans.end());
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" "<<endl;
}
    }
    int main(){
    vector<int> arr ={4, 7, 1, 0};
    leader(arr);
return 0;
}