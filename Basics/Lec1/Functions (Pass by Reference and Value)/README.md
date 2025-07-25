# Function

It's a block of code that perform certain operation.
We can pass arguments in it.
It reduces repetition and increases code reusability.

### Syntax
```cpp
return_type fun fun_name (arguments) {
    //boday
}
```

### Benifits
<pre>
  1. Code reusability
  2. Divide big problems into smaller chunks (modular programming)
  3. Easier to test and debug
  4. Better readability
</pre>

## Type of function parameter 
### 1. pass by value

When a variable is passed by value, a copy of the variable is sent to the function. 
Any changes made inside the function do not affect the original variable.

```cpp
#include <iostream>
using namespace std;

void increment(int x) {
    x = x + 1;
    cout << "Inside function: x = " << x << endl;
}

int main() {
    int num = 5;
    increment(num);
    cout << "In main: num = " << num << endl;
    return 0;
}
```

### 2. Pass by Reference
When a variable is passed by reference, the function gets access to the original variable.
Any changes made inside the function are reflected outside too.

```cpp
#include <iostream>
using namespace std;

void increment(int &x) {  // & indicates pass by reference
    x = x + 1;
    cout << "Inside function: x = " << x << endl;
}

int main() {
    int num = 5;
    increment(num);
    cout << "In main: num = " << num << endl;
    return 0;
}
```

> Pass by Reference is more memory efficient than Pass by value.


### 2. Pass by Pointer
When you pass a pointer to a function, you are giving that function access to the original variable's memory address.

```cpp
#include <iostream>
using namespace std;

void updateValue(int* ptr) {
    *ptr = *ptr + 10;
    cout << "Inside function: " << *ptr << endl;
}

int main() {
    int a = 5;
    updateValue(&a);  // pass address of a
    cout << "In main: " << a << endl;
    return 0;
}
```


| Feature              | Pointer                | Reference              |
| -------------------- | ---------------------- | ---------------------- |
| Syntax               | `int* p`               | `int& r`               |
| Can be reassigned?   | ✅ Yes                  | ❌ No                   |
| Can be null?         | ✅ Yes (`nullptr`)      | ❌ No                   |
| Need to dereference? | ✅ Yes (`*ptr`)         | ❌ No                   |
| Pass null safely?    | ✅ Yes                  | ❌ No                   |
| Use case             | Dynamic memory, arrays | Simple reference logic |



##  Const Reference (Read-only Reference)
If you want to pass by reference but don’t want to allow modification, use const.
```cpp
void printValue(const int &x) {
    cout << "Value: " << x << endl;
}
```


