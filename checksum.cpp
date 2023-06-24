#include <iostream>
using namespace std;
int main()
{
    int a[5];
    int n = 5;
    int s=0;
    cout << "enter the elements of first array: " << endl;
    for (int i = 0; i < n; i++)
        cin >> a[i];
        
    cout << "elements are: ";
    for (int i = 0 ; i < n ; i++)
    {
        for (int j = i + 1 ; j < n ; j++)
        {
            if (  a[i] + a[j] == s )
            {
                    cout << "{" << a[i] << "," << a[j]<< "}   " ;
            }
        }
    }
    
    return 0;
}