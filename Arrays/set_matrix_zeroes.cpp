class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
        int r=m.size();
        int c=m[0].size();
        vector<bool>row(r,false);
        vector<bool>col(c,false);
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(m[i][j]==0)
                {
                    row[i]=true;
                    col[j]=true;
                }
            }
        }
        
        for(int i=0;i<r;i++)
        {
            if(row[i])
            {
                for(int j=0;j<c;j++)
                {
                    m[i][j]=0;
                }
            }
        }
        for(int j=0;j<c;j++)
        {
            if(col[j])
            {
                for(int i=0;i<r;i++)
                    m[i][j]=0;
            }
        }
    }
};