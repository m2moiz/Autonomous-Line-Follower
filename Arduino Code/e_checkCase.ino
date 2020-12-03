void checkCase()
{
  //Normal condition with center censor on the line
  if((ir_readings[0]==1 && ir_readings[1]==1 && ir_readings[2]==0 && ir_readings[3]==1 && ir_readings[4]==1 ) || (ir_readings[0]==1 && ir_readings[1]==0 && ir_readings[2]==0 && ir_readings[3]==1 && ir_readings[4]==1 )|| (ir_readings[0]==1 && ir_readings[1]==1 && ir_readings[2]==0 && ir_readings[3]==0 && ir_readings[4]==1))
  { 
    forward();
  }

  else if((ir_readings[0]==1 && ir_readings[1]==0 && ir_readings[2]==1 && ir_readings[3]==1 && ir_readings[4]==1 ))
  { 
    turnLeft();
  }

  else if((ir_readings[0]==1 && ir_readings[1]==1 && ir_readings[2]==1 && ir_readings[3]==0 && ir_readings[4]==1 ))
  { 
    turnRight();
  } 

   else if((ir_readings[0]==0 && ir_readings[1]==1 && ir_readings[2]==1 && ir_readings[3]==1 && ir_readings[4]==1 ))
  { 
    turnLeft();
  }

  else if((ir_readings[0]==1 && ir_readings[1]==1 && ir_readings[2]==1 && ir_readings[3]==1 && ir_readings[4]==0 ))
  { 
    turnRight();
  } 
 
 // 90 degree left turn
  else if((ir_readings[0]==0 && ir_readings[1]==0 && ir_readings[2]==0 && ir_readings[3]==1 && ir_readings[4]==1)|| (ir_readings[0]==0 && ir_readings[1]==0 && ir_readings[2]==1 && ir_readings[3]==1 && ir_readings[4]==1) )
  { 
   /* forward();
    delay(420);
    leftMotorOff();
    rightMotorOff();
    delay(20);*/
    hardLeft();
   
    
  }

  //90 degree right turn
  else if((ir_readings[0]==1 && ir_readings[1]==1 && ir_readings[2]==1 && ir_readings[3]==0 && ir_readings[4]==0) || (ir_readings[0]==1 && ir_readings[1]==1 && ir_readings[2]==1 && ir_readings[3]==1 && ir_readings[4]==0))
  { 
    /*forward();
    delay(300);
    leftMotorOff();
    rightMotorOff();
    delay(20);*/
    hardRight();
    //delay(1200);
  }

 //Dead end
  else if(ir_readings[0]==1 && ir_readings[1]==1 && ir_readings[2]==1 && ir_readings[3]==1 && ir_readings[4]==1 )
  { 

   while(ir_readings[0]!=1 && ir_readings[1]!=1 && ir_readings[2]!=0 && ir_readings[3]!=1 && ir_readings[4]!=1)
   {
    readSensorData();
    hardRight();
   }
   
    
  }

  //T-Junction 
  else if(ir_readings[0]==0 && ir_readings[1]==0 && ir_readings[2]==1 && ir_readings[3]==0 && ir_readings[4]==0 )
  { 
   /* forward();
    delay(300);
    leftMotorOff();
    rightMotorOff();
    delay(20);*/
    hardRight();
    //delay(700);
  }

  //t junction
  else if(ir_readings[0]==1 && ir_readings[1]==1 && ir_readings[2]==0 && ir_readings[3]==0 && ir_readings[4]==0 )
  {
    forward();
    delay(300);
    leftMotorOff();
    rightMotorOff();
    delay(20);
    hardRight();
  }

  //-| junction
  else if(ir_readings[0]==0 && ir_readings[1]==0 && ir_readings[2]==0 && ir_readings[3]==1 && ir_readings[4]==1 )
  {
    forward();
  }

 /* //Cross
  else if(ir_readings[0]==0 && ir_readings[1]==0 && ir_readings[2]==0 && ir_readings[3]==0 && ir_readings[4]==0 )
  {
    turnRight();
  }*/
 
  
}

