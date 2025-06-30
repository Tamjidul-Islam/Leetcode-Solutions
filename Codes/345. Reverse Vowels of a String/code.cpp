class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> vowel = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
    int i=0,j=s.size()-1;
    while(i<j){
        if(vowel.count(s[i]) && vowel.count(s[j])){
            swap(s[i],s[j]);
            i++;
            j--;
        }
        else if(vowel.count(s[i]) && !vowel.count(s[j])) j--;
        else i++;
    }
    return s;
    }

};
