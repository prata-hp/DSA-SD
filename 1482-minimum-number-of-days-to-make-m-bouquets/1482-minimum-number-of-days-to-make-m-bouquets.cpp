class Solution {
public:
    
    bool possible(vector<int> &nums,long long mid, int k, int m ){
        int count = 0;
        int num = 0;
        
        for( int i = 0; i < nums.size(); i++ ){

          if(nums[i]<=mid){
             count=count+1;
          } 
          else{
            num += (count/k);
            count = 0;
          } 

        }
        num += (count/k);
        if(num >= m) return true;
        return false;

    } 

    int minDays(vector<int>& bloomDay, int m, int k) {
      int n = bloomDay.size();
      long long ans = -1;
        long long low = *min_element(bloomDay.begin(),bloomDay.end());
        long long high = *max_element(bloomDay.begin(),bloomDay.end());

        while(low <= high ){
          long long mid = (low+high)/2;

          if( possible(bloomDay,mid,k,m) ){
            ans = mid;
            high = mid-1;

          }
          else{
            low = mid+1;
          }
                    
        }
        return ans;
        
    }
};