class Solution {
public:
    int findNumbers(vector<int>& arr) {
        int count = 0;

        for (int i = 0; i < arr.size(); i++) {
            int n = arr[i];
            int digits = 0;

            while (n > 0) {
                digits++;
                n /= 10;
            }

            if (digits % 2 == 0) {
                count++;
            }
        }

        return count;
    }
};