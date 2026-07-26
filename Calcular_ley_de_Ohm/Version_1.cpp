#include <iostream>
#include <string>
using namespace std;

void Calculo_1(float Valor_1, float Valor_2){
    cout<<"Su Voltaje es: "<<Valor_1*Valor_2<<"V\n";
}
void Calculo_2(float Valor_1, float Valor_2){
    cout<<"Su Intensidad es: "<<Valor_1/Valor_2<<"A\n";
}
void Calculo_3(float Valor_1, float Valor_2){
    cout<<"Su Resistencia es: "<<Valor_1/Valor_2<<"Ohm's\n";
}

int main(){
    char VolverCalc;
    do{
        float VOLT;
        float RESIST;
        float INTENS;
        string Seleccion;
        cout<<"Bienvenido al programa de...\nCALCULAR LA LEY DE OHM\n\nQue calculo quiere hacer?\nV=I.R\nI=V/R\nR=V/I\nSi desea cerrar el programa, escriba CERRAR\n\n";
        cin>>Seleccion;
        if(Seleccion=="V=I.R"){
            cout<<"Ok, introduzca su Intencidad: ";
            cin>>INTENS;
            cout<<"Ahora su Resistencia: ";
            cin>>RESIST;
            Calculo_1(INTENS, RESIST);
        }
        else if(Seleccion=="I=V/R"){
            do{
                cout<<"Recuerde no colocar 0 como valor en esta cuenta\n";
                cout<<"Introduzca su Voltaje: ";
                cin>>VOLT;
                cout<<"Ahora su Resistencia: ";
                cin>>RESIST;
                if(RESIST==0){
                    cout<<"[!]\nNO PUEDE INGRESAR UNA RESISTENCIA DE VALOR 0, VUELA A INTENTARLO!!!\n\n";
                }
            }
            while(RESIST==0);
            Calculo_2(VOLT, RESIST);
        }
        else if(Seleccion=="R=V/I"){
            do{
                cout<<"Recuerde no colocar 0 como valor en esta cuenta\n";
                cout<<"Ok, introduzca su Voltaje: ";
                cin>>VOLT;
                cout<<"Ahora su Intensidad: ";
                cin>>INTENS;
                if(INTENS==0){
                    cout<<"[!]\nNO PUEDE INGRESAR UNA INTENSIDAD CON VALOR 0, VUELVA A INTENTARLO!!!\n\n";
                }
            }
            while(INTENS==0);
            Calculo_3(VOLT, INTENS);
        }
        else if(Seleccion=="CERRAR"){
            return 0;
        }
        cout<<"Quiere calcular otra vez?\ns/n\n\n";
        cin>>VolverCalc;
        cout<<"\n\n";
    }
    while(VolverCalc=='s'||VolverCalc=='S');
    cout<<"Nos vemos en la proxima!\nCerrando programa...";
    return 0;
}