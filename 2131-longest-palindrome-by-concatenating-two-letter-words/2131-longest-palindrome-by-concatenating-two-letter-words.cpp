class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        //store all in map
        bool flag=0;
        unordered_map<string,int>mp;
        for(int i=0;i<words.size();i++)
        {
            mp[words[i]]++;
        }
        int count=0;
   
        
        
        for(int i=0;i<words.size();i++)
        {
    string temp = words[i];
            reverse(temp.begin(), temp.end());
            if(temp==words[i])
            {
                if(mp[words[i]]%2==0)
                { //even
                   count+=2*mp[words[i]]; 
                }
                else
                {
                    if(flag==0)
                    {
                        count+=2*mp[words[i]];
                        flag=1;
                    }
                    else
                    {
                        count+=2*(mp[words[i]]-1);
                    }
                }
            }
            else
               
                {
                    int mini=min(mp[temp],mp[words[i]]);
                    count+=4*mini;
                }
           mp.erase(words[i]);
             mp.erase(temp);
            
        }
        return count;
    }
};