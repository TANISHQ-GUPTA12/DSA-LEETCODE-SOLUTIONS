class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> v;
        v.push_back(first);
        int temp;
        for (int x:encoded){
            temp=x^first;
            v.push_back(temp);
            first = temp;
        }
        return v;
    }
};