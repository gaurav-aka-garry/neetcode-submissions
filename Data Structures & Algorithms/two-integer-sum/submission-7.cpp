class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>maps;
        vector<int>answer;
        for(int i=0;i<nums.size();i++)
        {
            int complement=target-nums[i];
            auto it=maps.find(complement);
            if(it!=maps.end())
            {
                int first=it->second;
                answer.push_back(first);
                answer.push_back(i);
                return answer;
            }
            else
            {
                maps.insert({nums[i],i});
            }
        }
        return {-1,-1};
    }
};
