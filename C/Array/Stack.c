#include <stdio.h>
// Stack implementation using array
int main()
{
    int size;

    printf("\n-----Stack-Operations-----");
    printf("\nEnter maximum size of stack: ");
    scanf("%d", &size);

    if(size < 0) {
        printf("\nInvalid Size.");
        exit(0);
    }

    int *stk = malloc(sizeof(int) * size);
    int top = -1, opn, n;

    printf("\n1. Push\n2. Pop\n3. Exit\n");
    while(1) {
        printf("\nChoose Option: ");
        scanf("%d", &opn);
        switch(opn) {
            case 1:
                // Push
                if(top < size - 1) {
                    printf("\nEnter Number: ");
                    scanf("%d", &n);
                    top++;
                    stk[top] = n;
                }
                else {
                    printf("\nStack is Full.");
                }
                break;
            case 2:
                if(top != -1) {
                    printf("\nNumber: %d", stk[top]);
                    top--;
                }
                else {
                    printf("\nStack is Empty.");
                }
                break;
            case 3:
                exit(0);
            default:
                printf("\nInvalid Request.");
        }
    }

    return 0;
}
