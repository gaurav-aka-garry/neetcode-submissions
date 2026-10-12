class Solution {
public:

    string encode(vector<string>& strs) {
        string str;
        for(const auto& st:strs){
            string size=to_string(st.size());
            str+=size;
            str+='#';
            str+=st;
        }
        return str;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i=0;
        while(i<s.size())
        {
            int j=i;
            while(s[j]!='#')
            {
                j++;
            }
            int len=stoi(s.substr(i,j-i));
            i=j+1;
            string parsed=s.substr(i,len);
            
            result.push_back(parsed);
            i+=len;
        }
        return result;
    }
};
