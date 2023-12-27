
#include <iostream>
using namespace std;

int main()
{
    int arr[1000];
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter the elements of an array: ";

    // for inserting elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // outer loop
    for (int i = n - 2; i >= 0; i--)
    {
        bool swapped = 0;

        // inner loop
        for (int j = 0; j <= i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swapped = 1;
                swap(arr[j], arr[j + 1]);
            }
        }

        // checking if swapping has occurred
        if (swapped==0)
            break;
    }

    // print sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
