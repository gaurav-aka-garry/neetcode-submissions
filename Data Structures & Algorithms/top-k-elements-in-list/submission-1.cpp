class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>frequency;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            frequency[nums[i]]++;
        }
//Bucket sort
        
        vector<vector<int>> Bucket(n+1);
        for(const auto& [num,count]:frequency)
        {
            Bucket[count].push_back(num);
        }
        vector<int>result;
        for(int i=n;i>=1;i--)
        {
                for(auto num:Bucket[i])
                {
                    result.push_back(num);
                    if(result.size()==k) break;
                }
                if(result.size()==k) break;
        }
        return result;
    }
};
