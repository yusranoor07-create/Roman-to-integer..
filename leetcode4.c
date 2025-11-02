
int value(char r) {
    if (r == 'I') return 1;
    if (r == 'V') return 5;
    if (r == 'X') return 10;
    if (r == 'L') return 50;
    if (r == 'C') return 100;
    if (r == 'D') return 500;
    if (r == 'M') return 1000;
    return 0;
}

int romanToInt(char * s){
    int total = 0;
    int i = 0;
    while (s[i]) {
        int s1 = value(s[i]);
        if (s[i+1]) {
            int s2 = value(s[i+1]);
            if (s1 >= s2) {
                total += s1;
                i++;
            } else {
                total += (s2 - s1);
                i += 2;
            }
        } else {
            total += s1;
            i++;
        }
    }
    return total;
}

