class Solution {
public:
    int sol(int a,int b,string& op)
    {
        if(op=="+") return a+b;
        if(op=="-") return b-a;
        if(op=="*") return a*b;
        if(op=="/") return b/a;
        return -1;
    }
    int evalRPN(vector<string>& arr) {
        stack<int>s;
        int b,c,res;
        for(string &a:arr)
        {
            if(a=="+" || a=="-" || a=="*" || a=="/")
            {
                b=s.top();
                s.pop();
                c=s.top();
                s.pop();
                res=sol(b,c,a);
                s.push(res);
            }
            else
            {
                s.push(stoi(a));
            }
        }
        return s.top();
    }
};