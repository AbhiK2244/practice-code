#include<iostream>
using namespace std;

int firstSearch(int arr[], int size, int key) {

    int start = 0;
    int end = size-1;
    int ans = -1;

    int mid = start + (end-start)/2;

    while(start <= end) {

        if(arr[mid] == key) {
            ans = mid;
            end = mid -1;
        }

        //go to right wala part
        else if(key > arr[mid]) {
            start = mid + 1;
        }
        else{ //key < arr[mid]
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    
    return ans;
}

int lastSearch(int arr[], int size, int key) {

    int start = 0;
    int end = size-1;
    int ans = -1;

    int mid = start + (end-start)/2;

    while(start <= end) {

        if(arr[mid] == key) {
            ans = mid;
            start = mid +1;
        }

        //go to right wala part
        else if(key > arr[mid]) {
            start = mid + 1;
        }
        else{ //key < arr[mid]
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    
    return ans;
}


int main() { 
                //0     3 4         9 10      15 16    19 20
    int a[100] = {1,1,1,1,2,2,2,2,2,2,3,3,3,3,3,3,4,4,4,4,5,5};
    int n=22;
    int key = 5;
   

    int firstIndex = firstSearch(a, n, key);

    cout << " first occurance of " << key <<" is at index " << firstIndex << endl;

    int lastIndex = lastSearch(a, n, key);

    cout << " last occurance of " << key <<" is at index " << lastIndex << endl;

    return 0;
}

