class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        string ans="";
        for(int i=0;i<n;i++){
            s[i]=tolower(s[i]);
            if((s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9')) ans+=s[i];
        }
        n=ans.size();
        for(int i=0,j=n-1;i<j;i++,j--){
            if(ans[i]!=ans[j]) return false;
        }
        return true;
    }
};
