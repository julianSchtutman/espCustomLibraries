/*
  datoSensor.h - Libreria que contiene las estructuras necesarias para alojar los datos sensados por cualquier tipo de sesor
*/
#ifndef datoSensor_h
#define datoSensor_h

#include "Arduino.h"

class DatoSensor
{
  public:
    DatoSensor();
    String getNombreSensor();
    String getMedicion();
    String getValor();
    void setNombreSensor(String);
    void setMedicion(String);
    void setValor(String);
  private:
    String nombreSensor;
	  String medicion;
	  String valor;
};

#endif
