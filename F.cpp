#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,len;
    cin >> n;
    for(int i = 0; i < n ; i++){
        cout << "\t\t\t";
        for(int j = 0; j < n; j++){
             if(i == 0 or j == 0 or (i == n/2 and j < n -2)) cout << "F";
             else cout << " ";
        }
        cout << endl;
    }
    return 0;
}




