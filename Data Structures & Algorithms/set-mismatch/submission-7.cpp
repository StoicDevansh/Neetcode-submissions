class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> count(2);
        for(int num: nums){
            int absNum=abs(num);
            if(nums[absNum-1] < 0){
                count[0]=absNum;
            }
            else{
                nums[absNum-1] *= -1;
            }
        }
        for (int i=0; i<nums.size(); i++){
            if(nums[i]>0 && i+1 !=count[0]){
                count[1]=i+1;
                return count;
            }
        }
        return count;
    }
};