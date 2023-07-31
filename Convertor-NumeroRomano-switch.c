#include<stdio.h>
int main(){
    // VARIABLES
	int NUMERO,UNIDADES,DECENAS,CENTENAS,MILLAR;

    // INDICACIONES Y ESCANEO DE DATOS INGRESADOS
	printf("Digite un numero: "); 
	scanf("%i",&NUMERO);

    // CALCULO
    UNIDADES=NUMERO%10; NUMERO=NUMERO/10;
    DECENAS=NUMERO%10; NUMERO=NUMERO/10;
    CENTENAS=NUMERO%10; NUMERO=NUMERO/10;
    MILLAR=NUMERO%10; NUMERO=NUMERO/10;

    // RESULTADOS CON CONDICIONAL
	switch(MILLAR){
        case 1:printf("M");break;
        case 2:printf("MM");break;
        case 3: printf("MMM");break;	}
    switch(CENTENAS){
        case 1:printf("C");break;
        case 2:printf("CC");break;
        case 3: printf("CCC");break;
        case 4:printf("CD");break;
        case 5:printf("D");break;
        case 6: printf("DC");break;
        case 7:printf("DCC");break;
        case 8:printf("DCCC");break;
        case 9: printf("CM");break;}
    switch(DECENAS) {
        case 1:printf("X");break;
        case 2:printf("XX");break;
        case 3: printf("XXX");break;
        case 4:printf("XL");break;
        case 5:printf("L");break;
        case 6: printf("LX");break;
        case 7:printf("LXX");break;
        case 8:printf("LXXX");break;
        case 9: printf("XC");break;	}		
    switch(UNIDADES) {
        case 1:printf("I");break;
        case 2:printf("II");break;
        case 3: printf("III");break;
        case 4:printf("IV");break;
        case 5:printf("V");break;
        case 6: printf("VI");break;
        case 7:printf("VII");break;
        case 8:printf("VIII");break;
        case 9: printf("IX");break;	}	


	return 0;}