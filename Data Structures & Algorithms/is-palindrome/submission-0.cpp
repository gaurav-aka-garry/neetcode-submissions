class Solution {
public:
    bool isPalindrome(string s) {
        s.erase(std::remove(s.begin(),s.end(),' '),s.end());
        s.erase(std::remove_if(s.begin(),s.end(),[](unsigned char c){return !std::isalnum(c);}),s.end());
        std::transform(s.begin(),s.end(),s.begin(),[](unsigned char c){return std::tolower(c);});
        int start=0;int end=s.size()-1;
        while(start<end)
        {
            if(s[start]!=s[end])return false;
            start++;
            end--;
        }
        return true;
    }
};
