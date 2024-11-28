#include <iostream>
using namespace std;

void reverse(int arr[], int size);

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements in array one per line: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "The original array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    reverse(arr, size);
    return 0;
}

void reverse(int arr[], int size)
{
    int *ptr1 = arr;
    int *ptr2 = &arr[size-1];
    while (ptr1 < ptr2)
    {
        int temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
        ptr1++;
        ptr2--;
    }
    cout << "Array after reversal: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<<" ";
    }
}