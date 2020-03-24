#include <Keyboard.h>
// debounce delay for pushbutton:
const int debounceDelay = 4;
int buttonCount = 18;
//  pushbuttons are on these pins:
int buttonPin[] = {13,10,8,6,4,5,9,7,3,A1,A3,A5,0,2,A2,A4,A6,1};



// previous states of the buttons:
int lastButtonState[] = {HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH};
// characters to print when the buttons are pushed:
char buttonChar[] = {'1','2','3','4','5','6','7','8','9','0','-','=','q','w','e','r', 't', 'y'};



void setup() {
  // initialize serial and Keyboard:
  Serial.begin(9600);
  Keyboard.begin();
  // set button input modes:
  for (int b = 0; b < buttonCount; b++) {
    pinMode(buttonPin[b], INPUT_PULLUP);
  }
}

void loop() {
  // iterate over the button list:
  for (int b = 0; b < buttonCount; b++) {
    // read this button:
    int buttonState = digitalRead(buttonPin[b]);
    // if it has changed:
    if (buttonState != lastButtonState[b]) {
      // wait until button state stabilizes:
      delay(debounceDelay);
      // if it's low:
      if (buttonState == LOW) {
        // send keystroke:
        Keyboard.print(buttonChar[b]);
        Serial.print(buttonChar[b]);
      }
      // save current state for next time:
      lastButtonState[b] = buttonState;
    }
  }
}
