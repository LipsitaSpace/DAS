# for loop

It's a conditional statement that perform the same task multiple times without duplicating your code.

## syntax
```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        cout << "Hey, Striver, this is the " << i << "'th iteration" << endl;
    }
    return 0;
}
```

## flow chat:
<img width="1024" height="774" alt="image" src="https://github.com/user-attachments/assets/b9706b53-a017-4e6b-a222-9fe4f28a86aa" />

# Nested For Loops

Useful for multi-dimensional data structures. solve complex problems involving multiple iterations.

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "i = " << i << ", j = " << j << endl;
            // Nested loop code
        }
    }
    return 0;
}
```

```cpp
\\To execute different code blocks based on certain conditions during each iteration you can include conditional statements (if, else if, else) within for loop
for (int i = 1; i <= 10; i++) {
    if (i % 2 == 0) {
        // Code for even numbers
    } else {
        // Code for odd numbers
    }
}
```

> we can customise the increment step to achieve specific patterns or iterate a certain number of times.
