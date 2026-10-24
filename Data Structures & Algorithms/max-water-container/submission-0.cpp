class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0;int right=heights.size()-1;
        int maxArea=0;
        while(left<right)
        {
            int Area=(right-left)*(min(heights[left],heights[right]));
            maxArea=max(Area,maxArea);
            if(heights[left]==min(heights[left],heights[right]))left++;
            else if(heights[right]==min(heights[left],heights[right]))
            {
                right--;
            }
        }
        return maxArea;
    }
};
