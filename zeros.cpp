#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        void moveZeroes(vector<int>& nums) {
        int res=-1;
        int n= nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                res++;
                swap(nums[res],nums[i]);
            }
        }
    }
    };