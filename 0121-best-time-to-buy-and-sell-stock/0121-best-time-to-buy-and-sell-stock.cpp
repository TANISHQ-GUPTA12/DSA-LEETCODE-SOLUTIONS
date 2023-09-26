class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0];
        
        int ind1=0;
        int ind2=0;
        for(int i=0;i<prices.size();i++)
        {
           if(prices[i]<min)
           {
               min=prices[i];
           }
            ind1= prices[i]-min;
            ind2=max(ind2,ind1);
        }
        return ind2;
    }
};