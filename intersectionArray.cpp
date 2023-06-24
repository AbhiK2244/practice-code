#include <iostream>
using namespace std;
int main()
{
    int a[5], c = 0, b[4] ;
    int n = 5, m= 4;
    cout << "enter the elements of first array: " << endl;
    for (int i = 0; i < n; i++)
        cin >> a[i];
        cout << "enter the elements of second array: " << endl;
    for (int i = 0; i < m; i++)
        cin >> b[i];

    cout << "common elements are: ";
    for (int i = 0 ; i < n ; i++)
    {
        for (int j = 0 ; j < m ; j++)
        {
            if( a[i] < b[j])
            break;
            if (  a[i] == b[j]  )
            {
                cout << a[i] << "  " ;
                b[j] = INT8_MIN;
                break;
            }
        }
    }
    
    return 0;
}