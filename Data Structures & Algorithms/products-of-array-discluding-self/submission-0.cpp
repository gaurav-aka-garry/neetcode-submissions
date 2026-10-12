class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result;
        result.resize(nums.size());
        int AllProduct=1;
        for(int j=0;j<nums.size();j++)
        {
            AllProduct*=nums[j];
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)result[i]=AllProduct/nums[i];
            else {
                int returnproduct=1;
                for(int k=0;k<nums.size();k++)
                {
                    if(k!=i)returnproduct*=nums[k];
                }
                result[i]=returnproduct;
            }
        }
        return result;

    }
};
