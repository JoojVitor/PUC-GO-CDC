// https://www.youtube.com/watch?v=89u1I1a9Qm4

#include <iostream>
#include <bitset>
#include <vector>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    double pontoFlutuante;
    cout << "insira um numero: ";
    cin >> pontoFlutuante;
    cout << endl << endl;
    cout << "Numero com ponto Flutuante: " << pontoFlutuante << endl;


    int parteInteira=pontoFlutuante;

    string parteInteiraToBin = bitset<8>(parteInteira).to_string();
    //cout << parteInteiraToBin << endl;

    int parteInteiraToBinInt=stoi(parteInteiraToBin);

    cout << "Parte inteira para binario: " << parteInteiraToBinInt << endl;

    float manticaPt1=pontoFlutuante-parteInteira;
    cout << "Parte flutuante: " << manticaPt1 << endl;

    // tabela

    cout << endl << endl;
    cout << " == TABELA ==" << endl;
    bool parar=false;
    vector<int> jafoi;
    vector<int> INT;

    float manticaPt2=manticaPt1;


    int cont=6;

    int primeiro;
    int cont2=1;
    while(parar!=true)
    {
        double x2;

        // x2

        x2=manticaPt2*2;
        //int jafoi2=x2*10;







        cout << "x2: " << x2 << endl;

        // INT

        int parteInteira=x2;
        cout << "Parte Inteira: " << parteInteira << endl;


        int jafoi2=(x2-parteInteira)*10;
        jafoi.push_back(jafoi2);
        INT.push_back(parteInteira);

        if(cont2==1)
        {
            primeiro=jafoi2;
            //jafoi.pop_back();
        }
        cont2--;
        //cout << primeiro << endl;


        manticaPt2=x2-parteInteira;

        //int achar=manticaPt2*10;



        if(jafoi.back()!=primeiro)
        {
            //cout << "entrou?" << endl;
            for(int i=1; i<jafoi.size();i++)
            {
                //cout << "jafoi: " << jafoi[i] << endl;
                //cout << "primeiro: " << primeiro << endl;
                if(primeiro==jafoi[i])
                {
                    parar=true;
                }
            }
        }




       //cont--;
       //if(cont==0)parar=true;

    }
    cout << " == TABELA == " << endl;
    cout << endl;

    string final0;
    cout << "Ponto Flutuante: ";
    INT.pop_back();
    for(int i=0; i<INT.size(); i++)
    {
        cout << INT[i];
        final0+=to_string(INT[i]);
    }
    cout << endl;

    string final1;
    final1+=to_string(parteInteiraToBinInt);
    final1+=",";
    final1+=final0;

    cout << endl;
    cout << "Final: ";
    cout << final1 << endl;
    cout << endl;
    cout << "Correção: ";
    for(int i=0; i<final1.size();i++)
    {
        if(final1[i]==',')
        {
            char aux;
            char a=final1[i];
            char b=final1[i-1];

            aux=a;
            a=b;
            b=aux;
            final1[i]=a;
            final1[i-1]=b;

        }
    }

    cout << final1 << endl;

}

// cu

