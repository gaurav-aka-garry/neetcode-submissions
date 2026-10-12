class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>freq;
        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minheap;
        for(const auto& [num,count]:freq)
        {
            minheap.push({count,num});
            if(minheap.size()>k)minheap.pop();
        }
        vector<int>result;
        while(!minheap.empty())
        {
            result.push_back(minheap.top().second);
            minheap.pop();
        }
        return result;
    }
};
