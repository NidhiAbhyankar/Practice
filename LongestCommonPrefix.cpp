class Solution {
public:
    string longestCommonPrefix(vector<string>& v) {
        string finalstring="";
        char temp;
        int n;
        if(!v.size())
            return finalstring;
        for(string i:v)
            n=min(n,(int)i.size());
        for(int i=0;i<n;i++){
            temp=v[0][i];
            for(int j=1;j<v.size();j++){
                if(v[j][i]!=temp)
                    return finalstring;
            }
            finalstring+=temp;
        }
        
        return finalstring;
        
    }
};