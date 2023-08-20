class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int ,int>mpp; 
        //store the key value as-> sum,index;

        //now the trick is we will put 0-> -1  &&  1-> 1 
        // so if we get sum=0; it means we have equal number of 0's && 1's.

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
            nums[i]=-1;
            }
        } 

        //after replacing 0-> -1 
        // we check  for longest subarray with sum->0
         int sum=0;
         int diff,max2=0;
      for(int i=0;i<nums.size();i++)
      {
           sum+=nums[i];
           //do prefix sum

           if(sum==0)
           {
               max2=max(max2,i+1);
               //agr sum->0 aa jaye then
               //  max2 longest subarray k size ko i+1 krdengh bcz i is starting from index 0 so we store i+1-> size=1 
           }
           if(mpp.find(sum)==mpp.end())
           {    // sum not in map 
           // store first occurence index of that sum
            mpp[sum]=i;
           }
           else
           {    // find difference between the first saw index of that sum and present index
             diff= i- mpp[sum];
             // check for maximum length 
             max2=max( max2, diff);
           }
      }
      //return max length 
      return max2;
    }
};

// only click in this q is 0 ko -1 krdo 
// THEN IT WILL BECOME SAME Q AS FIND LONGEST SUBARRAY WITH SUM 0
