void printSensorReadings()
{ 
   
  for(int i=0;i<5;i++)
  {
    Serial.print(ir_readings[i]);
    Serial.print("\t");
  }
  Serial.println("");

  
  
}
