class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n= temperatures.size();
        stack<int>tem;
        vector<int> r(n,0);
        for(int i=0;i<n;i++){
            while(!tem.empty() && temperatures[i]> temperatures[tem.top()]){
                int x= tem.top();
                tem.pop();
                r[x]=i-x;
            }
            tem.push(i);
        }
        return r;
    }
};
