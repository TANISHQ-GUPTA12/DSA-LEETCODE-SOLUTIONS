// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//        sort(nums.begin(),nums.end());
//         //traverse arr
//         int cnt=1;
//         int longest=0;
//         if(nums.size()==1)
//         {
//             return 1;
//         }
//         for(int i=1;i<nums.size();i++)
//         {   
//             if(nums[i]!=nums[i-1])
//             {
//                 if(nums[i]-nums[i-1]==1)
//                 {
//                     cnt++;
//                 }
//                 else
//                 {
//                     cnt=1;
                   
//                 }
//             }
//             longest=max(cnt,longest);
           
            
//         }
       
//         return longest;
//     }
// };
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
//sort the array 
        if(nums.size()==0)
//size 0 
        return 0;
  int cnt  = 1;
  int maxi= 1;
       for(int i = 1; i<nums.size(); i++){
           if(nums[i]!=nums[i-1]){
// check if elements same or not 
               if(nums[i]-nums[i-1]==1){
                   cnt++;
// agr diff 1 h to count krlo 
               }
               else{
                   maxi= max(maxi,cnt);
                   cnt=1;
                   
               }
           }
       }
       return max(maxi,cnt);
    }
};