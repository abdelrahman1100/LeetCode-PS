class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int last=1;
        for(int i=digits.size()-1;i>=0;i--){
            if(digits[i]==9){
                digits[i]=0;
            }
            else{
                digits[i]++;
                last=0;
                break;
            }
        }
        if(last==1){
            vector<int>ans(digits.size()+1);
            ans[0]=1;
            for(int i=0;i<digits.size();i++){
                ans[i+1]=digits[i];
            }
            return ans;
        }
        vector<int>ans(digits.size());
        for(int i=0;i<digits.size();i++){
            ans[i]=digits[i];
        }
        return ans;
    }
};