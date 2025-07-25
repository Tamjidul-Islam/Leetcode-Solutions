class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int>mpp;
        for(auto ch:s){
            if(mpp[ch]==1) return ch;
            mpp[ch]++;
        }
    return ' ';
    }
};
