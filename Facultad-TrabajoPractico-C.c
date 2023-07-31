#include<stdio.h>   
#include <time.h>
#include <conio.h>   


void CICLO_LAVADO_MANUAL();
void CICLO_PINTURA_BASE();

void main(){    

    int OPC;

    do{
        printf("\nBienvenido a Auto Plus. Menu de opciones:\n");
        printf("\n 1- Ejecutar Ciclo de Lavado Manual");
        printf("\n 2- Ejecutar Ciclo Automático de Pintura Base");
        printf("\n 3- Salir del programa");
        printf("\n\n Ingrese una opcion (1, 2 o 3): "); scanf("%d", &OPC);
        
        if(OPC<1 || OPC>3){
            printf("\nOpcion seleccionada no valida. Seleccione una opcion posible. Vuelva a intentarlo.\n");
        }
        
        switch(OPC){
            case 1: CICLO_LAVADO_MANUAL(); continue;
            case 2: CICLO_PINTURA_BASE(); continue;
        }
                
    } while (OPC!=3);
    printf("\n\t FIN DEL PROGRAMA");
}


void CICLO_LAVADO_MANUAL(){
    
    int TIEMPO_LAVADO, TIEMPO_SECADO;
    char ENTER;
    
    clock_t t,ts;
    int SEG;
   
    int TIEMPO_TOTAL, POTENCIA_LAVADO, POTENCIA_SECADO;

    do{
        printf("\n Por favor, ingrese el tiempo de lavado(de 30 Seg. a 60 Seg.):"); scanf("%d", &TIEMPO_LAVADO);

        printf("\n Por favor, ingrese el tiempo de secado(de 20 Seg. a 90 Seg.):"); scanf("%d", &TIEMPO_SECADO);

        if(TIEMPO_LAVADO<30 || TIEMPO_LAVADO>60 || TIEMPO_SECADO<20 || TIEMPO_SECADO>90){

            printf("\nError en los datos ingresados. Vuelva a intentarlo.\n");
        } 
    } while (TIEMPO_LAVADO<30 || TIEMPO_LAVADO>60 || TIEMPO_SECADO<20 || TIEMPO_SECADO>90);

    printf("\n Presione ENTER, para continuar."); fflush(stdin); ENTER=getchar();

    printf("\n Lavado en proceso. Por favor espere...\n");

    ts=clock()+CLOCKS_PER_SEC;
    for ( SEG = 0; SEG <= TIEMPO_LAVADO ; ) {
        if( ( t = clock () ) >= ts ) {
            printf("*", SEG++);
            ts = t+CLOCKS_PER_SEC;
        }
    } printf("\n Lavado Finalizado.\n"); 
 
    printf("\n Secado en proceso. Por favor espere...\n");

    ts = clock () + CLOCKS_PER_SEC;
    for ( SEG = 0 ; SEG <= TIEMPO_SECADO;){
        if((t = clock () ) >= ts){
            printf("*", ++SEG);
            ts=t+CLOCKS_PER_SEC;
        }
    } printf("\n Secado Finalizado.\n");

    TIEMPO_TOTAL = TIEMPO_LAVADO + TIEMPO_SECADO;
    POTENCIA_LAVADO = TIEMPO_LAVADO * 5;
    POTENCIA_SECADO = TIEMPO_SECADO * 12;

    printf("\n\tCiclo Finalizado.\n");

    printf("\n Tiempo total: %d Segundos.", TIEMPO_TOTAL);
    printf("\n Potencia de lavado: %d W.", POTENCIA_LAVADO);
    printf("\n Potencia de secado: %d W.\n", POTENCIA_SECADO);
 
    printf("\n Presione ENTER, para volver al menu."); fflush(stdin); ENTER=getchar();

  
}

void CICLO_PINTURA_BASE(){

    char ENTER, TECLA;
    clock_t t, ts;
    int SEG;
    
    

    printf("\nCiclo Automatico de Pintura Base\n"); 

    printf("\nPresione Enter para iniciar el ciclo.");fflush(stdin); ENTER=getchar();    

    

    while(TECLA != 27){

        printf("\n Banio decapante de la pieza en proceso. Por favor espere...\n");
        ts=clock()+CLOCKS_PER_SEC;
        for(SEG=0; SEG<20;){
            if((t=clock())>=ts){
                printf("%i",++SEG);
                ts=t+CLOCKS_PER_SEC;
            }

            if(kbhit()){
                TECLA=getch();
                if(TECLA!=27){
                    continue;
                }
                else{
                    break;
                }
            }
            
        }
       printf("\n Banio decapante de la pieza finalizado.\n");
        
    
        printf("\n Lavado desengrasante en proceso. Por favor espere...\n");
        ts = clock() + CLOCKS_PER_SEC;
        for (SEG=0; SEG<=35;){
            if((t=clock()) >= ts){
                printf("*", ++SEG);
                ts=t+CLOCKS_PER_SEC;
            }
            
            if(kbhit()){
                TECLA=getch();
                if(TECLA!=27){continue;}
                else{break;}
            }
        } printf("\n Lavado desengrasante de la pieza finalizado.\n");

        printf("\n Secado de horno en proceso. Por favor espere...\n");
        ts = clock() + CLOCKS_PER_SEC;
        for (SEG=0; SEG<=20;){
            if((t=clock()) >= ts){
                printf("*", ++SEG);
                ts=t+CLOCKS_PER_SEC;
            }

            if(kbhit()){
                TECLA=getch();
                if(TECLA!=27){continue;}
                else{break;}
            }
        } printf("\n Secado de horno de la pieza finalizado.\n");

        printf("\n Aplicacion de Pintura Base en proceso. Por favor espere...\n");
        ts = clock() + CLOCKS_PER_SEC;
        for (SEG=0; SEG<=15;){
            if((t=clock()) >= ts){
                printf("*", ++SEG);
                ts=t+CLOCKS_PER_SEC;
            }

            if(kbhit()){
                TECLA=getch();
                if(TECLA!=27){continue;}
                else{break;}
            }
        } printf("\n Aplicacion de Pintura Base de la pieza finalizado.\n"); break;
    } 
    
    
}