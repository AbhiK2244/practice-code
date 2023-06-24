#include<iostream>
using namespace std;

int peakSearch(int arr[], int size) {

    int start = 0;
    int end = size-1;

    int mid = start + (end-start)/2;
    while(start < end ) 
    {
        //go to right wala part
        if(arr[mid] < arr[mid + 1]) 
        {
            start = mid + 1;
        }
        else  { //goto left wala part
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return mid;
}

int main() { 
                
    int a[100] = {21,22,23,24,69,100,99,79,78,67,36,26,19};
    int n=10;
   
    int peakIndex = peakSearch(a, n);

    cout << " peak of the given mountain array is at index " << peakIndex << endl;

    return 0;
}