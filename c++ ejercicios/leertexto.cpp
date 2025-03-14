#include <iostream>

int main()
{
    int numero = 0;

    std::cout << "Ingresa el numero por favor: " << std::endl;
    std::cin >> numero;

    int suma_digitos = 0;
    while (numero != 0)
    {
        suma_digitos += numero % 10; // Extraer el último dígito y sumarlo
        numero /= 10;                // Eliminar el último dígito
    }

    std::cout << "la suma del total del digitos es : " << suma_digitos << std::endl;

    return 0;

    /*Compila el código usando clang con las opciones adecuadas para generar el código IR:
MSYS2
clang -S -emit-llvm leertexto.cpp -o leertexto.ll */

    /*-S: Genera el código de ensamblador (en este caso, IR).
    -emit-llvm: Especifica que queremos generar el código intermedio de LLVM (en lugar de código de máquina o ensamblador estándar).
    suma.cpp: El archivo fuente C++.
    -o suma.ll: Especifica el archivo de salida, en este caso, suma.ll para el código IR.*/

    /*cat suma.ll
     */
}