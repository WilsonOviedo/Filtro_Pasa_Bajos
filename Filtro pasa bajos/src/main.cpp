#include <Arduino.h>
/*
Este ejemplo se probo en un microcontrolador STM32F103C8T6 (BlackPill)
Caso desea compilar para otra plataforma cambie las configuraciones en Platformio.ini
Y tambie cambie el pin Analogo que desea leer de acuerdo a su placa 
Si lo compila para una placa arduino cualquiera cambie Serial3 por Serial, para que pueda visualizar
correctamente los datos.
 */
/*
Filtro Media Móvil como Pasa Bajos
An=a*M+(1-a)*An
alpha 1: Sin filtro
alpha 0: Filtrado totalmente
alpha mas comun 0.05
*/


int adc_filtrado = 0;
int adc_raw = 0;
#define alpha 0.05   //Alpha
#define pin PA7      //Pin de lectura

void setup(){
   Serial3.begin(4800);   
   pinMode(pin,INPUT_ANALOG);
   delay(500);   
}

void loop(){
   adc_raw = analogRead(pin);
   adc_filtrado = (alpha*adc_raw) + ((1-alpha)*adc_filtrado);
   Serial3.print(adc_raw);
   Serial3.print(",");  
   Serial3.println(adc_filtrado);
}