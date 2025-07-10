class Solution {
public:
    int countSegments(string s) {
        int count=0,i=0;
        while(i<s.size()){
            if(s[i]==' ') i++;
            else{
                count++;
                while(s[i]!=' ' && i<s.size()) i++;
            }
        }
        return count;
    }
};
