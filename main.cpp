
#include "mbed.h"
#include "Grove_LCD_RGB_Backlight.h"


Grove_LCD_RGB_Backlight pantalla(PB_8,PB_9);
DigitalOut led(D12);  
DigitalIn boton (D4);
Timer cronometro;

 int main(){
    printf("This is the bare metal blinky example running on Mbed OS %d.%d.%d.\n", MBED_MAJOR_VERSION, MBED_MINOR_VERSION, MBED_PATCH_VERSION);
        pantalla.setRGB(0xff, 0xff, 0xff); //Ponerlo en blanco
        while (boton == 1 ){ 
            led = 1;
            cronometro.start();
        }       
        cronometro.stop();

     pantalla.print(cronometro.read());
 }

