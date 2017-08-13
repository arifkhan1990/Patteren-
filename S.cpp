#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,len = 0 ,len1 = 0;
    cin >> n;

    for(int i = 0; i < n ; i++){
        cout << "\t\t\t";

        for(int j = 0; j < n; j++){
             if(((i == 0 or i == n - 1) and ( j > 0 and j < n - 1)) or  (i == 1 and j == 0)  or ( i > 1 and i < n - 1 and j == i - 1)) cout << "S";
             else cout << " ";
        }
        cout << endl;
    }
    return 0;
}




