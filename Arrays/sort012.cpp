class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l,mid,r;
        l=mid=0;
        r=nums.size()-1;
        while(mid<=r)
        {
            switch(nums[mid])
            {
                case 0 : swap(nums[mid++],nums[l++]);
                         break;
                case 1: mid++;
                        break;
                case 2: swap(nums[mid],nums[r--]);
                        break;
            }
        }
    }
};