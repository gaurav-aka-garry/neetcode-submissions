class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0;int right=heights.size()-1;
        int maxArea=0;
        while(left<right)
        {
            int minheight=min(heights[left],heights[right]);
            int Area=(right-left)*(minheight);
            maxArea=max(Area,maxArea);
            if(heights[left]==minheight)left++;
            else if(heights[right]==minheight)
            {
                right--;
            }
        }
        return maxArea;
    }
};
