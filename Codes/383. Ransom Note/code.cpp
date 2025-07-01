class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
      unordered_map<char,int>magazinemap;
      for(auto ch:magazine) magazinemap[ch]++;
      for(auto ch: ransomNote) magazinemap[ch]--;
      for(auto it:magazinemap){
        if(it.second<0) return false;
      }
      return true;
    }
};
