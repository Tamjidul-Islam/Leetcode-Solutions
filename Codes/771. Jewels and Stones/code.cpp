class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char>jew;
        int count=0;
        for(auto ch:jewels){
            jew.insert(ch);
        }
        for(auto ch:stones){
            if(jew.count(ch)) count++;
        }
        return count;
    }
};
