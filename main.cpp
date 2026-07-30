/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

int main()
{
 float numero1, numero2;

std::cout << "escribe el primer numero: ";
std::cin >> numero1;

std::cout << "escribe el segundo numero: ";
std::cin >> numero2;

float suma = numero1 + numero2;
float resta = numero1 - numero2;
float multiplicacion = numero1 * numero2;
float division = numero1 / numero2;

std::cout << "la suma es: " << suma << std::endl;
std::cout << "la resta es: " << resta << std::endl;
std::cout << "la multiplicacion es: " << multiplicacion << std::endl;
std::cout << "la division es: " << division << std::endl;


    return 0;
}