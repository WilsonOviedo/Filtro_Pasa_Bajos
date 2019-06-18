#include <Arduino.h>

//Filtro Media Móvil como Pasa Bajos
//An=a*M+(1-a)*An
//alpha 1: Sin filtro
//alpha 0: Filtrado totalmente
//alpha clásico 0.05

int adc_filtrado = 0;
int adc_raw = 0;
#define alpha 0.05

void setup(){
   Serial3.begin(4800);
   Serial3.print("Holaaa"); 
}

void loop(){
  /*  adc_raw = analogRead(PA0);
   adc_filtrado = (alpha*adc_raw) + ((1-alpha)*adc_filtrado);
   Serial1.print(adc_raw);
   Serial1.print(",");  
   Serial1.println(adc_filtrado);*/
}