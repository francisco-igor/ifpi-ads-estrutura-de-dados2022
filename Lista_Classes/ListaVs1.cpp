#include <iostream>

using namespace std;

typedef struct aluno {
	int mat;
	string nome;
} Aluno; 

Aluno lista[30];


void incluirDesordenado(Aluno e) {
	int f = 30;

    for (int i = 0; i < f; i++) {
        if (lista[i].mat == 0) {
            lista[i].mat = e.mat;
            lista[i].nome = e.nome;
            f = 0;
	    }
    }
}


int procura(int mat) { //retorna a posicao do elemento procurado
	for (int i = 0; i < 30; i++) {
        if (lista[i].mat == mat) {
            return i;
        }
    }
	return -1;
}


void mostrar(int pos) { //recebe a posicao e imprime o elemento na tela
	for (int i = 0; i < 30; i++) {
        if (i == pos) {
            cout << lista[i].mat << endl;
            cout << lista[i].nome << endl;
        }
    }
}

//procura o elemento e depois mostra o elemento encontrado (se nao for encontrado informa q ele nao existe)
void consultar(int mat) {
	int cont = 0;
	
	for (int i = 0; i < 30; i++) {
	    if (lista[i].mat == mat) {
            cout << lista[i].mat << endl;
            cout << lista[i].nome << endl << endl;
            cont++;
        }
    }
    if (cont == 0) {
		cout << "Elemento nao existe!" << endl;
    }
}

//estrat�gia 1: colocar o ultimo elemento da lista na posi��o do elemento removido
void remover00(int pos) {
	int i = 0;

	while (lista[i].mat != 0) {
		i++;
	}
    i--;

	for (int j = 0; j < i; j++) {
		if (j == pos) {
			lista[j].mat = lista[i].mat;
			lista[j].nome = lista[i].nome;

            lista[i].mat = 0;
	        lista[i].nome = "";
		}
	}
}

//estrat�gia 2: mover TODOS os elementos que est�o AP�S  o elemento que deve ser removido UMA POSI��O A FRENTE.
void remover01(int pos) {
	for (int i = 0; i < 30; i++) {

		if (i == pos) {
			for (i; i < 30; i++) {
				lista[i].mat = lista[i+1].mat;
				lista[i].nome = lista[i+1].nome;
			}
		}
	}
}


main() {
	
}
