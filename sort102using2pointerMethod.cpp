#include <iostream>
using namespace std;
int main()
{
    int a[10] = { 1,2,0,0,1};
    int n = 5,i = 0 , j = n-1 , k = n/2;
    // cout << "enter the elements of first array: " << endl;
    // for ( int t = 0; t < n; t++)
    //     cin >> a[t];

   
    while (i < n/2)
    {
        if ( a[i] == 0 )
        {
            
            i++;                         //this is 2 pointer approach 
        }
        else if (a[j] == 2)                // it has less time complexity than previous one.
        {
            j--;
        }
        else if( a[k] == 2 && a[j]== 1 && k< j)
        {
            swap( a[i], a[j] );
            j--; k++;
        }
        else if (a[i] == 2 &&  a[j] == 0 )                
        {
            swap( a[i], a[j]);
            i++; j--;
        }
        else if( a[k] == 0 && a[i]== 1)
        {
            swap( a[k], a[i] );
            i++; k++;
        }
         
    }
    for ( int t = 0; t < n; t++)
        cout<< a[t];
    return 0;
}