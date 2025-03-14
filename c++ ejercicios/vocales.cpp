#include <iostream>
#include <cstring>
int main()
{
    // guardar un array de los vocales
    // guardar un array de los vocales
    char vocales[] = {
        'a',
        'e',
        'i',
        'o',
        'u',
        'A',
        'E',
        'I',
        'O',
        'U',
    };

    // guardar un variable sin valor de tipo cadena de caracteres
    char valor[100];

    // imprimir un mensaje el cout para salida de texto
    std::cout << "Ingrese un texto por favor: ";
    // guardar el valor ingresado por el usuario y el cin para entrada de texto
    std::cin.getline(valor, 100);

    int cuantosvocales = 0;
    // recorremos el valor ingresado por el usuario

    int consonantes = 0;

    for (int i = 0; i < strlen(valor); i++)
    {
        bool valid = false;
        for (int j = 0; j < 10; j++)
        {

            // agregamos un condicional para comparar si el valor ingresado por el usuario es igual a las vocales
            if (valor[i] == vocales[j])
            {
                // imprimimos un mensaje si el valor ingresado por el usuario es igual a las vocale
                cuantosvocales++;
                valid = true;
                break;
            }
        }
        // si no es una vocal, se considera una consonante
        // usamos la funcion isalpha para verificar si el caracter es una letra y no lo acumula
        if (!valid && isalpha(valor[i]))
        {
            consonantes++;
        }
    }
    // imprimimos la cantidad de vocales y consonantes que hay en el texto ingresado
    std::cout << "Cantidad de vocales: " << cuantosvocales << std::endl;
    std::cout << "Cantidad de consonantes: " << consonantes << std::endl;
}

/*Compila el código usando clang con las opciones adecuadas para generar el código IR:
MSYS2
clang -S -emit-llvm vocales.cpp -o vocales.ll */
// se ingresa este codigo

/*-S: Genera el código de ensamblador (en este caso, IR).
-emit-llvm: Especifica que queremos generar el código intermedio de LLVM (en lugar de código de máquina o ensamblador estándar).
suma.cpp: El archivo fuente C++.
-o suma.ll: Especifica el archivo de salida, en este caso, suma.ll para el código IR.*/

/*cat suma.ll
 */