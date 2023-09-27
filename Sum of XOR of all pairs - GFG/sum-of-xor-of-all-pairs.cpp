//{ Driver Code Starts
// An efficient C++ program to compute 
// sum of bitwise OR of all pairs
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


// class Solution{
//     public:
//     // Returns sum of bitwise OR
//     // of all pairs
//     long long int sumXOR(int arr[], int n)
//     {  long long sum=0;
//     	sort(arr,arr+n);
//     	for(int i=0;i<n;i++)
//     	{   int xorr=0;
//     	     int j=i+1;
//     	    while(j<n)
//     	    {  
//     	     sum+=arr[i]^arr[j];
    	       
//     	        j++;
//     	    }
    	    
//     	}
//     	return sum;
//     }
//};
class Solution {
public:
    long long int sumXOR(int arr[], int n) {
        long long totalSum = 0;

        for (int i = 31; i >= 0; i--) {
            int countSetBits = 0;

            for (int j = 0; j < n; j++) {
                if (arr[j] & (1 << i)) {
                    countSetBits++;
                }
            }

            totalSum += (1LL << i) * countSetBits * (n - countSetBits);
        }

        return totalSum;
    }
};

//{ Driver Code Starts.


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	 int n ;
	 cin>>n;
	 int arr[n+1];
	 for( int i=0;i<n;i++)
	    cin>>arr[i];
	 Solution ob;
	 cout<<ob.sumXOR(arr, n)<<endl;
	}	
	return 0;
}

// } Driver Code Ends