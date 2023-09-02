class Solution {
public:
    int strStr(string str1, string str2) {
        
        int n1 = str1.size();
        
        int n2 = str2.size();
        
        if(n2 == 0)
        {
            return 0;
        }
        
        if(str1.find(str2) == string :: npos)
        {
            return -1;
        }
        else
            return str1.find(str2);
    }
};