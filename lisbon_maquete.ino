
#include "values.h"

void setup() {
  Serial.begin(9600);
  for (int i = 0; i < number_of_buttons; i++){
    pinMode(button_pin[i], INPUT_PULLUP);
  }
  for (int i = 0; i < number_of_led_pins; i++){
    pinMode(led_pin[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < number_of_buttons; i++){
    Serial.println(i);
    button_state[i] = digitalRead(button_pin[i]);
    if (button_state[i] == HIGH){
      //Serial.println("button pressed.");
      // illuminate relevant LEDs
      if (i == 0){
        for (int j = 0; j < number_of_leds_in_button1; j++){
          digitalWrite(leds_button1[j], HIGH);
        }
      }
      if (i == 1){
        for (int j = 0; j < number_of_leds_in_button2; j++){
          digitalWrite(leds_button2[j], HIGH);
        }
      }
      if (i == 2){
        for (int j = 0; j < number_of_leds_in_button3; j++){
          digitalWrite(leds_button3[j], HIGH);
        }
      }
      if (i == 3){
        for (int j = 0; j < number_of_leds_in_button4; j++){
          digitalWrite(leds_button4[j], HIGH);
        }
      }
    }
    else{
      // de-illuminate relevant LEDs
      if (i == 0){
        for (int j = 0; j < number_of_leds_in_button1; j++){
          digitalWrite(leds_button1[j], LOW);
        }
      }
      if (i == 1){
        for (int j = 0; j < number_of_leds_in_button2; j++){
          digitalWrite(leds_button2[j], LOW);
        }
      }
      if (i == 2){
        for (int j = 0; j < number_of_leds_in_button3; j++){
          digitalWrite(leds_button3[j], LOW);
        }
      }
      if (i == 3){
        for (int j = 0; j < number_of_leds_in_button4; j++){
          digitalWrite(leds_button4[j], LOW);
        }
      }
    }
  }
}
