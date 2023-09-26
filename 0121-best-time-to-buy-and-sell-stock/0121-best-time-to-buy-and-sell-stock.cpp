class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0];
        
        int ind1=0;
        int ind2=0;
        for(int i=0;i<prices.size();i++)
        {
               mini=min(mini,prices[i]); 
            ind2=max(ind2,prices[i]-mini);
        }
        return ind2;
    }
};