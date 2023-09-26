class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
       vector<int>v; //to display o/p;
        
        //we will update array by doing XOR OF EACH ELEMENT 
        
        for(int i=1;i<arr.size();i++)
        {
            arr[i]=arr[i]^arr[i-1];
        }
        //update all elemnts against their xor values from 0 to arr[i];
        
        //now 
        //check at each queries
        int low,end=0;
        for(int i=0;i<queries.size();i++)
        {
            //big doubt is how to take queries
            
            //WE WILL TAKE VALUES IN FORM OF A TABLE LIKE 2D ARRAY [I][J] FORM
            //FIRST QUERY->([0][0],[0][1])
            //SECOND QUERY->([1]]0] ,[1][1])
        //AND SO ON.....
            
        //DECLARE QUERY INDEX ;
            int low=queries[i][0];
            int end=queries[i][1];
            //  ese smjho'
                   // 0 1
                   // 1 2
                   // 0 3
                   // 3 3 
            //isme column fix h -> 0 and 1 
            //row change hogi to we used i ;
            
            if(low==0)
            {
                v.push_back(arr[end]); //bcz we have already stored the xor till that number
                
            } 
            else
            {
           
                v.push_back( arr[low-1]^arr[end]);
                //now doubt aayega ki 
                //low-1 ku likha h bhai 
                
                //vo isliye likha h kuki 
                // jbh mujhe bas  index=1,2 k liye xor chhye
                //to aayega toh prefix sum jese he like  index0^index1^index2 
                //but meko toh bas 1,2 ka chhye
                //to remove krne k liye extra 
                //i will store the extra index element by doing 
                // element jo htana h (xor) total .
                // 1^ (1^2^3)= 1-1 same h to xor mh remove ho jayengh 
                // 2^3 bachega bas
            
        
            }
    }
        return v;
    }
};

//I HAVE PUT LOT OF EFFORT TO EXPLAIN
//IF STILL U HAVE DOUBT PLEASE COMMENT BACK
// I M HIGHLY ACTIVE ON LC ; FEEL FREE TO ASK .