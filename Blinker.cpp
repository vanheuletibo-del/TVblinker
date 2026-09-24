#include <Arduino.h>
#include <Blinker.h>

                        
Blinker::Blinker(int pin, unsigned long interval, unsigned long startVertraging = 0) {
    _pin = pin;
    _interval = interval;
    _startVertraging = startVertraging;
    _volgendeBlink = millis() + _startVertraging;

    pinMode(_pin, OUTPUT);
}

int Blinker::handle(void) {
    unsigned long nu = millis();
    int retval = false;

    if (nu >= _volgendeBlink) {
        _volgendeBlink = nu + _interval;
        digitalWrite(_pin, !digitalRead(_pin));
        retval = true;
    }
    return retval;
}

