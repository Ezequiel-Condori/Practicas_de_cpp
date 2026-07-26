//En esta version, ahora se le implementara un sistema de difilcudades mediante funciones, existe otro metodo mas sencillo, pero para ir practicando, mejor usare una funcion.
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

void IniciarJuego(int limite, int AleatorioMax, int CodDificultad){  //Facil=1; Normal=2; Medio=3; Dificil=4; Muy dificil=5; EasterEgg=6;
    srand(time(0));
    int numeroSecreto=rand()%AleatorioMax+1;
    int intento=0;
    int contadorIntentos=0;
    int intentosRestantes=limite;
    do {
        if(CodDificultad==1){
            cout<<"Tienes intentos ilimitados! No temas a fallar :]\n";
        }
        else if(CodDificultad>1){
            cout<<"Te quedan "<<intentosRestantes<<" intentos, usalos bien\n";
        }
        else if(CodDificultad==5){
            cout<<"Tu computadora eligio que tengas "<<intentosRestantes<<"intentos, culpa a tu compu si son pocos! No a mi! >:(\n";
        }
        else{
            cout<<"PAra que decirte tus intentos, averigualo tu...\n";
        }
        cout<<"Ingresa tu intento: ";
        cin>>intento;
        contadorIntentos++;
        if(CodDificultad!=1){
            intentosRestantes--;
        }
        if(intentosRestantes>=0){
            if(CodDificultad==1){
                cout<<"Vas por el intento "<<contadorIntentos<<", anda con calma, no hay preocupaciones\n";
            }
            else if(CodDificultad>1){
                cout<<"Usaste "<<contadorIntentos<<" intento/s de los "<<limite<<" que te quedan\n";
            }
            
        }
        if(intento<numeroSecreto){
             cout << "El numero secreto es MAYOR. Intenta de nuevo.\n\n";
            } 
            else if (intento>numeroSecreto){
               cout << "El numero secreto es MENOR. Intenta de nuevo.\n\n";
            } 
            else{
              cout<<endl;
              cout<<"¡Felicidades! Adivinaste el numero en " << contadorIntentos << " intentos.\n";
             break;
            }
        if(intentosRestantes<0&&CodDificultad>1){
            cout<<"QUE? USASTE MAS DE "<<limite<<" INTENTOS, COMO ES POSIBLE? >:[\n";
            return;
        }
        if (CodDificultad!=1&&intentosRestantes==0){
            cout<<"YA USASTE TUS "<<limite<<" INTENTOS, NO PUEDES CONTINUAR!!!\n";
            cout<<"El numero era: "<<numeroSecreto<<"\n";
            break;
        }

    } 
    while (intentosRestantes>0||CodDificultad==1);
    
    cout<<endl;
    cout<<"Fin del juego, nos vemos en la proxima :]";
}

int main() {
    string Dificultad;
    cout << "=======================================\n";
    cout << "   Bienvenido a Adivina el Numero!     \n";
    cout << "=======================================\n\n";
    cout<<"Seleccione su dificultad:\nFACIL:\n-Con intentos ilimitados\n-Numeros del 1 al 25\n\nNORMAL:\n-Con 15 intentos\n-Numeros del 1 al 50\n\nMEDIO:\n-Con 10 intentos\n-Numeros del 1 al 75\n\nDIFICIL:\n-Con 7 intentos\n-Numeros del 1 al 100\n\nMUY-DIFICIL:\n-Intentos del 1 al 5\n-Numeros del 1 al 500\n\nSi decea salir, escriba CERRAR\n\n";
    cin>>Dificultad;
    if(Dificultad=="FACIL"){
        cout<<"Principiante? la pasaremos muy bien con esto :]\n";
        IniciarJuego(-1, 25, 1);
    }
    else if(Dificultad=="NORMAL"){
        cout<<"Bueno, la dificultad que la mayoria eligiria... sigamos!\n";
        IniciarJuego(15, 50, 2);
    }
    else if(Dificultad=="MEDIO"){
        cout<<"Hmm, sigue siendo 'Facil', pero me vi obligado a meterlo\n";
        IniciarJuego(10, 75, 3);
    }
    else if(Dificultad=="DIFICIL"){
        cout<<"La idea original iba a ser sin dificultades, y esta iba a ser la unica opcion, pero para darle mas dinamismo, decidi meter el resto\n";
        IniciarJuego(7, 100, 4);
    }
    else if(Dificultad=="MUY-DIFICIL"){
        cout<<"Ahora si se puso interesante el juego, cuanto apuesto a que perderas en el primer intento\n";
        int LimiteAzar=rand()%5+1;
        IniciarJuego(LimiteAzar, 500, 5);
    }
    else if(Dificultad=="EasterEgg"){
        cout<<"[!]\n...\nDeveras decidiste poner eso? Te vas a arrepentir...";  //Falta definir que seria la frace
        IniciarJuego(1,  10000, 6);
    }
    else if(Dificultad=="CERRAR"){
        return 0;
    }
    return 0;
}