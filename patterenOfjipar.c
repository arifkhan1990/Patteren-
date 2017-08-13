#include<stdio.h>

int main()
{
    int n,i,j,len;
    scanf("%d",&n);
    len = n/2;
    for(i = 0; i < n ; i++){
            printf("\t\t\t");
        for(j = 0; j < n; j++){
            if(i == 0 || j == len) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    for(i = 0; i < n ; i++){
            printf("\t\t\t");
        for(j = 0; j < n; j++){
            if((i == 0 && j == len) || (j == len - i || j == len + i)) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}
