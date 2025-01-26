#include <stdio.h>

int main()
{
    int n;
    int c=0;
    
    scanf("%d",&n);
    
    c+=n/5;
    c+=n/25;
    c+=n/125;
    
    printf("%d",c);

    return 0;
}