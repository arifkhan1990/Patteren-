#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,len = 0;
    cin >> n;
    for(int i = 0; i < n ; i++){
        cout << "\t\t\t";
        if(i > n/2 ) len++;
        for(int j = 0; j < n; j++){
             if((j == 0)  or ( (i == 0 or i == n/2) and j < n-2) or (i < n/2 and i != 0 and j == n - 1 and i != (n/2)/2)) cout << "R";
             else if (i == (n/2)/2 and j == n - 1) cout << " R";
             else if(i > n/2 and j == len) cout << "  R";
             else cout << " ";
        }
        cout << endl;
    }
    return 0;
}


