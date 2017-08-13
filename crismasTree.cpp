#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,len,k;
    scanf("%d",&n);

    k = n*2 ;
    for(i = 0; i < n ; i++){
        printf("\t\t\t");

        for(j = 0; j < k ; j++){
            if(j > n - i  and j < n + i )  printf("*");
            else printf(" ");
        }
        printf("\n");
    }

    n += 3;
    k = n*2 ;

        for(i = 3; i < n-1 ; i++){
        printf("\t\t\t");

        for(j = 3; j < k  ; j++){
            if(j > n - i  and j < n + i )  printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    n += 2;
    k = n*2 ;

        for(i = 4; i < n - 1 ; i++){
        printf("\t\t      ");

        for(j = 3; j < k  ; j++){
            if(j > n - i  and j < n + i )  printf("*");
            else printf(" ");
        }
        printf("\n");
    }
        for(i = 0; i < 3 ; i++){
        printf("\t\t\t     ");
        for(j = 0; j < n; j++){
            if(j >= n/2 - 1  and j <= n/2 + 1 )  printf("*");
            else printf("");
        }
        printf("\n");
    }
    return 0;
}

