class Solution {
public:
    bool increasingTriplet(vector<int>& arr) {
        int n = arr.size();
        int first = INT_MAX;
        int second = INT_MAX;
        for(int i=0; i<n; i++){
            if(arr[i]<=first){
                first = arr[i];
            }
            else if(arr[i] <= second){
                second = arr[i];
            }
            else{
                return true;
            }
        }
        return false;
        
    }
};maximuma