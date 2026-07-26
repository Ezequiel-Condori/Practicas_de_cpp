//Hola, para aprender esto, primero tuve que pedir a una IA que me genere un juego de números aleatorios, el cual luego modifique en base a consignas que me daba, y esas actividades son las mismas que estaran en este repositorio, hasta cierto punto, el cual sera avisado
//Esta version seria la principal, lo que se implementa es el poner limite al juego.
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int numeroSecreto = rand() % 100 + 1;
    int intento=0;
    int contadorIntentos=0;
    int limite=7;
    int intentosRestantes=limite;

    cout << "=========================================" << endl;
    cout << "   ¡Bienvenido a Adivina el Numero!     " << endl;
    cout << "   He pensado un numero entre 1 y 100.  " << endl;
    cout << "=========================================" << endl << endl;

    do {
        cout<<"Te quedan "<<intentosRestantes<<" intentos, usalos bien"<<endl;
        cout<<"Ingresa tu intento: ";
        cin >> intento;
        contadorIntentos++;
        intentosRestantes--;
        if(intentosRestantes>=0){
            cout<<"Usaste "<<contadorIntentos<<" intento/s de los "<<limite<<" que te quedan"<<endl;
            if (intento < numeroSecreto) {
                cout << "El numero secreto es MAYOR. Intenta de nuevo." << endl << endl;
            } 
             else if (intento > numeroSecreto) {
                cout << "El numero secreto es MENOR. Intenta de nuevo." << endl << endl;
            } 
             else {
                cout << endl;
                cout << "¡Felicidades! Adivinaste el numero en " << contadorIntentos << " intentos." << endl;
                break;
            }
        }
        else if(intentosRestantes<0){
            cout<<"QUE? USASTE MAS DE "<<limite<<" INTENTOS, COMO ES POSIBLE? >:["<<endl;
        }

    } while (intentosRestantes!=0);
    if (intento != numeroSecreto) {
    cout<<"YA USASTE TUS "<<limite<<" INTENTOS, NO PUEDES CONTINUAR!!!"<< endl;
    }
    cout<<endl;
    cout<<"Fin del juego, nos vemos en la proxima :]";
    return 0;
}