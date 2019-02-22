#include <iostream>
#include <iomanip>
#include <math.h>
#include <bitset>

using namespace std;

int main()
{
    double tensaoMax=0;
    double tensoes[10];
    double passo=0;
    int qtdBits=0;
    int posicao[10];
    int posicaoCorreta[10];
    string binario="";

    tensoes[0]=0;
    tensoes[1]=0.5;
    tensoes[2]=1;
    tensoes[3]=1.2;
    tensoes[4]=1.5;
    tensoes[5]=2;
    tensoes[6]=2.2;
    tensoes[7]=2.5;
    tensoes[8]=3;

    cout << "Funciona para precisoes de 8, 10 e 12 bits. Digite -1 para encerrar o programa. Qualquer duvida entre em contato. \nRodrigo Lima\n\n";

    while(tensaoMax!=(-1)){
        cout << "Digite a tensao maxima: ";
        cin >> tensaoMax;
        if (tensaoMax==-1) {
            break;
        }
        tensoes[9] = tensaoMax;
        cout << "Digite a quantidade de bits: ";
        cin >> qtdBits;
        passo = tensaoMax/pow(2,qtdBits);
        for(short i=0;i<10;i++){
            if (tensoes[i]==0) {
                posicao[i]=0;
            } else {
                posicao[i] = round(tensoes[i]/passo) - 1;
            }
        }
        for(short i=0;i<10;i++){
            if (qtdBits==8) {
                binario = bitset<8>(posicao[i]).to_string();
                cout << "Voltagem: " << tensoes[i] << ". Posicao: " << posicao[i] << ". Binario: " << binario <<endl;
            }
            if (qtdBits==10) {
                binario = bitset<10>(posicao[i]).to_string();
                cout << "Voltagem: " << tensoes[i] << ". Posicao: " << posicao[i] << ". Binario: " << binario <<endl;
            }
            if (qtdBits==12) {
                binario = bitset<12>(posicao[i]).to_string();
                cout << "Voltagem: " << tensoes[i] << ". Posicao: " << posicao[i] << ". Binario: " << binario <<endl;
            }
        }
        cout << "\n";
    }
    return 0;
}
