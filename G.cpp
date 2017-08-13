#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,len;
    cin >> n;
    for(int i = 0; i < n ; i++){
        cout << "\t\t\t";
        for(int j = 0; j < n; j++){
             if((i == 0 and j > 0 and j < n-1 ) or (i == n - 1 and j > 0 and j < n-1 ) or ((i == 1 or i == n-2 or i == n - 3 or i == n - 4) and (j == 0 or j == n-1)) or ( i != 0 and i!= n-1 and j == 0)) cout << "G";
             else cout << " ";
             if(i == n - 4 and  j == n-1) cout << "GGG";
             else if(i == n - 3 and  j == n-1) cout << "  G";
        }
        cout << endl;
    }
    return 0;
}


