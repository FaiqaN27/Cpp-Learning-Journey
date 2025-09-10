#include <iostream>
using namespace std;

// pass by value getting copy of value only change within specific function
void doSomething(int num)
{
  cout << num << endl;
  num += 10;
  cout << num << endl;
  num += 5;
  cout << num << endl;
}

// pass by reference by adding '&' it will get address and update the original value
void stringSomething(string &str)
{
  str[0] = 't';
  cout << "From Function" << endl;
  cout << str << endl;
}

// array always pass by reference means it always updates the original value
void arraySomething(int arr[])
{
  arr[0] += 19;
  cout << "Value Inside Function: " << arr[0] << endl;
}

int main()
{
  cout << "Pass by value" << endl;
  int num = 10;
  doSomething(num);
  cout << num << endl;

  cout << "Pass by reference" << endl;
  string str = "raj";
  stringSomething(str);
  cout << "From main function" << endl;
  cout << str << endl;

  cout << endl
       << "Array Always pass by reference" << endl;
  int n = 5;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  arraySomething(arr);

  cout << "Value inside main function: " << arr[0] << endl;

  return 0;
}