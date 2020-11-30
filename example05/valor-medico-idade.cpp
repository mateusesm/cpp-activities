#include <iostream>
using namespace std;

int main() {

  int idade = 10;
  float custo;

  if (idade < 3) {
    custo = 0.0;
  }

  else if (idade <= 5) {
    custo = 1.0;
  }

  else if (idade <= 10) {
    custo = 3.0;
  }

  else if (idade <= 17) {
    custo = 5.0;
  }

  else {
    custo = 6.0;
  }
  
  cout << "O custo foi de: R$" << custo << endl;
}