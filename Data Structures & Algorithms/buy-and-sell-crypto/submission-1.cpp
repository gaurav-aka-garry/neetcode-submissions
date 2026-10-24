class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice=INT_MAX;
        int maxprft=0;
        for(int price:prices)
        {
            int prft=price-minprice;
            if(maxprft<prft)maxprft=prft;
            if(price<minprice)minprice=price;
        }
        return maxprft;
    }
};
