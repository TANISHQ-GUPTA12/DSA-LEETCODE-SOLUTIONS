class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        // FIRST STEP IS TO CHECK 
        // PHLA ELEMENT DONO array ka same h ya alag h 
        vector<int>v;
        int count=0;
        if(A[0]==B[0])
        {
            count++; // same number mila to count 0->1
            v.push_back(count); // store kra lo count ko 0 index par
        }
        else
        {
            //remain count be 0 bcz dono element alg h 
            v.push_back(0);
        }
        // now bcz we have visited 0 index elements of a and b 
        // now we will store them in map
        
        unordered_map<int,int>mp;  //key,frequency
        mp[A[0]]++;
        mp[B[0]]++;
        
        //now we must traverse for index 1 to n-1
        
        for(int i=1;i<A.size();i++)
        {
            //check if they are same 
            if(A[i]==B[i])
            {
                count++;  //  for eg a[0],b[0] = 1,3 and a[1]b[1]= 1,1 toh 1 -> comes 3 times ..so common pair for both array will be only 1,1 so count+=1;
                
                v.push_back(count);
            }
            else
            {
                //agr same ni different ho tbh 
                //check kro vo map mh h ya nhi , if exist in map then we can count them as repeated 
                if(mp.find(A[i])!=mp.end())   
                {   count++; }
                if(mp.find(B[i])!=mp.end())
                {
                    count++;
                }
                  v.push_back(count);
                // add all visited elemnts in map 
                mp[A[i]]++;
                mp[B[i]]++;
            }
        }
        
      return v;
        
    }
};