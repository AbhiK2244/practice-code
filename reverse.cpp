#include<iostream>
using namespace std;
 
void reverseArray( int a[], int size)
{
    for(int i = 0 ; i < size/2 ; i++)
    swap( a[i] , a[size-i-1]);
}

void printArray(int a[], int size)
{
    for(int i = 0 ; i<size ; i++)
    {
        cout << a[i] << "  ";
    }
}
int main()
{
    int arr[100]= {1,6,4,3,5,7,8,2,7,4,7};
    int n = 11;
    reverseArray(arr,n);
    printArray(arr,n);
}