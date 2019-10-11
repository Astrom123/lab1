#pragma once

#define BUTTON_DEBOUNCE_DELAY 50

class Button
{
public:
    Button(int _pin)
    {
        pin = _pin;
        state = LOW;
        pinMode(pin, INPUT_PULLUP);
    }

    bool pressed()
    {
        state = digitalRead(pin);
        return state == LOW;
    }

private:
    int pin;
    int state;
};
