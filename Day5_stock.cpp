int maxProfit(vector<int>& prices) {
        int n=prices.size()-1;
        int sum=0,diff;
        for(int i=1;i<=n;i++){
            diff=prices[i]-prices[i-1];
            if(diff>0)
                sum+=diff;
        }
        return sum;
    }