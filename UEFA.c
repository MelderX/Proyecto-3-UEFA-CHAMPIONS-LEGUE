#include <stdio.h>
#include <stdlib.h>

int main()

{
    int n, opcion;
    system ("color 1E" );

    do
    {
    	printf(  "\n\n**** BIENVENIDOS AL CALENADARIO DE LIGA UEFA CHAMPIONS LEGUE **** \n\n"  );
    	printf("\n\n ESTE PROGRAMA TE MUETRA LOS RESULTADOS DE LA LIGA DE LOS CAMPEONES (2018-2019) \n\n");
    	printf( "\n\n   Introduzca opcion (1-14) \n\n" );
        printf("\n  FASE DE GRUPOS \n" );
        printf("\n  1. JORNADA 1 \n" );
        printf("\n  2. JORNADA 2 \n" );
        printf("\n  3. JORNADA 3 \n");
        printf("\n  4. JORNADA 4 \n");
        printf("\n  5. JORNADA 5 \n");
        printf("\n  6. JORNADA 6 \n");
        printf(  "\n\n #### OCTAVOS DE FINAL #### \n\n"  );
        printf("\n  7. PARTIDOS DE IDA OCTAVOS DE FINAL \n");
        printf("\n  8. PARTIDOS DE VUELTA OCTAVOS DE FINAL \n");
        printf(  "\n\n #### CUARTOS DE FINAL #### \n\n"  );
        printf("\n  9. PARTIDOS DE IDA CUARTOS DE FINAL \n");
        printf("\n  10. PARTIDOS DE VUELTA CUARTOS DE FINAL \n");
        printf(  "\n\n #### SEMIFINALES #### \n\n"  );
        printf("\n  11. PARTIDOS DE IDA SEMIFINALES \n");
        printf("\n  12. PARTDIOS DE VUELTA SEMIFINALES \n");
        printf(  "\n\n  13. !!!::FINAL::!!! \n\n"  );
        printf("\n  14. Salir.\n");
        scanf( "%d", &opcion );
        

        /* Inicio del anidamiento */

        switch ( opcion )
        {
            case 1: printf( "\n\n++++++ ESTO FUE LO QUE SE VIO EN LA JORNADA 1 ++++++\n\n" );
                    printf("\n ***** FECHA: Martes 18 de septiembre***** \n"); 
                    printf("\n Grupo A: Brujas - Dortmund 0-1, Monaco - Atletico 1-2  \n"); 
                    printf("\n Grupo B: Barcelona - PSV Eindhoven 4-0, Inter - Tottenham 2-1  \n"); 
                    printf("\n Grupo C: Liverpool - Paris 3-2, Estrella Roja - Nápoles 0-0  \n"); 
                    printf("\n Grupo D: Galatasaray - Lokomotiv de Moscu 3-0, Schalke - Oporto 1-1  \n"); 
                    printf("\n ***** FECHA: Miercoles 19 de septiembre***** \n");
                    printf("\n Grupo E: Ajax - AEK Atenas 3-0, Benfica - Bayern Munich 0-2 \n");
                    printf("\n Grupo F: Shakhtar - Hoffenheim 2-2, Manchester City - Lyon 1-2 \n");
                    printf("\n Grupo G: Real Madrid - Roma 3-0, Viktoria Plzen - CSKA Moscu 2-2 \n");
                    printf("\n Grupo H: Young Boys - Manchester United 0-3, Valencia - Juventus 0-2 \n");
                    
                    break;

            case 2: printf( "\n\n++++++ ESTO FUE LO QUE SE VIO EN LA JORNADA 2 ++++++\n\n" );
                    printf("\n ***** FECHA: Martes 2 de octubre***** \n");
                    printf("\n Grupo E: Bayern de Munich - Ajax 1-1, AEK de Atenas - Benfica 2-3 \n");
                    printf("\n Grupo F: Hoffenheim - Manchester City 1-2, Lyon - Shakhtar 2-2 \n");
                    printf("\n Grupo G: CSKA de Moscu - Real Madrid 0-1, Roma - Viktoria Plzen 5-0 \n");
                    printf("\n Grupo H: Juventus - Young Boys 3-0, Manchester United - Valencia 0-0 \n");
                    printf("\n ***** FECHA: Miércoles 3 de octubre***** \n");
                    printf("\n Grupo A: Atletico - Brujas 3-1, Dortmund - Monaco 3-0  \n");
                    printf("\n Grupo B: Tottenham - Barcelona 2-4, PSV Eindhoven - Inter 1-2 \n");
                    printf("\n Grupo C: Paris - Estrella Roja 6-1, Napoles - Liverpool 1-0 \n");
                    printf("\n Grupo D: Lokomotiv de Moscu - Schalke 0-1, Oporto - Galatasaray 1-0 \n");
                    
                    break;

            case 3: printf( "\n\n++++++ ESTO FUE LO QUE SE VIO EN LA JORNADA 3 ++++++\n\n" );
                    printf("\n ***** FECHA: Martes 23 de octubre***** \n"); 
                    printf("\n Grupo E: AEK de Atenas - Bayern de Munich 0-2, Ajax - Benfica 1-0 \n");
                    printf("\n Grupo F: Hoffenheim - Lyon 3-3, Shakhtar - Manchester City 0-3 \n");
                    printf("\n Grupo G: Roma - CSKA Moscu 3-0, Real Madrid - Viktoria Plzen 2-1 \n");
                    printf("\n Grupo H: Young Boys - Valencia 1-1, Manchester United - Juventus 0-1 \n");
                    printf("\n ***** FECHA: Miercoles 24 de octubre***** \n");
                    printf("\n Grupo A: Brujas - Monaco 1-1, Dortmund - Atletico 4-0  \n");
                    printf("\n PSV Eindhoven - Tottenham 2-2, Barcelona - Inter 2-0 \n");
                    printf("\n Paris - Napoles 2-2, Liverpool - Estrella Roja 4-0 \n");
                    printf("\n Grupo D: Lokomotiv - Oporto 1-3, Galatasaray - Schalke 0-0 \n");

                    break;
                    case 4:printf( "\n\n++++++ ESTO FUE LO QUE SE VIO EN LA JORNADA 4 ++++++\n\n" );
                           printf("\n ***** FECHA: Martes 6 de noviembre ***** \n"); 
                           printf("\n Grupo A: Monaco - Brujas 0-4, Atletico - Dortmund 2-0 \n");
                           printf("\n Grupo B: Tottenham - PSV 2-1, Inter - Barcelona 1-1 \n");
                           printf("\n Grupo C: Estrella Roja - Liverpool 2-0, Nápoles - Paris 1-1 \n");
                           printf("\n Grupo D: Oporto - Lokomotiv 4-1, Schalke - Galatasaray 2-0 \n");
                           printf("\n ***** FECHA: Miercoles 7 de noviembre***** \n");
                           printf("\n Grupo E: Bayern - AEK 2-0, Benfica - Ajax 1-1 \n");
                           printf("\n Grupo F: Lyon - Hoffenheim 2-2, Man.City - Shakhtar 6-0 \n");
                           printf("\n Grupo G: CSKA - Roma 1-2, Viktoria Plzen - Real Madrid 0-5 \n");
                           printf("\n Grupo H: Valencia - Young Boys 3-1, Juventus - Man.United 1-2 \n");
                    	
					break;
					case 5:printf( "\n\n++++++ ESTO FUE LO QUE SE VIO EN LA JORNADA 5 ++++++\n\n" );
					       printf("\n ***** FECHA: Martes 27 de noviembre ***** \n"); 
					       printf("\n Grupo E: AEK de Atenas - Ajax 0-2 , Bayern de Munich - Benfica 5-1 \n");
					       printf("\n Grupo F: Hoffenheim - Shakhtar 2-3, Lyon - Manchester City 2-2 \n");
					       printf("\n Grupo G: CSKA de Moscu - Viktoria Plzen 1-2 , Roma - Real Madrid 0-2 \n");
					       printf("\n Grupo H: Manchester United - Young Boys 1-0, Juventus - Valencia 1-0 \n");
						   printf("\n ***** FECHA: Miercoles 28 de noviembre ***** \n"); 	
						   printf("\n Grupo A: Atletico - Monaco 2-0, Dortmund - Brujas 0-0 \n");
						   printf("\n Grupo B: PSV Eindhoven - Barcelona 1-2, Tottenham - Inter 1-0 \n");
						   printf("\n Grupo C: Paris - Liverpool 2-1, Napoles - Estrella Roja 3-1 \n");
						   printf("\n Grupo D: Lokomotiv - Galatasaray 2-0, Oporto - Schalke 3-1 \n");
					 
					break;
					case 6: printf( "\n\n++++++ ESTO FUE LO QUE SE VIO EN LA JORNADA 6 ++++++\n\n" );
						    printf("\n ***** FECHA: Martes 11 de diciembre ***** \n"); 
						    printf("\n Grupo A: Brujas - Atletico 0-0, Monaco - Dortmund 0-2 \n");
						    printf("\n Grupo B: Barcelona - Tottenham 1-1, Inter - PSV Eindhoven 1-1 \n");
						    printf("\n Grupo C: Liverpool - Napoles 1-0, Estrella Roja - Paris 1-4 \n");
						    printf("\n Grupo D: Galatasaray - Oporto 2-3, Schalke - Lokomotiv 1-0 \n");
						    printf("\n ***** FECHA: Miercoles 12 de diciembre ***** \n"); 
						    printf("\n Grupo E: Ajax - Bayern de Munich 3-3 , Benfica - AEK de Atenas 1-0  \n");
							printf("\n Grupo F: Shakhtar - Lyon 1-1, Manchester City - Hoffenheim 2-1 \n"); 
							printf("\n Grupo G: Real Madrid - CSKA 0-3, Viktoria Plzen - Roma 2-1 \n"); 
							printf("\n Grupo H: Young Boys - Juventus 2-1, Valencia - Manchester United 2-1 \n"); 
					 
					break;
					case 7: printf(  "\n\n ####.... OCTAVOS DE FINAL.... #### \n\n"  );
					        printf("\n\n.....PARTIDOS DE IDA OCTAVOS DE FINAL.....\n\n");
					        printf("\n ***** FECHA: Martes 12 de febrero ***** \n");
					        printf("\n Manchester United - Paris 0-2 \n");
					        printf("\n Roma - Oporto 2-1 \n");
					        printf("\n ***** FECHA: Miercoles 13 de febrero ***** \n");
					        printf("\n Tottenham - Borussia Dortmund 3-0 \n");
					        printf("\n Ajax - Real Madrid 1-2 \n");
					        printf("\n ***** FECHA: Martes 19 de febrero ***** \n");
					        printf("\n Lyon - Barcelona 0-0 \n");
					        printf("\n Liverpool - Bayern de Munich 0-0 \n");
					        printf("\n ***** FECHA: Martes 20 de febrero ***** \n");
					        printf("\n Schalke - Manchester City 2-3 \n");
					        	 
					break;
					case 8: printf(  "\n\n ####.... OCTAVOS DE FINAL.... #### \n\n"  );
					        printf("\n\n.....PARTIDOS DE VUELTA OCTAVOS DE FINAL.....\n\n");
					        printf("\n ***** FECHA: Martes 5 de marzo ***** \n");
					        printf("\n Dortmund - Tottenham 0-1 (global: 0-4) \n");
					        printf("\n Real Madrid - Ajax 1-4 (global 3-5) \n");
					        printf("\n ***** FECHA: Miercoles 6 de marzo ***** \n");
					        printf("\n Paris Saint-Germain - Manchester United 1-3 (global: 3-3, el United se clasifica por el valor doble de los goles marcados fuera de casa) \n");
					        printf("\n Oporto - Roma 3-1 (tras prórroga, global: 4-3) \n");
					        printf("\n ***** FECHA: Martes 12 de marzo ***** \n");
					        printf("\n Manchester City - Schalke 7-0 \n");
					        printf("\n Juventus - Atletico de Madrid 3-0 \n");
					        printf("\n ***** FECHA: Miercoles 13 de marzo ***** \n");
					        printf("\n Barcelona - Lyon 5-1  \n");
					        printf("\n Bayern de Munich - Liverpool 1-3 \n");
		
					break;
					case 9: printf(  "\n\n #### CUARTOS DE FINAL #### \n\n"  );
					        printf("\n .....PARTIDOS DE IDA CUARTOS DE FINAL..... \n");
					        printf("\n ***** FECHA: Martes 9 de abril ***** \n");
					        printf("\n Liverpool - Oporto 2-0 \n");
					        printf("\n Tottenham - Manchester City 1-0 \n");
					        printf("\n ***** FECHA: Miercoles 10 de abril ***** \n");
					        printf("\n Ajax - Juventus 1-1 \n");
					        printf("\n Manchester United - Barcelona 0-1 \n");
						
					break;
					case 10:printf(  "\n\n #### CUARTOS DE FINAL #### \n\n"  );
					        printf("\n .....PARTIDOS DE VUELTA CUARTOS DE FINAL..... \n");
					        printf("\n ***** FECHA: Martes 10 de abril ***** \n");
					        printf("\n Barcelona - Manchester United 3-0 (global: 4-0) \n");
					        printf("\n Juventus - Ajax 1-2 (global: 2-3) \n");
					        printf("\n ***** FECHA: Miercoles 10 de abril ***** \n");
					        printf("\n Manchester City - Tottenham 4-3 (global: 4-4, clasificado el Tottenham por el valor doble de los goles marcados fuera de casa) \n");
					        printf("\n Oporto - Liverpool 1-4 (global: 1-6) \n");
					
					break;
					case 11: printf(  "\n\n #### SEMIFINALES #### \n\n"  );
                             printf("\n .....PARTIDOS DE IDA SEMIFINALES..... \n");
                             printf("\n ***** FECHA: Martes 30 de abril***** \n");
                             printf("\n Tottenham  - Ajax 0-1 \n");
                             printf("\n ***** FECHA: Miercoles 1 de mayo, 21:00 HEC ***** \n");
                             printf("\n Barcelona - Liverpool 3-0 \n");
                            
					break;
					case 12: printf(  "\n\n #### SEMIFINALES #### \n\n"  );
                             printf("\n .....PARTIDOS DE VUELTA SEMIFINALES..... \n");
                             printf("\n ***** FECHA: Martes 7 de mayo, 21:00 HEC***** \n");
                             printf("\n Liverpool - Barcelona 4-0, global 4-3 \n");
                             printf("\n ***** FECHA: Miercoles 8 de mayo, 21:00 HEC***** \n");
                             printf("\n Ajax - Tottenham- 2-3 (global 3-3, el Tottenham se clasifica por el valor doble de los goles marcados fuera de casa) \n");
                             
					break;
					case 13: printf(  "\n\n°°°°°°!!!::FINAL::!!!°°°°°° \n\n"  );
					         printf("\n ***** ESTADIO:Estadio Metropolitano, Madrid ***** \n");
					         printf("\n Tottenham - Liverpool 0-2 \n"); 
					
					
						
         }

         /* Fin del anidamiento */

    } while ( opcion != 4 );

    return 0;
}
