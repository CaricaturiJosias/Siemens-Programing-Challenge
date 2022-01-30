/*
    Questão 1 - Siemens
*/

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int qntMarcados = 2;
    int marcados[qntMarcados] = {3,5};
    string marcadosText[qntMarcados] = {"Foo", "Baa"};
    for(int i=1;i<=100;i++){
        
        string output;
        bool presente = false;
        
        for (int j = 0; j<qntMarcados; j++){
            if (!(i%marcados[j]==0)) continue;
            presente = true;
            if (output.empty()) {output = marcadosText[j];}
            else output += marcadosText[j];
        }
        
        if (!(presente)) cout << i << endl;
        else cout << output << endl; 
    }
}

