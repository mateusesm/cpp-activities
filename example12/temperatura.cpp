#include <iostream>
using namespace std;

int main() {

 int temperaturas[100];
 int totalTemperatura = 0;
 int totalDias =  0;
 int temperatura = 0;

 while (temperatura != 5) {
   cout << "Informe a temperatura: (Digite 5 para sair)" << endl;
   cin >> temperatura;
   temperaturas[totalDias] = temperatura;
   totalDias++;
   totalTemperatura += temperatura;
   system("clear");
   if (temperatura == 5) {
     cout <<  "Fim da execução." << endl;
   }
 }

 float media = totalTemperatura/totalDias;
 cout << "Média das temperaturas " << media << endl;

 for (int i = 0 ; i < totalDias ; i++) {
   if (temperaturas[i] > media) {
     cout << temperaturas[i] << " ficou acima da media. " << endl;
   }
 }
}