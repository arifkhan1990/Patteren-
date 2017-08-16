#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,len = 0,len1 = 0,k,k1 ;
    scanf("%d",&n);

    k = n*2 , k1 = n*4;
    for(i = 0; i < n ; i++){
        printf("\t\t\t");
        len++,len1 += 2;
        for(j = 0; j < k1; j++){
            if((i == n - 1 and (j == n or j == k1)) or ( i!= n-1 and (j == len or j == k - len or j == k + len - 2) ) or (j == k1 - len - 2))cout << "W";
            else printf(" ");
        }
        printf("\n");
    }

    return 0;
}

