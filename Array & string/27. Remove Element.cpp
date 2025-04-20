#include <bits/stdc++.h>
typedef long long ll;
#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()
const int N = 2e5 + 5;
using namespace std;
class Solution {
 public:
  int removeElement(vector<int>& nums, int val) {
    int cnt = 0;
    vector<int> v;
    for (auto i : nums) {
      if (i != val) {
        v.push_back(i);
        cnt++;
      }
    }
    sort(v.begin(), v.end());
    nums = v;
    return cnt;
  }
};
int main() {
  Solution s1;
  vector<int> v = {3, 2, 2, 3};
  cout << s1.removeElement(v, 3) << endl;
}