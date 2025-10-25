class Solution {
public:

    bool possible(vector<int> nums, int dist, int m ){
        int n = nums.size(); int lastplaced = nums[0]; int y = 1;

        for(int i = 0; i < n ; i++){
            if(nums[i] - lastplaced >= dist ){
                y++;
                lastplaced = nums[i];

            }

        } 

        return y>=m;
    }

    int maxDistance(vector<int>& position, int m) {
      sort(position.begin(),position.end());
      int n = position.size();
      int low = 1;
      int high = position[n-1];
      int ans =0;

      while( low<= high ){
        int mid = (low+high)/2;

        if( possible(position,mid, m ) ){
            ans = mid;
            low = mid+1;
        }
        else{
            high = mid-1;
        }
      }
      return ans;        
    }
};