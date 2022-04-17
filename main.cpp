#include <iostream>
#include "array.h"

using namespace std;

int main() {
  Array<int, 7>a{};
  a.Fill(5);
  cout << a[4];
}
