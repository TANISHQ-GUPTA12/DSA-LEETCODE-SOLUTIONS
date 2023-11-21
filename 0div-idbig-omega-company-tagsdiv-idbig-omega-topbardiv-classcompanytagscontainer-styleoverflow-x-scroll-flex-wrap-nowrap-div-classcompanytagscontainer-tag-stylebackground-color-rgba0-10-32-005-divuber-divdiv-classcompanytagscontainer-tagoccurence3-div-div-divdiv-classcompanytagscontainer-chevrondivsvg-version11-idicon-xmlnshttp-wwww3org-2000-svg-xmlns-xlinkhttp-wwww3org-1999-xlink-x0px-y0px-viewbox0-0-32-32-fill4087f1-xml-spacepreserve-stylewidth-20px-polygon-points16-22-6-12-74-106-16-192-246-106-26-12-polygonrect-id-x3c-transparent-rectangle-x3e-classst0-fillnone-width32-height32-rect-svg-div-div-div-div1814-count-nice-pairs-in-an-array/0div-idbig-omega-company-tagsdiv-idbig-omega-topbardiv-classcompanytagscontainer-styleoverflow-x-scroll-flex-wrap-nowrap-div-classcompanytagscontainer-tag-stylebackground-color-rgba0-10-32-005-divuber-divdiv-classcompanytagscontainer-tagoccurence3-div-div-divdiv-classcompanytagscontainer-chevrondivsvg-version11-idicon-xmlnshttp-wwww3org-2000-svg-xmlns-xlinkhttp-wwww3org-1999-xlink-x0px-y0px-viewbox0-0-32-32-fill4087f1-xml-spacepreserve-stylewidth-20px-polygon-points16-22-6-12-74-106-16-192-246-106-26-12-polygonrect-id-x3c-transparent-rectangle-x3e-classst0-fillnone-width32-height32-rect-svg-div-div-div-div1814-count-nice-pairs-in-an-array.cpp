class Solution {
public:
    int rev(int n, int res = 0){
    return n == 0?res: rev(n/10, res*10 + n%10);
}

int countNicePairs(vector<int>& nums) {
    long long ans = 0, m = 1e9+7;
    unordered_map<int, long long> freq;
    for(auto n: nums) {
        int t = n - rev(n);
        ans = (ans + freq[t])%m;
        freq[t]++;
    }
    return ans;
}
};