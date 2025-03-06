#include <iostream>
#include <string>
using namespace std;

// Estructura para el precio final
struct PrecioFinal {
    int Precio_F;
    int tarjeta;
    int efectivo;
};

// Funciones de menús
void menuG() {
    cout << "Bienvenido a Ramirez Shop" << endl;
    cout << "Op 1 => Artistas" << endl;
    cout << "Op 2 => Instrumentos" << endl;
    cout << "Op 3 => Monitores de Sonido" << endl;
    cout << "Op 4 => Ver Carrito" << endl;
    cout << "Op 5 => Ver costo a pagar" << endl;
    cout << "Op 6 => Salir de la tienda " << endl;

}

void menuA() {
    cout << "Bienvenido a la seccion de Artistas" << endl;
    cout << "¿Que artista deseas seleccionar?" << endl;
    cout << "Op 1 => Alfredo Olivas $25,000" << endl;
    cout << "Op 2 => Grupo Firme $25,000" << endl;
    cout << "Op 3 => Juntos $20,000" << endl;
    cout << "Op 4 => Julion Alvarez $20,000" << endl;
    cout << "Op 5 => Tigres del Norte $15,000" << endl;
}

void menuI() {
    cout << "Bienvenido a la seccion de Instrumentos" << endl;
    cout << "¿Que instrumento deseas seleccionar?" << endl;
    cout << "Op 1 => Acordeon Honner $50,000" << endl;
    cout << "Op 2 => Bateria $40,000" << endl;
    cout << "Op 3 => Guitarra $20,000" << endl;
    cout << "Op 4 => Bajo Sexto $10,000" << endl;
    cout << "Op 5 => Saxofon $100,000" << endl;
}

void menuM() {
    cout << "Bienvenido a la seccion de Luz y Sonido" << endl;
    cout << "¿Que tipo de luz y/o sonido deseas seleccionar?" << endl;
    cout << "Op 1 => Luces Led $5,000" << endl;
    cout << "Op 2 => Pantallas Led $40,000" << endl;
    cout << "Op 3 => Microfono $1,000" << endl;
    cout << "Op 4 => Equipo de Sonido $10,000" << endl;
    cout << "Op 5 => Monitores (In Ears) $5,000" << endl;
}

int main() {
    int precio_final = 0;
    char FinalizarC;
    int opcion_C = 0;
    int carrito = 0;
    int cambio = 0;

    cout << "Deseas Comprar Productos? (S = Si / N = No)" << endl;
    cin >> FinalizarC;

    while (FinalizarC == 's' || FinalizarC == 'S') {
        while (opcion_C != 6) {
            menuG();
            cout << "¿Que opcion deseas seleccionar? " << endl;
            cin >> opcion_C;

            // Sección Artistas
            if (opcion_C == 1) {
                menuA();
                char seguir_CA = 's';
                while (seguir_CA == 's' || seguir_CA == 'S') {
                    int Artista = 0;
                    cout << "Que Artista deseas Comprar" << endl;
                    cin >> Artista;

                    switch (Artista) {
                        case 1:
                            cout << "Felicidades Seleccionaste a Alfredo Olivas" << endl;
                            cout << "Con un costo de $25,000" << endl;
                            carrito += 25000;
                            break;
                        case 2:
                            cout << "Felicidades Seleccionaste a Grupo Firme" << endl;
                            carrito += 25000;
                            break;
                        case 3:
                            cout << "Felicidades Seleccionaste a Juntos" << endl;
                            carrito += 20000;
                            break;
                        case 4:
                            cout << "Felicidades Seleccionaste a Julion Alvarez" << endl;
                            carrito += 20000;
                            break;
                        case 5:
                            cout << "Felicidades Seleccionaste a Tigres del Norte" << endl;
                            carrito += 15000;
                            break;
                        default:
                            cout << "Opción no válida" << endl;
                    }

                    cout << "Deseas Seleccionar Otro Artista? (s = Si / n = Salir)" << endl;
                    cin >> seguir_CA;
                }
            }

            // Sección Instrumentos
            if (opcion_C == 2) {
                menuI();
                char seguir_CA = 's';
                while (seguir_CA == 's' || seguir_CA == 'S') {
                    int Instrumentos = 0;
                    cout << "Que Instrumentos deseas Comprar" << endl;
                    cin >> Instrumentos;

                    switch (Instrumentos) {
                        case 1: carrito += 50000; break;
                        case 2: carrito += 40000; break;
                        case 3: carrito += 20000; break;
                        case 4: carrito += 10000; break;
                        case 5: carrito += 100000; break;
                        default: cout << "Opción no válida" << endl;
                    }

                    cout << "Deseas Seleccionar Otro Instrumento? (s = Si / n = Salir)" << endl;
                    cin >> seguir_CA;
                }
            }

            // Sección Luz y Sonido
            if (opcion_C == 3) {
                menuM();
                char seguir_CA = 's';
                while (seguir_CA == 's' || seguir_CA == 'S') {
                    int Luz = 0;
                    cout << "Que Luz y/o sonido deseas Comprar" << endl;
                    cin >> Luz;

                    switch (Luz) {
                        case 1: carrito += 5000; break;
                        case 2: carrito += 40000; break;
                        case 3: carrito += 1000; break;
                        case 4: carrito += 10000; break;
                        case 5: carrito += 5000; break;
                        default: cout << "Opción no válida" << endl;
                    }

                    cout << "Deseas Seleccionar Otro tipo de Luz/Sonido? (s = Si / n = Salir)" << endl;
                    cin >> seguir_CA;
                }
            }

            // Ver Carrito
            if (opcion_C == 4) {
                cout << "Tu total hasta ahora es de = $" << carrito << endl;
                cout << "Presiona Enter para salir del carrito...";
                cin.ignore();
                cin.get();
            }

            // Finalizar Compra
            if (opcion_C == 5) {
                string mp; //metodo de pago
                precio_final = carrito;
                int ef = 0; //efectivo

                cout << "El total de Tu compra es = $" << precio_final << endl;
                cout << "Ingresa tu metodo de pago (Tarjeta/Efectivo)" << endl;
                cin >> mp;

                if (mp == "Tarjeta" || mp == "tarjeta") {
                    cout << "Has seleccionado pago con tarjeta." << endl;
                    cout << "Compra realizada con exito" << endl;
                    cout << "Tu cambio es de $0" << endl;
                    carrito = 0; // Reiniciar carrito después de pagar
                    precio_final = 0; // Reiniciar precio final

                }
                else if (mp == "Efectivo" || mp == "efectivo") {
                    do {
                        cout << "Ingresa la cantidad a pagar" << endl;
                        cin >> ef;
                        if (ef < precio_final) {
                            cout << "Cantidad insuficiente, intenta de nuevo" << endl;
                        }
                    } while (ef < precio_final);
                    
                    cambio = ef - precio_final;
                    cout << "Compra realizada con exito" << endl;
                    cout << "Tu cambio es de $" << cambio << endl;
                    cout << "Gracias....." << endl;
                    carrito = 0; // Reiniciar carrito después de pagar
                    precio_final = 0; // Reiniciar precio final
                }
                else {
                    cout << "Método de pago no reconocido." << endl;
                }
            }

            if (opcion_C == 6) {
                break; // Salir del bucle interno
            }
        }

            cout << "Deseas Seguir comprando? (S = Continuar / N = Salir)" << endl;
            cin >> FinalizarC;
        
    }

    cout << "Gracias por tu compra" << endl;
    return 0;
}