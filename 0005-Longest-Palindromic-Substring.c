int isPalindrome(char* s, int start, int end) {
while(start<end){
   if(s[start]!=s[end])
      return 0;
    end--;
    start++;  
}
return 1;
}

char* longestPalindrome(char* s) {
    int len = strlen(s);
    int start = 0;
    int long_sub = 1;
    int maxStart = 0;
    
    if (len == 0) {
        char* result = malloc(1);
        result[0] = '\0';
        return result;
    }
    
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            if (isPalindrome(s, i, j)) {
                int current_len = j - i + 1;
                if (current_len > long_sub) {
                    long_sub = current_len;
                    maxStart = i;
                }
            }
        }
    }
    
    char* P = malloc((long_sub + 1) * sizeof(char));
    for (int i = 0; i < long_sub; i++) {
        P[i] = s[maxStart + i];
    }
    P[long_sub] = '\0';
    
    return P;
}
