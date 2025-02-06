class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return 0;
        string s;
        while(x>0){
            s.push_back(x%10);
            x/=10;
        }
        int l=0,r=s.size()-1;
        while(l<=r){
            if(s[l]!=s[r])return 0;
            l++,r--;
        }
        return 1;
    }
};