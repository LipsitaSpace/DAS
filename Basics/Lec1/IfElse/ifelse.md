# If-Else
conditional statement

if condition is true it will exicute if body, otherwise else body.

<img width="892" height="494" alt="image" src="https://github.com/user-attachments/assets/9547b41d-edd6-42f5-aaec-bf05628762fd" />


```cpp
  #include<bits/stdc++.h>
  using namespace std;
  int main() {
  int age=10;
  if (age >= 18) {
      cout << "You are an adult." << endl;
  } else {
      cout << "You are not an adult." << endl;
    }
  }
```
For multiple conditions we can use else if statement

```cpp
  #include <iostream>
  using namespace std;
  int main() {
      int marks = 54;
      if (marks < 25) {
          cout << "Grade: F" << endl;
      } else if (marks >= 25 && marks <= 44) {
          cout << "Grade: E" << endl;
      } else if (marks >= 45 && marks <= 49) {
          cout << "Grade: D" << endl;
      } else if (marks >= 50 && marks <= 59) {
          cout << "Grade: C" << endl;
      } else if (marks >= 60 && marks <= 69) {
          cout << "Grade: B" << endl;
      } else if (marks >= 70) {
          cout << "Grade: A" << endl;
      } else {
          cout << "Invalid marks entered." << endl;
      }
      return 0;
}
```
