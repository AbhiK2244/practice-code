#include <iostream>
using namespace std;
int main()
{
    int a[5], b[4] ;
    int n = 5, m= 4, i = 0 , j = 0;
    cout << "enter the elements of first array: " << endl;
    for ( int t = 0; t < n; t++)
        cin >> a[t];
        cout << "enter the elements of second array: " << endl;
    for (int t = 0; t < m; t++)
        cin >> b[t];

    cout << "common elements are: ";
    while ( i < n && j < m)
    {
        if ( a[i] == b[j])
        {
            cout << a[i];
            i++; j++;                         //this is 2 pointer approach 
        }
        else if (a[i] < b[j])                // it has less time complexity than previous one.
        {
            i++;
        }
        else
        j++;
        
        
    }
    
    return 0;
}