class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int>freq;
        for(int i=0;i<nums.size();i++)
        {
            auto it = freq.find(nums[i]);
            if(it!=freq.end())return true;
            else freq[nums[i]]++;
        }
        return false;
    }
};