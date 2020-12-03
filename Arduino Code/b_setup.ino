void setup() {
  Serial.begin(9600);

for(int i=0;i<5;i++)
{
  pinMode(ir_pins[i], INPUT);
}

for(int i=0;i<3;i++)
{
  pinMode(left_motor_frp[i], OUTPUT);
  pinMode(right_motor_frp[i], OUTPUT);
}

for(int i=0;i<4;i++)
{
  pinMode(enc_pins[i], INPUT);
}

}
