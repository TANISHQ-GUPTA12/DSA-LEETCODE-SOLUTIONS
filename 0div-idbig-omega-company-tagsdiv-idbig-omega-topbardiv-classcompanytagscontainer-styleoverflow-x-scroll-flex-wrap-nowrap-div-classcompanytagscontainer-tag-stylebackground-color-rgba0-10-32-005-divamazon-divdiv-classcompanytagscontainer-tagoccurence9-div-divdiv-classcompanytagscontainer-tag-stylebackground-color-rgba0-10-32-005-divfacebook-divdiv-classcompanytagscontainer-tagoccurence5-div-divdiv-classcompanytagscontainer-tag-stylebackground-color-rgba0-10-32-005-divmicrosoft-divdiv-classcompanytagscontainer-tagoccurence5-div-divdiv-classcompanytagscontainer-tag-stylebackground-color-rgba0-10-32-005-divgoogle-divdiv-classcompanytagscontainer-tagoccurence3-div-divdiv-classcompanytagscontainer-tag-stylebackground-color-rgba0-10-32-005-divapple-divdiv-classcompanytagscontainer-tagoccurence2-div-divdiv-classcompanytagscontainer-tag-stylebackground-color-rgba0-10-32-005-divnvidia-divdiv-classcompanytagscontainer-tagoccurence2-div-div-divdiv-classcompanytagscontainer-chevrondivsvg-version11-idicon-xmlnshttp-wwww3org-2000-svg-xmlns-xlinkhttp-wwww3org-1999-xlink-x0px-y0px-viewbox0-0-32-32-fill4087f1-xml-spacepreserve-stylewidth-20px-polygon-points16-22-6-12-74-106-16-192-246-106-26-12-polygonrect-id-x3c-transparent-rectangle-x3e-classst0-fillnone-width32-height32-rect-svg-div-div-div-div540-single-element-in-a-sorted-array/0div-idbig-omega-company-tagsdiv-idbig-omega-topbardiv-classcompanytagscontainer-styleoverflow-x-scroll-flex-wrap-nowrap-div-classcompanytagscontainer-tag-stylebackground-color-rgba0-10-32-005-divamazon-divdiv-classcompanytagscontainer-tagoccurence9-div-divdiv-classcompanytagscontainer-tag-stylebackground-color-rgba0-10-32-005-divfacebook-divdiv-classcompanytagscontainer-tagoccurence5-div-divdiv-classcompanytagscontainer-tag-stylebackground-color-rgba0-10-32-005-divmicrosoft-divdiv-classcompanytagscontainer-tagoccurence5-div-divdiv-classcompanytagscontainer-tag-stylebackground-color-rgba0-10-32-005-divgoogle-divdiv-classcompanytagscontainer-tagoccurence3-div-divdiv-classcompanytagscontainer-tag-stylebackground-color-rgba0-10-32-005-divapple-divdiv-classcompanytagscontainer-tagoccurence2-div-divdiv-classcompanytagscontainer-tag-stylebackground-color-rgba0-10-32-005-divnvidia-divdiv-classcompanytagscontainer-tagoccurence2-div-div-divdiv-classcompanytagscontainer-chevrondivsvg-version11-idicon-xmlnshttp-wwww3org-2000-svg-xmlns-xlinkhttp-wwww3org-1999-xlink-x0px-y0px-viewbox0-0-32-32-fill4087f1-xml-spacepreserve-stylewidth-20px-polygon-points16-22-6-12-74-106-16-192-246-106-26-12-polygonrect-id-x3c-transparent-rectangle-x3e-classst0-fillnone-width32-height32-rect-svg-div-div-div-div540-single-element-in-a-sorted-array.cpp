class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        map<int,int> mapping;
        for(auto c:nums){
            mapping[c]++;
        }
        for(int i = 0; i < nums.size();i++){
            if(mapping[nums[i]] == 1){
                return nums[i];
            }
        }
        return -1;
    }
};