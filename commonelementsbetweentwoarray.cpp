class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& arr1, vector<int>& arr2) {
        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());

        int count1 = 0;
        int count2 = 0;

        int i = 0;
        int j = 0;

        while(i < arr1.size() && j < arr2.size()) {

            if(arr1[i] == arr2[j]) {

                int value = arr1[i];

                // arr1 me value kitni baar hai
                while(i < arr1.size() && arr1[i] == value) {
                    count1++;
                    i++;
                }

                // arr2 me value kitni baar hai
                while(j < arr2.size() && arr2[j] == value) {
                    count2++;
                    j++;
                }
            }
            else if(arr1[i] < arr2[j]) {
                i++;
            }
            else {
                j++;
            }
        }

        return {count1, count2};
    }
};