#include <Arduino.h>
#include <OneButton.h>

OneButton button(BTN_PIN, true);
bool ledstate = false ;
bool blink = false;
unsigned long prev = 0 ;
const int delayms = 500;

void toggleLed()
{
    ledstate = !ledstate;
    digitalWrite(LED_PIN , ledstate);
}
void singleClick()
{
    toggleLed();
}
void doubleClick()
{
    blink = !blink;
    if(!blink){
        digitalWrite(LED_PIN , HIGH);
    }
}
void setup() {
    pinMode(BTN_PIN , INPUT_PULLUP);
    pinMode(LED_PIN , OUTPUT);
    digitalWrite(LED_PIN , HIGH);
    button.attachDoubleClick(doubleClick);
    button.attachClick(singleClick);
}

void loop() {
  button.tick();
  if(blink)
  {
    unsigned long now = millis();
    if(now - prev >= delayms)
    {
        toggleLed();
        prev = now ;
    }
  }
}