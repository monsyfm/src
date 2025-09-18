#include <stdio.h>
#include <time.h>  // Librería para manejar fecha y hora

int main() {
    time_t tiempoActual;        // Variable para guardar el tiempo en segundos
    struct tm *infoTiempo;      // Estructura para desglosar el tiempo

    time(&tiempoActual);        // Obtiene el tiempo actual
    infoTiempo = localtime(&tiempoActual);  // Convierte a hora local

    printf("La hora exacta de ejecucion es: %02d:%02d:%02d\n",
           infoTiempo->tm_hour, 
           infoTiempo->tm_min, 
           infoTiempo->tm_sec);

    return 0;
}
