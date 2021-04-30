#include <iostream>
using namespace std;

    void executaPrograma(){
    
        char op;
        int rodando = 1;
        
        while(rodando){
            cin >> op;
            switch (op){
            case 'a': 
                cout << "a";
                break;
            case 'b': 
                cout << "b";
                break;
            case 'c': 
                cout << "c";
                break;
            case 'd': 
                cout << "d";
                break;
            case 'e': 
                cout << "e";
                break;
            case 'f': 
                cout << "f";
                break;
            case 'g': 
                cout << "g";
                break;
            //Fechar o programa
            case 'x':
                cout << "x";
                rodando = 0;
                break;
            default:
                cout << "Adicione uma entrada valida !" << endl;
                break;
            }
        }
    }

