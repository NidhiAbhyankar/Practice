class Solution {
public:
    string countAndSay(int n) {
        string s="1";               //initial string to begin with
        while(--n){
            string newstring="";
            int i=0;
            while(i<s.size()){
                int count=1;
                while(i+1<s.size() && s[i]==s[i+1]){
                    ++count;
                    ++i;             //shift the index to the next value 
                }
                newstring+=to_string(count)+s[i];
                ++i;
            }
             s=newstring;           //to have the new string as original to carry the pattern again
        }
        
        return s;
    }
};