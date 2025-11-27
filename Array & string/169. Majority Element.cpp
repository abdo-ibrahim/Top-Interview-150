class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int,int>mp;
        for(auto i : nums){
            mp[i]++;
        }
        for(auto [i,j] : mp){
            if(j > n / 2) return i;
        }
        return 0;
    }
};