#include <iostream>

int main() {
    double saldo = 500.0, retiro, deposito;
    int opcion;

    std::cout << "===== CAJERO AUTOMATICO =====" << std::endl;
    std::cout << "1. Consultar saldo" << std::endl;
    std::cout << "2. Retirar dinero" << std::endl;
    std::cout << "3. Depositar dinero" << std::endl;
    std::cout << "4. Salir" << std::endl;
    std::cout << "Seleccione una opcion: ";
    std::cin >> opcion;

    switch (opcion) {
        case 1:
            std::cout << "Su saldo actual es: $" << saldo << std::endl;
            break;
        case 2:
            std::cout << "Ingrese el monto a retirar: ";
            std::cin >> retiro;
            if (retiro <= saldo && retiro > 0) {
                saldo -= retiro;
                std::cout << "Retiro exitoso. Saldo restante: $" << saldo << std::endl;
            } else {
                std::cout << "Monto invalido o insuficiente." << std::endl;
            }
            break;
        case 3:
            std::cout << "Ingrese el monto a depositar: ";
            std::cin >> deposito;
            if (deposito > 0) {
                saldo += deposito;
                std::cout << "Deposito exitoso. Nuevo saldo: $" << saldo << std::endl;
            } else {
                std::cout << "Monto invalido." << std::endl;
            }
            break;
        case 4:
            std::cout << "Gracias por usar el cajero. Adios!" << std::endl;
            break;
        default:
            std::cout << "Opcion no valida." << std::endl;
    }

    return 0;
}

