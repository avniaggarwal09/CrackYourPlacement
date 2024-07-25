class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int a = 0;
        int diff = 0;
        int b = INT_MAX;
        for(int i=0; i<prices.size(); i++)
        {
            if(b > prices[i]) {
                b = prices[i];
            }
            a = prices[i]-b;
            if(diff < a)
            {
                diff = a;
            }
            
        }
        return diff; 
    }
};