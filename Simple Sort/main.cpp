//URI Online Judge Problem 1042

#include <iostream>

using namespace std;


// An optimized version of Bubble Sort
void bubbleSort(int arr[], int n)
{
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // If no two elements were swapped
        // by inner loop, then break
        if (swapped == false)
            break;
    }
}

// Function to print an array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << endl;
}


int main()
{
    int x,y,z;

    cin >> x >> y >> z;

    int arr[] = {x,y,z};

    bubbleSort(arr, 3);

    printArray(arr, 3);

    cout << endl;

    int arr2 [] = {x,y,z};

    for (int i = 0; i < 3; i++){
            cout << arr2[i] << endl;
    }

    return 0;
}



