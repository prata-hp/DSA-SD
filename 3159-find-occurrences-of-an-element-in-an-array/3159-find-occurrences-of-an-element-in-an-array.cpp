class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        
        int n = nums.size();
        int m = queries.size();
        vector<int> ans;
        unordered_map<int,int> hash;

     map <int, int>mpp;
    
        int j = 1; 
        for (int i = 0; i < n; i++) {
            if (nums[i] == x) {
                hash[j++] = i;  
            }
        }

        for(int i=0;i<m;i++){
            if(hash.find(queries[i]) != hash.end()){
                int input = hash[queries[i]];
                ans.push_back(input);

            }
            else{
            ans.push_back(-1);
            }
        }

        return ans;

    }
};