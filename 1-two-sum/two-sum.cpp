class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {


        for( int i=0;i<nums.size();i++){
            int x=nums[i];
             for( int j=i+1;j<nums.size();j++){
                if(nums[j]==target-x){
                    return{i,j};
                }
            }
        }
        return { -1,-1};
        
    }
};