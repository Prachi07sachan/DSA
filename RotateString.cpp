bool rotateString(string s, string goal) {
         if (s.length() != goal.length()) {
        return false; 
    }

    int n = s.length();
    for (int i = 0; i < n; i++) {
        char firstChar = s[0];
        // Move first char to the end
         s = s.substr(1) + firstChar;

        // Check if the current rotation matches goal
        if (s == goal) {
            return true;
        }
    }

    return false; 
}
