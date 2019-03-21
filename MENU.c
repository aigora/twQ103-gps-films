#include<stdio.h>

int main()
{
	int genero;
	
	printf("Bienvenido al buscador de peliculas GPSfilms:\n");
	
	printf("Elige el genero deseado:\n");
	
	printf("1-Drama\n");
	printf("2-Aventura\n");
	printf("3-Terror\n");
	printf("4-Animacion\n");
	printf("5-Ciencia ficcion\n");
	scanf("%d", &genero);
	
	switch(genero){
		case 1: printf("Pulse 1-Lo imposible 2012, 2- El diario de Noah 2004, 3-Titanic 1998\n");
		scanf("%d", &genero);
		break;
		case 2: printf("Pulse 1-Avatar 2009, 2-El señor de los anillos 2001, 3- Piratas del caribe 2011\n");
		scanf("%d", &genero);
		case 3: printf("Pulse 1-Dejame salir 2017, 2-La monja 2018, 3-Rec 2007\n");
		scanf("%d", &genero);
		break;
		case 4: printf("Pulse 1-Toy Story 1996, 2-Cars 2006, 3-Rio 2011\n");
		scanf("%d", &genero);
		break;
		case 5: printf("1-Interestellar 2014, 2- E.T el extraterrestre 1982, 3- Star Wars 1999\n");
		scanf("%d", &genero);
		break;
	}
	
return 0;
}
	//Añadiremos muchas más películas para cada genero, y mas de estos, y pondremos información de cada una ellas//
	
	
