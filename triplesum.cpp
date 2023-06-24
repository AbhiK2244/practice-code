#include <iostream>
using namespace std;
int main()
{
    int a[8];
    int n = 8;
    int s=12;
    cout << "enter the elements of first array: " << endl;
    for (int i = 0; i < n; i++)
        cin >> a[i];
        
    cout << "common elements are: ";
    for (int i = 0 ; i < n ; i++)
    {
        for (int j = i + 1 ; j < n ; j++)
        {
            for( int k = j+1 ; k < n; k++)
            if (  a[i] + a[j] + a[k] == s )
            {
                    cout << "{" << a[i] << "," << a[j] << "," << a[k] <<"}   " ;
            }
        }
    }
    
    return 0;
}