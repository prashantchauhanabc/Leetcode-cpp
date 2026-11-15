
class Solution {
public:
    int longestPalindrome(string s) {
        int freq[128] = {0};

        for(int i = 0; i < s.size(); i++) {
            freq[s[i]]++;
        }

        int ans = 0;
        bool odd = false;

        for(int i = 0; i < 128; i++) {
            ans += (freq[i] / 2) * 2;

            if(freq[i] % 2 == 1) {
                odd = true;
            }
        }

        if(odd) {
            ans++;
        }

        return ans;
    }
};
