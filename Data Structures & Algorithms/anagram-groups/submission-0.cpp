class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        string s;
        unordered_map<string,vector<string>>stringmap;
        for(int i=0;i<strs.size();i++)
        {
            s=strs[i];
            sort(s.begin(),s.end());
            stringmap[s].push_back(strs[i]);
        }

        vector<vector<string>>answer(stringmap.size());
        int index=0;
        for(auto x:stringmap)
        {
            auto temp=x.second;
            for(auto y:temp)
            {
                answer[index].push_back(y);
            }
            index++;
        }
        return answer;
    }
};
