#include  "mbed.h" 
#include  "USBSerial.h" 
#include  "PwmOut.h"

PwmOut led (PD_12);
USBSerial pc;
char button;
float pwm_increm= 0.04 ;



int  main () {

    while ( 1 ) {
    
        if (pc. readable ()) {
            button= pc. getc ();
            switch(button){
            case '+' :
             
                led = led + pwm_increm;
                break;
            
            case '-':
          
                led = led - pwm_increm;
                break;
            }
            }

        }     
    }