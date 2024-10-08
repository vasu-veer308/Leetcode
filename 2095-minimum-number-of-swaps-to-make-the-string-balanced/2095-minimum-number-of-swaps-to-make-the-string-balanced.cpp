class Solution {
public:
    int minSwaps(string s) {
        int balance = 0;
        int swaps = 0;

        for (char ch : s) {
            if (ch == '[') {
                balance++;  // Increase balance for opening bracket
            } else {
                balance--;  // Decrease balance for closing bracket
            }

            // If balance goes negative, we need a swap
            if (balance < 0) {
                swaps++;   // Increment the swap count
                balance = 1;  // Reset balance after swap
            }
        }

        return swaps;    
    }
};