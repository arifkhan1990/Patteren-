#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,len = 1,len1 = 1;
    cin >> n;
    len += n/2;
    for(int i = 0; i < n ; i++){
        cout << "\t\t\t";
        if(i >= len) len1++;
        for(int j = 0; j < n; j++){
             if(j == 0 or ( i < len  and j == len - i ) or (i >= len  and j == len1 )) cout << "K";
             else cout << " ";
        }
        cout << endl;
    }
    return 0;
}


