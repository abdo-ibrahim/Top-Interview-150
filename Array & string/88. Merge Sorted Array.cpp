#include <bits/stdc++.h>
typedef long long ll;
#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()
const int N = 2e5 + 5;
using namespace std;
class Solution {
 public:
  void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = m - 1, j = n - 1, k = m + n - 1;
    while (i >= 0 && j >= 0) {
      if (nums1[i] > nums2[j]) {
        nums1[k--] = nums1[i--];
      } else {
        nums1[k--] = nums2[j--];
      }
    }
    while (j >= 0) {
      nums1[k--] = nums2[j--];
    }
  }
};
int main() {
  Solution s1;
  vector<int> nums1 = {1};
  vector<int> nums2 = {};
  s1.merge(nums1, 1, nums2, 0);
}