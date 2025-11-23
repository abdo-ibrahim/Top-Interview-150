// class Solution {
// public:
//     string longestCommonPrefix(vector<string>& strs) {
//         if (strs.empty()) return "";
//         string prefix = strs[0];
//         for(int i = 0; i < prefix.size(); i++){
//             char c = prefix[i];
//             for (int j = 1; j < strs.size(); j++){
//                 string s = strs[j];
//                 if(i >= s.size() || s[i] != c){
//                     return prefix.substr(0 , i);
//                 }
//             }
//         }
//         return prefix;
//     }
// };


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        string prefix = strs[0];
        for(int i = 1; i < strs.size(); i++){
            while (strs[i].find(prefix) != 0) { // not prefix
                prefix = prefix.substr(0, prefix.size() - 1);
            }
        }
        return prefix;
    }
};
