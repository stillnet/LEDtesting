#include <FastLED.h>

 
#define DATA_PIN 6
#define NUM_LEDS 30
 
CRGB leds[NUM_LEDS];
 
void setup() { 
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
  Serial.begin(115200);
  Serial.println("Program started");
 }
 

void loop() {
  int numArray[] = {3, 8, 4, 12, 17, 25};
  writeWord(numArray);
  FastLED.clear();
  FastLED.show();
  delay(1000);
}

void writeWord(int letters[]) {
  for (int i=0; i < 6; i++) {
    Serial.print("looping. Will turn on ");
    Serial.print(letters[i]);
    Serial.println(" now");
    //leds[ letters[i] ] = CRGB::Red;
    leds[ letters[i] ].red   = 100;
    leds[ letters[i] ].green = 25;
    leds[ letters[i] ].blue  = 0;
    FastLED.show();
    delay(200);
  }
}
