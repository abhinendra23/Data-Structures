int threeSumClosest(vector<int> arr, int tar) {
    // Your code goes here
     int n=arr.size();
        sort(arr.begin(),arr.end());
        int diff=INT_MAX;
        int sum;
        for(int i=0;i<n-2;i++)
        {
           int l=i+1;
            int r=n-1;
            int t=tar-arr[i];
            while(l<r)
            {
                if((arr[l]+arr[r])==t)
                {
                    return tar;
                }
                else if((arr[l]+arr[r]) < t)
                {
                    if(diff > abs(arr[l]+arr[r] - t))
                    {
                        diff = abs(arr[l]+arr[r] - t);
                        sum=arr[l]+arr[r]+arr[i];
                    }
                    l++;
                }
                else
                {
                     if(diff >= abs(arr[l]+arr[r] - t))
                    {
                        diff = abs(arr[l]+arr[r] - t);
                        sum=arr[l]+arr[r]+arr[i];
                    }
                    r--;
                }
            }
        }
        return sum;
}