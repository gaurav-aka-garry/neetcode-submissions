class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice=INT_MAX;
        int maxprft=0;
        for(int price:prices)
        {

            maxprft=max(maxprft,price-minprice);
            minprice=min(minprice,price);
        }
        return maxprft;
    }
};
