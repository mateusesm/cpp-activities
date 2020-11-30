#include <iostream>
using namespace std;

int main() {

  int produto_codigo_barras[100];
  float produto_preco[100];
  int produto_ano[100];

  //Produto #1
  produto_codigo_barras[0] = 87945874;
  produto_preco[0] = 21.8;
  produto_ano[0] = 2020;

  //Produto #2
  produto_codigo_barras[1] = 58632111;
  produto_preco[1] = 104.5;
  produto_ano[1] = 2018;

  for (int i = 0 ; i < 2 ; i++) {
    cout << "Produto " << (i+1) << endl;
    cout << "Código de barras: " << produto_codigo_barras[i] << endl;
    cout << "Preço: " << produto_preco[i] << endl;
    cout << "Ano: " << produto_ano[i] << endl;
    cout << endl;
  }
  cout << "Fim da execução.";
}