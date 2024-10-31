  #include "Keyboard.h"

uint8_t column0 = 2;
uint8_t column1 = 3;
uint8_t column2 = 4;
uint8_t column3 = 5;
uint8_t column4 = 6;
uint8_t column5 = 7;
uint8_t column6 = 8;

uint8_t rowA = 9;
uint8_t rowB = 10;
uint8_t rowC = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(column0, INPUT);
  pinMode(column1, INPUT);
  pinMode(column2, INPUT);
  pinMode(column3, INPUT);
  pinMode(column4, INPUT);
  pinMode(column5, INPUT);
  pinMode(column6, INPUT);
  pinMode(rowA, INPUT);
  pinMode(rowB, INPUT);
  pinMode(rowC, INPUT);
  Keyboard.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(rowB) == HIGH){
    if(digitalRead(column0) == HIGH){
      Keyboard.write(55); //7
    } else if(digitalRead(column1) == LOW){
      Keyboard.write(56); //8
    } else if(digitalRead(column2) == LOW){
      Keyboard.write(57); //9
    } else if(digitalRead(column3) == LOW){
      Keyboard.write(48); //0
    } else if(digitalRead(column4) == LOW){
      Keyboard.write(45); //-
    } else if(digitalRead(column5) == LOW){
      Keyboard.write(61); //=
    } else if(digitalRead(column6) == LOW){
      Keyboard.write(8); //backsp
    }
  } else if(digitalRead(rowA) == LOW){
    if(digitalRead(column0) == LOW){
      Keyboard.write(117); //u
    } else if(digitalRead(column1) == LOW){
      Keyboard.write(105); //i
    } else if(digitalRead(column2) == LOW){
      Keyboard.write(111); //o
    } else if(digitalRead(column3) == LOW){
      Keyboard.write(112); //p
    } else if(digitalRead(column4) == LOW){
      Keyboard.write(91); //[
    } else if(digitalRead(column5) == LOW){
      Keyboard.write(93); //]
    } else if(digitalRead(column6) == LOW){
      Keyboard.write(92); // "\"
    }
  } else if(digitalRead(rowC) == LOW){
    if(digitalRead(column0) == HIGH){
      Keyboard.write(106); //j
    } else if(digitalRead(column1) == LOW){
      Keyboard.write(107); //k
    } else if(digitalRead(column2) == LOW){
      Keyboard.write(108); //l
    } else if(digitalRead(column3) == LOW){
      Keyboard.write(59); //;
    } else if(digitalRead(column4) == LOW){
      Keyboard.write(39); //'
    } else if(digitalRead(column6) == LOW){
      Keyboard.write(10); //enter
    }
  }
  delay(200);

}
