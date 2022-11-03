// // vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
// {
//     vector<int>ans;
//     //Write your code here
//     for(int col=0; col<mCols; col++){
//     if(col&1){
//         //ODD index bottom to top
//         for(int row=nRows-1; row>=0; row--){
//             ans.push_back(arr[row][col]);
//         }
//     }
//     else{
//         //even index top to bottom
//         for(int row=0; row<nRows; row++){
//             ans.push_back(arr[row][col]);
//         }
//     }
//     }return ans;
// }



class Solution {
bool isPrime(int n){
    if(n<=1){
        return 0;
    }
for(int i=2; i<n; i++){
    if(n%i==0){
        return 0;
    }
    
}
    return 1;
}
public:
    int countPrimes(int n) {
        int count=0;
        
        for(int i=2; i<n; i++){
        if(isPrime(i)){
            count++;
        }
        }
         return count;
    }
   
};