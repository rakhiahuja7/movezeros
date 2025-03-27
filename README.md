# movezeros
class Solution { public:     void moveZeroes(vector&lt;int>&amp; nums) {     int res=-1;     int n= nums.size();     for(int i=0;i&lt;n;i++){         if(nums[i]!=0){             res++;             swap(nums[res],nums[i]);         }     } } };
