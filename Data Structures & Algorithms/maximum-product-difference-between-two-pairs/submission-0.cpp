class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.rbegin(), nums.rend());
        int a=nums[0],b=nums[1],c=nums[nums.size()-1],d=nums[nums.size()-2];
        return{(a * b) - (c * d)};
    }
};