class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr)
    {
        sort(arr.begin(),arr.end());
        int temp = 0 ;
        for(int i = 0 ; i < arr.size(); i++)
        {
            arr[i] = min(temp + 1 , arr[i]);  
            temp = arr[i];
        }
        
        return arr[arr.size()-1];

        
    }
};