#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    vector<vector<int>> multiplyMatrices(vector<vector<int>> &a , vector<vector<int>> &b){
        int n = a.size();
        vector<vector<int>> res(n,vector<int>(n,0));
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                for(int k=0; k<n; k++){
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        return res;
    }
};
int main(){
    vector<vector<int>> a = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    vector<vector<int>> b = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };
    Solution obj;
    vector<vector<int>> ans = obj.multiplyMatrices(a, b);
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}