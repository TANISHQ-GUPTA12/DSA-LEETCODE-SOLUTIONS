//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   unordered_map<int,int>mp;
      int sum=0;
      int max1=0;
      for(int i=0;i<A.size();i++)
      { 
        sum+=A[i];
        if(sum==0)
        {
            max1=max(max1,i+1);
        }
        else if(mp.find(sum)!=mp.end())
        {
            int d= i-mp[sum];
            max1=max(max1,d);
        }
        else
        {
            mp[sum]=i;;
        }
        
      }
        return max1;
    }
};


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