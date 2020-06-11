
long long maxArea(long long A[], int len)
{
    // Your code goes here
    long long i,j,res=0,a;
    i=0;
    j=len-1;
    a=0;
    while(i<j)
    {
        if(A[i]<A[j])
        {
            a=A[i]*(j-i);
            i++;
        }
        else
        {
            a=A[j]*(j-i);
            j--;
        }
        res=max(res,a);
    }
    return res;
}