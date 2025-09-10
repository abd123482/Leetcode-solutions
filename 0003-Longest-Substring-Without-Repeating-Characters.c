int lengthOfLongestSubstring(char* s) {
    int len = strlen(s);
    if (len == 0) return 0; 
    int long_sub = 1;
    int start = 0;  
    for (int i = 1; i < len; i++) {
       for (int j = start; j < i; j++) {
           if (s[j] == s[i]) {
                start = j + 1;
                break;
            }
        }
        int current_length = i - start + 1;
        if (current_length > long_sub) {
            long_sub = current_length;
        }
    }
  
    return long_sub;
}
