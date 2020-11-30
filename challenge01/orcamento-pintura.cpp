#include <iostream>
using namespace std;

int main() {
  float largura_parede;
  float altura_parede;
  float area_parede;
  float area_tinta;
  float preco_tinta;
  float valor_maodeobra;
  float orcamento;
  int lata_tinta;
  
  cout << "-----------------------------------------" << endl;
  cout << "  CALCULADORA DE ORÇAMENTOS PARA PINTURA" << endl;
  cout << "-----------------------------------------" << endl;
  
  cout << "Qual a largura da parede?" << endl;
  cin >> largura_parede;
  cout << "Qual a altura da parede?" << endl;
  cin >> altura_parede;
  area_parede = largura_parede * altura_parede;

  cout << "Qual a área que 1 lata de tinta cobre?" << endl;
  cin >> area_tinta;

  cout << "Quanto custa 1 lata de tinta?" << endl;
  cin >> preco_tinta;

  cout << "Qual o valor da mão de obra do pintor?" << endl;
  cin >> valor_maodeobra;

orcamento = preco_tinta + valor_maodeobra;
lata_tinta = area_parede/area_tinta;

cout << "Para pintar os " << area_parede << " metros quadrados, são necessárias " << lata_tinta << " latas de tinta. Orçamento final: R$" << orcamento << endl;

cout  << "------------" << endl;
cout  << "   FIM! :)  " << endl;
cout  << "------------" << endl;
}