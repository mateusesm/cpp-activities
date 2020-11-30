#include <iostream>
using namespace std;

int main() {
  int i;

  for (i = 0 ; i < 10 ; i += 2) {
    int  j = i;
    while (j > 1) {
      j/= 2;
      cout << i << " " << j << endl;
    }
  }
}