#include<iostream>
using namespace std;

void printArray( int a[], int n)
{
    for ( int i = 0; i < n; i++)
    {
        cout << a[i] << "  ";
    }
}

void swapAlternate( int a[], int n)
{
    for ( int i = 0; i < n; i += 2)
    {
        if( i + 1 < n)
        swap( a[i] , a[i+1]);
    }
}

int main()
{
    int a[10]={2,3,2,5,6,3,1,5,6,3};
    int size=10;
    
    swapAlternate( a , size);
    printArray(a,size);
    
    
    return 0;
}