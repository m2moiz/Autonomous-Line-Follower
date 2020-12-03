/* This loop reads values from the sensors one by one and stores the values in
 *  an array called ir_readings[5]
 */
void readSensorData()
{
  for (int i=0;i<5;i++)
  {
    ir_readings[i] = digitalRead(ir_pins[i]); 
  }
}

