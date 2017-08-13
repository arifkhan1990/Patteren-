#include<stdio.h>

int main()
{
    int n,i,j,len,k;
    scanf("%d",&n);
    len = n/2;
    k = n*2 ;
    for(i = 0; i < n ; i++){
        printf("\t\t\t");
        for(j = 0; j < k; j++){
            if((i == 0 && j == n) || (i == len && j >= n-i && j <= n+i && j%2) || (j == n - i || j == n + i))  printf("A");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}

