# include <stdio.h>

int main() {
    int s, v;
    int m, h;
    scanf("%d%d", &s, &v);
    m = s / v + 10;
    if (s % v) {
        m += 1;
    }
    h = m / 60;
    if (m % 60) {
        h += 1;
    }
    printf("%02d:%02d", (8 - h + 24) % 24, 60 - m % 60);
    return 0;
}      
