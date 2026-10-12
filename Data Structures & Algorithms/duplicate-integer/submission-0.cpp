#include<iostream>
#include<map>
using namespace std;
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        int size=nums.size();
        map<int,int>repeat;
        for(int i=0;i<size;i++)
        {
            auto it=repeat.find(nums[i]);
            if(it!=repeat.end())return true;
            else 
                {
                    repeat.insert({nums[i],i});
                }
        }
        return false;
    }
};