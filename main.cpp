#include <iostream>

//protótipos:
void calcularInt_comDouble();

void exibirEmNotacao_eDecimal();

void diasHoras_eSegundos();

void valoresDivididos_porApostas();

void divisaoInteira();

void descompactarOperacao();

void distanciaPecorrida();

void flutuante_eTypeCast();

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

	// Atividade de fixação:
	// Atividade 01:

	// O professor não específicou o formato de preenchimento da tabela
	// presente em: https://github.com/JudsonSS/ProgComp/blob/master/Labs/Lab09/Lab09.pdf
	// Não há uma forma clara definida, como também nenhuma formatação, apenas a instrução: "Responda preenchendo a tabela".
	// De tal modo, o que restou é a execução literal do que se pede.

	//    | a | b | c |
	//  1 | 3 |   |   |
	//  2 |   | 4 |   |
	//  3 |   |   | 1 |
	//  4 | 5 |   |   |
	//  5 |   | 4 |   |
	//  6 |   | 2 |   |

	// Atividade 02:
	divisaoInteira();

	// Atividade 03:
	descompactarOperacao();

	// Atividade 04:
	distanciaPecorrida();

	// Atividade 05:
	flutuante_eTypeCast();

}

void calcularInt_comDouble() {
	double x1 = 0.0, x2 = 0.0;

	std::cout << "Digite o valor x1: "; std::cin >> x1;
	std::cout << "\nDigite o valor x2: "; std::cin >> x2;

	std::cout << "\nA adicao inteira dos valores e\' " << int(x1) + int(x2) << "\n\n";
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

	// Para fins didáticos, deixarei a operação com o caminho de operações desde de segundos totais até os segundos que restam.
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

	std::cout << "\nO jogador 1 tem direito a R$" << int(jogadorA_Premio);
	std::cout << "\nO jogador 2 tem direito a R$" << int(jogadorB_Premio);

}

void divisaoInteira() {
	int x1 = 0, x2 = 0;
	std::cout << "\nDigite dois números inteiros: "; std::cin >> x1 >> x2;

	std::cout << "O quociente de " << x1 << "/" << x2 << " e " << x1 / x2;
	std::cout << "O resto da divisao " << x1 << "%" << x2 << " e " << x1 % x2;
}

void descompactarOperacao() {
	const int decimal = 100; // Valor constante.
	float valor = 0;
	int parteReal = 0, parteDecimal = 0;
	std::cout << "\nDigite um numero real: "; std::cin >> valor;

	parteReal = int(valor);
	parteDecimal = int(valor * 10) % decimal;
	std::cout << "\nA parte real " << parteReal;
	std::cout << "\nO resto da divisao " << parteDecimal;
}

void distanciaPecorrida() {
	const int km_emMetros = 1000;
	int distancia = 0;

	std::cout << "\nEntre com a distancia percorrida em metros: "; std::cin >> distancia;

	int km = distancia / km_emMetros;
	int metro = distancia % km_emMetros;

	std::cout << "\n" << distancia << "metros equivalem a " << km << " quilometros e " << metro << " metros. ";
}

void flutuante_eTypeCast() {

	const int multiplicador = 100;
	double flutuante = 245.795;
	int valorInteiro = int(flutuante);

	int resultadoFlutuante = flutuante * multiplicador;
	int resultado_valorInteiro = valorInteiro * multiplicador;

	std::cout << "\n\nO resultado dos valores de " << flutuante << " e sua parte inteira " << valorInteiro
		<< "\napos a multiplicacao por 100 e\': "
		<< "\nFlutuante: " << resultadoFlutuante
		<< "\nInteiro: " << resultado_valorInteiro;

	std::cout << "\n\nIsso mostra que converter um flutuante em inteiro "
		<< "\nseja usando Type Cast ou usando ou metodo,"
		<< "\nfara o valor convertido perder parte de sua informacao. \n\n";
}