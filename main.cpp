#include <iostream>
#include "array.h"

using namespace std;

int main() {
  Array<int, 5>a{3,4,6,7,9};
  auto i = a.Data();
  i++;
  cout << *i;
}
