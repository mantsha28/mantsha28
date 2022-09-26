#include <bits/stdc++.h>

using namespace std;
 

int main()
{

    int i, j,k, n;
    cout <<"entre number of rows=";
    cin>>n;
    for (i = 1; i <= n; i++)

    {

        for (j = 1; j <= n-1; j++)

        {
            cout<<" ";
            }
        for (k = 0; k <= i; k++)
        {
         cout << (char)('A'-1+k) ; 
        }
        

        cout << endl;

    }

    return 0;
}
