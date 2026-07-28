
class Solution {
public:
    int beautySum(string s) {
        int n = s.length();
        int sum = 0;

        // Outer loop sets the starting point
        for (int i = 0; i < n; i++) {
            // Use a fixed array of size 26 instead of unordered_map (faster)
            int freq[26] = {0};

            // Inner loop expands the substring character by character
            for (int j = i; j < n; j++) {
                // Instantly add the current character to our frequency tracker
                freq[s[j] - 'a']++;

                int mmax = 0;
                int mmin = n;

                // Find max and min frequencies in O(26) constant time
                for (int k = 0; k < 26; k++) {
                    if (freq[k] > 0) {
                        mmax = max(mmax, freq[k]);
                        mmin = min(mmin, freq[k]);
                    }
                }

                // Add the beauty of the current substring to the total sum
                sum += (mmax - mmin);
            }
        }

        return sum;
    }
};
