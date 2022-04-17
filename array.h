#include <iostream>
#include <stdexcept>
#include <bits/stdc++.h>

class ArrayOutOfRange : public std::out_of_range {
 public:
  ArrayOutOfRange() : std::out_of_range("ArrayOutOfRange") {
  }
};

template <typename type, int sz>
class Array {
 public:
  type array[sz];

  type& operator[](int index){
    return array[index];
  }

  type& At(int index){
    if (index < 0 || index >= sz)
      throw ArrayOutOfRange();
    return array[index];
  }

  type& Front(){
    return array[0];
  }

  type& Back(){
    return array[sz - 1];
  }

  type* Data(){
    return array;
  }

  int Size(){
    return sz;
  }

  bool Empty(){
    return !sz;
  }

  void Fill(const type& value){
    for (int i = 0; i < sz; i++){
      array[i] = value;
    }
  }
};