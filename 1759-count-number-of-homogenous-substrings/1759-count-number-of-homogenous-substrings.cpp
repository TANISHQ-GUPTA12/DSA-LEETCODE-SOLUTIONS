class Solution {
public:
  int countHomogenous(string s) {
    long long ans = 1, count = 1, m = 1e9 + 7;
    for(int i = 1; i < s.size(); i++){
        if(s[i] == s[i-1])
        { count += 1; 
        ans+= count;
        }
        else
        {
            count=1;
            ans+=count;
        }
        
    }
    return ans%m;
}
};