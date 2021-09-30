#include "Header.h"



char colectName[64];
string colectLogin;
string colectSenha;
int colectIdade;
char colectSexo;
string colectEstado;



void ColetaDados()
{
	cout << "Digite o Nome Completo do Usuario: ";
	cin.ignore(); // Remove a Quebra de Linha do Buffer para o Getline
	cin.getline(colectName, 64); //Pega o conteudo da linha inteira com Espacos e guarda em colectName
	cout << "Digite o Login do Usuario: ";
	cin >> colectLogin;
	cout << "Digite um Senha para o Usuario: ";
	cin >> colectSenha;
	cout << "Digite a Idade: ";
	cin >> colectIdade;
	cout << "Digite o Sexo \'M' ou \'F': ";
	cin >> colectSexo;
	cout << "Digite o Estado UF: ";
	cin >> colectEstado;
}


//Inicio da Parte onde pegamos Pessimamente e Armazenamos os dados do Usuario em um Vetor de Tamanho Fixo
//Se eu tiver mais de 3 Jogadores eu Teria que Recompilar o Programa para criar um Programa Limitado
//Ou eu teria que chutar um numero absurdo para deixar o espa�o na Memoria


char colectNameVector[MAX_USERS_VEC][64]; //3 Usuarios com at� 64 Digitos
string colectLoginVector[MAX_USERS_VEC];
string colectSenhaVector[MAX_USERS_VEC];
int colectIdadeVector[MAX_USERS_VEC];
char colectSexoVector[MAX_USERS_VEC];
string colectEstadoVector[MAX_USERS_VEC];


void ColetaDadosVetor()
{
	for (int i = 0; i < MAX_USERS_VEC; i++)
	{
		cout << "Digite o Nome Completo do Usuario: ";
		cin.ignore(); // Remove a Quebra de Linha do Buffer para o Getline
		cin.getline(colectNameVector[i], 64); //Pega o conteudo da linha inteira com Espacos e guarda em colectName
		if (colectNameVector[i][0] == '0' || strcmp(colectNameVector[i],  "sair") == 0)
		{
			break; //Saida caso digite 0 no nome, ou "sair" no vetor
		}
		cout << "Digite o Login do Usuario: ";
		cin >> colectLoginVector[i];
		cout << "Digite um Senha para o Usuario: ";
		cin >> colectSenhaVector[i];
		cout << "Digite a Idade: ";
		cin >> colectIdadeVector[i];
		cout << "Digite o Sexo \'M' ou \'F': ";
		cin >> colectSexoVector[i];
		cout << "Digite o Estado UF: ";
		cin >> colectEstadoVector[i];

		cout << endl;
	}
		cout << endl;

}



struct Player {
	char colectName[64];
	string colectLogin;
	string colectSenha;
	int colectIdade;
	char colectSexo;
	string colectEstado;
};

Player player1;

void ColetaDados(Player jogador) //Agora com Sobrecarga do Tipo Struct Player, ou Tipo Player
{
	cout << "Digite o Nome Completo do Usuario: ";
	cin.ignore(); // Remove a Quebra de Linha do Buffer para o Getline
	cin.getline(jogador.colectName, 64); //Pega o conteudo da linha inteira com Espacos e guarda em colectName
	cout << "Digite o Login do Usuario: ";
	cin >> jogador.colectLogin;
	cout << "Digite um Senha para o Usuario: ";
	cin >> jogador.colectSenha;
	cout << "Digite a Idade: ";
	cin >> jogador.colectIdade;
	cout << "Digite o Sexo \'M' ou \'F': ";
	cin >> jogador.colectSexo;
	cout << "Digite o Estado UF: ";
	cin >> jogador.colectEstado;
}
