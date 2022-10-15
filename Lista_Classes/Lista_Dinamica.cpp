#include <iostream>
#include <string.h>

using namespace std;

class Aluno {

	public:
		int mat;
		char nome[23];
		Aluno *prox;
		
};

class Alunos {

	public:
		Aluno *inicio;
		Aluno *fim;
	
	    Alunos() {
	    	inicio = NULL;
	    	fim = NULL;
		}

		void inserirNoFinal(int m, const char n[23]) {
			Aluno *novo = (Aluno*)malloc(sizeof(Aluno));
			novo -> mat = m;
			strcpy(novo -> nome, n);
			novo -> prox = NULL;

			if (fim == NULL) {
				inicio = novo;
				fim = novo;
			} else {
				fim -> prox = novo;
				fim = novo;
			}
		}
		
			
		int lst_vazia() {
			return (inicio == NULL);
		}


		void inserirNoInicio(int m, const char n[23]) {
			Aluno *novo = (Aluno*)malloc(sizeof(Aluno));
			novo -> mat = m;
			strcpy(novo -> nome, n);
			novo -> prox = NULL;

			if (lst_vazia()) {
				inicio = novo;
				fim = novo;
			} else {
				novo -> prox = inicio;
				inicio = novo;
			}
		}


		void listar() {
			if (lst_vazia()) {
				cout << "\nLista vazia!!!\n";
			} else {
				Aluno *atual = inicio;

				while (atual != NULL) {
					cout << atual -> mat << " - ";
					cout << atual -> nome << endl;
					atual = atual -> prox;
				}
			}
		}
			
		
		void remover(int mat) {
			if (lst_vazia()) {
				cout << "\n\nLista vazia!!!";
			} else {
				Aluno *atual = inicio;
				Aluno *anterior = NULL;

				while (atual != NULL) {
					if (atual -> mat == mat) {

						if (atual == inicio) {
							inicio = inicio -> prox;

						} else {
							if (atual == fim) {
								fim = anterior;
								anterior -> prox = NULL;

							} else {
								anterior -> prox = atual -> prox;
								free(atual);
							}
						}
						cout << "\nAluno removido!\n" << endl;
						break;

					} else {
						if (atual -> prox == NULL) {
							cout << "\nAluno nao encontrado!\n";
							break;
						}
					} 
					anterior = atual;
					atual = atual -> prox;
				}
			}
		}


		void consultar(int mat) {
			if (lst_vazia()) {
				cout << "\nLista vazia!!!";
			} else {
				Aluno *atual = inicio;

				if (atual != NULL) {

					while (atual != NULL) {
						if (atual -> mat == mat) {
							cout << "\n" << atual -> mat << " - ";
							cout << atual -> nome << endl << endl;
							break;

						} else {
							if (atual -> prox == NULL) {
								cout << "\nAluno nao existe!" << endl << endl;
								break;
							}
						}
						atual = atual -> prox;
					}
				}
			}
		}


		void removeTodos() {
			Aluno *atual = inicio;
			Aluno *proximo;

			while (atual != NULL) {
				proximo = atual -> prox;
				cout << "\nApaga: " << atual -> mat;
				cout << " - " << atual -> nome;
				free(atual);
				atual = proximo;						
			}
			inicio = atual;
			cout << endl;
		}
		

		void listaInversa() { // criar uma nova lista que seja o inverso da primeira
			Alunos *l2 = new Alunos();

			for(Aluno *i = inicio; i != NULL; i = i -> prox) {
				Aluno *novo = (Aluno*)malloc(sizeof(Aluno));
				novo -> mat = i -> mat;
				strcpy(novo -> nome, i -> nome);
				novo -> prox = NULL;

				if (l2 -> inicio == NULL) { //LISTA ESTA VAZIA
					l2 -> inicio = novo;
					l2 -> fim = novo;
				}
				else { //lista ja existe
					novo->prox = l2 -> inicio;
					l2 -> inicio = novo;
				}
			}
			cout << "Lista 2 ----------------\n" << endl;

			l2 -> listar();
			l2 -> removeTodos();
			l2 -> listar();

			cout << "------------------------" << endl;
		}
		

		void listaInvertida() { // inverter a propria lista
			Aluno *anterior = inicio;
			Aluno *atual = anterior -> prox;
			Aluno *pos;
			
			if (atual == NULL) {
				cout << "\nElementos insuficientes para inversao!!!\n";
			} else {
				while (atual != NULL) {
					pos = atual -> prox;
					atual -> prox = anterior;
					anterior = atual;
					atual = pos;
				}
				inicio -> prox = NULL;
				pos = inicio;
				inicio = fim;
				fim = pos;
			}
		}

};


int main() {

	Alunos *l = new Alunos();

	l -> inserirNoFinal(3, "Joao");
	l -> inserirNoFinal(4, "Gabriela");
	l -> inserirNoFinal(5, "Fabiola");

	l -> inserirNoInicio(2, "Pedro");
	l -> inserirNoInicio(1, "Marcio");

	l -> listar();

	l -> remover(2);

	l -> listar();

	l -> consultar(2);

	l -> listaInversa();

	l -> listaInvertida();

	l -> removeTodos();

	l -> listar();

	return 0;
}
