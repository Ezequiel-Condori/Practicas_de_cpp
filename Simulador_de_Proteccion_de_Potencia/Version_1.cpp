//la consigna actual es: Realizar un simulador del uso de una proteccion de potencia (o algo asi)
#include <iostream>
#include <string>

/*Lista de cosas que se van a implementar:
funcion float calculador de voltaje saliente
funcion float calculador de corriente total del circuito
funcion float que devuelva la potencia en watts
funcion bool Si es seguro la corriente calculada o si se quemara alguna de las 2 resistencias seleccionadas
un menu que pida:
Un voltaje de entrada
mostrar un inventario de resistencias convencionales, disponibles para elegir (podras elejir 2)
una opcion que te permita ingresar una resistencia de un valor no disponible en la lista (opcional, posiblemente sea lo ultimo a implementar)
dejarte elejir cual sera resistencia 1 y 2
mostrar en pantalla:
Voltaje de salida
la corriente que circula (I)
La potencia disipada por R1 y R2
el aviso si es seguro o si una resistencia se quemara
usar continue; si se ingresa un valor que arruinaria el calculo (es mi primera vez usandolo, por eso lo añado)
*/