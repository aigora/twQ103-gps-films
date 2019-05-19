#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#define CATEGORIAS 5
#define PELIS_CATEGORIA 8
using namespace std;

//Estructuras
struct pelicula{
    string titulo;
    int anio;
    string director;
    string sinopsis;
    int genero;
} ;

struct bibliotecaPelis{
    pelicula peliculas[PELIS_CATEGORIA];
};

//Metodos
void inicializarPeliculas();

//Variables globales
bibliotecaPelis bibliotecas[CATEGORIAS];

//inicializarPeliculas
void inicializarPeliculas() {
    //Categoria 1
    bibliotecas[0].peliculas[0].titulo="Lo imposible";
    bibliotecas[0].peliculas[0].anio=2012;
    bibliotecas[0].peliculas[0].director="Juan Antonio Bayona";
    bibliotecas[0].peliculas[0].sinopsis="Maria, Henry y sus tres hijos vuelan a Tailandia para pasar las vacaciones de Navidad en la playa. Despues de Navidad, mientras se nadan en la piscina, un tsunami colosal destroza el hotel y gran parte de la costa del sudeste asiatico. La familia tendra que luchar para sobrevivir y reencontrarse.";
    
    bibliotecas[0].peliculas[1].titulo="El diario de Noah";
    bibliotecas[0].peliculas[1].anio=2004;
    bibliotecas[0].peliculas[1].director="Nick Cassavetes";
    bibliotecas[0].peliculas[1].sinopsis="En una residencia de ancianos, un hombre (James Garner) lee a una mujer (Gena Rowlands) una historia de amor escrita en su viejo cuaderno de notas. Es la historia de Noah Calhoun (Ryan Gosling) y Allie Hamilton (Rachel McAdams), dos jovenes adolescentes de Carolina del Norte que, a pesar de vivir en dos ambientes sociales muy diferentes, se enamoraron profundamente y pasaron juntos un verano inolvidable, antes de ser separados, primero por sus padres, y mas tarde por la guerra.";
    
    bibliotecas[0].peliculas[2].titulo="Titanic";
    bibliotecas[0].peliculas[2].anio=1997;
    bibliotecas[0].peliculas[2].director="James Cameron";
    bibliotecas[0].peliculas[2].sinopsis="Jack (DiCaprio), un joven artista, gana en una partida de cartas un pasaje para viajar a America en el Titanic, el transatlantico m·s grande y seguro jam·s construido. A bordo conoce a Rose (Kate Winslet), una joven de una buena familia venida a menos que va a contraer un matrimonio de conveniencia con Cal (Billy Zane), un millonario a quien solo interesa el prestigioso apellido de su prometida. Jack y Rose se enamoran. Mientras, el transatlantico se aproxima hacia un inmenso iceberg.";

    bibliotecas[0].peliculas[3].titulo="Bohemian Rhapsody";
    bibliotecas[0].peliculas[3].anio=2018;
    bibliotecas[0].peliculas[3].director="Bryan Singer";
    bibliotecas[0].peliculas[3].sinopsis="Freddie Mercury desafia los estereotipos y se convierte en uno de los vocalistas mas reconocidos de la musica mundial. Despues de dejar la banda Queen para seguir una carrera como solista, Mercury se reune con la banda para dar una de las mejores actuaciones en la historia del rock 'n' roll.";
    
    bibliotecas[0].peliculas[4].titulo="Cisne negro";
    bibliotecas[0].peliculas[4].anio=2011;
    bibliotecas[0].peliculas[4].director="Darren Aronofsky";
    bibliotecas[0].peliculas[4].sinopsis="Una brillante bailarina que forma parte de una compaÒia de ballet de Nueva York, vive completamente absorbida por la danza. La presion de su controladora madre, la rivalidad con su compaÒera Lily (Mila Kunis) y las exigencias del severo director se iran incrementando a medida que se acerca el dia del estreno. Esta tension provoca en Nina un agotamiento nervioso y una confusion mental que la incapacitan para distinguir entre realidad y ficcion.";
    
    bibliotecas[0].peliculas[5].titulo="Carol";
    bibliotecas[0].peliculas[5].anio=2015;
    bibliotecas[0].peliculas[5].director="Todd Haynes";
    bibliotecas[0].peliculas[5].sinopsis="En Nueva York de la decada de 1950, una joven trabajadora de una tienda de moda y una mujer elegante y sofisticada, que vive inmersa en un matrimonio en el que no encuentra la felicidad, entablan una amistad que dara paso a una creciente atraccion mutua para desembocar en una relaciÛn lesbica de consecuencias complicadas para las vidas de ambas.";
   
    bibliotecas[0].peliculas[6].titulo="Los miserables";
    bibliotecas[0].peliculas[6].anio=2012;
    bibliotecas[0].peliculas[6].director="Tom Hooper";
    bibliotecas[0].peliculas[6].sinopsis="Despues de 19 anios como prisionero, Jean Valjean es liberado por Javert, el oficial a cargo de la fuerza de trabajo de la prisiÛn. Valjean viola su libertad y mas tarde usa el dinero robado para reinventarse a el mismo como alcalde y duenio de una f·brica. Javert promete llevar a Valjean de vuelta a la carcel. Ocho anios despues, Valjean se convierte en el guardian de un niÒo llamado Cosette despues de la muerte de su madre, pero la persecucion de Javert significa que la paz tardara en llegar.";
    
    bibliotecas[0].peliculas[7].titulo="El niÒo con el pijama de rayas";
    bibliotecas[0].peliculas[7].anio=2008;
    bibliotecas[0].peliculas[7].director="Mark Hermas";
    bibliotecas[0].peliculas[7].sinopsis="Durante la Segunda Guerra Mundial, el pequenio hijo de un comandante de un campo de concentracion desarrolla una amistad prohibida con un ninio judio de 8 aÒos.";
    
	//Categoria 2 
	bibliotecas[1].peliculas[0].titulo="Avatar";
    bibliotecas[1].peliculas[0].anio=2009;
    bibliotecas[1].peliculas[0].director=" James Cameron";
    bibliotecas[1].peliculas[0].sinopsis="En un planeta llamado Pandora viven los Na'vi, seres que aparentan ser primitivos pero que en realidad son muy evolucionados. Debido a que el ambiente de Pandora es venenoso, los hibridos humanos/Na'vi, llamados Avatares, estan relacionados con las mentes humanas, lo que les permite moverse libremente por Pandora. Jake Sully, un exinfante de marina paralitico se transforma a traves de un Avatar, y se enamora de una mujer Na'vi.";
    

    bibliotecas[1].peliculas[1].titulo="El senior de los anillos";
    bibliotecas[1].peliculas[1].anio=2001;
    bibliotecas[1].peliculas[1].director="Peter Jackson";
    bibliotecas[1].peliculas[1].sinopsis="En la Tierra Media, el Se“or Oscuro Sauron ordeno a los Elfos que forjaran los Grandes Anillos de Poder. Tres para los reyes Elfos, siete para los Se“ores Enanos, y nueve para los Hombres Mortales. Pero Sauron tambien forjo, en secreto, el Anillo Unico, que tiene el poder de esclavizar toda la Tierra Media. Con la ayuda de sus amigos y de valientes aliados, el joven hobbit Frodo emprende un peligroso viaje con la mision de destruir el Anillo Unico. Pero el malvado Sauron ordena la persecuci€n del grupo, compuesto por Frodo y sus leales amigos hobbits, un mago, un hombre, un elfo y un enano. La misi€n es casi suicida pero necesaria, pues si Sauron con su ejercito de orcos lograra recuperar el Anillo, seria el final de la Tierra Media.";
    

    bibliotecas[1].peliculas[2].titulo="Piratas del caribe";
    bibliotecas[1].peliculas[2].anio=2011;
    bibliotecas[1].peliculas[2].director="Anna Boden";
    bibliotecas[1].peliculas[2].sinopsis=" Una guerrera extraterrestre de la civilizacion Kree se encuentra atrapada en medio de una batalla. Con la ayuda de Nick Fury trata de descubrir los secretos de su pasado mientras aprovecha sus poderes para terminar la guerra.";
    

    bibliotecas[1].peliculas[3].titulo="Aquaman";
    bibliotecas[1].peliculas[3].anio=2018;
    bibliotecas[1].peliculas[3].director="James Wan";
    bibliotecas[1].peliculas[3].sinopsis="Aquaman debe recuperar el legendario Tridente de Atlan para salvar a la ciudad subacuatica de Atlantis, y al mundo de la superficie, de su hermano hambriento de poder.";
    

    bibliotecas[1].peliculas[4].titulo="La vida de Pi";
    bibliotecas[1].peliculas[4].anio=2012;
    bibliotecas[1].peliculas[4].director="Ang Lee ";
    bibliotecas[1].peliculas[4].sinopsis="Despues de decidir vender su zoologico en la India y mudarse a Canada, Santosh y Gita Patel viajan en un barco carguero con sus hijos y algunos animales. Una terrible tormenta hunde el barco, dejando a Pi, el hijo de los Patel, como el unico sobreviviente humano. Sin embargo, Pi no esta solo; un temible tigre de bengala lo acompaÒa en el bote salvavidas. Los dias se vuelven semanas y meses, y Pi y el tigre deben aprender a confiar el uno en el otro para sobrevivir.";
    

    bibliotecas[1].peliculas[5].titulo="Capitana Marvel";
    bibliotecas[1].peliculas[5].anio=2019;
    bibliotecas[1].peliculas[5].director="Anna Boden";
    bibliotecas[1].peliculas[5].sinopsis="Una guerrera extraterrestre de la civilizacion Kree se encuentra atrapada en medio de una batalla. Con la ayuda de Nick Fury trata de descubrir los secretos de su pasado mientras aprovecha sus poderes para terminar la guerra.";
    

    bibliotecas[1].peliculas[6].titulo="Alicia a traves del espejo";
    bibliotecas[1].peliculas[6].anio=2016;
    bibliotecas[1].peliculas[6].director="James Bobin";
    bibliotecas[1].peliculas[6].sinopsis="Alicia regresa al mundo magico de las maravillas, donde la Reina Blanca le encomienda la mision de viajar en el tiempo para ayudar a salvar a la familia del Sombrerero Loco. Una vez en el pasado, tendra que enfrentarse a la malvada Reina Roja.";
    

    bibliotecas[1].peliculas[7].titulo="Escuadron suicida";
    bibliotecas[1].peliculas[7].anio=2016;
    bibliotecas[1].peliculas[7].director="David Ayer";
    bibliotecas[1].peliculas[7].sinopsis="Mientras el gobierno de EE.UU no tiene claro como responder a una visita alienigena a la Tierra con intenciones malignas, Amanda 'El Muro' Waller (Viola Davis), la lider de la agencia secreta A.R.G.U.S., ofrece una curiosa solucion: reclutar a los villanos mas crueles, con habilidades letales e incluso magicas, para que trabajen para ellos. Sin demasiadas opciones a dar una negativa, los ocho supervillanos mas peligrosos del mundo acceden a colaborar con el Ejecutivo en peligrosas misiones secretas, casi suicidas, para asi lograr limpiar su expediente.";
    

    bibliotecas[1].peliculas[8].titulo="Vengadores: Endgame";
    bibliotecas[1].peliculas[8].anio=2019;
    bibliotecas[1].peliculas[8].director="Anthony Russo, Joe Russo";
//Categoria 3
    bibliotecas[2].peliculas[0].titulo="Dejame salir";
    bibliotecas[2].peliculas[0].anio=2017;
    bibliotecas[2].peliculas[0].director="Jordan Pelee";
    bibliotecas[2].peliculas[0].sinopsis="Chris va a conocer a los padres de Rose, su novia. Al principio se muestran encantadores, un poco nerviosos. Chris supone que se debe a que el es negro, pero un poco mas tarde descubre que los padres de Rose ocultan un secreto terrible.";
    

    bibliotecas[2].peliculas[1].titulo="La monja";
    bibliotecas[2].peliculas[1].anio=2018;
    bibliotecas[2].peliculas[1].director="Corin Hardy";
    bibliotecas[2].peliculas[1].sinopsis="Una monja se suicida en una abadia rumana y el Vaticano envia a un sacerdote y una novicia a investigar lo sucedido. Lo que ambos encuentran alla es un secreto perverso que los enfrentara cara a cara con el mal en su esencia mas pura.";
    

    bibliotecas[2].peliculas[2].titulo="Rec";
    bibliotecas[2].peliculas[2].anio=2007;
    bibliotecas[2].peliculas[2].director="Jaume Balaguero";
    bibliotecas[2].peliculas[2].sinopsis="Una reportera y su camara graban la terrible epidemia de una enfermedad que transforma a los humanos en canibales en un edificio de vecinos.";
    

    bibliotecas[2].peliculas[3].titulo="Anabelle";
    bibliotecas[2].peliculas[3].anio=2014;
    bibliotecas[2].peliculas[3].director="John R. Leonetti";
    bibliotecas[2].peliculas[3].sinopsis="John Form encuentra el regalo perfecto para su esposa embarazada, una preciosa munieca antigua llamada Annabelle. Una noche, una secta satanica les ataca brutalmente y provocan que un ente maligno se apodere de Annabelle.";
    

    bibliotecas[2].peliculas[4].titulo="The Conjuring";
    bibliotecas[2].peliculas[4].anio=2013;
    bibliotecas[2].peliculas[4].director="James Wan";
    bibliotecas[2].peliculas[4].sinopsis="A principios de los 70, Ed y Lorrain Warren, reputados investigadores de fenomenos paranormales, se enfrentan a una entidad demoniaca al intentar ayudar a una familia que esta siendo aterrorizada por una presencia oscura en su aislada granja.";
    

    bibliotecas[2].peliculas[5].titulo="Insidious";
    bibliotecas[2].peliculas[5].anio=2011;
    bibliotecas[2].peliculas[5].director="James Wan";
    bibliotecas[2].peliculas[5].sinopsis="Josh y Renai se mudan a una nueva casa, donde su hijo tiene un terrible accidente y queda en estado de coma.";
    

    bibliotecas[2].peliculas[6].titulo="Veronica";
    bibliotecas[2].peliculas[6].anio=2017;
    bibliotecas[2].peliculas[6].director="Chucky Namanera";
    bibliotecas[2].peliculas[6].sinopsis="En el Madrid de principios de los 90, un grupo de amigas realizan una ouija. Al acabar, una de las adolescentes es poseida por unas presencias sobrenaturales que amenazan con hacerles sufrir a ella y sus familiares.";
    

    bibliotecas[2].peliculas[7].titulo="El resplandor";
    bibliotecas[2].peliculas[7].anio=1980;
    bibliotecas[2].peliculas[7].director="Stanley Kubrick";
    bibliotecas[2].peliculas[7].sinopsis="Jack Torrance se traslada con su mujer y su hijo al impresionante hotel Overlook, para encargarse del mantenimiento de las instalaciones durante la temporada invernal, epoca en la que permanece cerrado y aislado por la nieve. Su objetivo es encontrar paz y sosiego para escribir una novela. Sin embargo, poco despues de su llegada al hotel, al mismo tiempo que Jack empieza a padecer inquietantes trastornos de personalidad, se suceden espeluznantes fenomenos paranormales.";
    

    bibliotecas[0].peliculas[8].titulo="Sinister";
    bibliotecas[0].peliculas[8].anio=2012;
    bibliotecas[0].peliculas[8].director="Scott Derrickson";
    bibliotecas[0].peliculas[8].sinopsis="Ellison Oswald, escritor de historias criminales, esta en una mala racha; no ha tenido un exito en mas de 10 a“os y esta desesperado. Cuando descubre una pelicula que muestra las muertes de una familia, el promete resolver el misterio. Ellison y su familia se mudan a la casa de las victimas y se pone a trabajar. Sin embargo, cuando unas imagenes antiguas y otras pistas apuntan a una presencia sobrenatural. Ellison descubre que vivir en esa casa podria costarles la vida.";

//Categoria 4
    bibliotecas[3].peliculas[0].titulo="Toy Story 1";
    bibliotecas[3].peliculas[0].anio=1995;
    bibliotecas[3].peliculas[0].director="John Lasseter";
    bibliotecas[3].peliculas[0].sinopsis="Los juguetes de Andy, un chico de 6 anios, temen que haya llegado su hora y que un nuevo regalo de cumple les sustituya en el corazon de Andy. Woody, un vaquero que ha sido hasta ahora el juguete favorito de Andy, trata de tranquilizarlos hasta que aparece Buzz Lightyear, un heroe espacial dotado de todo tipo de avances tecnologicos. Woody es relegado a un segundo plano. Su constante rivalidad se transformara en una gran amistad cuando ambos se pierden en la ciudad sin saber como volver a casa.";
    

    bibliotecas[3].peliculas[1].titulo="Cars 1";
    bibliotecas[3].peliculas[1].anio=2006;
    bibliotecas[3].peliculas[1].director="Carlos Saldanha";
    bibliotecas[3].peliculas[1].sinopsis=" El aspirante a campeon de carreras Rayo McQueen parece que esta a punto de conseguir el exito, la fama y todo lo que habia imaginado, hasta que por error toma un desvio inesperado en la polvorienta y solitaria Ruta 66. Su actitud arrogante se desvanece cuando llega a una comunidad olvidada donde aprende las cosas importantes de la vida que habia olvidado.";
    

    bibliotecas[3].peliculas[2].titulo="Rio";
    bibliotecas[3].peliculas[2].anio=2011;
    bibliotecas[3].peliculas[2].director=" Carlos Saldanha";
    bibliotecas[3].peliculas[2].sinopsis="La accion transcurre en la espectacular ciudad de Rio de Janeiro y en la exuberante selva tropical durante la fiesta mas importante para los brasilenos: el Carnaval. Los protagonistas son Blu, un ingenuo guacamayo que no sabe volar y que cree que es el ultimo de su especie, y Jewel, una guacamaya salvaje y de espiritu libre. Ambos emprenderan una inesperada aventura en busqueda de la libertad, con amigos de los que aprenderan que es la amistad, el amor y el coraje";
    

    bibliotecas[3].peliculas[3].titulo="Dumbo";
    bibliotecas[3].peliculas[3].anio=2019;
    bibliotecas[3].peliculas[3].director=" Tim Burton";
    bibliotecas[3].peliculas[3].sinopsis="Holt Farrier cuenta con la ayuda de sus hijos Milly y Joe para cuidar a un elefante recien nacido cuyas orejas gigantes le hacer ser el hazmerreir en un Circo que no pasa por su mejor momento. La familia circense de Holt incluye ademas a la se“orita Atlantis, Rongo, Pramesh Singh y su sobrino, La grandiosa Catherine y el magnifico Ivan. Max Medici due“o del circo, se decepciona al saber sobre las enormes orejas del peque“o paquidermo hasta que descubre que es capaz de volar, llevando al circo de regreso a la prosperidad.";
    

    bibliotecas[3].peliculas[4].titulo="Mulan";
    bibliotecas[3].peliculas[4].anio=1998;
    bibliotecas[3].peliculas[4].director=" Barry Cook y Tony Bancroft";
    bibliotecas[3].peliculas[4].sinopsis="Mulan, una joven china hija unica de la familia Fa, en lugar de buscar novio, como sus amigas, trata por todos los medios de alistarse en el ejercito imperial para evitar que su anciano padre sea llamado a filas para defender al Emperador del acoso de los Hunos. Cuando el emisario imperial lleva a cabo la orden de reclutar a los varones de todas las familias, Mulan se hara pasar por soldado y se sometera a un duro entrenamiento hasta hacerse merecedora de la estima y de la confianza del resto de su escuadron.";
    

    bibliotecas[3].peliculas[5].titulo="Frozen";
    bibliotecas[3].peliculas[5].anio=2013;
    bibliotecas[3].peliculas[5].director="Rudy Bednar";
    bibliotecas[3].peliculas[5].sinopsis="Cuando una profecia condena a un reino a vivir un invierno eterno, la joven Anna, el temerario Kristoff y el reno Sven emprenden un viaje epico en busca de Elsa, hermana de Anna y Reina de las Nieves, para poner fin al gelido hechizo.";
    

    bibliotecas[3].peliculas[6].titulo="Aladdin";
    bibliotecas[3].peliculas[6].anio=1992;
    bibliotecas[3].peliculas[6].director=" John Musker y Ron Clements";
    bibliotecas[3].peliculas[6].sinopsis="Basada en el famoso cuento Aladino y la lampara maravillosa, la trama se situa en el exotico paisaje del mitico reino arabe de Agrabah. Aladdin es un ingenioso joven que, a pesar de vivir en un estado de extrema pobreza, fantasea con casarse con la bella hija del sultan, la princesa Yasmin. El destino interviene cuando el astuto visir del Sultan, Yafar, recluta a Aladdin para que le ayude a recuperar una lampara magica de las profundidades de la Cueva de las Maravillas. El joven encuentra la lampara, en la que vive un genio que concede tres deseos a quien lo libere.";

    bibliotecas[3].peliculas[7].titulo="Gru, mi villano favorito";
    bibliotecas[3].peliculas[7].anio=2001;
    bibliotecas[3].peliculas[7].director=" Pierre Coffin y Chris Renaud";
    bibliotecas[3].peliculas[7].sinopsis="Mientras intenta cumplir su diabolico plan para robarse a la luna, el acto criminal mas increible de la Historia, un supervillano enfrenta su reto mas grande, tres pequenias huerfanas que desean convertirlo en su padre. La vision de este supervillano, y de sus secuaces, ira cambiando poco a poco gracias a esas tres pequenias que llegaran a su corazon.";
    

    bibliotecas[3].peliculas[8].titulo="El viaje de Chihiro";
    bibliotecas[3].peliculas[8].anio=2001;
    bibliotecas[3].peliculas[8].director="Hayao Miyazaki, Kirk Wise";
    bibliotecas[3].peliculas[8].sinopsis="Perdida en el bosque, una niÒa de 10 aÒos conoce animales, fantasmas y criaturas extra“as.";

//Categoria 5
    bibliotecas[4].peliculas[0].titulo="Interestellar";
    bibliotecas[4].peliculas[0].anio=2014;
    bibliotecas[4].peliculas[0].director=" Christopher Nolan";
    bibliotecas[4].peliculas[0].sinopsis="Gracias a un descubrimiento, un grupo de cientificos y exploradores, encabezados por Cooper, se embarcan en un viaje espacial para encontrar un lugar con las condiciones necesarias para reemplazar a la Tierra y comenzar una nueva vida alli.";
    

    bibliotecas[4].peliculas[1].titulo="E.T el extraterrestre";
    bibliotecas[4].peliculas[1].anio=1982;
    bibliotecas[4].peliculas[1].director="Steven Spielberg";
    bibliotecas[4].peliculas[1].sinopsis=" E.T. es un travieso extraterrestre que fue abandonado en la Tierra. Completamente solo y desorientado, conocera a Elliot, un chico que se convertira pronto en su amigo y protector. Elliot tratara de ocultar en la medida de lo posible a E.T., puesto que la policÃa y los cientÃficos trataran de capturarlo para hacerle dolorosas pruebas.Elliot y su pandilla tendran como objetivo devolver a E.T. a su verdadero hogar.";
    

    bibliotecas[4].peliculas[2].titulo="Star Wars 1";
    bibliotecas[4].peliculas[2].anio=1999;
    bibliotecas[4].peliculas[2].director="George Lucas";
    bibliotecas[4].peliculas[2].sinopsis="Obi-Wan Kenobi es un joven aprendiz caballero Jedi bajo la tutela de Qui-Gon Jinn; Anakin Skywalker, quien despues sera padre de Luke Skywalker y se convertira en Darth Vader, solamente es un chico de 9 a“os. Cuando la Federacion de Comercio corta todas las rutas al planeta Naboo, Qui-Gon y Obi-Wan son asignados para solucionar el problema.";
    

    bibliotecas[4].peliculas[3].titulo="Ex Machina";
    bibliotecas[4].peliculas[3].anio=2015;
    bibliotecas[4].peliculas[3].director=":Alfonso Cuaron";
    bibliotecas[4].peliculas[3].sinopsis="Mientras reparan un satelite fuera de su nave, dos astronautas sufren un grave accidente y quedan flotando en el espacio. Son la doctora Ryan Stone, y el veterano astronauta Matt Kowalsky. La mision exterior parecia rutinaria, pero una lluvia de basura espacial les alcanza y se produce el desastre.";
    

    bibliotecas[4].peliculas[4].titulo="Moon";
    bibliotecas[4].peliculas[4].anio=2009;
    bibliotecas[4].peliculas[4].director="Duncan Jones";
    bibliotecas[4].peliculas[4].sinopsis="El periodo de tres a“os del astronauta Sam Bell en una mina lunar finalmente esta llegando a su fin, y el espera reunirse con su esposa y su joven hija. Inesperadamente, la salud de Sam empeora. El sufre dolores de cabeza y alucinaciones, y casi tiene un accidente fatal.";
    

    bibliotecas[4].peliculas[5].titulo="Gravity";
    bibliotecas[4].peliculas[5].anio=2013;
    bibliotecas[4].peliculas[5].director="Alfonso Cuaron";
    bibliotecas[4].peliculas[5].sinopsis="Mientras reparan un satelite fuera de su nave, dos astronautas sufren un grave accidente y quedan flotando en el espacio. Son la doctora Ryan Stone, y el veterano astronauta Matt Kowalsky. La mision exterior parecia rutinaria, pero una lluvia de basura espacial les alcanza y se produce el desastre";
    

    bibliotecas[4].peliculas[6].titulo="Wall-E";
    bibliotecas[4].peliculas[6].anio=2008;
    bibliotecas[4].peliculas[6].director="Andrew Stanton";
    bibliotecas[4].peliculas[6].sinopsis="Un robot deja la Tierra para iniciar una gran busqueda a traves de la galaxia.";
    
    bibliotecas[4].peliculas[7].titulo="Guardianes de la Galaxia";
    bibliotecas[4].peliculas[7].anio=2014;
    bibliotecas[4].peliculas[7].director="James Gunn";
    bibliotecas[4].peliculas[7].sinopsis=":Un aventurero espacial se convierte en la presa de unos cazadores de tesoros despues de robar el orbe de un villano traicionero. Cuando descubre su poder, debe hallar la forma de unir a unos rivales para salvar al universo.";
}






