class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=0;
        for(int i=0;i<prices.size();i++){
            for(int j=i+1;j<prices.size();j++){
                if(prices[j]>prices[i]){

                int prf=prices[j]-prices[i];
                maxi=max(maxi,prf);
                }
            }
        }
        return maxi; 
    }
};

optimal
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=0;
        int mini=INT_MAX;
        for(int i=0;i<prices.size();i++){
          mini=min(prices[i],mini);
          maxi=max(prices[i]-mini,maxi);
        }
        return maxi;
    }
};