/* P_L = Peso levantado maximo actual
   N_R = Numero de repeticiones maximas con el peso levantado maximo
   RM = Repeticion maxima
   Intensidad = Intensidad con la que se realiza el ejercicio
   Prom_Intensidad = Promedio de intensidad con la que se realiza el ejercicio
   P_A = Peso con el que se esta trabajando actualmente
   POR_I = Porcentaje de la intensidad 
   PROM_POR_I = Promedio de porcentaje de intensidad*/

#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

using namespace std;

float P_L[5], N_R[5],RM[5], Intensidad[5], P_A[5], POR_I[5], PROM_POR_I, Prom_Intensidad; //VARIABLES PARA CALCULO DE LA INTENSIDAD
float p_l[5], n_r[5], p_a[5]; //DATOS INGRESADOS POR EL USUARIO
int indice, n_ejercicio, s_indice, _indice;

float calculo_intensidad(float P_L[], float N_R[], float P_A[])
{

    for (size_t j = 0; j < 5; j++)
    {
        RM[j] = (P_L[j]) / (1.0278 - 0.0278 * (N_R[j]));
        Intensidad[j] = P_A[j] / RM[j];
        POR_I[j] = Intensidad[j] * 100;
        Prom_Intensidad = Prom_Intensidad + Intensidad[j];
        cout << POR_I[j];
    }

    PROM_POR_I = (Prom_Intensidad/5) * 100;

    return PROM_POR_I;
}

int determina_intensidad(float por_i) 
{
    if (por_i <50 )
    {
        cout << "\nTIPO DE INTENSIDAD: \n";
        cout << "ESCASA\n\n";
        indice = 1;
    }

    else if (por_i > 50 && por_i < 70)
    {
        cout << "\nTIPO DE INTENSIDAD: \n";
        cout << "LEVE/MEDIA\n\n";
        indice = 2;
    }

    else if (por_i > 70 && por_i < 80)
    {
        cout << "\nTIPO DE INTENSIDAD: \n";
        cout << "MEDIA/ALTA\n\n";
        indice = 3;
    }

    else if (por_i > 80 && por_i < 90)
    {
        cout << "\nTIPO DE INTENSIDAD: \n";
        cout << "ALTA/SUBMAXIMA\n\n";
        indice = 4;
    }

    else if (por_i > 90 && por_i < 100)
    {
        cout << "\nTIPO DE INTENSIDAD: \n";
        cout << "MAXIMA\n\n";
        indice = 5;
    }

    return indice;
    system("PAUSE");
}

void asignasion_de_entreno(int s_indice)
{
    if (s_indice == 1 || s_indice == 2 || s_indice == 3)
    {
        cout << "LUNES\n";
        cout << "RUTINA 1\n\n";

        cout << "MARTES\n";
        cout << "RUTINA 2\n\n";

        cout << "MIERCOLES\n";
        cout << "RUTINA 1\n\n";

        cout << "JUEVES\n";
        cout << "RUTINA 2\n\n";

        cout << "VIERNES\n";
        cout << "RUTINA 1\n\n";

        cout << "SABADO\n";
        cout << "RUTINA 2\n\n";

        cout << "DOMINGO\n";
        cout << "DESCANSO\n\n";
    }

    else if (s_indice == 4)
    {
        cout << "LUNES\n";
        cout << "RUTINA 1\n\n";

        cout << "MARTES\n";
        cout << "RUTINA 2\n\n";

        cout << "MIERCOLES\n";
        cout << "RUTINA 3\n\n";

        cout << "JUEVES\n";
        cout << "RUTINA 1\n\n";

        cout << "VIERNES\n";
        cout << "RUTINA 2\n\n";

        cout << "SABADO\n";
        cout << "RUTINA 3\n\n";

        cout << "DOMINGO\n";
        cout << "DESCANSO\n\n";
    }

    else if (s_indice == 5)
    {
        cout << "LUNES\n";
        cout << "RUTINA 1\n\n";

        cout << "MARTES\n";
        cout << "RUTINA 2\n\n";

        cout << "MIERCOLES\n";
        cout << "DESCANSO\n\n";

        cout << "JUEVES\n";
        cout << "RUTINA 1\n\n";

        cout << "VIERNES\n";
        cout << "RUTINA 2\n\n";

        cout << "SABADO\n";
        cout << "DESCANSO\n\n";

        cout << "DOMINGO\n";
        cout << "DESCANSO\n\n";
    }
}

