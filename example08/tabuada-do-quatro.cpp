#include <iostream>
using namespace std;

int main() {
  int i;
  int j;

  cout << endl;

  for (i = 1 ; i <= 4 ; i++) {
    for (j = 1 ; j <= 4 ; j++) {
      cout << i << "X" << j << " = " << i * j << endl;
    }
  } 
}