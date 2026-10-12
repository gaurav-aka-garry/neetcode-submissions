class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        map<char,int>freqS;
        for(int i=0;i<s.size();i++)
        {
            freqS[s[i]]++;
        }
        map<char,int>freqT;
        for(int i=0;i<t.size();i++)
        {
            freqT[t[i]]++;
        }
        for(auto const& [key, val] : freqS)
        {
            if(val != freqT[key])return false;
        }
        return true;

    }
};
