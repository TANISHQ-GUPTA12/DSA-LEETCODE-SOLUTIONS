class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // ek unordered set bna lo 
        unordered_set<int> hashset;
        
        // check if array have 0 or 1 size then return size of array
        if(nums.size()==0){
            return 0;
        }
        if(nums.size()==1){
            return 1;
        }
         
        // array ke sare elemnt set me dal do
        for(int num: nums){
            hashset.insert(num);
        }
        
        int longestStreak=0;
        
        for(int num: nums){
            if(hashset.find(num-1) == hashset.end()){
                int currNum=num;
                int currStreak=1;
                
                while(hashset.find(currNum+1)!= hashset.end()){
                    currNum+=1;
                    currStreak+=1;
                }
                
                longestStreak=max(longestStreak,currStreak);
            }
        }
        
        return longestStreak;
    }
};