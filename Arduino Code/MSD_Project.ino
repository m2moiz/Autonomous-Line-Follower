
#include <Encoder.h>

Encoder motorLeft(18, 19);
Encoder motorRight(20, 21);

const int enc_pins[] = {18,19,20,21};
int ir_readings[] = {0,0,0,0,0};
const int ir_pins[] = {A8,A9,A10,A11,A12};
int left_motor_pwm = 160;
int right_motor_pwm = 160;
const int motor_off = 255;
const int left_motor_frp[] = {9,10,11};
const int right_motor_frp[] = {6,7,8};
long positionLeft  = -999;
long positionRight = -999;
int old_readings[]={9,9,9,9,9};

void readSensorData();
void printSensorReadings();
void checkCase();

void leftMotorOff();
void leftMotorForward();
void leftMotorReverse();
void rightMotorOff();
void rightMotorForward();
void rightMotorReverse();

void forward();
void turnRight();
void turnLeft();
void uTurn();
void hardLeft();
void hardRight();

void displayEncoderReadings();





