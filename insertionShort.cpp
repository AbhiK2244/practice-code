#include<iostream>
using namespace std;

void sortInsertion( int arr[], int size)
{
    int j;
    for (int i = 1; i < size; i++)
    {                                       // 4 6 2 8 9 3   246893
        int temp = arr[i];
        for ( j = i-1 ; j >= 0 ; j--)
        {
            if ( arr[j] > temp)
            {
                arr[j + 1] =  arr[j];
            }
            else 
            break;
            
        }
        // cout<< j << endl;
        arr[j+1] = temp;
        
    }
    
}
void printarray( int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i] << "  ";
    }
    
}

int main()
{
    int a[10]={4,6,2,8,9,3};
    int n= 6;

    sortInsertion( a , n);
    printarray( a , n );
    return 0;
}