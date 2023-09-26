//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        vector<long long >prefixsum(n+1,0);
        prefixsum[0]=0;
        for(int i=1;i<=n;i++)
        {
            prefixsum[i]= prefixsum[i-1]+ A[i-1];
        }
        unordered_map<int,int >mp;
        int larg=0;
        for(int i=1;i<=n;i++)
        {   
            if(prefixsum[i]==0)
            {
                larg=max(larg,i);
            }
            if(mp.find(prefixsum[i]) == mp.end())
            {
                mp[prefixsum[i]]=i;
            }
            else
            {
                int d=0;
                d=i-mp[prefixsum[i]];
                larg=max(d,larg);
            }
        }
        return larg;
    }
};
// class Solution {
// public:
//     int maxLen(vector<int>& A, int n) {   
//         vector<long long> prefixsum(n + 1, 0);
//         prefixsum[0] = 0;
//         for (int i = 1; i <= n; i++) {
//             prefixsum[i] = prefixsum[i - 1] + A[i - 1];
//         }
//         if(prefixsum[n]==0)
//         {
//             return n;
//         }
//         unordered_map<long long, int> mp;
//         int larg = 0;
//         for (int i = 1; i <= n; i++) {
            
//              if(prefixsum[i]==0)
//         {
//             larg=max(larg,i);
//         }
//             if (mp.find(prefixsum[i]) != mp.end()) {
//                 int d = i - mp[prefixsum[i]];
//                 larg = max(d, larg);
//             } else {
//                 mp[prefixsum[i]] = i;
//             }
//         }
//         return larg;
//     }
// };



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends