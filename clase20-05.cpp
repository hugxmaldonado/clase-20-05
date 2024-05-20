#include <iostream>
#include <cstdlib>
#include <ctime>   

using namespace std;

int main() {
    int userChoice, computerChoice;
    char playAgain;

    // Inicializar la semilla para números aleatorios
    srand(static_cast<unsigned int>(time(0)));

    do {
        // Mostrar opciones al usuario
        cout << "Bienvenido al juego de Piedra, Papel o Tijera!\n";
        cout << "Por favor elige una opción:\n";
        cout << "1. Piedra\n";
        cout << "2. Papel\n";
        cout << "3. Tijera\n";
        cout << "Ingresa tu elección (1, 2 o 3): ";
        cin >> userChoice;

        // Validar la entrada del usuario
        while (userChoice < 1 || userChoice > 3) {
            cout << "Opción no válida. Por favor elige 1, 2 o 3: ";
            cin >> userChoice;
        }

        // Generar la elección de la computadora
        computerChoice = rand() % 3 + 1;

        // Mostrar las elecciones
        cout << "Tu elección: ";
        switch (userChoice) {
            case 1: cout << "Piedra\n"; break;
            case 2: cout << "Papel\n"; break;
            case 3: cout << "Tijera\n"; break;
        }

        cout << "Elección de la computadora: ";
        switch (computerChoice) {
            case 1: cout << "Piedra\n"; break;
            case 2: cout << "Papel\n"; break;
            case 3: cout << "Tijera\n"; break;
        }

        // Determinar el resultado
        if (userChoice == computerChoice) {
            cout << "Es un empate!\n";
        } else if ((userChoice == 1 && computerChoice == 3) ||
                   (userChoice == 2 && computerChoice == 1) ||
                   (userChoice == 3 && computerChoice == 2)) {
            cout << "Ganaste!\n";
        } else {
            cout << "Perdiste!\n";
        }

        // Preguntar si desea jugar de nuevo
        cout << "¿Quieres jugar de nuevo? (s/n): ";
        cin >> playAgain;

        // Validar la entrada del usuario
        while (playAgain != 's' && playAgain != 'n') {
            cout << "Opción no válida. Por favor ingresa 's' para sí o 'n' para no: ";
            cin >> playAgain;
        }

    } while (playAgain == 's');

    cout << "Gracias por jugar. ¡Hasta la próxima!\n";
    return 0;
}