//main
int main()
{
	system ("Color 3D");
	cout<<"GPS films";
	cin.get();
	int genero,n,i, opcion;
	inicializarPeliculas();
	char usuario[40];
	int tarjeta[200]; //Sin espacios
	
	printf("Bienvenido al mejor buscador de peliculas\n");
	
	printf("Introduzca su nombre de usuario: ");
	gets(usuario);
	printf("Introduzca su tarjeta de credito: ");
	scanf("%d", &tarjeta);
	
	
	printf("Esperemos que encuentre su pelicula %s \n", usuario);
	
do{
	printf("\t\t*****ELIGE EL GENERO DESEADO*****\n\n");
	
	printf("0-\tAbandonar el programa\n");
	printf("1-\tDrama\n");
	printf("2-\tAventura\n");
	printf("3-\tTerror\n");
	printf("4-\tAnimacion\n");
	printf("5-\tCiencia ficcion\n\n");
	printf("Opcion: ");
	scanf("%d", &genero);
	
	if(genero<0 || genero>5) printf("La opcion no es valida\n");
	else {
	    //Mostrar peliculas
	    printf("Elige opcion:\n");
	    for(i=0; i<PELIS_CATEGORIA; i++){
	        printf("\n\t%d.-", i);
	        cout << bibliotecas[genero-1].peliculas[i].titulo;
	    }
	    printf("\nOpcion escogida: ");
	    scanf("%d", &opcion);
	    
	    
	    //Mostrar pelicula escogida
	    printf("\n\t\t");
	    cout << bibliotecas[genero-1].peliculas[opcion].titulo << endl;
	    cout << "AÒo de publicaciÛn: " <<bibliotecas[genero-1].peliculas[opcion].anio << endl;
	    cout << "Director: " << bibliotecas[genero-1].peliculas[opcion].director << endl;
	    cout << "Sinopsis: " << bibliotecas[genero-1].peliculas[opcion].sinopsis << endl;
	    printf ("\nQue desea hacer ahora?\n");
            printf("\n\t1.-Descargar pelicula\n\t0.- Salir al menu principal\nOpcion deseada: ");
            scanf("%d",&opcion);
            if(opcion==1){
                printf("\Pelicula descargada correctamente, puede disfrutarla tantas veces como quiera. (El cargo ha sido realizado en su tarjeta) ");
                scanf("%d",&opcion);
            }
	}
	
 }while(genero!=0);
return 0;
}

