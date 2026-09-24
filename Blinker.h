#ifndef BLINKER_H
   #define BLINKER_H

    class Blinker{
        private:
            int _pin;
            unsigned long _interval;
            unsigned long _startVertraging;
            unsigned long _volgendeBlink;


        public:
            
            Blinker(int pin, unsigned long interval, unsigned long startVertraging = 0);          //constructor
            // ~Blinker() ;         //Destructor

            int handle();
    };

#endif
