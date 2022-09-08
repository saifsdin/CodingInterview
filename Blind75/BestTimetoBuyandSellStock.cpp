// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
 public:
    int maxProfitBrute(vector<int>& prices) {
        
       int n=prices.size();
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            int sell=prices[i];
            
            for(int j=i+1;j<n;j++)
            {
                if(sell<prices[j])
                {
                    ans=max(ans,prices[j]-sell);
                }
                
            }
            
            
         }
        
        return ans;
    } 
    public:
        int maxProfit1(vector<int>& prices) 
        {
            int minp =prices[0];
            // let the first number is the minimum price
            int maxpro = 0;

            for(int i =0; i<prices.size(); i++)
            {
                minp = min(minp, prices[i]);
                // comparing that the min price[i]<minp if yes then changing it to prices[i];
                maxpro = max(maxpro,prices[i]-minp);
                //now checkinh whether the maxpro value is < prices[i]-minp(which we get from                  above statement), if yes then updating its value of prices[i]-minp;
            }
            return maxpro;
        }
    
    public:
    int maxProfit2(vector<int>& prices) {
        int     maxDiff = 0;
        int     lowest = 10000;
        int     highest = 0;
        
        for (int price: prices)
        {
            if (price < lowest)
            {
                lowest = price;
                highest = price;
            }
            else if (price > highest)
                highest = price;
            if (highest - lowest > maxDiff)
                maxDiff = highest - lowest;
        }
        return maxDiff;
    }
    
    public:
    int maxProfit(vector<int>& prices) {
    int y =1, x =0;
    int mini = INT_MAX;
    int ans = 0;
    while(x < prices.size() && y < prices.size()){
        if(prices[x] > prices[y])
            x++;
        else if(prices[x] == prices[y])
            y++;
        else if(prices[x] < prices[y]){
            mini = min(mini, prices[x]);
            ans = max(ans, prices[y] - mini);
            x++;
        }
    }
    return ans;
}
    
    
    
    

};