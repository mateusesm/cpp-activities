#include <iostream>
using namespace std;

int main() {
  int vale_alimentacao[5];
  int i;

  for (i = 0 ; i < 5 ; i++) {
    vale_alimentacao[i] = 30;
  }
  for (i = 0 ; i < 5 ; i++) {
    cout << "O funcionário " << i << " " << vale_alimentacao[i] << endl;
  }
} 