#include <iostream>
using namespace std;
int main()
{
    int a[8], c = 0, b[10] ;
    int n = 8;
    cout << "enter the elements" << endl;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0 ; i < n ; i++)
    {
        for (int j = (i + 1) ; j < n ; j++)
        {
            if ( ( a[i] ^ a[j] ) == 0 )
            {
                b[c] = a[i];
                c++ ;
                break;
            }
        }
    }
    cout << "the duplicates are:" << endl;
    for (int i = 0; i < c; i++)
    {
        cout << b[i];
    }
    

    return 0;
}