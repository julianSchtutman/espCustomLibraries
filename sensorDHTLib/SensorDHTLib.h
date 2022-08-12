/*
 sensorDHTLib.h - Libreria que contiene las funciones para obtener los datos del sensor DHT22


	Llamaar primero a readDataConsumo y despues a los get.
*/

#ifndef sensorDHTLib_h
#define sensorDHTLib_h

#include "DHT.h"
#include "Arduino.h"
#include "datoSensorLib.h"

#define DHTPIN 4     // what digital pin the DHT22 is conected to
#define DHTTYPE DHT22   // there are multiple kinds of DHT sensors

static DHT dht(DHTPIN, DHTTYPE);

class SensorDHT {
public:
	SensorDHT(String _nombreSensor);
	boolean readDataConsumo(void);
	DatoSensor getTemperature(void);
	DatoSensor getHumidity(void);
	DatoSensor getHeatIndex(void);

private:
	float t;
  float h;
  float hi;
	String temperature;
	String humidity;
	String heatIndex;
	DatoSensor datoSensor;

};




#endif
