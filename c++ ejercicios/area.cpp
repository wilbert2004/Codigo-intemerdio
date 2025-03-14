// 18.	Crea un programa que calcule el área de un círculo, triángulo o rectángulo según la elección del usuario.
#include <iostream>
#include <cstring>

int main()
{
    int opciones = 0;
    int base = 0;
    int altura = 0;
    int radio = 0;
    int total = 0;
    double pi = 3.1416;

    std::cout << "Que opcion deseas hacer" << std::endl;
    std::cout << "1-Circulo" << std::endl;
    std::cout << "2-Triangulo" << std::endl;
    std::cout << "3-Rectangulo" << std::endl;
    std::cin >> opciones;

    switch (opciones)
    {

    case 1:
        std::cout << "opcion para calcular la area del circulo" << std::endl;

        std::cout << "Ingrese el radio del circulo" << std::endl;
        std::cin >> radio;

        total = pi * radio * radio;
        // mensaje del todal de radio
        std::cout << "El area del circulo es: " << total << std::endl;
        break;

    case 2:
        std::cout << "opcion para calcular la area del triangulo" << std::endl;
        std::cout << "Ingrese la base del triangulo" << std::endl;
        std::cin >> base;
        std::cout << "Ingrese la altura del triangulo" << std::endl;
        std::cin >> altura;
        total = (base * altura) / 2;
        // mensaje del total de area
        std::cout << "El area del triangulo es: " << total << std::endl;
        break;

    case 3:
        std::cout << "opcion para calcular la area del rectangulo" << std::endl;
        std::cout << "Ingrese la base del rectangulo" << std::endl;
        std::cin >> base;
        std::cout << "Ingrese la altura del rectangulo" << std::endl;
        std::cin >> altura;
        total = base * altura;
        // mensaje del total de area
        std::cout << "El area del rectangulo es: " << total << std::endl;

        break;
    default:
        std::cout << "Opcion invalida" << std::endl;
        break;
    }

    /*Compila el código usando clang con las opciones adecuadas para generar el código IR:
MSYS2
clang -S -emit-llvm area.cpp -o area.ll */
    // se ingresa este codigo

    /*-S: Genera el código de ensamblador (en este caso, IR).
    -emit-llvm: Especifica que queremos generar el código intermedio de LLVM (en lugar de código de máquina o ensamblador estándar).
    suma.cpp: El archivo fuente C++.
    -o suma.ll: Especifica el archivo de salida, en este caso, suma.ll para el código IR.*/

    /*cat suma.ll
     */
}