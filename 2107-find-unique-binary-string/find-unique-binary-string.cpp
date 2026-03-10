class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n=nums.size();
        string a="";
        for(int i=0;i<n;i++){
            if(nums[i][i]=='0'){
                a+='1';
            }
            else{
                a+='0';
            }
        }
        return a;
    }
};