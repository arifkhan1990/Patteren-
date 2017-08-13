#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,len = 0 ,len1 = 0;
    cin >> n;

    for(int i = 0; i < n ; i++){
        cout << "\t\t\t";

        for(int j = 0; j < n; j++){
             if(j == 0 or j == n - 1 or ( i != 0 and i != n -1 and j == i ) ) cout << "N";
             else cout << " ";
        }
        cout << endl;
    }
    return 0;
}



