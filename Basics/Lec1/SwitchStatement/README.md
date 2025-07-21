# Switch Case

use when a single variable have to be compare against multiple distinct values

<img width="802" height="926" alt="image" src="https://github.com/user-attachments/assets/d6be8f10-c58b-4f5e-abd6-460945c7417d" />

>  with if-else statements handling complex conditions and switch statements simplifying cases with multiple exact matches.

```cpp
#include <iostream>
using namespace std;

int main() {
    int day = 4;

    switch (day) {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
        default:
            cout << "Invalid";
    }

    return 0;
}
```

## Key Considerations for Switch Case Statements:
<pre>
  1. Requirement for a Constant Expression(A switch statement necessitates that its expression results in a constant value. This can include constants and arithmetic operations.)
  2. Limited to Integer or Character Types(Switch statements are exclusively designed to handle integer or character values. Ensure that the expression provides values of type int or char.)
  3. Significance of the 'Break' Keyword(The 'break' keyword holds significant importance within switch cases. It serves as an exit mechanism from the switch statement. Its omission implies the execution of all subsequent cases.)
  4. Optional Default Case(Optionally, you can include a 'default' case, which executes when none of the case values match. It's not obligatory and can be excluded if not needed.)
  5. Prohibition of Duplicate Case Values(Within a switch statement in C++, duplicates of case values are disallowed. Each case value must be distinct.)
  6. Potential for Nested Switch Statements(While it's possible to nest one switch statement inside another in C++, this practice is generally discouraged due to its potential to introduce complexity and hinder code readability.)
</pre>
