  int maxProduct(int n) {
        int largest = -1, second = -1;

        while (n > 0) {
            int digit = n % 10;
            n /= 10;

            if (digit >= largest) {
                second = largest;
                largest = digit;
            } 
            else if (digit > second) {
                second = digit;
            }
        }

        return largest * second;
    }
