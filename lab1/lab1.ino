#include "pitches.h"
#include "button.h"
#include "buzzer.h"

#define PIN_BUZZER 10
#define PIN_BUTTON_1 2
#define PIN_BUTTON_2 3
#define PIN_BUTTON_3 4
#define PIN_BUTTON_4 5
#define PIN_BUTTON_5 6
#define PIN_BUTTON_6 7
#define PIN_BUTTON_7 8
#define PIN_BUTTON_8 9

int notes[] = {NOTE_C3, NOTE_D3, NOTE_E3, NOTE_F3, NOTE_G3, NOTE_A3, NOTE_B3, NOTE_C4};
int notesCount = 8;

Button button1(PIN_BUTTON_1);
Button button2(PIN_BUTTON_2);
Button button3(PIN_BUTTON_3);
Button button4(PIN_BUTTON_4);
Button button5(PIN_BUTTON_5);
Button button6(PIN_BUTTON_6);
Button button7(PIN_BUTTON_7);
Button button8(PIN_BUTTON_8);

Button buttons[] = {button1, button2, button3, button4, button5, button6, button7, button8};
Buzzer buzzer(PIN_BUZZER);

void setup()
{
  
}

void loop() {
    for (int i = 0; i < notesCount; i++)
    { 
      if (buttons[i].wasPressed())
      {
        buzzer.playNote(notes[i]);
      }
    }
}
