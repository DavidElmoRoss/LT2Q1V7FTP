/*
    When you run the program below it prints a 4 character message.
    However, one of the characters is wrong and needs to be corrected. 
    Identify the wrong character and what the character should be.            
*/

// Include Section
#include "mbed.h"                   
#include "DigitDisplay.h"          

// Hardware definitions
DigitDisplay bob(D2,D3);         
int main(void)
{
    bob.clear();                
    bob.setColon(0);            
    bob.setBrightness(4);       
    bob.writeRaw(0,0x71);    
    bob.writeRaw(1,0x77);
    bob.writeRaw(2,0x30);
    bob.writeRaw(3,0x24);  
    for(;;);
}
