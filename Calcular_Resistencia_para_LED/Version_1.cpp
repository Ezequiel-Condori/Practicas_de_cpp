//Para esta version, haremos algo similar al codigo anterios (Calculadora de ley de Ohm), pero con algunas modificaciones:
#include <iostream>
#include <string>
using namespace std;

void ResistLED(float Valor_1, float Valor_2){
    if(Valor_1<=Valor_2){
        cout<<"Ese Voltaje no va a alcanzar para encender su LED, pruebe usando una mayor cantidad :]";
    }
    float IntensLED=0.02;
    float VoltFinal=Valor_1-Valor_2;
    cout<<"La Resistencia que deberia usar es de valor: "<<VoltFinal/IntensLED<<"Ohm's\n\n";
}

int main(){
    char VolverCalc;
    do{
        float VoltFuente;
        float VoltLED;
        string Opcion;

        cout<<"Hola nuevamente, con este programa, usted podra saber cual es la Resistencia ideal para su LED, basandonos en el Voltaje de fuente, y el tipo de color del LED.\n Todo se realiza mediante este calculo:   Vfuente-Vled\n R=-----------\n      Iled\n\nPrimero, ingrese el color de su LED:\n\n-INFRAROJO - 1.5V\n-ROJO - 2V\n-NARANJA - 2.1V\n-AMARILLO - 2.1V\n-VERDE_ESTANDAR - 2.2V\n-VERDE_ESMERALDA(BRILLO_ALTO) - 3.2V\n-AZUL - 3.2V\n-BLANCO - 3.3V\n-ULTRAVIOLETA - 3.4V\n\nLos valores de Voltaje del LED se usa un Voltaje tipico o aproximando, y usamos una Intensidad tipica de 20mA\n\nRecuerde que, en todos nuestros programas, usted puede salir escribiendo CERRAR";
        cin>>Opcion;
        if(Opcion=="CERRAR"){
            cout<<"Cerrando programa...";
            return 0;
        }
        cout<<"Ahora ingrese el Voltaje de la fuente a la cual piensa conectar:";
        cin>>VoltFuente;
        if(Opcion=="INFRAROJO"){
            VoltLED=1.5;
            ResistLED(VoltFuente, VoltLED);
        }
        else if(Opcion=="ROJO"){
            VoltLED=2;
            ResistLED(VoltFuente, VoltLED);
        }
        else if(Opcion=="NARANJA"||Opcion=="AMARILLO"){
            VoltLED=2.1;
            ResistLED(VoltFuente, VoltLED);
        }
        else if(Opcion=="VERDE_ESTANDAR"){
            VoltLED=2.2;
            ResistLED(VoltFuente, VoltLED);
        }
        else if(Opcion=="VERDE_ESMERALDA"){
            VoltLED=3.2;
            ResistLED(VoltFuente, VoltLED);
        }
        else if(Opcion=="AZUL"){
            VoltLED=3.2;
            ResistLED(VoltFuente, VoltLED);
        }
        else if(Opcion=="BLANCO"){
            VoltLED=3.3;
            ResistLED(VoltFuente, VoltLED);
        }
        else if(Opcion=="ULTRAVIOLETA"){
            VoltLED=3.4;
            ResistLED(VoltFuente, VoltLED);
        }
        cout<<"Quiere volver a calcular otro LED?\ns/n";
        cin>>VolverCalc;
        cout<<"\n\n";

    }
    while(VolverCalc=='s'||VolverCalc=='S');
    cout<<"Entendido, nos vemos en la proxima, usuario ;]\nCerrando programa...";
    return 0;
}