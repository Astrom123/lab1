#pragma once

#define BUZZER_NOTE_DURATION 10

class Buzzer
{
public:
    Buzzer(int _pin)
    {
        pin = _pin;
        pinMode(pin, OUTPUT);
    }

    void playNote(int note)
    {
       tone(pin, note, BUZZER_NOTE_DURATION);
    }

    void stopPlay()
    {
        noTone(pin);
    }

private:
    int pin;
};
