
class Solution {
public:
    vector<int> searchRange(vector<int>& arrs, int target) {
        vector<int> ans(2, -1);
        int n = arrs.size();
        int low = 0;
        int high = n - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arrs[mid] > target) {
                high = mid - 1;
            }
            else if (arrs[mid] < target) {
                low = mid + 1;
            }
            else {
                ans[0] = mid;
                high = mid - 1;
            }
        }

        low = 0;
        high = n - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arrs[mid] > target) {
                high = mid - 1;
            }
            else if (arrs[mid] < target) {
                low = mid + 1;
            }
            else {
                ans[1] = mid;
                low = mid + 1;
            }
        }

        return ans;
    }
};
