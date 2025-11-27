// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         int n = nums.size();
//         k = k % n;
//         deque<int> dq(nums.begin(), nums.end());
//         for(int i = 0; i < k; i++){
//             dq.push_front(dq.back());
//             dq.pop_back();
//         }
//         for(int i = 0; i < n; i++){
//             nums[i] = dq[i];
//         }
//         return;
//     }
// };
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
        return;
    }
};