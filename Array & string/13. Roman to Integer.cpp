#define F first
#define S second
class Solution {
public:
    int romanToInt(string s) {
        map<char,pair<int,int>>mp;
        mp['I'] = {1 ,1};
        mp['V'] = {2 , 5};
        mp['X'] = {3 , 10};
        mp['L'] = {4 , 50};
        mp['C'] = {5 , 100};
        mp['D'] = {6 , 500};
        mp['M'] = {7 , 1000};
        int n = s.size();
        int cnt = 0;
       for (int i = 0; i < n; i++) {
            if (i + 1 < n && mp[s[i]].F < mp[s[i + 1]].F) {
                cnt += mp[s[i + 1]].S - mp[s[i]].S;
                i++;
            } else {
                cnt += mp[s[i]].S;
            }
        }
        return cnt;
    }
};