class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        set<vector<int>> st;

        for (long long i = 0; i < n; i++) {
            for (long long j = i + 1; j < n; j++) {
                for (long long k = j + 1; k < n; k++) {
                    for (long long l = k + 1; l < n; l++) {
                        long long sum = nums[i] + nums[j] + nums[k] + nums[l];
                        if (sum == target) {
                            vector<int> vect = {nums[i], nums[j], nums[k],
                                                nums[l]};
                            sort(vect.begin(), vect.end());
                            st.insert(vect);
                        }
                    }
                }
            }
        }

        vector<vector<int>> vec(st.begin(), st.end());
        return vec;
    }
};