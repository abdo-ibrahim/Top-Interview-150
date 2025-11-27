#include <bits/stdc++.h>
typedef long long ll;
#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()
const int N = 2e5 + 5;
using namespace std;

class Solution {
 public:
  int removeDuplicates(vector<int>& nums) {
    // O(1) time complexity - Two pointer approach
    int k = 2;
    if (nums.size() <= 2) return nums.size();
    for (int i = 2; i < nums.size(); i++) {
      if (nums[i] != nums[k - 2]) {
        nums[k++] = nums[i];
      }
    }
    return k;

    // O(n) time complexity
    // vector<int> v;
    // map<int, int> mp;
    // for (int i = 0; i < nums.size(); i++) {
    //   if (mp[nums[i]] < 2) {
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
  vector<int> v = {};
  cout << s1.removeDuplicates(v) << endl;
}