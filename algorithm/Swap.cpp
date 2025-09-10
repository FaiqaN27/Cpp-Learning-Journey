#include<iostream>
using namespace std;

int main() {
  int a = 10;
   int b = 4;
   int temp = a;
   a = b;
   b = temp;
   cout <<"a = "<<a << endl 
        <<"b = "<<b;
   return 0;
}