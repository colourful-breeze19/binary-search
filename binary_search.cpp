//C++ program to implement recursive Binary Search
#include <bits/stdc++.h>
using namespace std;

// A recursive binary search function. It returns
// location of key in given array arr[low..high] is present,
// otherwise -1
int binarySearch(int arr[], int low, int high, int key)
{
    if (high >= low) {
        int mid = low + (high - low) / 2;

        // If the element is present at the middle
        // itself
        if (arr[mid] == key)
            return mid;

        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > key)
            return binarySearch(arr, low, mid - 1, key);

        // Else the element can only be present
        // in right subarray
        else
        return binarySearch(arr, mid + 1, high, key);
    }

    // We reach here when element is not
    // present in array
    return -1;
}

int main()

{
    int n,i,key,arr[50];
    cout<<"enter array size \n";
    cin>>n;
   cout<<"enter elements \n";
   for(i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   cout<<"enter key to be searched ";
   cin>>key;

    int result = binarySearch(arr, 0, n - 1, key);
    (result == -1) ? cout << "Element is not present in array"
                   : cout << "Element is present at index " << result;
    return 0;
}
