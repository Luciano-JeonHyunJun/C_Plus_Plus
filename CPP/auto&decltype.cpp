#include <iostream>
using namespace std;

int main()
{


     int foo = 0;
     auto bar = foo; // int bar = foo; 와 같음

    int boo = 0;
    decltype(boo) far; // int boo와 같음

    
    return 0;
}
