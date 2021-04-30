#include <iostream>

using namespace std;

int main(){
    char op;
    int rodando = 1;
    
    while(rodando){
        cin >> op;
        switch (op){
        case 'a': 
            break;
        case 'b': 
            break;
        case 'c': 
            break;
        case 'd': 
            break;
        case 'e': 
            break;
        case 'f': 
            break;
        case 'g': 
            break;
        //Fechar o programa
        case 'h':
            rodando = 0;
            break;
        default:
            cout << "Adicione uma entrada valida !" << endl;
            break;
        }
    }
    return 0;
}