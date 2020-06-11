class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int profit=0;
       int lmin=INT_MAX;
        for(int i=0;i<arr.size();i++)
        {
           if(arr[i]<lmin)
           {
               lmin=arr[i];
           }
            else if(arr[i]-lmin > profit)
            {
                profit=arr[i]-lmin;
            }
        }
        return profit;
        
    }
};
