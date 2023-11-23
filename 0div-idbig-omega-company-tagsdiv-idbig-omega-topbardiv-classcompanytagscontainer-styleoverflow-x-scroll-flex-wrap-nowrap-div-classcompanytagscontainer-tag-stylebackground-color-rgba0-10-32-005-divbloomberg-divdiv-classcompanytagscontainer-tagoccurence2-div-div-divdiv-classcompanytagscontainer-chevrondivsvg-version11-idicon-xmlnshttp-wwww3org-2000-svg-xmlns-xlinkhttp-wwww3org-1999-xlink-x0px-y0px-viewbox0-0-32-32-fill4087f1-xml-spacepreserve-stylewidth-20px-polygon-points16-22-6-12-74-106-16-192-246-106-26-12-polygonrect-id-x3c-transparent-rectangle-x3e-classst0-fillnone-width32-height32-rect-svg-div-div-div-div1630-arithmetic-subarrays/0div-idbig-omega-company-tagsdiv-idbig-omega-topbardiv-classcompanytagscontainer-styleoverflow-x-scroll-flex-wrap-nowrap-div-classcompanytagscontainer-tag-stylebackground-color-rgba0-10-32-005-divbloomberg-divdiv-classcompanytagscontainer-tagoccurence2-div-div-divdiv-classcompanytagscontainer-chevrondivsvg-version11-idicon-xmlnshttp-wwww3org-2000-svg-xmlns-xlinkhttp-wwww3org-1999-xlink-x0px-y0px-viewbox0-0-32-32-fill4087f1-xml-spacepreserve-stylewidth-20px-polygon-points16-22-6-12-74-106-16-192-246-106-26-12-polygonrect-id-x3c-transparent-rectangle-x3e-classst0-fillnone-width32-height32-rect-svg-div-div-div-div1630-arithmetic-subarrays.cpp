class Solution {
private:
    bool isArithmetic(vector<int>&nums, int s, int e){
        vector<int>temp(nums.begin()+s, nums.begin()+e+1);
        sort(temp.begin(), temp.end());
        int d = temp[1] - temp[0];
        int n = temp.size();
        for(int i=1; i<n; i++){
            if(temp[i]-temp[i-1]!=d) return false;
        }
        return true;
    }
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>ans;
        int m = l.size();
        for(int i=0; i<m; i++){
            if(isArithmetic(nums, l[i], r[i])){
                ans.push_back(true);
            }else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};