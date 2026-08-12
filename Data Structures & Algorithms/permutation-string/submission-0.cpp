class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()) return false;

        int n=s1.size() , m=s2.size();

        sort(s1.begin(),s1.end());

        for(int i=0;i<m-n+1;i++){
            if(s1.find(s2[i])<=m){
                string k = s2.substr(i,n);
                sort(k.begin(),k.end());
                if(s1==k) return true;
            } 
        } 
        return false;
    }
};
