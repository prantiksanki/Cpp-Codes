 #include <iostream>
using namespace std;

int main() {
    int arr[50];
    int n, i, j;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    cout << "Enter elements (only 0s and 1s): ";
    for (i = 0; i < n; i++)

    {
        cout << "Enter element : ";
        cin >> arr[i];
    }

    // Sort the array in place
    int left = 0, right = n - 1;
    while (left < right)

        {
        while (arr[left] == 0 && left < right)

         {
            left++;
        }
        while (arr[right] == 1 && left < right)

         {
            right--;
        }
        if (left < right)

        {
            arr[left] = 0;
            arr[right] = 1;
            left++;
            right--;
        }
    }

    cout << "The sorted array is: ";
    for (i = 0; i < n; i++)

    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
