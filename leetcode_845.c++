// Submision link:
// https://leetcode.com/problems/longest-mountain-in-array/submissions/1944635830/

class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n=arr.size();
        int max=0;
        for(int i=0;i<n-1;i++){
            int c=i;
            int up  = 0;
            int low = 0;

            while(c<n-1 && arr[c]<arr[c+1]){
                up++;
                c++;
            }
            while(c<n-1 && arr[c]>arr[c+1]){
                low++;
                c++;
            }

            if (up !=0 && low != 0){
                if(max < (up+low+1)){
                    max = up+low+1;
                }
            }

        }
        return max;
    }
};
