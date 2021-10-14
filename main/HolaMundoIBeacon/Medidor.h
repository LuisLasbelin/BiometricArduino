// -*- mode: c++ -*-

#ifndef MEDIDOR_H_INCLUIDO
#define MEDIDOR_H_INCLUIDO

// ------------------------------------------------------
// ------------------------------------------------------
class Medidor {

  // .....................................................
  // .....................................................
private:
int sensorData [11];
void Serial1InParser(void)
{
    int i = 0;
    for (int i =0; i<11; i++) {
       while(!Serial1.available()) { }
       sensorData[i] = Serial1.parseInt();
    }
}

public:

  // .....................................................
  // constructor
  // .....................................................
  Medidor(  ) {
  } // ()

  // .....................................................
  // .....................................................
  void iniciarMedidor() {
	// las cosas que no se puedan hacer en el constructor, if any
  } // ()

  // .....................................................
  // .....................................................
  int medirCO2() {
    Serial1.print('\r'); // Inicia una lectura del sensor. Ahora hay que espera a que nos envíe algo de vuelta!
    Serial.println("Lectura del sensor iniciada...esperando...");
    Serial1InParser();
    String valor = 0;
    for (int j=0; j<11; j++) {
      Serial.println(sensorData[j]);
      // El segundo valor es el gas
      if(j == 1){
        valor = sensorData[j];
      }
    }
	  return valor;
  } // ()

  // .....................................................
  // .....................................................
  int medirTemperatura() {
    Serial1.print('\r'); // Inicia una lectura del sensor. Ahora hay que espera a que nos envíe algo de vuelta!
    Serial.println("Lectura del sensor iniciada...esperando...");
    Serial1InParser();
    String valor = 0;
    for (int j=0; j<11; j++) {
      Serial.println(sensorData[j]);
      // El tercer valor es temperatura
      if(j == 2){
        valor = sensorData[j];
      }
    }
    return valor;
  } // ()
	
}; // class

// ------------------------------------------------------
// ------------------------------------------------------
// ------------------------------------------------------
// ------------------------------------------------------
#endif
