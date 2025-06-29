class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;

        unordered_map<char,int>mpp;
        for(auto ch:s) mpp[ch]++;
        for(auto ch:t) mpp[ch]--;

        for(auto it:mpp){
            if(it.second!=0) return false;
        }
        return true;
        }

};
