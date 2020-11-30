#include <iostream>
using namespace std;

int main() {
	int opcao_envio, opcao_sedex;
	float peso_pacote, valor_final;

	cout << "-----------------------------------" << endl;
	cout << " CALCULADORA DE ENVIO DOS CORREIOS " << endl;
	cout << "-----------------------------------" << endl;

	cout << "Escolha a opção de envio: " << endl;
	cout << "1-PAC, 2-SEDEX" << endl;
	cin >> opcao_envio;

	if (opcao_envio == 1) {
		cout << "Insira o peso do pacote em Kg: " << endl;
		cin >> peso_pacote;
		valor_final = 50 * peso_pacote;
		cout << "Opção escolhida: PAC. Peso do pacote: " << peso_pacote << "Kg."
			 << " Valor final do envio: R$" << valor_final << endl;
	} else {
		if (opcao_envio == 2) {
			cout << "1-SEDEX 10, 2-SEDEX Hoje" << endl;
			cin >> opcao_envio;
			if (opcao_envio == 1) {
				cout << "Insira o peso do pacote em Kg: " << endl;
				cin >> peso_pacote;
				valor_final = 100 * peso_pacote;
				cout << "Opção escolhida: SEDEX 10. Peso do pacote: "
					 << peso_pacote << "Kg."
					 << " Valor final do envio: R$" << valor_final << endl;
			}
			if (opcao_envio == 2) {
				cout << "Insira o peso do pacote em Kg: " << endl;
				cin >> peso_pacote;
				valor_final = 150 * peso_pacote;
				cout << "Opção escolhida: SEDEX Hoje. Peso do pacote: "
					 << peso_pacote << "Kg."
					 << " Valor final do envio: R$" << valor_final << endl;
			}
		}
	}

	cout << "---------------" << endl;
	cout << "    F I M :)   " << endl;
	cout << "---------------" << endl;
}