#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,len = 0,k;
    scanf("%d",&n);

    for(i = 0; i < n ; i++){
        printf("\t\t\t");
        for(j = 0; j < n; j++){
            if (i != n/2 and (j == i or j == n - 1 - i ) or (i == n/2 and j == n/2 ))cout << "X";
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}

