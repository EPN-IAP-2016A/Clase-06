/* 
 * File:   main.c
 * 
 * La codificación del algoritmo constituye el "código fuente". Estas líneas de código deben
estar contenidas en un archivo de texto cuyo nombre tiene que tener la extensión ".c". 
 *
 * Todas las lineas que empiezan con // o que están entre /* ast/ son comentarios del código que sirven para indicar como funciona una porción del código.
 */

/*
 * stdio.h: biblioteca estándar de entrada y salida de C. Casi todo programa empieza con esta cabecera.
 */
#include <stdio.h>

/*
 * Todo programa C se escribe dentro de la función main.
 * Los bloques de código van entre { }
 * Toda sentencia termina con ;
 * return hace que la función regrese un valor a quien la invocó.
 */
int main(int argc, char** argv) {
  // función printf recibe como parámetro una cadena de caracteres y la imprime en consola.
  // \n representa un salto de línea
  int i = 0;
  while( i < 10 ){
    printf("Hola Mundo\n"); 
    i++;
  }
  //return 0; //0 representa una finalización exitosa
}

