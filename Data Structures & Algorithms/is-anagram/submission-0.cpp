class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>str1;
        unordered_map<char,int>str2;
        int size__s=s.size();
        int size__t=t.size();
        if(size__s!=size__t)return false;
        else{
            for(int i=0;i<size__s;i++)
            {
                auto it1=str1.find(s[i]);
                if(it1==str1.end())str1.insert({s[i],1});
                else{
                    (it1->second)++;
                }
                auto it2=str2.find(t[i]);
                if(it2==str2.end())str2.insert({t[i],1});
                else{
                    (it2->second)++;
                }
            }
            
            for(auto const& [key, val] : str1)
            {                
                if(str2.end()==str2.find(key))return false;
                if(val!=str2[key])return false;
            }
        }
        return true;
    }
};
