class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int n = arr.size();
        int candidate = arr[0];
        int count = 1;
        for(int i=0; i<n; i++){
            if(arr[i]==candidate){
                count++;
            }
            else{
                count--;
            }
            if(count==0){
                candidate = arr[i];
                count=1;
            }
        }
        return candidate;
        
    }
};