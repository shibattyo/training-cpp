#include "function.h"

int Function::max(int a, int b) {
  if(a > b) {
    return a;
  }
  return b;
}

int Function::min(int a, int b) {
  if (a > b) {
    return b; 
  }
  return a;
}

