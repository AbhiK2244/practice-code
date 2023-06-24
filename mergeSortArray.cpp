#include <iostream>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i = 0, j = 0, k = 0;
    while (i < n || j < m)
    {
        if (j >= m)
        {
            arr3[k++] = arr1[i++];
        }
        else if (i >= n) 
        {
            arr3[k++] = arr2[j++];
        }
        else if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
            arr3[k++] = arr2[j++];
    }
}

void print(int a[], int x)
{
    for (int i = 0; i < x; i++)
        cout << a[i] << "  ";
    cout << endl;
}

int main()
{
    int arr1[10] = {1, 3, 5, 7, 9,11,12,15};
    int n = 8;
    int arr2[10] = {2, 3, 6,8};
    int m = 4;

    int arr3[20];
    int o = n + m;

    merge(arr1, n, arr2, m, arr3);
    print(arr3, o);
}