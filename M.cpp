#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,len = 0 ,len1 = 0;
    cin >> n;
    len = n/2;
    for(int i = 0; i < n ; i++){
        cout << "\t\t\t";
        if(i < len) len1++;
        for(int j = 0; j < n; j++){
             if(j == 0 or j == n - 1 or ( i != 0 and i < len  and (j == len1 or j == n - len1 - 1) ) ) cout << "M";
             else cout << " ";
        }
        cout << endl;
    }
    return 0;
}


