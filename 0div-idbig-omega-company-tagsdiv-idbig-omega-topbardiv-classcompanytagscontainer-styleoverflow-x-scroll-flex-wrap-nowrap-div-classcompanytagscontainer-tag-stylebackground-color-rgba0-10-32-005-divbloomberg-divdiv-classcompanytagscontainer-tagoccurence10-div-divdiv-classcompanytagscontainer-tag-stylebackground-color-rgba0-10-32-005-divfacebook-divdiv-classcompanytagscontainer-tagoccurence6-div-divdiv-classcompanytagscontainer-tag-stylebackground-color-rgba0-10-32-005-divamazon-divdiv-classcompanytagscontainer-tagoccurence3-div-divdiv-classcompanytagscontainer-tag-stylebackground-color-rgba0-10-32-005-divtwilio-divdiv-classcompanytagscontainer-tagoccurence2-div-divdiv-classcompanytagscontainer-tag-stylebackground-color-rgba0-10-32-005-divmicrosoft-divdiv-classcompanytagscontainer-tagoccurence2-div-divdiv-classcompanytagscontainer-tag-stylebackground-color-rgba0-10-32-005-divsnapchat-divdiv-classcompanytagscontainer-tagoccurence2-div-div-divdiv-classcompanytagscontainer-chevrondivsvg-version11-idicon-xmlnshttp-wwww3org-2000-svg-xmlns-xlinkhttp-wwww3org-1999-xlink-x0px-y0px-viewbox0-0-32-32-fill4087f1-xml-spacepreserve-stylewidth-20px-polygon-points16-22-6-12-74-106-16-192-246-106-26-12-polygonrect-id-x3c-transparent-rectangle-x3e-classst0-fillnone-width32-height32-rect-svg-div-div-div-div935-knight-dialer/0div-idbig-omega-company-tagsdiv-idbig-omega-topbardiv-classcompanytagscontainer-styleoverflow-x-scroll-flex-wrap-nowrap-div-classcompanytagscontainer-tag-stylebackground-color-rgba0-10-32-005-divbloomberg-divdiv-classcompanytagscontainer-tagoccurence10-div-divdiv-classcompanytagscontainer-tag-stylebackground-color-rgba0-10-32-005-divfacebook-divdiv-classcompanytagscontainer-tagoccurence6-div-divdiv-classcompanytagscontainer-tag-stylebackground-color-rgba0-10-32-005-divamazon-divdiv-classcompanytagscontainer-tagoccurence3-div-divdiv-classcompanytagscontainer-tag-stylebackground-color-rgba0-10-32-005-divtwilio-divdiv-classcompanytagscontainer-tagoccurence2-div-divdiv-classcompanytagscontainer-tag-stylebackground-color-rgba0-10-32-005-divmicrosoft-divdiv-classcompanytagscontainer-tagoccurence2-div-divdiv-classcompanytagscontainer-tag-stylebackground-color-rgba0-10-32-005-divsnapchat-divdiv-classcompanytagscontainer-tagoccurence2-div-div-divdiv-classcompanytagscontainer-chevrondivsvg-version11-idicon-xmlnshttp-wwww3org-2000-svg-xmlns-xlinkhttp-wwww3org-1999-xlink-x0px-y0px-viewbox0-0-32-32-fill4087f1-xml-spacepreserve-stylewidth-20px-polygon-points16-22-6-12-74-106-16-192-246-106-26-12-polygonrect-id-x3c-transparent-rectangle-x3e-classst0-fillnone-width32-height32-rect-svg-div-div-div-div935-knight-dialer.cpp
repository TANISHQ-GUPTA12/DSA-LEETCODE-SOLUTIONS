class Solution {
public:
    const int mod=1e9+7;
    int rec(int btn,int step,vector<int>graph[], vector<vector<int>>&dp)
    {
        if(step==0)
        {
            return 1;
        }
        if(dp[btn][step]!=-1)
        {
            return dp[btn][step];
        }
        int cnt=0;
        for(auto itr:graph[btn])
        {
            cnt=(cnt+rec(itr,step-1,graph,dp))%mod;
        }
        return dp[btn][step]=cnt;
    }
    int knightDialer(int n) {
        if(n==1)
        {
            return 10;
        }
        vector<int>graph[10];
        graph[0]={4,6};
        graph[1]={6,8};
        graph[2]={7,9};
        graph[3]={4,8};
        graph[4]={0,3,9};
        graph[5]={};
        graph[6]={0,1,7};
        graph[7]={2,6};
        graph[8]={1,3};
        graph[9]={2,4};
        
        int cnt=0;
        vector<vector<int>>dp(10,vector<int>(n+1,-1));
        for(int i=0;i<=9;i++)
        {
           cnt=(cnt+rec(i,n-1,graph,dp))%mod;
        
        }
        return cnt;
        
        
    }
};