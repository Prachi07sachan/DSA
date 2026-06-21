int maxIceCream(vector<int>& costs, int coins) {
        vector<int> freq(100001, 0);

        for (int cost : costs)
            freq[cost]++;

        int count = 0;

        for (int cost = 1; cost <= 100000; cost++) {
            while (freq[cost] > 0) {
                if (cost > coins)
                    return count;

                coins -= cost;
                count++;
                freq[cost]--;
            }
        }

        return count;
}
