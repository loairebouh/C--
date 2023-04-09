/*
    Variables Naming Rules & Best Practices

  - Naming Rules
  --- Must Be Unique
  --- Case Sensitive
  --- Cannot Start With Numbers
  --- Nums Or Letters Or Underscore
  --- No White Space Or Special Characters
  --- Reserved Keywords "Class, Public"

  - Best Practices
  --- Related Names
  --- Writing Style
*/

#include <iostream>
using namespace std;

int main()
{
    int price = 100; // Declare A New Variable
    price = 200;     // Update The Value
    int Price = 400;
    cout << price;
    cout << "\n===============\n";
    int n1um1111 = 10;
    cout << n1um1111;
    cout << "\n===============\n";
    int _num_bers_ = 100;
    cout << _num_bers_;
    cout << "\n===============\n";
    int publics = 1000;
    cout << publics;
    cout << "\n===============\n";
    int OSAMA = 500; // Bad Style
    cout << OSAMA;
    cout << "\n===============\n";
    int x = 1000;
    cout << x;
    return 0;
}
/*
  Variables Advanced Knowledge
  - Declare Variable Without Value + Change Later
  - Declare Multiple Variables Without Value + Change Later
  - Declare Multiple Variables With Same Value
*/

int second()
{
    int a;
    a = 100;
    cout << a; // 100

    cout << "\n================\n";

    int b, c, d;
    b = 10, c = 20, d = 30;
    cout << b + c + d; // 60 => [10 + 20 + 30]

    cout << "\n================\n";

    int e, f = 40, g;
    e = 20, g = 60;
    cout << e + f + g; // 120

    cout << "\n================\n";

    int h, i, j;
    // h = 10, i = 10, j = 10;
    h = i = j = 10;
    cout << h + i + j; // 30

    return 0;
}
// if we want to declare a constant variable : [const int X = 5]