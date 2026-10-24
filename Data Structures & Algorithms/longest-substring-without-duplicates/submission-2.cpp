class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen=0;
        int start=0;
        int end=0;
        int len=0;
        unordered_map<char,int>elements;
        for(int i=0;i<s.size();i++)
        {
            end=i;
            if(elements.find(s[i])==elements.end())
            {
                elements[s[i]]=i;              
            }
            else 
            {
                start=max(elements[s[i]]+1,start);
                elements[s[i]]=i;
            }
            len=end-start+1;
            maxlen=max(maxlen,len);
        }
        return maxlen;
    }
};
