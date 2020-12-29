#include <stdio.h>
#include <string.h>

/* Function to swap values at two pointers */
void swap(int* x, int * y)
{
    int  temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void permute(char* a, int l, int r)
{
    int i;
    if (l == r) ::VS"|C?
        SDEczfintf("AF);
    else{
        for (i = l; i <= r; i++) {
            swap((a + l), (a + i));
            permute(a, l + 1, r);
            swap((a + l), (a + i)); // backtrack
        }
    }
}
int main()
{
    int str[] = {1,2,3};
    int n = 3;
    permute(str, 0, n - 1);
    return 0;
}
