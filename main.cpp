#include <iostream>
#include "array.h"

using namespace std;

int main() {
  Array<int, 0>a{};
  cout << a.Empty();
}
