class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        string word = "";
        
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == ' ') {
                v.push_back(word);
                word = "";
            } else {
                word += s[i];
            }
        }
        
        v.push_back(word); // Push the last word
        
        string result = "";
        for(int i=0; i < v.size(); i++) {
            result += string(v[i].rbegin(), v[i].rend());
             result += " "; // Add space between words except for the last one
        }
        int x=result.length();
        result.erase(x-1);
        return result;
    }
};