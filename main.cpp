#include <iostream>

//protótipos:
void calcularInt_comDouble();

void exibirEmNotacao_eDecimal();

void diasHoras_eSegundos();

void valoresDivididos_porApostas();

//funções:

int main() {
	// Exercício 01:
	calcularInt_comDouble();

	// Exercício 02:
	exibirEmNotacao_eDecimal();

	// Exercício 03:
	diasHoras_eSegundos();

	// Exercício 04:
	valoresDivididos_porApostas();

}

void calcularInt_comDouble() {
	double x1 = 0.0, x2 = 0.0;

	std::cout << "Digite o valor x1: "; std::cin >> x1;
	std::cout << "\nDigite o valor x2: "; std::cin >> x2;

	std::cout << "\nA adicao inteira dos valores e " << int(x1) + int(x2) << "\n\n";
}

void exibirEmNotacao_eDecimal() {
	double flutuante = 0.0;

	std::cout << "Digite um ponto flutuante: "; std::cin >> flutuante;

	std::cout << "\nNotacao padrao: " << flutuante
		<< std::scientific << "\nNotacao cientifica: " << flutuante;

	// std::cout.fixed; e std::cout << std::fixed; não são o mesmo tipo de atribuição ao cout.
	std::cout << std::fixed;
	std::cout.precision(2);

	std::cout << "\nNotacao decimal: " << flutuante << "\n\n";
}

void diasHoras_eSegundos() {

	int segundos = 0;

	std::cout << "Entre com o numero em segundos: "; std::cin >> segundos;

	// Para fins didáticos, deixarei a operação com o caminho desde de segundos totais até os segundos que restam.
	std::cout << segundos << "segundos = " << segundos / (60 * 60 * 24) << " dias "
		<< segundos % (60 * 60 * 24) / (60 * 60) << " horas "
		<< segundos % (60 * 60 * 24) % (60 * 60) / 60 << " minutos "
		<< segundos % (60 * 60 * 24) % (60 * 60) % 60 % 60 << " segundos\n\n";
}

void valoresDivididos_porApostas() {

	double jogador1 = 0.0, jogador2 = 0.0, premio = 0.0;

	std::cout << "Digite a quantida apostada pelo jogador 1: "; std::cin >> jogador1;
	std::cout << "\nDigite a quantida apostada pelo jogador 2: "; std::cin >> jogador2;
	std::cout << "\nDigite o valor do premio: "; std::cin >> premio;

	// Descobre a participação (porcentagem) que o jogador 1 e 2 tem sobre o total = jogador 1 + jogador 2.
	double participacao_jogador1 = jogador1 / (jogador1 + jogador2);

	double participacao_jogador2 = jogador2 / (jogador1 + jogador2);

	// A operação será feita em double nos registradores e depois convertida para int.
	double jogadorA_Premio = premio * participacao_jogador1;
	double jogadorB_Premio = premio * participacao_jogador2;

	std::cout << "\nO jogador 1 tem direito a R$" << int (jogadorA_Premio);
	std::cout << "\nO jogador 2 tem direito a R$" << int (jogadorB_Premio);

}
