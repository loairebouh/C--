/*
  Primitive Data Types
  - Modifiers
  --- Modify The Length Of Data => See Limits

  ----- ٍSigned [int, char]
  -------- Store Positive, Negative Integers And 0
  -------- int Is Signed By Default

  ----- Unsigned [int, char]
  -------- Store Positive Only

  ----- Short [int]
  -------- Can Be short Instead of short int

  ----- Long [int, double]
  -------- Store Maximum Value
  -------- Can Be long Instead of long int

  - Type Alias
  --- using identifier = type;
  --- typedef unsigned long UL;

*/

#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int age = 300;
    cout << sizeof(age) << endl; // 4 Bytes

    // new age with short memory size
    short int new_age = 300;
    cout << sizeof(new_age) << endl; // 2 Bytes

    short last_age = 300;
    cout << sizeof(last_age) << endl; // 2 Bytes

    cout << sizeof(short int) << endl;     // 2 Bytes
    cout << sizeof(short) << endl;         // 2 Bytes
    cout << sizeof(long int) << endl;      // 4 Bytes
    cout << sizeof(long) << endl;          // 4 Bytes
    cout << sizeof(long long) << endl;     // 8 Bytes
    cout << sizeof(long long int) << endl; // 8 Bytes

    int num_one = 100;
    signed int num_two = 200;
    cout << num_one << endl;
    cout << num_two << endl;
    return 0;
}