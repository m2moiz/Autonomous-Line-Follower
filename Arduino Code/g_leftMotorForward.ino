void leftMotorForward()
{
  digitalWrite(left_motor_frp[0],HIGH );
  digitalWrite(left_motor_frp[1],LOW );
  analogWrite(left_motor_frp[2],left_motor_pwm );
}

