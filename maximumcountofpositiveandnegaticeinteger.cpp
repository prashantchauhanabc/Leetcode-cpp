class Solution {
public:
    int maximumCount(vector<int>& arr) {
        int neg = 0;
        int pos = 0;
        for(int num : arr){
            if(num<0){
                neg++;
            }
            else if(num>0){
                pos++;
            }
        }
        return max(neg,pos);
    }
};