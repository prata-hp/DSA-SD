class Solution {
public:

    int possible(vector<int> &nums, int mid, int d){
      int n = nums.size();
      int a=1, cap = 0;
      for(int i = 0; i < n; i++){
        cap += nums[i];
        if(cap > mid){
          cap = nums[i];
          a++;
        }
      }

      return a;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);
        

        while( low<=high ){
          int mid = (low+high)/2;
          int p = possible(weights,mid, days);
          if(p <= days){
            high = mid-1;
          }
          else{
            low = mid+1;
          }
        }
        return low;
    }
};