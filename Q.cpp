
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,len = 0 ,len1 = 0;
    cin >> n;

    for(int i = 0; i < n ; i++){
        cout << "\t\t\t";

        for(int j = 0; j < n; j++){
             if((i != n-2 and i != n-1 and i != 0 and i != 1 and (j == 0 or j == n - 1)) or ( (i == n - 2 or i == 1) and (j == 1 or j == n-2 )) or ((i == n - 1 or i == 0) and  (j == n - 4 or j == n - 6))) cout << "Q";
             else cout << " ";
                     if(i == n - 2 and j == n - 1){
                       cout << "Q";
                   }else if(i == n - 1 and j == n - 1){
                       cout << " Q";
                   }
        }

        cout << endl;
    }
    return 0;
}

