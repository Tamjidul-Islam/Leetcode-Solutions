class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int i=0,count=0,width=0;
       while(i<s.size()){
         width += widths[s[i]-'a'];
        if(width>100){
            width=widths[s[i]-'a'];
            count++;
        }
        i++;
       }
       return {count+1,width};
    }
};
