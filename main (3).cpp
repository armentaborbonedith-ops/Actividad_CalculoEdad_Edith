/******************************************************************************

Programa que genera el RFC de una persona
Fecha 03 de agosto de 2026
Autor: Edith Armenta Borbon

*******************************************************************************/
#include <iostream>
#include <vector>
#include <string>

//Diccionario de palabras no permitidas
const std::vector<std::string> palabrasProhibidas = {
    "PITO", "POPO", "PUTA", "PERRA","JOTO", "LOCA"
};

//Verificar y modificar palabras prohibidas del Diccionario
std::string corregirRFC(const std::string& rfc) {
    for (const std::string& palabra : palabrasProhibidas) {
        if (rfc == palabra) {
            return rfc.substr(0,3) + 'X'; // Remplaza la ultima por 'X'
        }
    }
    return rfc; //
    
} //Funcion para obtener la primer vocal interna de una cadena interna interna I 
char obtenerPrimeraVocalInterna(const std::string& str) {
    for (size_t i = 1; i <str.length(); ++i) {
        char c = str[i];
        if (c == 'A' || c == 'E' || c =='I' ||c =='O' || c == 'U')
        return c;
    }
    return 'X'; // si no se encuentra ninguna vocal interna, se usa X 
}

// Funcion principal para calcular el rfc
std::string calcularRFC(const std::string& nombre, const std::string& apellidoPaterno, const std::string& apellidoMaterno, const std::string& fechaNacimiento) {

  // Se declara la variable donde guardaremos el rfc
  std::string rfc;
  
    //se obtiene la letra inicial y la primera vocal interna del apellido apellidoPaterno
    char letraInicial = apellidoPaterno [0];
    char primeraVocalInterna = obtenerPrimeraVocalInterna(apellidoPaterno);
    
    //se obtiene la inicial del apellido materno o se usa una 'X' si no hay
      char inicialApellidoMaterno = (!apellidoMaterno.empty()) ? apellidoMaterno[0] : 'X';
      
    //se obtiene la inicial del primer nombre o se obtiene una 'X' si no existe
    char inicialNombre = nombre[0];
    
    //se obtiene los dos digitos del año de fechaNacimiento
    std::string anio = fechaNacimiento.substr(2,2);
   
   //se obtiene el mes y dia de fechaNacimiento 
    std::string mes = fechaNacimiento.substr(5,2);
    std::string dia = fechaNacimiento.substr(8,2);
    
    //se construye el RFC sumando el texto de la informacion proporcionada
    rfc = letraInicial;
    rfc += primeraVocalInterna;
    rfc += inicialApellidoMaterno;
    rfc += inicialNombre;
    
    //se ejecuta la comparacion de palabras que podrian ser antisonantes o malas palabras y se sustituye por una letra 'X'
    rfc= corregirRFC(rfc);
    
    //Realizada la correcion del RFCse sigue creando el RFC
    rfc += anio;
    rfc += mes;
    rfc += dia;
    
    return rfc;
}

    int main() {
        
        //Escribe en consola los pasos a seguir y se espera que los datos sean introducidos en MAYUSCULAS
        std::string nombre, apellidoPaterno, apellidoMaterno, fechaNacimiento;
        std::cout << "ingresa tu nombre: ";
        std::getline(std::cin, nombre);
        std::cout << "Ingresa tu apellido Paterno: ";
        std::getline(std::cin, apellidoPaterno);
        std::cout << "Ingresa tu apellidoMaterno: (Si no se cuenta con el apellido materno, presione enter: ";
        std::getline(std::cin, apellidoMaterno);
        std::cout << "Ingresa tu fecha de nacimiento en el siguiente formato (YYYY-MM-DD): ";
        std::getline (std::cin,fechaNacimiento);
        std::string rfc = calcularRFC(nombre, apellidoPaterno, apellidoMaterno, fechaNacimiento);
        std::cout << "RFC: " << rfc << std::endl;
        return 0;
    }

