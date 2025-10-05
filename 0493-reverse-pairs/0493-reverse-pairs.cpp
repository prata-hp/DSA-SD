class Solution {
public:

   int countPairs(vector<int>& nums, int low, int mid, int high){
        int right = mid+1;
        int count=0;
        for(int i = low; i <= mid; i++ ){
            while( right <= high && (long long) nums[i] > 2LL * nums[right]  ){ right++; }

            count = count + (right-(mid+1));
                       
        }
        return count;
   }
    
    void merge(vector<int>& nums, int low, int mid, int high){
        
        vector<int> temp;
        int left = low;
        int right = mid+1;
        
        while( left <= mid && right <= high  ){
            if(nums[left]<= nums[right] ){
                temp.push_back(nums[left]);
                left++;
            }
            else{
                 temp.push_back(nums[right]);
                right++;
            }
           
        }

         while(left <= mid){
                temp.push_back(nums[left]);
                left++;
            }
            while(right <= high){
                temp.push_back(nums[right]);
                right++;
            }  
        for(int i = low; i <= high; i++ ){
            nums[i] = temp[i-low];
        }
        
    }

  int mergeSort(vector<int> &arr, int low, int high) {
    int count = 0;
    if (low >= high) return count;
    int mid = (low + high) / 2 ;
    count = count +  mergeSort(arr, low, mid);  
    count = count +  mergeSort(arr, mid + 1, high);
    count = count + countPairs(arr, low, mid, high);
    merge(arr, low, mid, high);
    return count;
}
    int reversePairs(vector<int>& nums) {


        
       return mergeSort(nums, 0, nums.size()-1);
    }
};