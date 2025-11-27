#include <bits/stdc++.h>
typedef long long ll;
#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()
const int N = 2e5 + 5;
using namespace std;
class Solution {
 public:
  int removeDuplicates(vector<int>& nums) {
    // O(1) space complexity - Two pointer approach
    int k = 1;
    if (nums.size() == 0) return 0;
    for (int i = 1; i < nums.size(); i++) {
      if (nums[i] != nums[k - 1]) {
        nums[k++] = nums[i];
      }
    }
    return k;
    
    // map<int, int> mp;
    // nums.erase(unique(all(nums)), nums.end());
    // return nums.size();

    // O(n) space complexity
    // vector<int> v;
    // map<int, int> mp;
    // for (int i = 0; i < nums.size(); i++) {
    //   if (mp[nums[i]] == 0) {
    //     v.push_back(nums[i]);
    //     mp[nums[i]]++;
    //   }
    // }
    // nums = v;
    // return nums.size();
  }
};
int main() {
  Solution s1;
  vector<int> v = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
  cout << s1.removeDuplicates(v) << endl;
}