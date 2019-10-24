#ifndef RECORD_CLASS
#define RECORD_CLASS

#define TITULO_SIZE 300
#define AUTORES_SIZE 150
#define ATUALIZACOES_SIZE 20
#define SNIPPET_SIZE 1024

#include <iostream>
#include <cstring>
using namespace std;

class Record{
    public:        
        int id;
        char titulo[TITULO_SIZE];
        int ano;
        char autores[AUTORES_SIZE];
        int citacoes;
        char atualizacoes[ATUALIZACOES_SIZE];  //XX-XX-XXXX XX:XX:XX
        char snippet[SNIPPET_SIZE];

        Record(){};
        Record(int id, char titulo[TITULO_SIZE], int ano, char autores[AUTORES_SIZE], int citacoes, char atualizacoes[ATUALIZACOES_SIZE], char snippet[SNIPPET_SIZE]){
            
            this->id = id;
            this->ano = ano;
            this->citacoes = citacoes;

            memcpy(this->titulo, titulo, TITULO_SIZE);
            memcpy(this->autores, autores, AUTORES_SIZE);
            memcpy(this->atualizacoes, atualizacoes, ATUALIZACOES_SIZE);
            memcpy(this->snippet, snippet, SNIPPET_SIZE);

        };

        ~Record(){};

        void print(){
            cout << "Id: " << id << endl;
            cout << "Titulo: " << titulo << endl;
            cout << "Ano: " << ano << endl;
            cout << "Autores: " << autores << endl;
            cout << "Citações: " << citacoes << endl;
            cout << "Atualizações: " << atualizacoes << endl;
            cout << "Snippet: " << snippet << endl;
            cout << endl;
        };
};
#endif