class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
    int n = cardPoints.size();
    int windowSize = n - k;  // Size of the window to be taken from either end
    int totalSum = 0;  // Total sum of all the card points
    int windowSum = 0;  // Current sum of card points within the window
    int minWindowSum;  // Minimum sum of card points within any window of size windowSize

    // Calculate the total sum of all card points
    for (int i = 0; i < n; i++) {
        totalSum += cardPoints[i];
    }

    // Initialize the window sum with the sum of the first window
    for (int i = 0; i < windowSize; i++) {
        windowSum += cardPoints[i];
    }

    // Initialize the minimum window sum
    minWindowSum = windowSum;

    // Slide the window through the array and update the minimum window sum
    for (int i = windowSize; i < n; i++) {
        windowSum += cardPoints[i] - cardPoints[i - windowSize];
        minWindowSum = min(minWindowSum, windowSum);
    }

    // The maximum score is the difference between the total sum and the minimum window sum
    return totalSum - minWindowSum;
}

};