void imprimir_rutina(int _indice) 
{
    cout << "RECUERDA HACER 10 MIN DE CARDIO AL INICIO DE TU RUTINA Y OTROS 10 MIN AL TERMINO DE TU RUTINA\n\n";
    
    if (_indice == 1)
    {
        cout << "LUNES\n\n"; //<----------

        cout << "PRESS DE BANCA 3 x 12-15\n";
        cout << "PRESS INCLINADO 3 x 12-15\n";
        cout << "CRUCES CON POLEA 3 x 12-15\n\n";

        cout << "COMPA A 2 MANOS 3 x 12-15\n";
        cout << "PRESS FRANCES 3 x 12-15\n";
        cout << "FONDOS 3 x 12-15\n\n";

        cout << "PRESS MILITAR CON BARRA 3 x 12-15\n";
        cout << "ELEVACION LATERAL 3 x 12-15\n";
        cout << "ELEVACION FRONTAL CON BARRA 3 x 12-15\n\n";

        cout << "MARTES\n\n"; //<-----------
        
        cout << "DOMINADAS 3 x 12-15\n";
        cout << "JALON AL PECHO 3 x 12-15\n";
        cout << "REMO CON BARRA 3 x 12-15\n\n";

        cout << "CURL DE BICEPS CON BARRA 3 x 12-15\n";
        cout << "CURL BICEPS TIPO MARTILLO 3 x 12-15\n";
        cout << "CURL DE BICEPS CONCENTRADO CON MANCUERNAS 3 x 12-15\n\n";

        cout << "SENTADILLA 3 x 12-15\n";
        cout << "ZANCADAS 3 x 12-15\n";
        cout << "PESO MUERTO 3 x 12-15\n\n";

        cout << "MIERCOLES\n\n"; //<-----------
        
        cout << "FLEXIONES 3 x 12-15\n";
        cout << "APERTURA DE PECHO 3 x 12-15\n";
        cout << "PRESS DECLINADO 3 x 12-15\n\n";

        cout << "POLEA CON CUERDA 3 x 12-15\n";
        cout << "EXTENSION A UNA MANO CON POLEA 3 x 12-15\n";
        cout << "POLEA CON BARRA Z 3 x 12-15\n\n";

        cout << "ELEVACION LATERAL 3 x 12-15\n";
        cout << "PAJARITOS 3 x 12-15\n";
        cout << "FACE PULL 3 x 12-15\n\n";

        cout << "JUEVES\n\n"; //<----------
        
        cout << "PRESS DE BANCA 3 x 12-15\n";
        cout << "PRESS INCLINADO 3 x 12-15\n";
        cout << "CRUCES CON POLEA 3 x 12-15\n\n";

        cout << "COPA A 2 MANOS 3 x 12-15\n";
        cout << "PRESS FRANCES 3 x 12-15\n";
        cout << "FONDOS Z 3 x 12-15\n\n";

        cout << "PRESS MILITAR CON BARRA 3 x 12-15\n";
        cout << "ELEVACION LATERAL 3 x 12-15\n";
        cout << "ELEVACION FRONTAL CON BARRA 3 x 12-15\n\n";

        cout << "VIERNES\n\n"; //<----------
        
        cout << "PRESS DE BANCA 3 x 12-15\n";
        cout << "PRESS INCLINADO 3 x 12-15\n";
        cout << "CRUCES CON POLEA 3 x 12-15\n\n";

        cout << "COMPA A 2 MANOS 3 x 12-15\n";
        cout << "PRESS FRANCES 3 x 12-15\n";
        cout << "FONDOS 3 x 12-15\n\n";

        cout << "PRESS MILITAR CON BARRA 3 x 12-15\n";
        cout << "ELEVACION LATERAL 3 x 12-15\n";
        cout << "ELEVACION FRONTAL CON BARRA 3 x 12-15\n\n";

        cout << "SABADO\n\n"; //<------------
        
        cout << "DOMINADAS 3 x 12-15\n";
        cout << "JALON AL PECHO 3 x 12-15\n";
        cout << "REMO CON BARRA 3 x 12-15\n\n";

        cout << "CURL DE BICEPS CON BARRA 3 x 12-15\n";
        cout << "CURL BICEPS TIPO MARTILLO 3 x 12-15\n";
        cout << "CURL DE BICEPS CONCENTRADO CON MANCUERNAS 3 x 12-15\n\n";

        cout << "SENTADILLA 3 x 12-15\n";
        cout << "ZANCADAS 3 x 12-15\n";
        cout << "PESO MUERTO 3 x 12-15\n\n";

        cout << "DOMINGO\n\n"; //<------------
        cout << "DESCANSO\n\n";
    }

    else if (_indice == 2)
    {
        cout << "LUNES\n\n"; //<----------

        cout << "PRESS DE BANCA 4 x 10-12\n";
        cout << "PRESS INCLINADO 4 x 10-12\n";
        cout << "CRUCES CON POLEA 4 x 10-12\n\n";

        cout << "COMPA A 2 MANOS 4 x 10-12\n";
        cout << "PRESS FRANCES 4 x 10-12\n";
        cout << "FONDOS 4 x 10-12\n\n";

        cout << "PRESS MILITAR CON BARRA 4 x 10-12\n";
        cout << "ELEVACION LATERAL 4 x 10-12\n";
        cout << "ELEVACION FRONTAL CON BARRA 4 x 10-12\n\n";

        cout << "MARTES\n\n"; //<-----------

        cout << "DOMINADAS 4 x 10-12\n";
        cout << "JALON AL PECHO 4 x 10-12\n";
        cout << "REMO CON BARRA 4 x 10-12\n\n";

        cout << "CURL DE BICEPS CON BARRA 4 x 10-12\n";
        cout << "CURL BICEPS TIPO MARTILLO 4 x 10-12\n";
        cout << "CURL DE BICEPS CONCENTRADO CON MANCUERNAS 4 x 10-12\n\n";

        cout << "SENTADILLA 4 x 10-12\n";
        cout << "ZANCADAS 4 x 10-12\n";
        cout << "PESO MUERTO 4 x 10-12\n\n";

        cout << "MIERCOLES\n\n"; //<-----------

        cout << "FLEXIONES 4 x 10-12\n";
        cout << "APERTURA DE PECHO 4 x 10-12\n";
        cout << "PRESS DECLINADO 4 x 10-12\n\n";

        cout << "POLEA CON CUERDA 4 x 10-12\n";
        cout << "EXTENSION A UNA MANO CON POLEA 4 x 10-12\n";
        cout << "POLEA CON BARRA Z 4 x 10-12\n\n";

        cout << "ELEVACION LATERAL 4 x 10-12\n";
        cout << "PAJARITOS 4 x 10-12\n";
        cout << "FACE PULL 4 x 10-12\n\n";

        cout << "JUEVES\n\n"; //<----------

        cout << "PRESS DE BANCA 4 x 10-12\n";
        cout << "PRESS INCLINADO 4 x 10-12\n";
        cout << "CRUCES CON POLEA 4 x 10-12\n\n";

        cout << "COPA A 2 MANOS 4 x 10-12\n";
        cout << "PRESS FRANCES 4 x 10-12\n";
        cout << "FONDOS Z 4 x 10-12\n\n";

        cout << "PRESS MILITAR CON BARRA 4 x 10-12\n";
        cout << "ELEVACION LATERAL 4 x 10-12\n";
        cout << "ELEVACION FRONTAL CON BARRA 4 x 10-12\n\n";

        cout << "VIERNES\n\n"; //<----------

        cout << "PRESS DE BANCA 4 x 10-12\n";
        cout << "PRESS INCLINADO 4 x 10-12\n";
        cout << "CRUCES CON POLEA 4 x 10-12\n\n";

        cout << "COMPA A 2 MANOS 4 x 10-12\n";
        cout << "PRESS FRANCES 4 x 10-12\n";
        cout << "FONDOS 4 x 10-12\n\n";

        cout << "PRESS MILITAR CON BARRA 4 x 10-12\n";
        cout << "ELEVACION LATERAL 4 x 10-12\n";
        cout << "ELEVACION FRONTAL CON BARRA 4 x 10-12\n\n";

        cout << "SABADO\n\n"; //<------------

        cout << "DOMINADAS 4 x 10-12\n";
        cout << "JALON AL PECHO 4 x 10-12\n";
        cout << "REMO CON BARRA 4 x 10-12\n\n";

        cout << "CURL DE BICEPS CON BARRA 4 x 10-12\n";
        cout << "CURL BICEPS TIPO MARTILLO 4 x 10-12\n";
        cout << "CURL DE BICEPS CONCENTRADO CON MANCUERNAS 4 x 10-12\n\n";

        cout << "SENTADILLA 4 x 10-12\n";
        cout << "ZANCADAS 4 x 10-12\n";
        cout << "PESO MUERTO 4 x 10-12\n\n";

        cout << "DOMINGO\n\n"; //<------------
        cout << "DESCANSO\n\n";
    }

    else if (_indice == 3)
    {
    cout << "LUNES\n\n"; //<----------

    cout << "PRESS DE BANCA 4 x 8-10\n";
    cout << "PRESS INCLINADO 4 x 8-10\n";
    cout << "CRUCES CON POLEA 4 x 8-10\n\n";

    cout << "COMPA A 2 MANOS 4 x 8-10\n";
    cout << "PRESS FRANCES 4 x 8-10\n";
    cout << "FONDOS 4 x 8-10\n\n";

    cout << "PRESS MILITAR CON BARRA 4 x 8-10\n";
    cout << "ELEVACION LATERAL 4 x 8-10\n";
    cout << "ELEVACION FRONTAL CON BARRA 4 x 8-10\n\n";

    cout << "MARTES\n\n"; //<-----------

    cout << "DOMINADAS 4 x 8-10\n";
    cout << "JALON AL PECHO 4 x 8-10\n";
    cout << "REMO CON BARRA 4 x 8-10\n\n";

    cout << "CURL DE BICEPS CON BARRA 4 x 8-10\n";
    cout << "CURL BICEPS TIPO MARTILLO 4 x 8-10\n";
    cout << "CURL DE BICEPS CONCENTRADO CON MANCUERNAS 4 x 8-10\n\n";

    cout << "SENTADILLA 4 x 8-10\n";
    cout << "ZANCADAS 4 x 8-10\n";
    cout << "PESO MUERTO 4 x 8-10\n\n";

    cout << "MIERCOLES\n\n"; //<-----------

    cout << "FLEXIONES 4 x 8-10\n";
    cout << "APERTURA DE PECHO 4 x 8-10\n";
    cout << "PRESS DECLINADO 4 x 8-10\n\n";

    cout << "POLEA CON CUERDA 4 x 8-10\n";
    cout << "EXTENSION A UNA MANO CON POLEA 4 x 8-10\n";
    cout << "POLEA CON BARRA Z 4 x 8-10\n\n";

    cout << "ELEVACION LATERAL 4 x 8-10\n";
    cout << "PAJARITOS 4 x 8-10\n";
    cout << "FACE PULL 4 x 8-10\n\n";

    cout << "JUEVES\n\n"; //<----------

    cout << "PRESS DE BANCA 4 x 8-10\n";
    cout << "PRESS INCLINADO 4 x 8-10\n";
    cout << "CRUCES CON POLEA 4 x 8-10\n\n";

    cout << "COPA A 2 MANOS 4 x 8-10\n";
    cout << "PRESS FRANCES 4 x 8-10\n";
    cout << "FONDOS Z 4 x 8-10\n\n";

    cout << "PRESS MILITAR CON BARRA 4 x 8-10\n";
    cout << "ELEVACION LATERAL 4 x 8-10\n";
    cout << "ELEVACION FRONTAL CON BARRA 4 x 8-10\n\n";

    cout << "VIERNES\n\n"; //<----------

    cout << "PRESS DE BANCA 4 x 8-10\n";
    cout << "PRESS INCLINADO 4 x 8-10\n";
    cout << "CRUCES CON POLEA 4 x 8-10\n\n";

    cout << "COMPA A 2 MANOS 4 x 8-10\n";
    cout << "PRESS FRANCES 4 x 8-10\n";
    cout << "FONDOS 4 x 8-10\n\n";

    cout << "PRESS MILITAR CON BARRA 4 x 8-10\n";
    cout << "ELEVACION LATERAL 4 x 8-10\n";
    cout << "ELEVACION FRONTAL CON BARRA 4 x 8-10\n\n";

    cout << "SABADO\n\n"; //<------------

    cout << "DOMINADAS 4 x 8-10\n";
    cout << "JALON AL PECHO 4 x 8-10\n";
    cout << "REMO CON BARRA 4 x 8-10\n\n";

    cout << "CURL DE BICEPS CON BARRA 4 x 8-10\n";
    cout << "CURL BICEPS TIPO MARTILLO 4 x 8-10\n";
    cout << "CURL DE BICEPS CONCENTRADO CON MANCUERNAS 4 x 8-10\n\n";

    cout << "SENTADILLA 4 x 8-10\n";
    cout << "ZANCADAS 4 x 8-10\n";
    cout << "PESO MUERTO 4 x 8-10\n\n";

    cout << "DOMINGO\n\n"; //<------------
    cout << "DESCANSO\n\n";
    }

    else if (_indice == 4)
    {
    cout << "LUNES\n\n"; //<----------

    cout << "PRESS DE BANCA 4 x 6-8\n";
    cout << "PRESS INCLINADO 4 x 6-8\n";
    cout << "PRESS DECLINADO 4 x 6-8\n";
    cout << "APERTURA DE PECHO 4 x 6-8\n\n";

    cout << "COPA A 2 MANOS 4 x 6-8\n";
    cout << "POLEA CON CUERDA 4 x 6-8\n";
    cout << "PRESS FRANCES 4 x 6-8\n";
    cout << "FONDOS 4 x 6-8\n\n";

    cout << "PRESS MILITAR CON BARRA 4 x 6-8\n";
    cout << "ELEVACION LATERAL 4 x 6-8\n";
    cout << "FACE PULL 4 x 6-8\n\n";

    cout << "MARTES\n\n"; //<-----------

    cout << "DOMINADAS 4 x 6-8\n";
    cout << "JALON AL PECHO CON AGARRE PRONO 4 x 6-8\n";
    cout << "JALON AL PECHO CON AGARRE SUPINO 4 x 6-8\n";
    cout << "REMO CON BARRA 4 x 6-8\n";
    cout << "PULL OVER 4 x 6-8\n\n";

    cout << "CURL DE BICEPS CON BARRA 4 x 6-8\n";
    cout << "CURL DE BICEPS CON MANCUERNA 4 x 6-8\n";
    cout << "CURL DE BICEPS TIPO MARTILLO 4 x 6-8\n";
    cout << "CURL DE BICEPS EN BANCO INCLINADO 4 x 6-8\n";
    cout << "PREDICADOR 4 x 6-8\n\n";

    cout << "MIERCOLES\n\n"; //<-----------

    cout << "SENTADILLA 4 x 6-8\n";
    cout << "ZANCADA 4 x 6-8\n";
    cout << "EXTENSION 4 x 6-8\n";
    cout << "CURL DE FEMORAL 4 x 6-8\n";
    cout << "ABDUCTORES 4 x 6-8\n";
    cout << "ADUCTORES 4 x 6-8\n";
    cout << "PESO MUERTO 4 x 6-8\n";
    cout << "GEMELOS 4 x 6-8\n\n";

    cout << "JUEVES\n\n"; //<----------

    cout << "FLEXIONES 4 x 6-8\n";
    cout << "PRESS DE BANCA CON MANCUERNA CON AGARRE NEUTRO 4 x 6-8\n";
    cout << "PRESS INCLINADO CON MANCUERNA 4 x 6-8\n";
    cout << "CRUCES CON POLEA 4 x 6-8\n\n";

    cout << "POLEA CON CUERDA 4 x 6-8\n";
    cout << "POLEA CON BARRA Z 4 x 6-8\n";
    cout << "PRESS FRANCES 4 x 6-8\n";
    cout << "FONDOS 4 x 6-8\n\n";

    cout << "ELEVACION LATERAL 4 x 6-8\n";
    cout << "ELEVACION FRONTAL CON BARRA 4 x 6-8\n";
    cout << "PRESS MILITAR CON MANCUERNA 4 x 6-8\n\n";

    cout << "VIERNES\n\n"; //<----------

    cout << "DOMINADAS 4 x 6-8\n";
    cout << "JALON AL PECHO CON AGARRE PRONO 4 x 6-8\n";
    cout << "JALON AL PECHO CON AGARRE NEUTRO 4 x 6-8\n";
    cout << "REMO CON MANCUERNA 4 x 6-8\n";
    cout << "PULL OVER 4 x 6-8\n\n";

    cout << "CURL DE BICEPS CON MANCUERNA 4 x 6-8\n";
    cout << "CURL DE BICEPS CON POLEA ALTA 4 x 6-8\n";
    cout << "CURL DE BICEPS CONCENTRADO CON MANCUERNA 4 x 6-8\n";
    cout << "CURL DE BICEPS EN BANCO INCLINADO 4 x 6-8\n";
    cout << "PREDICADOR CON MANCUERNA 4 x 6-8\n\n";

    cout << "SABADO\n\n"; //<------------

    cout << "SENTADILLA 4 x 6-8\n";
    cout << "ZANCADA 4 x 6-8\n";
    cout << "EXTENSION 4 x 6-8\n";
    cout << "CURL DE FEMORAL 4 x 6-8\n";
    cout << "ABDUCTORES 4 x 6-8\n";
    cout << "ADUCTORES 4 x 6-8\n";
    cout << "PESO MUERTO 4 x 6-8\n";
    cout << "GEMELOS 4 x 6-8\n\n";

    cout << "DOMINGO\n\n"; //<------------
    cout << "DESCANSO\n\n";
    }

    else if (_indice == 5)
    {
    cout << "LUNES\n\n"; //<----------

    cout << "PRESS DE BANCA 6 x 1-3\n";
    cout << "PRESS INCLINADO 6 x 1-3\n";
    cout << "CRUCES CON POLEA 6 x 1-3\n\n";

    cout << "COPA A 2 MANOS 6 x 1-3\n";
    cout << "POLEA CON CUERDA 6 x 1-3\n";
    cout << "POLEA CON BARRA Z 6 x 1-3\n\n";

    cout << "PRESS MILITAR FRONTAL CON BARRA 6 x 1-3\n";
    cout << "PRESS MILITAR CON MANCUERNA 6 x 1-3\n";
    cout << "FACE PULL 6 x 1-3\n\n";

    cout << "MARTES\n\n"; //<-----------

    cout << "JALON AL PECHO AGARRE PRONO 6 x 1-3\n";
    cout << "REMO CON BARRA 6 x 1-3\n";
    cout << "PULL OVER 6 x 1-3\n\n";

    cout << "CURL DE BICEPS CON BARRA 6 x 1-3\n";
    cout << "CURL DE BICEPS CON MANCUERNA 6 x 1-3\n";
    cout << "CURL BICEPS TIPO MARTILLO 6 x 1-3\n\n";

    cout << "SENTADILLA 6 x 1-3\n";
    cout << "EXTENSION 6 x 1-3\n";
    cout << "PESO MUERTO 6 x 1-3\n\n";

    cout << "MIERCOLES\n\n"; //<-----------

    cout << "DESCANSO\n\n";

    cout << "JUEVES\n\n"; //<----------

    cout << "PRESS DE BANCA 6 x 1-3\n";
    cout << "PRESS INCLINADO 6 x 1-3\n";
    cout << "CRUCES CON POLEA 6 x 1-3\n\n";

    cout << "COPA A 2 MANOS 6 x 1-3\n";
    cout << "POLEA CON CUERDA 6 x 1-3\n";
    cout << "POLEA CON BARRA Z 6 x 1-3\n\n";

    cout << "PRESS MILITAR FRONTAL CON BARRA 6 x 1-3\n";
    cout << "PRESS MILITAR CON MANCUERNA 6 x 1-3\n";
    cout << "FACE PULL 6 x 1-3\n\n";

    cout << "VIERNES\n\n"; //<----------

    cout << "JALON AL PECHO AGARRE PRONO 6 x 1-3\n";
    cout << "REMO CON BARRA 6 x 1-3\n";
    cout << "PULL OVER 6 x 1-3\n\n";

    cout << "CURL DE BICEPS CON BARRA 6 x 1-3\n";
    cout << "CURL DE BICEPS CON MANCUERNA 6 x 1-3\n";
    cout << "CURL BICEPS TIPO MARTILLO 6 x 1-3\n\n";

    cout << "SENTADILLA 6 x 1-3\n";
    cout << "EXTENSION 6 x 1-3\n";
    cout << "PESO MUERTO 6 x 1-3\n\n";

    cout << "SABADO\n\n"; //<------------

    cout << "DESCANSO\n\n";

    cout << "DOMINGO\n\n"; //<------------
    
    cout << "DESCANSO\n\n";
    }
   system("PAUSE");
}

