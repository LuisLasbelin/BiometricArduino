// -*- mode: c++ -*-

#ifndef MEDIDOR_H_INCLUIDO
#define MEDIDOR_H_INCLUIDO

// ------------------------------------------------------
// ------------------------------------------------------
class Medidor {

  // .....................................................
  // .....................................................
private:

public:

  // .....................................................
  // constructor()
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
  /**
   * () -> Z
   * Analiza los valores recibidos por el serial
   * 
   * @return int valor de CO2
   */
  int medirCO2() {
    /*
    Serial1.print('\r'); // Inicia una lectura del sensor. Ahora hay que espera a que nos envíe algo de vuelta!
    Serial.println("Lectura del sensor iniciada...esperando...");
    Serial1InParser();
    int valor = 0;
    for (int j=0; j<11; j++) {
      Serial.println(sensorData[j]);
      // El segundo valor es el gas
      if(j == 1){
        valor = sensorData[j];
      }
    }
	  return valor;
   */
   return 256;
  } // ()

  // .....................................................
  // .....................................................
  /**
   * () -> Z
   * Analiza los valores recibidos por el serial
   * 
   * @return int valor de temperatura
   */
  int medirTemperatura() {
    return 31;
  } // ()
	
}; // class

// ------------------------------------------------------
// ------------------------------------------------------
// ------------------------------------------------------
// ------------------------------------------------------
#endif
