    


#include "Arduino.h"
#include "datoSensorLib.h"

DatoSensor::DatoSensor(){}

String DatoSensor::getNombreSensor()
{
	return nombreSensor;
}

String DatoSensor::getMedicion()
{
	return medicion;
}

String DatoSensor::getValor()
{
	return valor;
}

void DatoSensor::setNombreSensor(String s){
	nombreSensor = s;
}

void DatoSensor::setMedicion(String s){
	medicion = s;
}

void DatoSensor::setValor(String s){
	valor = s;
}


