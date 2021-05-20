#include<avr/io.h>
#include<util/delay.h>
void main()
{
	DDRB = 0b00011110;
	DDRC = 0b1111110;
	char ls, rs;
	while(1)
	{
		ls = PINC & 0b0000001;
		rs = PINC & 0b0000100;
		if ((ls==0b0000001)&&(rs==0b0000100))
		{
			PORTB = 0b00001100;
			_delay_ms(1500);
            PORTB = 0b00000010;


		}
		if((ls==0b00000000)&&(rs==0b0000100))
		{
				PORTB = 0b00001100;
			_delay_ms(1500);
            PORTB = 0b00010000;

		}
		if((ls==0b00000001)&&(rs==0b0000000))
		{
				PORTB = 0b00001100;
			_delay_ms(1500);
            PORTB = 0b00000010;

		}
		if((ls==0b00000000)&&(rs==0b0000000))
		{
			PORTB = 0b00010010;
		}
	}
}
