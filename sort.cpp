#include<iostream>
using namespace std;
int main()
{
    int a[5];
    int n= 5;

    cout << "enter the elements" << endl;
    for (int i = 0; i < n; i++) 
        cin>> a[i];
    for( int i=0 ; i<n; i++)
    {
        for( int j = i+1 ; j < n ; j++)
        {
            if( a[i] > a[j])
            {
                int t = a[i];
                a[i]= a[j];
                a[j]= t;
            }
        }
    }

    for (int i = 0; i < n; i++) 
        cout<< a[i];
    
    
    return 0;
}