class Solution {
public:
    vector<int> runningSum(vector<int>& arr) {
        int n = arr.size();
        int sum=0;
        for(int i=0; i<n; i++){
            sum += arr[i];
            arr[i]=sum;
        }
        return arr;
        
    }
};
