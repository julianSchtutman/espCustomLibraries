#include "SensorDHTLib.h"


SensorDHT::SensorDHT(String _nombreSensor){
  datoSensor.setNombreSensor(_nombreSensor);
}

boolean SensorDHT::readDataConsumo(){
    dht.begin();

    h = dht.readHumidity();
    t = dht.readTemperature();

    if (isnan(h) || isnan(t)) {
      return false;
    }

    //hi = dht.computeHeatIndex(t, h, false);

    temperature = String(t);
    humidity = String(h);
    heatIndex = String(hi);

    return true;

}


DatoSensor SensorDHT::getTemperature(){
 datoSensor.setMedicion("Temperatura");
 datoSensor.setValor(temperature);
 return datoSensor;
}

DatoSensor SensorDHT::getHumidity(){
 datoSensor.setMedicion("Humedad");
 datoSensor.setValor(humidity);
 return datoSensor;
}

DatoSensor SensorDHT::getHeatIndex(){
 datoSensor.setMedicion("Sensacion_termica");
 datoSensor.setValor(heatIndex);
 return datoSensor;
}
