class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = 0;
        for(int j=0; j<nums.size(); j++){
            if(nums[j]!=0){
                nums[k++]=nums[j];
            }
        }
        for( ; k<nums.size(); k++){
            nums[k]=0;
        }
    }
};