int main()
{
    cout << "\t\t\tBIENVENIDO A RUTINA SYSTEM\n\n";

    cout << "ESTE SISTEMA TE AYUDARA A GENERAR RUTINA DE EJERCICIO DE ACUERDO CON LA INTENISDAD \nCON LA QUE EJERCITES, ADEMAS SE CALCULARA LA INTENSIDAD CON LA QUE TE EJERCITAS Y \nCON ELLO TE DIREMOS TUS DIAS DE DESCANSO.\n\n ";
    
    cout << "MUY BIEN AHORA COMENCEMOS. \n\n";

    system("PAUSE");

    for (size_t i = 0; i <5 ; i++)
    {
        cout << "LISTA DE EJERCICIOS A EVALUAR: \n\n";

        cout << "1.CURL BICEP CON BARRA.\n";
        cout << "2.EXTENSION TRICEP CON POLEA.\n";
        cout << "3.PRESS DE BANCA.\n ";
        cout << "4.JALON AL PECHO.\n";
        cout << "5.SENTADILLA.\n\n";

        n_ejercicio = n_ejercicio + 1;

        cout << "EJERCICIO " << n_ejercicio << ": \n\n";

        cout << "INGRESA TU PESO MAXIMO LEVANTADO EN KG: ";
        cin >> p_l[i];
        cout << "\nINGRESA LA CANTIDAD MAXIMA DE REPETICIONES HECHAS CON EL PESO MAXIMO: ";
        cin >> n_r[i];
        cout << "\nAHORA INGRESA EL PESO QUE USAS EN TU RUTINA ACTUAL EN KG: ";
        cin >> p_a[i];

        system("CLS");
    }
    
    calculo_intensidad(p_l, n_r, p_a);

    system("cls");

    cout << "\n" <<"PORCENTAJE DE INTENSIDAD: \n" << PROM_POR_I << "%\n";

    determina_intensidad(PROM_POR_I);

    asignasion_de_entreno(indice);

    imprimir_rutina(indice);
}
