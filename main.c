#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int a, n;

    printf("Please Enter Which Value of Multiplication Table you want = ");
    scanf("%d",&n);

    for(a=1; a<=n; a++)
    {
        printf("\t%d*%d = %d\n", n, a, a*n);
    }



    getch();
    return 0;
}
