class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>elements(nums.begin(),nums.end());
        int largest=0;
        for(auto num:nums)
        {
            if(elements.find(num-1)==elements.end())
            {
            int current=num;
            int length=1;
            while(elements.find(current+1)!=elements.end())
            {
                current++;
                length++;
            }
            largest=max(largest,length);
            }
        }
        return largest;
    }
};
