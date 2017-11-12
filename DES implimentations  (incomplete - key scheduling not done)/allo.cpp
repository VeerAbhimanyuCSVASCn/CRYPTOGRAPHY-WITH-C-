#include<stdlib.h>
int ** allo(int n)
{
    if(n>5)
        return 0;

    int **a;
    a=(int**)malloc(sizeof(int*)*n);
    for(int i=0;i<n;i++)
        a[i]=(int*)malloc(sizeof(int)*n);
    return a;
}
