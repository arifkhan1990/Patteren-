#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,len = 0,k;
    scanf("%d",&n);

    for(i = 0; i < n ; i++){
        printf("\t\t\t");
        for(j = 0; j < n; j++){
            if (i == 0 or i == n - 1 or (i != 0 and i != n - 1  and j == n - i - 1))cout << "Z";
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}



