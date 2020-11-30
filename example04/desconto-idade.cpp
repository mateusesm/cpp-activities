#include <iostream>
using namespace std;

int main() {
  int idade;
  float  valor_ingresso;

  cout << "Digite a sua idade: " << endl;
  cin >> idade;

  cout << endl;

    if ((idade < 18) || (idade >=  60)) {  
      cout << "Desconto concedido!" << endl;
      valor_ingresso = 10;
    } 

    else 
      cout << "Pagamento normal." << endl;
      valor_ingresso = 15;
  
    
    cout << "Valor do ingresso: R$" << valor_ingresso << endl;
    cout << "Fim do programa!" << endl;
}