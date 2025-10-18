class Solution {
public:
    int mySqrt(int x) {
        int low = 0;
        int high = x/2;
        int sqrt;
        if( x==0 ) return 0;
        if( x==1 ) return 1;

        while(low<=high){
          int mid = (low+high)/2;
          long long multiplication = mid*mid;
          if( multiplication <= x ){
            sqrt=mid;
            low=mid+1;
            
          }
          else{
            high=mid-1;
          }
          
        } 
        return sqrt;   
    }
};

