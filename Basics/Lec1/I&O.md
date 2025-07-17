# UserInput and UserOutput

library for InputOutput -> #include<iostream>

library for mathmetical functions -> #include<math.h> 

## Generic syntax
<pre>
#include &lt;iostream&gt;
int main() {
  // code
  return 0;
}
</pre>

#### What is a Namespace?
> A namespace in C++ is like a container that holds a group of related functions, classes, variables, etc., to avoid naming conflicts.
#### What is std?
> std stands for standard.
> It is the default namespace for all C++ Standard Library items, such as:
> std::cout, std::cin, std::endl, std::string, std::vector, std::map, std::sort, std::swap, etc.
#### for newline character -> \n or std::endl
> C++ uses buffers to hold data before printing(buffer flushing). "std::endl" tells the program Print the line now without waiting. Useful in debugging or real-time output scenarios. Where "\n" doesn't offer buffer flushing so it's faster
<pre>
  #include&lt;iostream&gt;
  int main() {
    std::cout << "Hey!" << "\n";
    std::cout << "Hey!";
    return 0;
}
</pre>
<pre>
  #include&lt;iostream&gt;
  int main() {
    std::cout << "Hey!" << std::endl;
    std::cout << "Hey!";
    return 0;
}
</pre>

>without 'using namespace std'
<pre>
  #include&lt;iostream&gt;
  int main() {
    std::cout << "Hey!" << std::endl;
    std::cout << "Hey!";
    return 0;
  }
</pre>
>with 'using namespace std'
<pre>
  #include&lt;iostream&gt;
  using namespace std;
  int main() {
    cout << "Hey" << :endl;
    cout << "Hey";
    return 0;
}
</pre>


### To take user input we use "cin>>"
<pre>
  #include&lt;iostream&gt;
  using namespace std;
  int main() {
    int x;
    cin >> x;
    cout << "Value of x: " << x;
    return 0;
  }
</pre>

### for multiple inputs
<pre>
  #include&lt;iostream&gt;
  using namespace std;
  int main() {
    int x;
    int y;
    cin >> x >> y;
    cout << "Value of x " << x << " and y: " << y;
    return 0;
  }
</pre>

#### include <bits/stdc++.h> :
  It is a non-standard, GCC-specific header file that includes almost all standard C++ libraries at once.
  > Syntax: #include <bits/stdc++.h>


shortcut to include all commonly used headers, such as: `<iostream>`, `<vector>`, `<algorithm>`, `<cmath>`, `<map>`, `<set>`, `<unordered_map>`,etc
<pre>
  #include&bits/stdc++.h&gt;
  using namespace std;
  int main() {
    int x;
    int y;
    cin >> x >> y;
    cout << "Value of x: " << x << " and y: " << y;
    return 0;
  }
</pre>
