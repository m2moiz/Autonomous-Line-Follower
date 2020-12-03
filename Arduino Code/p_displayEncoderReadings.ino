void displayEncoderReadings()
{
  long newLeft, newRight;
  newLeft = motorLeft.read();
  newRight = motorRight.read();
    if (newLeft != positionLeft || newRight != positionRight) 
    {
      Serial.print("Left = ");
      Serial.print(newLeft);
      Serial.print(", Right = ");
      Serial.print(newRight);
      Serial.println();
      positionLeft = newLeft;
      positionRight = newRight;
    }
}
