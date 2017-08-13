#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,len = 0,k;
    scanf("%d",&n);

    k = n*2 ;
    for(i = 0; i < n ; i++){
        printf("\t\t\t");
        len++;
        for(j = 0; j < k; j++){
            if((i == n - 1 and j == n) or ( i!= n-1 and (j == len or j == k - len)))cout << "V";
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}
