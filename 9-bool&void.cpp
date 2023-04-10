/*
  Primitive Data Types

  - bool => Boolean
  --- Only Two Possible Values [true, false]
  --- Value Is Case Sensitive
  --- When We Use Boolean Values
  ------ Anything Has On/Off, Yes/No, True/False
  --- Test Boolean In Math
  --- Test > And <
  --- Test Data [100, 0, -100, ""]

  - void => Valueless
  --- Without Value
*/
#include <iostream>
using namespace std;

void without_value()
{
    // nothing to return
}

int main()
{
    bool is_open = true;
    cout << is_open + 10 << endl;               // 1 + 10 = 11
    cout << true + true + true + false << endl; // 1 + 1 + 1 + 0 = 3
    bool test_one = 10 > 5;                     // yes ==> true
    bool test_two = 10 > 20;                    // no ==> false
    cout << test_one << endl;
    cout << test_two << endl;
    int num = 1;
    cout << sizeof(test_one) << endl; // 1 byte
    cout << sizeof(num) << endl;      // 4 bytes
    bool num_one = 200;               // 1
    bool num_two = -300;              // 1
    bool num_three = 0;               // 0
    return 0;
}