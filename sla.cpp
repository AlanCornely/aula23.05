#include <iostream>

using namespace std;

//função que imprime a mensagem de escolha
void opcao1(){
    cout << "você escolheu a opção 1." << endl;
}
void opcao2(){
    cout << "você escolheu a opção 2." << endl;
}
void opcao3(){
    cout << "você escolheu a opção 3." << endl;
}

int main(){
    int escolha;

    do {
        //menu
        cout << "====menu====" << endl;
        cout << "1. opção 1" << endl;
        cout << "2. opção 2" << endl;
        cout << "3. opção 3" << endl;
        cout << "4. sair" << endl;
        cout << "escolha uma opção";
        cin >> escolha;
        //switch case para as opções do menu
        switch(escolha){
            case 1: opcao1(); break;
            case 2: opcao2(); break;
            case 3: opcao3(); break;
            case 4: 
            cout<< "programa encerrado."<< endl;
            break;
            default:
            cout << "opção invalida. tente novamente." << endl;
            break;
        }
    } while (escolha != 4);
    return 0;
}