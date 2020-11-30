#include <iostream>
using namespace std;

int main() {

  int poltronas[18][4]{};
  int classe, poltrona, fila, l, c;

  while (classe !=4) {
    cout << endl;
    cout << "=======================" << endl;
    cout << " 1 - Primeira Classe   " << endl;
    cout << " 2 - Classe Econômica  " << endl;
    cout << " 3 - Listar            " << endl;
    cout << " 4 - Sair              " << endl;
    cout << "=======================" << endl;
    cout << "Escolha uma opção: ";
    cin >> classe;
    
    if (classe ==1) {
      cout << "Escolha sua fila: " << endl;
      for (int f=0; f<4; f++) {
        cout <<"("<<(f+1)<<")"<<" F" << (f+1) <<endl;

      }
      cin >> fila;
        if ((fila<=0)||(fila>4)) {
          cout << "Erro! Opção inválida.";
        }
        else if ((fila>=1)||(fila<=4)) {
          cout << "Escolha a sua poltrona: "<< endl;
          cout << "1-A, 2-B, 3-C, 4-D" << endl;
          cin>>poltrona;
        }
        
        poltronas[fila-1][poltrona-1] = 1;
       
      }
      
    if (classe == 2){
        cout << "Escolha sua fila: " << endl;
        for (int f=4; f<18; f++) {
        cout <<"("<<(f+1)<<")"<<" F" << (f+1) << endl;
        
        }
        cin >> fila;
         if ((fila<=4)||(fila>18)) {
           cout << "Erro! Opção inválida.";
        }
        else if ((fila>=5)||(fila<=18)) {
          cout << "Escolha a sua poltrona: "<< endl;
          cout << "1-A, 2-B, 3-C, 4-D" << endl;
          cin>>poltrona;
        }
        poltronas[fila-1][poltrona-1] = 1;
      }

    system("clear");
    
    if (classe == 3) {
      cout << "Fila" <<"\t"<< "A\tB\tC\tD" <<" "<< endl;
      for (l = 0 ; l<18 ; l++) {
          cout << "F" << (l+1) <<"\t" <<"    ";
        for (c = 0; c<4; c++) {
          if (poltronas[l][c]!=0){
            cout << "X\t";
          }
          else {
            cout << "-\t";
          }
        }
        cout << endl;
      }
    }
  }
  cout << "Fim da execução." << endl;
}