int myAtoi(char* s) {
    long c = 0;
    int i = 0, sign = 1;

    while (s[i] == ' ') i++;

    if (s[i] == '-' || s[i] == '+') {
        if (s[i] == '-') sign = -1;
        i++;
    }

    while (s[i] >= '0' && s[i] <= '9') {
        c = c * 10 + (s[i] - '0');
        if (sign * c > INT_MAX) return INT_MAX;
        if (sign * c < INT_MIN) return INT_MIN;
        i++;
    }

    return (int)(sign * c);
}
