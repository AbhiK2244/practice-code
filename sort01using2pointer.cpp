#include <iostream>
using namespace std;
int main()
{
    int a[5];
    int n = 5,i = 0 , j = n-1;
    cout << "enter the elements of first array: " << endl;
    for ( int t = 0; t < n; t++)
        cin >> a[t];

   
    while ( i < j )
    {
        if ( a[i] == 1 && a[j] == 0)
        {
            swap(a[i],a[j]);
            i++; j--;                         //this is 2 pointer approach 
        }
        else if (a[i] == 0 && a[j]== 1)                // it has less time complexity than previous one.
        {
            i++; j--;
        }
        else if (a[i] == 0)                // it has less time complexity than previous one.
        {
            i++;
        }
        else if( a[j] == 1)
        j--;
         
    }
    for ( int t = 0; t < n; t++)
        cout<< a[t];
    return 0;
}