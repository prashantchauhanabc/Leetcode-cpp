
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();

        vector<int> freq;

        for (int i = 0; i < n; ) {
            int j = i;

            while (j < n && arr[i] == arr[j]) {
                j++;
            }

            freq.push_back(j - i);
            i = j;
        }

        sort(freq.begin(), freq.end());

        for (int i = 0; i < freq.size() - 1; i++) {
            if (freq[i] == freq[i + 1]) {
                return false;
            }
        }

        return true;
    }
};
