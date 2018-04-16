/*
 * main.c
 *
 *  Created on: Mar 24, 2018
 *      Author: My
 */
#include "types.h"
#include "Register.h"
#include <avr/delay.h>
#include"DIO.h"



void main(void)
{


	//DIO_vidSetPortDirection(0 ,255);
	//DIO_vidSetPortValue(0 ,255);



//}






/* DDRA =0b11111111; // 255
   DDRB =0b11111111; // 255
   DDRC =0b11111111; // 255
   DDRD =0b11111111; // 255

   while(1)
   {
	           PORTB = 0b01111101; // Number 6
	  	       PORTA = 0b00111111; // Number 0
	  	  	   _delay_ms(100);
	  	  	   PORTB = 0b01101101; // Number 5
	  	  	   PORTA = 0b01101111; // Number 9
	  	  	   _delay_ms(100);
	  	  	   PORTB = 0b01101101; // Number 5
	  	  	   PORTA = 0b11111111; // Number 8
	  	  	   _delay_ms(100);
	  	  	   PORTB = 0b01101101; // Number 5
	  	  	   PORTA = 0b00000111; // Number 7
	  	  	   _delay_ms(100);
	  	  	   PORTB = 0b01101101; // Number 5
	  	  	   PORTA = 0b01111101; // Number 6
	  	  	   _delay_ms(100);
	  	  	   PORTB = 0b01101101; // Number 5
	  	  	   PORTA = 0b01101101; // Number 5
	  	  	   _delay_ms(100);
	  	  	   PORTB = 0b01101101; // Number 5
	  	  	   PORTA = 0b01100110; // Number 4
	  	  	   _delay_ms(100);
	  	  	   PORTB = 0b01101101; // Number 5
	  	  	   PORTA = 0b01001111; // Number 3
	  	  	   _delay_ms(100);
	  	  	   PORTB = 0b01101101; // Number 5
	  	  	   PORTA = 0b01011011; // Number 2
	  	        _delay_ms(100);
	  		   PORTB = 0b01101101; // Number 5
	  	       PORTA = 0b00110000; // Number 1
	  	  	   _delay_ms(100);

	  	  	   ///////////////
	  	  	           PORTB = 0b01111101; // Number 6
	  	  		       PORTA = 0b00111111; // Number 0
	  	  		  	   _delay_ms(100);
	  	  		  	   PORTB = 0b01101101; // Number 5
	  	  		  	   PORTA = 0b01101111; // Number 9
	  	  		  	   _delay_ms(100);
	  	  		  	   PORTB = 0b01101101; // Number 5
	  	  		  	   PORTA = 0b11111111; // Number 8
	  	  		  	   _delay_ms(100);
	  	  		  	   PORTB = 0b01101101; // Number 5
	  	  		  	   PORTA = 0b00000111; // Number 7
	  	  		  	   _delay_ms(100);
	  	  		  	   PORTB = 0b01101101; // Number 5
	  	  		  	   PORTA = 0b01111101; // Number 6
	  	  		  	   _delay_ms(100);
	  	  		  	   PORTB = 0b01101101; // Number 5
	  	  		  	   PORTA = 0b01101101; // Number 5
	  	  		  	   _delay_ms(100);
	  	  		  	   PORTB = 0b01101101; // Number 5
	  	  		  	   PORTA = 0b01100110; // Number 4
	  	  		  	   _delay_ms(100);
	  	  		  	   PORTB = 0b01101101; // Number 5
	  	  		  	   PORTA = 0b01001111; // Number 3
	  	  		  	   _delay_ms(100);
	  	  		  	   PORTB = 0b01101101; // Number 5
	  	  		  	   PORTA = 0b01011011; // Number 2
	  	  		        _delay_ms(100);
	  	  			   PORTB = 0b01101101; // Number 5
	  	  		       PORTA = 0b00110000; // Number 1
	  	  		  	   _delay_ms(100);
  	  		  	       PORTB = 0b00111111; // Number 0
  	  		  	       PORTA = 0b00111111; // Number 0


	  	  		  	   //////////
	  	  		           PORTB = 0b01111101; // Number 6
	  	  		  	       PORTA = 0b00111111; // Number 0
	  	  		  	  	   _delay_ms(100);
	  	  		  	  	   PORTB = 0b01101101; // Number 5
	  	  		  	  	   PORTA = 0b01101111; // Number 9
	  	  		  	  	   _delay_ms(100);
	  	  		  	  	   PORTB = 0b01101101; // Number 5
	  	  		  	  	   PORTA = 0b11111111; // Number 8
	  	  		  	  	   _delay_ms(100);
	  	  		  	  	   PORTB = 0b01101101; // Number 5
	  	  		  	  	   PORTA = 0b00000111; // Number 7
	  	  		  	  	   _delay_ms(100);
	  	  		  	  	   PORTB = 0b01101101; // Number 5
	  	  		  	  	   PORTA = 0b01111101; // Number 6
	  	  		  	  	   _delay_ms(100);
	  	  		  	  	   PORTB = 0b01101101; // Number 5
	  	  		  	  	   PORTA = 0b01101101; // Number 5
	  	  		  	  	   _delay_ms(100);
	  	  		  	  	   PORTB = 0b01101101; // Number 5
	  	  		  	  	   PORTA = 0b01100110; // Number 4
	  	  		  	  	   _delay_ms(100);
	  	  		  	  	   PORTB = 0b01101101; // Number 5
	  	  		  	  	   PORTA = 0b01001111; // Number 3
	  	  		  	  	   _delay_ms(100);
	  	  		  	  	   PORTB = 0b01101101; // Number 5
	  	  		  	  	   PORTA = 0b01011011; // Number 2
	  	  		  	        _delay_ms(100);
	  	  		  		   PORTB = 0b01101101; // Number 5
	  	  		  	       PORTA = 0b00110000; // Number 1
	  	  		  	  	   _delay_ms(100);
	  	  		  	       PORTB = 0b00111111; // Number 0
	  	  		  	       PORTA = 0b00111111; // Number 0




   }
*/



  while(1){

     PORTA =0b00100000; // number 0


   PORTA =0b10000001; //0b10101010
   _delay_ms(1000);
   PORTA =0b01000010;
   _delay_ms(1000);
   PORTA =0b00100100;
   _delay_ms(1000);
   PORTA =0b00011000;
   _delay_ms(1000);
   PORTA =0b00100100;
   _delay_ms(1000);
   PORTA =0b01000010;
   _delay_ms(1000);
   PORTA =0b10000001;
   _delay_ms(1000);

   }

 // return 0;
}
