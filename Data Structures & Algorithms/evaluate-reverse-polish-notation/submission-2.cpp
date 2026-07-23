class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        int ans=0;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="-" || tokens[i]=="+" || tokens[i]=="*" || tokens[i]=="/"){
                int n2=st.top();
                st.pop();
                int n1=st.top();
                st.pop();
                if(tokens[i]=="+") ans=(n1+n2);
                else if(tokens[i]=="-") ans=(n1-n2);
                else if(tokens[i]=="*") ans=(n1*n2);
                else ans=(n1/n2);
                st.push(ans);
            }
            else{
                int n=stoi(tokens[i]);
                cout<<n;
                st.push(n);
            }
        }
        return st.top();
    }
};
