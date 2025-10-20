#include <iostream>

using namespace std;

class No{
public: 
    int dado;
    No* prox;
    No* ant;

    No(){}

    No(int elemento){
        this->dado = elemento;
        this->ant = nullptr;
        this->prox = nullptr;    
    }
};


class Lista {
private:
    No* prim;
    No* fim;
    int qtde;
    
public:
    Lista(){
        this->prim = nullptr;
        this->fim = nullptr;
        this->qtde = 0;
    }

    ~Lista() {

    }

    bool anexar(int elemento){
        No* novo = new No(elemento);

        if (this->fim == nullptr){
            this->prim = novo;
        } else {
            this->fim->prox = novo;
            novo->ant = this->fim;            
        }
        this->fim = novo;
        this->qtde++;
        return true;
    }

    void print() {
        cout << "[";
        No* aux = this->prim;
        while(aux != nullptr){
            cout << aux->dado << " ";
            aux = aux->prox;
        }
        cout << "]";
    }
    void printInverso() {
        cout << "[";
        No* aux = this->fim;
        while(aux != nullptr){
            cout << aux->dado << " ";
            aux = aux->ant;
        }
        cout << "]";
    }


};