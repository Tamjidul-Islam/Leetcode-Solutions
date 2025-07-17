
class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_set<string>sset;
       vector<string>code={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
       for(auto word:words){
            string temp;
           for(auto ch:word){
            temp+=code[ch-'a'];
        }
         sset.insert(temp);
       }
       return sset.size();
    }
};
