#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,len;
    cin >> n;
    for(int i = 0; i < n ; i++){
        cout << "\t\t\t";
        for(int j = 0; j < n; j++){
             if(i == 0 or i == n/2 or i == n-1 or j == 0) cout << "E";
             else cout << " ";
        }
        cout << endl;
    }
    return 0;
}



