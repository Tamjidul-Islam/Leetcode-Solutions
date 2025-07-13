class Solution {
public:
    string reverseWords(string s) {
        int i=0,start;
       while(i<s.size()){
          start=i;
        while(i<s.size() && s[i]!=' ') i++;
        reverse(s.begin()+start,s.begin()+i);
        i++;
       }
       return s;
    }
};
