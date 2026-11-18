
class Solution {
public:
    string customSortString(string order, string s) {
        int freq[26] = {0};

        for(int i = 0; i < s.size(); i++) {
            freq[s[i] - 'a']++;
        }

        string ans = "";

        for(int i = 0; i < order.size(); i++) {
            char ch = order[i];

            while(freq[ch - 'a'] > 0) {
                ans += ch;
                freq[ch - 'a']--;
            }
        }

        for(int i = 0; i < 26; i++) {
            while(freq[i] > 0) {
                ans += char(i + 'a');
                freq[i]--;
            }
        }

        return ans;
    }
};
