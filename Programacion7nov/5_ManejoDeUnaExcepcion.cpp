#include<iostream>
#include<stdexcept>

void lanzaExcepcion() {
    throw std::runtime_error("Error en la funcion ");
}

int main() {
    try {
        try {
            lanzaExcepcion();
        }
        catch (const std::runtime_error& e) {
            std::cout << "Excepcion capturada y manejada. " << std::endl;
            throw;
        }
    }
    catch (const std::runtime_error& e) {
        std::cout << "Excepcion reactivada capturada: " << e.what() << std::endl;
    }

    return 0;
}