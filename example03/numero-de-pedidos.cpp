#include <iostream>
using namespace std;

int main() {
  int num_pedidos_loja = 10;
  int lojas = 3;
  int total_pedidos;
  total_pedidos = lojas * num_pedidos_loja;

  //O Natal está chegando, vamos aumentar o estoque.
  total_pedidos += 2 * total_pedidos;
  cout << "Total de pedidos para o depósito central: " << total_pedidos << endl;
}