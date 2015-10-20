#include <Servo.h>
#include <ActuatorArms.h>

int left_servo_pin = 6;
int right_servo_pin = 9;

ActuatorArms arms;

void setup() {
  Serial.begin(9600);
  arms.attach(left_servo_pin, right_servo_pin);
  
  Serial.println("1. Move right up");
  Serial.println("2. Move right middle");
  Serial.println("3. Move right down");
  Serial.println("4. Move left up");
  Serial.println("5. Move left middle");
  Serial.println("6. Move left down");
  Serial.println("Select option: ");
}

void loop() {
    int order = getOrder();
    executeOrder(order);    
}

int getOrder() {   
  int order = 0;
  //We received the order.
  if (Serial.available() > 0) {
    order = Serial.parseInt();
  }
  
  return order;
}

void executeOrder(int order) {
    //We execute the order.
    switch(order){
      case 0:
        //It has not received anything.
        break;
      case 1:
        Serial.println("Move right up");
        arms.moveRightUp();
        break;
      case 2:
        Serial.println("Move right middle");
        arms.moveRightMiddle();
        break;
      case 3:
        Serial.println("Move right down");
        arms.moveRightDown();
        break;
      case 4:
        Serial.println("Move left up");
        arms.moveLeftUp();
        break;
      case 5:
        Serial.println("Move left middle");
        arms.moveLeftMiddle();
        break;
      case 6:
        Serial.println("Move left down");
        arms.moveLeftDown();
        break;
      default:
        Serial.println("Unknown order");
     }
}