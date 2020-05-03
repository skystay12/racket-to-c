//Escribir un programa que nos diga si un estudiante  aprobó la 
//materia, el programa debe realizar los cálculos en función de 
//los siguientes criterios.
//a. Apruba si las tres notas suman  3.5 o mas
//b. Presenta pruba de validacion si la nota estan entre 3 y 3.4
//c. Reprueba si la nota es menor a 3
#include <stdio.h>
int main()
{
    int nota;
    printf("ingrese la nota: ");
    scanf("%s", &nota);
    if(nota >= 3.5){
        printf ("Aprobó la materia");
    }else{
        if ((nota >= 3) && (nota < 3.4)){
            printf ("Presenta prueba de validación");
        }else{
            if ((nota >= 0) && (nota < 3)){
                printf ("Reprobó la materia");
            }else{
                printf ("ingrese una nota valida");
            }
        }
    }
}


//Escribir un programa que muestre un menú donde las opciones sean 
//“Equilátero”, “Isósceles” y “Escaleno”, pida una opción y calcule 
//el perímetro del triángulo seleccionado.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int lado, lado2, lado3, base, opcion;
    printf("Seleccione opción:\n");
    printf("1 – Equilátero\n");
    printf("2 – Isósceles\n");
    printf("3 – Escaleno\n");
    scanf("%d",&opcion);
    switch (opcion)
    {
        case 1:
            printf("Introduzca lado del triángulo:");
            scanf("%d",&lado);
            printf("El perímetro es: %d\n",3*lado);
            break;
        case 2:
            printf("Ingrese el lado y la base: ");
            scanf("%d %d", &lado, &base);
            printf("El perímetro es: %d\n",(2*lado)+base);
            break;
        case 3:
            printf ("Ingrese los 3 lados: ");
            scanf("%d %d %d", &lado, &lado2, &lado3);
            printf("perimetro: %d\n", (lado3 + (lado + lado2)));
            break;
        default:
            printf("Opción no válida.");
            break;
    }
}

//Escribir un programa que nos muestre un menu con las opciones de:
//1.  Dia  corespondiente,  2. listar  dias,  crear  las  funciones
//respectivas  a  las  opciones.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int opcion, dia;
    printf("1. Dia corespondiente\n");
    printf("2. listar dias\n");
    switch (opcion)
    {
        case 1: printf("ingrese un numero entre 1 y 7: ");
            switch (dia)
            {
            case 1:
                printf("Lunes\n");
                break;
            case 2:
                printf("Martes\n");
                break;
            case 3:
                printf("Miercoles\n");
                break;
            case 4:
                printf("Jueves\n");
                break;
            case 5:
                printf("Viernes\n");
                break;
            case 6:
                printf("Sabado\n");
                break;
            case 7:
                printf("Domingo\n");
                break;
            default:
                printf("Ingrese una opción valida\n");
                break;
            }
            break;
        case 2:
            printf("Lunes\n");
            printf("Martes\n");
            printf("Miercoles\n");
            printf("Jueves\n");
            printf("Viernes\n");
            printf("Sabado\n");
            printf("Domingo\n");
            break;
        default:
            printf("Ingrese una opción valida\n");
            break;
    }
}

//Escribir un programa que calcule el sueldo que le corresponde al 
//trabajador de una empresa que cobra 40.000  dólares  anuales, el 
//programa debe realizar los cálculos en función de los siguientes 
//criterios.
//a.Si lleva más de 15 años en la empresa obtiene un aumento del 12%.
//b.Si lleva más de 10  y menos de 15 años obtiene un aumento del 8%.
//c.Si lleva más de  5  y menos de 10 años obtiene un aumento del 5%.
//d.  Si lleva menos de 5 años se le aplica un aumento del 3%.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int anios, opcion;
    printf("Seleccione opción:\n");
    printf("1. Calcular sueldo anual");
    printf("2. Ver aumentos anuales\n");
    scanf("%d",&opcion);
    switch (opcion)
    {
        case 1:
            if (anios > 15){
                printf ("Salario anual de: ~a\n" ((40000 * 1.2) + 40000));
            }else{
                if ((anios < 15) && (anios > 10)){
                    printf ("Salario anual de: ~a\n" ((40000 * 0.8) + 40000));
                }else{
                    if ((anios < 10) && (anios > 5)){
                        printf ("Salario anual de: ~a\n" ((40000 * 0.5) + 40000));
                    }else{
                        if ((anios < 5) && (anios > 0)){
                            printf ("Salario anual de: ~a\n" ((40000 * 0.3) + 40000));
                        }else{
                            printf ("Ingrese una año valido");
                        }
                    }
                }
            }
            break;
        case 2:
            printf ("Si lleva más de 15 años en la empresa 12%\n");
            printf ("Si lleva menos de 15 pero más de 10 años 8%\n");
            printf ("Si lleva menos de 10 pero más de 5 años 5%\n");
            printf ("Si lleva menos de 5 años 3%\n");
            break;
        default:
            printf("Opción no válida.");
            break;
    }
}