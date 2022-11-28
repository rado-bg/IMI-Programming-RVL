#include <stdio.h>

int main(){
	
	double Uin;
	double Uf;
	double Iled;
	double Rled;
	
	printf("Input Power supply Uin [V]: ");
	scanf("%lf", &Uin);
	printf("Input LED's drop voltage Uf [V]: ");
	scanf("%lf", &Uf);
	printf("Input LED's current Iled [mA]: ");
	scanf("%lf", &Iled);
	
	Rled = (Uin - Uf) / Iled;
	
	printf("Resistor's value [kOhm] = %.3lf", Rled);

	return 0;
}