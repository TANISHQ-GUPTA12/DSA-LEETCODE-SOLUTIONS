class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;
        int flag=0;
        int count=0;
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
        }
       for(auto it:mp)
        {
            if(it.second%2==0)
            {
                count+= it.second;
            }
           else
           {
               if(flag==0)
               {
                   count+=it.second;
                   flag=1;
               }
               else
               {
                   count+=it.second-1;
               }
           }
        }
        return count;
    }
};