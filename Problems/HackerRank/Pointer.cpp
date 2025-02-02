// https://www.hackerrank.com/challenges/c-tutorial-pointer/problem
#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function    
    *a = *a + *b;
    *b = *b - (*a - *b);
    *b = *b < 0 ? -*b : *b ;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}