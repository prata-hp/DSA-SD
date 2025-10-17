class Solution {
public:
    int findPeakElement(vector<int>& nums) {
      int n = nums.size();
      int low = 0;
      int high = n-1;
      
      if(n==1) return 0;

      while(low<=high){
        int mid = (low+high)/2;

        if(nums[mid] > nums[mid + 1]) return mid;

        if( nums[low] <= nums[mid] ){
          low = mid+1;
        }
        else{
          high = mid-1;
        }

      }
      return 0;
        
    }
};