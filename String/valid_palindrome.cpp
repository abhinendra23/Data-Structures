class Solution {
public:
    bool ispalindrome(string s,int l,int r)
    {
        while(l<r)
        {
            if(s[l]!=s[r])
                return false;
            l++;
            r--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int count=0;
        int l,r;
        l=0;
        r=s.length()-1;
        while(l<r)
        {
            if(s[l]!=s[r])
            {
                return (ispalindrome(s,l+1,r)||ispalindrome(s,l,r-1));
            }
            l++;
            r--;
        }
      return true;
    }
};