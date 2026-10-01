class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        vector<int> ans(2);
        int n = arr.size();
        int i=0 , j = n-1;
        while(i<j){
            int sum = arr[i] + arr[j];
            if(sum > target) j--;
            else if(sum < target) i++;
            else{
                ans[0] = i+1;
                ans[1] = j+1;
                return ans;
            }
                
            
        }
        return ans;

        
    }
};