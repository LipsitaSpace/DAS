# Array
It's a collection of similar types of items stored in  contiguous memory locations and elements can be accessed randomly.

There are two types of arrays:
> 1. One Dimensional Array
> 
> 2. Multi Dimensional Array


```cpp
// C++ program to illustrate the traversal
#include <iostream>
using namespace std;

// Function to illustrate traversal in arr[]
void traverseArray(int arr[], int N)
{
    // Iterate from [1, N-1] and print
    // the element at that index
    for (int i = 0; i < N; i++) {
        cout << arr[i] << ' ';
    }
}

// Driver Code
int main()
{
    // Given array
    int arr[] = { 1, 2, 3, 4 };
    // Size of the array
    int N = sizeof(arr) / sizeof(arr[0]);
    // Function call
    traverseArray(arr, N);
}
```
```cpp
// C++ program to illustrate the traversal
// of the 2D array
#include "iostream"
using namespace std;

const int N = 2;
const int M = 2;

// Function to illustrate traversal in arr[][]
void traverse2DArray(int arr[][M], int N)
{

    // Iterate from [1, N-1] and print
    // the element at that index
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
}

// Driver Code
int main()
{

    // Given array
    int arr[][M] = { { 1, 2 }, { 3, 4 } };

    // Function call
    traverse2DArray(arr, N);

    return 0;
}
```

# Strings
string class internally uses character array to store character but all memory management, allocation, and null termination are handled by string class itself

```cpp
// C++ program to illustrate the
// traversal of string
#include "iostream"
using namespace std;

// Function to illustrate traversal
// in string
void traverseString(char str[])
{
    int i = 0;

    // Iterate till we found '\0'
    while (str[i] != '\0') {
        printf("%c ", str[i]);
        i++;
    }
}
// Driver Code
int main()
{

    // Given string
    char str[] = "GeekforGeeks";

    // Function call
    traverseString(str);

    return 0;
}
```

>The string data_type in C++ provides various functionality of string manipulation. They are:
>
> strcpy(): It is used to copy characters from one string to another string.
>
> strcat(): It is used to add the two given strings.
>
> strlen(): It is used to find the length of the given string.
>
> strcmp(): It is used to compare the two given string.
