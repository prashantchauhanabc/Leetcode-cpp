// class Solution {
// public:
//     int singleNumber(vector<int>& arr) {
//         sort(arr.begin(), arr.end());

//         int n = arr.size();

//         if (n == 1) {
//             return arr[0];
//         }

//         for (int i = 0; i < n - 1; i++) {
//             if (i == 0) {
//                 if (arr[i] != arr[i + 1]) {
//                     return arr[i];
//                 }
//             }
//             else if (arr[i] != arr[i + 1] &&
//                      arr[i] != arr[i - 1]) {
//                 return arr[i];
//             }
//         }

//         return arr[n - 1];
//     }
// };                       
class Solution{
    public:
    int singleNumber(vector<int>& arr){
        int ans = 0;
        for(int i=0; i<arr.size(); i++){
            ans = ans^arr[i];
        }
        return ans;
    }
};