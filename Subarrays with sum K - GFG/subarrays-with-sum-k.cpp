//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int findSubArraySum(int Arr[], int N, int k)
    {
        unordered_map<int,int>mp;
        //prefixsum, freq;
        int sum=0;
        int cnt=0;
        for(int i=0;i<N;i++)
        {
            sum+=Arr[i];
            if(sum==k)
            {
                cnt++;
            }
            if(mp.find((sum-k))!=mp.end())
            {
                cnt+=mp[(sum-k)];
            }
            // if(mp.find((sum+k))!=mp.end())
            // { 
            //     cnt+=mp[(sum+k)];
                
            // }
            mp[sum]++;
        }
        return cnt;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int Arr[N];
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.findSubArraySum(Arr, N, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends