#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n; // pointer, at that value physical mailboxes
    printf("%i\n", *p);
}
