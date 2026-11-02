int minMoves2(vector<int>& nums) {
    sort(nums.begin(), nums.end());

    int n = nums.size();
    int median = nums[n / 2];

    int moves = 0;

    for (int i = 0; i < n; i++) {
        moves += abs(nums[i] - median);
    }

    return moves;
}


// Sort the array and find the median, which minimizes the total absolute difference.
// Calculate the moves required to make every element equal to the median.
// Return the total number of moves.
