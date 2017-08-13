#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,len,k;
    scanf("%d",&n);
    len = n/2 ;
    k = n*2 ;
    for(i = 0; i < n ; i++){
        printf("\t\t\t");

        for(j = 0; j < k ; j++){
            if(j > n - i  and j < n + i )  printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    len = 0;
    for(i = 0; i < n ; i++){
        printf("\t\t\t");
        len++;
        for(j = 0; j < k; j++){
            if(j > len and j < k - len)cout << "*";
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}


