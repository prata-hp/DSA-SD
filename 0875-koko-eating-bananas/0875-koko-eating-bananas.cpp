class Solution {
private:
    // Helper function to calculate the time taken to eat all bananas at a given speed.
    long long calculateHours(const std::vector<int>& piles, int speed) {
        long long totalHours = 0;
        for (int pile : piles) {
            // Equivalent to ceil((double)pile / speed)
            totalHours += (pile + speed - 1) / speed;
        }
        return totalHours;
    }

public:
    int minEatingSpeed(std::vector<int>& piles, int h) {
        // The search space for the eating speed 'k' is from 1 to max(piles).
        int low = 1;
        int high = *std::max_element(piles.begin(), piles.end());
        int ans = high; // Initialize answer with a safe upper bound.

        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            // Check if this speed is feasible.
            if (calculateHours(piles, mid) <= h) {
                // If mid speed is feasible, it could be our answer.
                // Try to find an even smaller speed by searching the left half.
                ans = mid;
                high = mid - 1;
            } else {
                // If mid speed is too slow, we need a faster speed.
                // Search the right half of the range.
                low = mid + 1;
            }
        }
        return ans;
    }
};
