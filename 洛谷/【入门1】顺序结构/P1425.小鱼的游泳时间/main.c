#include <stdio.h>

int main() {
    int a, b, c, d, e, f;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    e = c - a;
    f = d - b;
    if (f < 0) {
        e -= 1;
	f += 60;
    }	
    printf("%d %d", e, f);
    return 0;
}
