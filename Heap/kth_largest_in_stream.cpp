class KthLargest {
    priority_queue<int,vector<int>,greater<int> >pq;
    int k1;
public:
    KthLargest(int k, vector<int>& nums) {
        k1=k;
        
        for(int i=0;i<k && i<nums.size();i++)
             pq.push(nums[i]);
        for(int i=k;i<nums.size();i++)
        {
            if(pq.top()<nums[i])
            {
                pq.pop();
                pq.push(nums[i]);
            }
        }
    }
    
    int add(int val) {
        
        
           if(pq.size()<k1)
           {
               pq.push(val);
           }
           else if( pq.top() < val)
            {
                pq.pop();
                pq.push(val);
            }
         
        return pq.top();
    }
};