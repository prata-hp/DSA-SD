class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int sum = 0 , i = 0;
       
        sort(intervals.begin(),intervals.end());
        int n = intervals.size();
        
        vector<vector<int>> vect = {intervals[0]};
 

        for(int i = 1; i < n; i++ ){

         int start = intervals[i][0];
         int end   = intervals[i][1];
            
            if(start <= vect[sum][1] ){
                vect[sum][1] = max(vect[sum][1],end);
            }
            else if(start != vect[sum][0] && end != vect[sum][1] ){
                vector<int> temp = {start,end};
                vect.push_back(temp);
                sum=sum+1;
            }

        }

        return vect;
        
    }
};