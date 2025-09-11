char* convert(char* s, int numRows) {
    int length = strlen(s);
    if (numRows == 1 || length <= numRows) return s;   
    char* result = malloc(length + 1);
    int index = 0;
    int cycle = 2 * numRows - 2;
    
    for (int i = 0; i < numRows; i++) {
        for (int j = i; j < length; j += cycle) {
            result[index++] = s[j];
            
            if (i != 0 && i != numRows - 1) {
                int mid = j + cycle - 2 * i;
                if (mid < length) {
                    result[index++] = s[mid];
                }
            }
        }
    }
    
    result[index] = '\0';
    return result;
}
