#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,len;
    cin >> n;
    for(int i = 0; i < n ; i++){
        cout << "\t\t\t";
        for(int j = 0; j < n; j++){
             if(j == 0 or j == n - 1 or (i == n/2 and j%2 == 0)) cout << "H";
             else cout << " ";
        }
        cout << endl;
    }
    return 0;
}

