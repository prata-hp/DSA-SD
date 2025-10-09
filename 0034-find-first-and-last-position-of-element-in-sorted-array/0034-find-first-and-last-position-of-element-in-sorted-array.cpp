class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int i = 1;
        int low = 0, high = n - 1;
        vector<int> ans;
        
        for(int  i = 0; i < n; i++){
            if(nums[i]==target){
                ans.push_back(i);

            }
        }
        if( ans.size()>1 ){
            return{ans[0],ans[ans.size()-1]};
        }
        else if( ans.size()==1){return{ans[0],ans[0]};}

        return {-1,-1};

    }

    
};