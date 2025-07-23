# while loop

A while loop is a control structure in programming that repeatedly executes a block of code as long as a specified 
condition remains true. A "while" loop will not execute the code at all if the initial condition is false. It relies 
on the condition being true from the outset for any code execution to occur.

<img width="480" height="330" alt="image" src="https://github.com/user-attachments/assets/cd04ca71-f035-4a8b-b018-949404732dbc" />

# do while loop
>The block executes at least once, because the condition is checked after the block.
### Syntax
```cpp
do {
    // Code to execute
} while (condition);
```

## Optimisation:
<pre>
 1. break: It allows you to exit the loop prematurely, even before the termination condition is met. 
  For example, if you're searching for a value in an array, once you find it, you can break out of 
  the loop instead of continuing to search through the remaining elements.
 2. continue: It skips the current iteration of the loop and moves to the next one. 
  This can be useful when you want to skip certain elements or avoid executing some code under specific conditions.
</pre>
```cpp
#include <iostream>
using namespace std;

int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 6;

    // Using 'break' to exit the loop early when the target is found
    for (int num : numbers) {
        if (num == target) {
            cout << "Target found: " << target << endl;
            break; // Exit the loop immediately
        }
        cout << "Checking: " << num << endl;
    }

    // Using 'continue' to skip specific elements
    for (int num : numbers) {
        if (num % 2 == 0) {
            continue; // Skip even numbers
        }
        cout << "Odd number: " << num << endl;
    }

    return 0;
}
```
