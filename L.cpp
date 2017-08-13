#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,len;
    cin >> n;
    for(int i = 0; i < n ; i++){
        cout << "\t\t\t";
        for(int j = 0; j < n; j++){
             if(j == 0) cout << "L";
             else if(i == n - 1 and j < n-2) cout << " L";
             else if(i == n - 2 and j == n -1) cout << "    L";
             else cout << " ";
        }
        cout << endl;
    }
    return 0;
}



