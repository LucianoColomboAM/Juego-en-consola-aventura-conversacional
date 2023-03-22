// Colombo Alfredo Luciano
#include "pch.h"
#include <iostream>
#include <string>
#include <stdlib.h>  
#include <time.h>
using namespace std;



int main(int argc, char *argv[])
{
	int randam;
	srand(time(NULL));
	string nombre;
	int aux;
	string pcancion;
	int fama = 0;
	bool correcto = false;
	int año = 2018;
	int mes = 4;
	int semana = 1;
	int cansancio = 100;
	float dinero = 50.0f;
	int tb = 0;
	int tr = 0;
	int tm = 0;
	int nsfama = 0;
	int cpildoras = 0;
	int cseguidos = 0;
	int tseguidos = 0;
	int depresion = 0;
	enum grabaciones
	{
		gtema = 500, gtemapro = 5000
	};
	grabaciones grabacion = gtema;

	

	cout << R"( 
 _                                            
| |                                           
| |__    ___   ___   ___   _ __ ___    ___    
| '_ \  / _ \ / __| / _ \ | '_ ` _ \  / _ \   
| |_) ||  __/| (__ | (_) || | | | | ||  __/   
|_.__/  \___| \___| \___/ |_| |_| |_| \___|   
                                              
                                              
        _                                     
       | |                                    
       | |_   ___                             
       | __| / _ \                            
       | |_ | (_) |                           
        \__| \___/                            
                                              
                                              
    _          _                         _    
 /\| |/\      | |                     /\| |/\ 
 \ ` ' /  ___ | |_   __ _  _ __  ___  \ ` ' / 
|_     _|/ __|| __| / _` || '__|/ __||_     _|
 / , . \ \__ \| |_ | (_| || |   \__ \ / , . \ 
 \/|_|\/ |___/ \__| \__,_||_|   |___/ \/|_|\/ 
                                              
                                               )";
	cout << endl << "Ingresa tu nombre artistico" << endl;
	cin >> nombre;
	cout << "bien, " << nombre << ", empecemos con tu camino a ser una leyenda del rock" << endl;
	system("pause");
	system("cls");
	cout << R"(
    _    ___  ___                        _    
 /\| |/\ |  \/  |                     /\| |/\ 
 \ ` ' / | .  . |  ___  _ __   _   _  \ ` ' / 
|_     _|| |\/| | / _ \| '_ \ | | | ||_     _|
 / , . \ | |  | ||  __/| | | || |_| | / , . \ 
 \/|_|\/ \_|  |_/ \___||_| |_| \__,_| \/|_|\/ 
                                              
                                             
)" << endl << endl << endl;

	while (!correcto)
	{

		cout << "Ingresa 1 para jugar" << endl;
		cout << "ingresa 2 para cerrar la ventana" << endl;
		cin >> aux;

		switch (aux)
		{
		case 1:
			correcto = true;
			system("cls");
			cout << "Bueno comencemos, como todo buen artista de rock necesitas una primera cancion" << endl;
			cout << "Ponle nombre a tu primer tema" << endl;
			cin >> pcancion;
			cout << " Bien, ya tienes tu primer ahora, tus amigos te han invitado a tocar en un bar" << endl;
			tb = tb + 1;
			cout << " escenario abierto esta noche, ve y da tus primeros pasos" << endl;
			system("pause");
			system("cls");
			randam = rand() % 10 + 1;
			if (randam <= 9)
			{
				cout << " A la gente le ha agradado tu compañia y espera verte mas seguido por el bar" << endl;
			}
			else if (randam > 9)
			{
				cout << "La gente del bar estuvo muy impresionada con tu actuacion y quieren tenerte todos los findes aqui " << endl;
				fama = fama + 2;
				cout << "Siempre es bueno volver donde te quieren, pero tambien es bueno visitar nuevos ambientes" << endl;
			}
			cout << "Bueno, ya tienes tu primer 'concierto' y tu primer tema ahora, es cuestion de encontrar la clave del exito" << endl;
			cout << "pasemos a la siguiente semana" << endl;
			while (año <= 2027)
			{
				if (fama >= 2500 && nsfama == 0)
				{
					nsfama++;
				}
				else if (fama >= 10000 && nsfama == 1)
				{
					nsfama++;
				}
				else if (fama >= 100000 && nsfama == 2)
				{
					nsfama++;
				}
				system("pause");
				system("cls");
				cout << "Estamos en la semana n\xa3mero " << semana << " del mes " << mes << " del año " << año << endl;
				cout << "Que haras esta semana " << endl;
				cout << "ingresa 1 para trabajar en tus canciones y albumes!" << endl;
				cout << "ingresa 2 para planificar un concierto" << endl;
				cout << "ingresa 3 para ver los progresos de la partida" << endl;
				cin >> aux;
				switch (aux)
				{
				case 1:
					system("pause");
					system("cls");
					cout << " Que deseas hacer? " << endl;
					cout << " Presiona 1 para crear una cancion" << endl;
					cout << " Presiona 2 para grabar una cancion" << endl;
					cout << " Presiona cualquier otra tecla para ir atras" << endl;
					cin >> aux;
					switch (aux)
					{
					case 1:
						randam = rand() % 10 + 1;
						cout << "Como se llamara tu cancion" << endl;
						cin >> pcancion;
						system("cls");
						cout << R"(
             .,,,.
           .;;;;;;;;;,
          ;;;'    `;;;,
         ;;;'      `;;;
         ;;;        ;;;
         ;;;.      ;;;'
         `;;;.    ;;;'
          `;;;.  ;;;'
           `;;',;;'
            ,;;;'
         ,;;;',;' ...,,,,...
      ,;;;'    ,;;;;;;;;;;;;;;,
   ,;;;'     ,;;;;;;;;;;;;;;;;;;,
  ;;;;'     ;;;',,,   `';;;;;;;;;;
 ;;;;,      ;;   ;;;     ';;;;;;;;;
;;;;;;       '    ;;;      ';;;;;;;
;;;;;;            .;;;      ;;;;;;;
;;;;;;,            ;;;;     ;;;;;;'
 ;;;;;;,            ;;;;   .;;;;;'
  `;;;;;;,           ;;;; ,;;;;;'
   `;;;;;;;,,,,,,,,,, ;;;; ;;;'
      `;;;;;;;;;;;;;;; ;;;; '
          ''''''''''''' ;;;.
               .;;;.    `;;;.
              ;;;; '     ;;;;
              ;;;;,,,..,;;;;;
              `;;;;;;;;;;;;;'
                `;;;;;;;;;'
)";
						cout << endl << endl << endl;
						if (randam >= 9)
						{
							cout << pcancion << " es una excelente cancion, yo que tu lo mostraria al publico la semana que viene!" << endl;
							cansancio = cansancio - 25;
							tb = tb + 1;

						}
						else if (randam >= 6)
						{
							cout << pcancion << " Un tema muy bueno, que se puede convertir en un clasico de " << nombre << endl;
							cansancio = cansancio - 18;
							tr = tr + 1;

						}
						else
						{
							cout << " No te convence tu propio tema, pero quien sabe a la demas gente" << endl;
							tm = tm + 1;

						}

						if (cansancio <= 25)
						{

							system("cls");
							cout << "Se te nota cansado" << endl;
							cout << " Un amigo tuyo te dijo que puedes tomar unas pildoras para el rendimiento" << endl;
							cout << "asi triplicaras tus posibilidades de crear un buen tema" << endl;
							cout << "Ingresa 1, si aceptas tomar las pildoras " << endl;
							cout << "Ingresa cualquier otro caracter, si no quieres tomar las pildoras" << endl;
							cin >> aux;
							if (aux == 1)
							{
								dinero = dinero - 25.25f;
								cout << "Estas pildoras te han costado 25.25$, procura no quedarte sin dinero" << endl;
								cpildoras = cpildoras + 1;

								for (int i = 0; i <= 3; i++)
								{
									randam = rand() % 10 + 1;
									cout << "Como se llamara tu cancion" << endl;
									cin >> pcancion;
									if (randam >= 8)
									{
										cout << pcancion << " Vaya que te has inspirado, guarda este tema, algun dia grabaras un album" << endl;
										cansancio = cansancio - 25;
										tb = tb + 1;
										system("pause");
										system("cls");
									}
									else if (randam <= 8)
									{
										cout << pcancion << " Un tema regulin regulon, intenta crear otro " << nombre << endl;
										cansancio = cansancio - 18;
										system("pause");
										system("cls");
									}
								}
							}
							else
							{
								cout << "La clave del exito es darle tiempo al tiempo" << endl;
								system("pause");
								system("cls");
							}
						}
						semana++;
						if (semana == 5)
						{
							mes++;
							semana = 1;
							if (mes == 13)
							{
								mes = 1;
								año++;
							}
						}

						break;
					case 2:
						if (dinero >= 500 && dinero < 5000) {
							cout << "Con esta grabacion tu dinero estara en " << (dinero - grabacion) << " pesos.\n";
							dinero = dinero - 500;
							cansancio = cansancio - 25;
							randam = rand() % 10 + 1;

							cout << "Asi que grabaras " << pcancion << " Muchisima suerte" << endl;
							cout << R"(
               =IY;           
      XRVRRi          
     =Ri :RR          
     VR  ;RR          
     RY  tRY          
     RX ;RR;          
     tR=RRR           
     ;RRRR;           
     ;RRRi            
    ;RRRV             
   ;RRRRR:            
  :RRRV.RX            
  VRRR: ;R=           
 =RRR+   YRitti;.     
 VRRR  :YRRRRRRRRt.   
.RRRY ;RRYYR;;iRRRR.  
:RRRi RR; .Rt  .XRRY  
:RRR= RV   +R.  .RRR  
:RRRt tR    Rt   IRR. 
 RRRR  ;;   +R.  XRY  
 ;RRRt      .R+ +RR:  
  ;RRRX;     YRIRX:   
   .+RRRRIiitRRY;     
      :;+ii+;tR:      
             ;R:      
             iR       
    ;VRRi    Vi       
    RRRRR.  tR.       
    YRRR+ ;YV:        
    .tRRRRR+          
      .;;:
)";
							cout << endl << endl << endl;
							system("pause");
							system("cls");
							if (randam >= 9)
							{
								system("cls");
								cout << pcancion << " Se ha vuelto muy popular, es la cancion del momento" << endl;
								cout << pcancion << " Tu cancion a escalado los puntos mas altos del billboard" << endl;
								system("cls");
								fama = fama + 5000;
								dinero = dinero + 10000;
							}
							else if (randam >= 6)
							{
								system("cls");
								cout << pcancion << " Un tema muy bueno, que se puede convertir en un clasico de " << nombre << endl;
								cout << pcancion << "Tus fans, y allegados hablan muy bien de el, y lo estan compartiendo" << nombre << endl;
								system("cls");
								fama = fama + 2500;
								dinero = dinero + 1000;

							}
							else
							{
								system("cls");
								cout << " Algun dia llegaras a las listas de exitos no te desanimes" << endl;
								system("cls");
							}
						}
						else if (dinero >= 5000 || fama > 100000) {
							cout << "Con esta grabacion tu dinero estara en " << (dinero - (grabacion + 1)) << " pesos.\n";
							dinero = dinero - 5000;
							cansancio = cansancio - 25;
							randam = rand() % 10 + 1;
							cout << "Asi que grabaras " << pcancion << " Muchisima suerte" << endl;
							if (randam >= 9)
							{
								system("cls");
								cout << pcancion << " Se ha vuelto muy popular, es la cancion del momento" << endl;
								cout << pcancion << " esta en lo mas alto del billboard" << endl;
								cout << "Has logrado consagrarte, felicidades tienes el tema mas escuchado de la actualidad " << endl;
								system("cls");
								fama = fama + 10000;
								dinero = dinero + 20000;
							}
							else if (randam >= 6)
							{
								system("cls");
								cout << pcancion << " Un tema muy bueno, que se puede convertir en un clasico de " << nombre << endl;
								cout << pcancion << "Tus fans, y allegados hablan muy bien de el, y lo estan compartiendo" << nombre << endl;
								system("cls");
								fama = fama + 2500;
								dinero = dinero + 1000;

							}
							else
							{
								system("cls");
								cout << "Los exitos vienen de las inversiones" << endl;
								system("cls");
							}


						}
						semana++;
						if (semana == 5)
						{
							mes++;
							semana = 1;
							if (mes == 13)
							{
								mes = 1;
								año++;
							}
						}


						break;



					}

					break;
				case 2:
					switch (nsfama)
					{
					case 0:

						if (fama < 1250)
						{
							cout << "Tu fama es de nivel local, por lo cual no eres tan conocido y tendras que tocar en bares y fechas a las que seas invitado" << endl;
							cout << "Ve al bar de siempre a tocar " << pcancion << "capaz sucedan cosas muy buenas" << endl;
							system("pause");
							system("cls");
							cout << R"(
.........''''',,,;;;;;:::::::;;;;;;;,,,,,;:::ccclllllllllllllcccllcccccccc:::::::::::::;;;;;;;;;,,,,
.......'''''',,,,;;;;;:::::::::;;;;;;;;;;::cccclllllllllllllllllllllllccccc::::::::cc:::::::::;;;;,,
...''''''''',,,,;;;::::::::::::;;;;;;;;::ccccclllllllloooooooooooddddoolllccccccccccccccccc::::;;;;,
...'',,,,,,,,,;;;;;:::::::ccc::::::::::cccllllllooooooooooooodddxOKK0xdoollllllclllcccccccc:::::;;;;
..',:dOxl;,;;;;;;;::::::ccccc::::::::cclllllllooooooooooooooddxk0NWWN0xdooooollllllllllccccc::::::;;
.'',lKWN0dcc:::::::cccccccccccccc:::cccllllloooooooooooooddxk0KKXWWWWXOxdoooollllllllllllcccc:::::::
..'';o0K0kdolllccclllllllllloollllcccllloooooooooooooodxxk0KXNWXKNWWWNXOxdoolllllllllllllcccccc:::::
..'',lxkkkkdooooooooooooooooddoollloodddooooddooodddxxO0KXXNNNNK0KNWWWNXOxdoollllllllllllcccccccc:::
..',;cxkkkkxdddddddddddddddddoooooooxoc,'..',:oxxkOO00KXNNNXNXXNNXNWWNNNKOkddooooollllllllllcccccccc
..',;cdxxxxxxxxxxxxxxxxxdo;'';lodddxd:',:c:'..oO00KKXXXNNXXXNWWWWNXNWNNNXKOkxxdooooooooollllllcccccc
.'',;codxxxxxxxxkkkkkxxxxxo;''lddddxd::lodo:..l0KXXXXXXXXNNWWWWWWWNNNNNNXK0Okkxdddoooooollllllllllll
',,,;coddxxxxxxkkkkkkkkkxo;,';dxxxxkxc,.;l;,;.:0XXXKKXXNNNNNWWWWWWWWNNNNXK0OOOkkxxddooooollllllllllc
'',,,:oddxxxxxkkkkkkkkkx:.  .cxxxkkkko::oolo:'c0K000KNNNNNNNWWWWWWNNNNNNXK00OOkkkxxddooooooollllllll
'',,;lodxxxxkkkkkkkkkkd;.   ;xkkkkOkOkxxd:;,.,d000KKKNNNNNNNNWWWWNNNNNNXXKK0OOkkkxxxddddoooooollllll
',,,:odddxxxxkkkkkkkkx,    ,dkkOkkkkxdlcc:,..':kKXKXXNNNNNNNNNNWWNNNNNXXKK0OOkkxxxxxxdddddooooooooll
''',:odddddxxxxxkkkkkc.   'odolc;,''... .cc..::;xOOOKNNNNNNNNNNNNNNNNK00000OOOkkxxxxdddddddooooooooo
...,:loddxxxxxxxkkkko.    .,...........  .;:cl;..''';cd0NNNNNNNNNNNXXK00OOOOOkkkkxxxdddddddooooooooo
...':cloddxxxxxxxxxd,             ..':;. .;o:..........:KNXXXXXXXXXXKK000OOOOkkkkxxxdddddddddooooool
...';:cloddddddxxxxdc'.            ..''...:;....'..... .xNNNXNNNXXXNXXK0OOkkOkkxxxxdddddddddddoooool
...',:clooddddxxxxxxxxdlc:,'...    .......''...... ..   ;0NXXXXXXXX0kxdlc:;cdkkxxxdddddxddddddooooll
....,;:clloooddddddxxxxxxkkxdddc. ...... ....'....      .dXXXXXXK0d;....;coxxxxxdxddddddddddooooooll
....',;:cclllooodddxxxxxxxxxxxkd,.. .    ........       .:0XXKko:,;cooldkkkxxxxdddddddddddooooolllll
.....';;:cccllloooddxxxdddxxxxxx:.  .  .......,'.   .   .:dol;',cdkO00Okxxdddddddddoooooooolllllllll
.....',;;::cclllooodddddooddddxd;.         ...,'.  ,;..':ll,':dkOOkkkxxddooooooooooollllllcccccccccc
.......',;;:::cccclllllllllloodo,       ... ...,...;c,'';:'..oOkkkxxdddooollllcllolllcccccc::::ccccc
. .......'''',,,;;;:::::cccccllc'.   .....  ..'''',,,,;'....;kkxxxddddolcccccccccllcccc::::::;::::::
..  ........'',,,,,;;;;:::::::c;........   ..,,....'lkkxl::lxkxdddolllcc::::cc:::cccc::::;;;;;;;;;;;
    ........'''',,,,,;;;;;;::;'...      ....','.   'dOkkkkkkxddooolcc:::::;;::;;::c:::::;;;;;;;;;;;;
     .......''''',,,,,;;;:;;;.     ........  ...  .;xkkkkxxdddolllc::;;;;;;,;;;;;::::;;;;;,,,,;;,,,,
  ...............''''',,,,,;'.     .,... .    .....,oxxxxxxddolclc:;;;,,,''',,,,,,;;;;;,,,,,,,,,'',,
      .....................''.     .'.. .         .,oxxxdddolllccc:;;,,'''..'''''''',,,,,,,,,,,,''''
       ....   .................            .       .odddddoollcccc;,,,'''...........''',,,''',,,,'''
               ..............',.        ...        .:ooollcllc::c:,'''.......................',,'''.
                  .... . ....'.         .          .;llc:::cc::::;'..........................'''....
                        .. .,.     ..              .,:::;;;::;;;;,...............''''....''.........
                           ''.                     .';;;,,,;;,,;;'........................'.........
                          ...                      .',,''.',,,,,,'..................................
                          .'.                      ..'''..',,,,,''..................................
)";

							cout << endl << endl << endl;
							randam = rand() % 10 + 1;
							if (randam <= 7)
							{
								cout << "A la gente le ha agradado tu compañia y espera verte mas seguido por el bar" << endl;
								cout << "En el mundo de la musica, no todo es rock y fiesta, a veces las noches son mas que comunes" << endl;
								cout << "Recuerda siempre estar atento a la clave del exito" << endl;
								system("pause");
								system("cls");
								fama = fama + 150;
								cansancio = cansancio - 25;
							}
							else if (randam >= 8)
							{
								cout << "La gente del bar estuvo muy impresionada con tu actuacion y quieren tenerte todos los findes aqui " << endl;
								fama = fama + 500;
								cout << "Dos personas te han invitado a una fecha en una jam mañana de urgencia, dicen que te pagaran" << endl;
								system("pause");
								system("cls");
								cout << "Date una vuelta, nunca desaproveches una oportunidad " << endl;
								randam = rand() % 100 + 1;
								cout << "..." << endl << "Al otro dia" << endl << "..." << endl;
								cout << "Parece ser una jam de musica under, a la cual has ido por falta de artistas, aprovecha tu momento" << endl;
								cout << "..." << endl;
								cout << R"(
.........''''',,,;;;;;:::::::;;;;;;;,,,,,;:::ccclllllllllllllcccllcccccccc:::::::::::::;;;;;;;;;,,,,
.......'''''',,,,;;;;;:::::::::;;;;;;;;;;::cccclllllllllllllllllllllllccccc::::::::cc:::::::::;;;;,,
...''''''''',,,,;;;::::::::::::;;;;;;;;::ccccclllllllloooooooooooddddoolllccccccccccccccccc::::;;;;,
...'',,,,,,,,,;;;;;:::::::ccc::::::::::cccllllllooooooooooooodddxOKK0xdoollllllclllcccccccc:::::;;;;
..',:dOxl;,;;;;;;;::::::ccccc::::::::cclllllllooooooooooooooddxk0NWWN0xdooooollllllllllccccc::::::;;
.'',lKWN0dcc:::::::cccccccccccccc:::cccllllloooooooooooooddxk0KKXWWWWXOxdoooollllllllllllcccc:::::::
..'';o0K0kdolllccclllllllllloollllcccllloooooooooooooodxxk0KXNWXKNWWWNXOxdoolllllllllllllcccccc:::::
..'',lxkkkkdooooooooooooooooddoollloodddooooddooodddxxO0KXXNNNNK0KNWWWNXOxdoollllllllllllcccccccc:::
..',;cxkkkkxdddddddddddddddddoooooooxoc,'..',:oxxkOO00KXNNNXNXXNNXNWWNNNKOkddooooollllllllllcccccccc
..',;cdxxxxxxxxxxxxxxxxxdo;'';lodddxd:',:c:'..oO00KKXXXNNXXXNWWWWNXNWNNNXKOkxxdooooooooollllllcccccc
.'',;codxxxxxxxxkkkkkxxxxxo;''lddddxd::lodo:..l0KXXXXXXXXNNWWWWWWWNNNNNNXK0Okkxdddoooooollllllllllll
',,,;coddxxxxxxkkkkkkkkkxo;,';dxxxxkxc,.;l;,;.:0XXXKKXXNNNNNWWWWWWWWNNNNXK0OOOkkxxddooooollllllllllc
'',,,:oddxxxxxkkkkkkkkkx:.  .cxxxkkkko::oolo:'c0K000KNNNNNNNWWWWWWNNNNNNXK00OOkkkxxddooooooollllllll
'',,;lodxxxxkkkkkkkkkkd;.   ;xkkkkOkOkxxd:;,.,d000KKKNNNNNNNNWWWWNNNNNNXXKK0OOkkkxxxddddoooooollllll
',,,:odddxxxxkkkkkkkkx,    ,dkkOkkkkxdlcc:,..':kKXKXXNNNNNNNNNNWWNNNNNXXKK0OOkkxxxxxxdddddooooooooll
''',:odddddxxxxxkkkkkc.   'odolc;,''... .cc..::;xOOOKNNNNNNNNNNNNNNNNK00000OOOkkxxxxdddddddooooooooo
...,:loddxxxxxxxkkkko.    .,...........  .;:cl;..''';cd0NNNNNNNNNNNXXK00OOOOOkkkkxxxdddddddooooooooo
...':cloddxxxxxxxxxd,             ..':;. .;o:..........:KNXXXXXXXXXXKK000OOOOkkkkxxxdddddddddooooool
...';:cloddddddxxxxdc'.            ..''...:;....'..... .xNNNXNNNXXXNXXK0OOkkOkkxxxxdddddddddddoooool
...',:clooddddxxxxxxxxdlc:,'...    .......''...... ..   ;0NXXXXXXXX0kxdlc:;cdkkxxxdddddxddddddooooll
....,;:clloooddddddxxxxxxkkxdddc. ...... ....'....      .dXXXXXXK0d;....;coxxxxxdxddddddddddooooooll
....',;:cclllooodddxxxxxxxxxxxkd,.. .    ........       .:0XXKko:,;cooldkkkxxxxdddddddddddooooolllll
.....';;:cccllloooddxxxdddxxxxxx:.  .  .......,'.   .   .:dol;',cdkO00Okxxdddddddddoooooooolllllllll
.....',;;::cclllooodddddooddddxd;.         ...,'.  ,;..':ll,':dkOOkkkxxddooooooooooollllllcccccccccc
.......',;;:::cccclllllllllloodo,       ... ...,...;c,'';:'..oOkkkxxdddooollllcllolllcccccc::::ccccc
. .......'''',,,;;;:::::cccccllc'.   .....  ..'''',,,,;'....;kkxxxddddolcccccccccllcccc::::::;::::::
..  ........'',,,,,;;;;:::::::c;........   ..,,....'lkkxl::lxkxdddolllcc::::cc:::cccc::::;;;;;;;;;;;
    ........'''',,,,,;;;;;;::;'...      ....','.   'dOkkkkkkxddooolcc:::::;;::;;::c:::::;;;;;;;;;;;;
     .......''''',,,,,;;;:;;;.     ........  ...  .;xkkkkxxdddolllc::;;;;;;,;;;;;::::;;;;;,,,,;;,,,,
  ...............''''',,,,,;'.     .,... .    .....,oxxxxxxddolclc:;;;,,,''',,,,,,;;;;;,,,,,,,,,'',,
      .....................''.     .'.. .         .,oxxxdddolllccc:;;,,'''..'''''''',,,,,,,,,,,,''''
       ....   .................            .       .odddddoollcccc;,,,'''...........''',,,''',,,,'''
               ..............',.        ...        .:ooollcllc::c:,'''.......................',,'''.
                  .... . ....'.         .          .;llc:::cc::::;'..........................'''....
                        .. .,.     ..              .,:::;;;::;;;;,...............''''....''.........
                           ''.                     .';;;,,,;;,,;;'........................'.........
                          ...                      .',,''.',,,,,,'..................................
                          .'.                      ..'''..',,,,,''..................................
)";

								cout << endl << endl << endl;
								cout << "Te han pagado" << randam << "$ por actuar hoy, y te has hecho de conocer mucho en el ambiente under de tu ciudad" << endl;
								fama = fama + 750;
								dinero = dinero + randam;
								cansancio = cansancio - 50;
								cout << "A pesar de las buenas, siempre hay malas, siempre que toques dos dias seguidos tu cansancio aumentara el doble" << endl;
								cout << "Por lo cual siempre, sera bueno descansar" << endl;
							}
						}
						else
						{
							cout << "Tu fama sigue siendo de nivel local, pero ya tienes un numero de seguidores respetable" << endl;
							cout << "Nuevos lugares te tendran en cuenta de ahora en mas" << endl;
							cout << "El pub cultural 'Spinette' te ha llamado y quiere que toques " << pcancion << " este fin de semana " << endl;
							system("pause");
							system("cls");
							cout << "En el concierto..." << endl;
							cout << R"(

                           &&%#/,     
                          @@@@@@%*     
                        @@@@@@&(.      
                      (@@@@@@@@@@@,    
                    .@@@@@@@@@@@@@#.   
                   @@@@@@@@@@@@@@&*    
     .@@%        @@@@@@@@@@@@@@@(.     
     #@@%*    .@   &@@@@@@@@@%(.       
   @@@@(, *@@@@@@@@@@@@@@@@@@@@@@@@@@( 
   @@@@@(%@@@@@@@@@@@@@@@@@@@@@@@@@@@#.
   @@@@@@@@%@,#@@@@@@@@@@@@@@@@@@@@@@#.
   @@@@@,,*(#&@@@@@@@@@@@@@@@@@@(%@#.  
#@@@@@@@@@@@@*@@/#%#%@@,     %@(   
 @%@@@@@@@@@@@@@/#@@(. @@#,      %@(   
 @*,@/@#/%(@@@@@/#@*   @@#.      ./*.  
 @/*@#@@@@/.@@@@@@@*   @@#,            
 ..   @/ @*    .,,,.   /##*        
)";
							cout << endl << endl << endl;
							randam = rand() % 10 + 1;
							if (randam < 2)
							{
								cout << "La gente parece haber pasado de largo de tu acto " << endl;
								cout << " Pero no te desanimes, nadie empezo en la desde arriba" << endl;
								cansancio = cansancio - 25;
								system("pause");
								system("cls");
							}
							if (randam >= 3 && randam <= 8)
							{
								cout << " Has dado un buen espectaculo, te han ofrecido como pago la comida de la noche, por lo cual no perderas energias " << endl;
								fama = fama + 200;
								system("pause");
								system("cls");
							}
							else if (randam >= 9)
							{
								cout << "La gente se quedo a escuchar tus temas y pedian mas!" << endl;
								fama = fama + 500;
								cout << "Incluso los dueños del pub dijeron que te quieren ver mañana sin falta !" << endl;
								cout << "Date una vuelta, nunca desaproveches una oportunidad! " << endl;
								system("pause");
								system("cls");
								randam = rand() % 200 + 100;
								cout << "..." << endl << "Al otro dia" << endl << "..." << endl;
								cout << "Parece que hoy abriras a un artista de tu region mas o menos conocido" << endl;
								cout << "..." << endl;
								cout << "Te han pagado" << randam << "$ por actuar hoy, y te has hecho de conocer mucho en el ambiente under de tu ciudad" << endl;
								fama = fama + 1000;
								dinero = dinero + randam;
								cansancio = cansancio - 50;
								system("pause");
								system("cls");
								cout << "A pesar de las buenas, siempre hay malas, siempre que toques dos dias seguidos tu cansancio aumentara el doble" << endl;
								cout << "Por lo cual siempre, sera bueno descansar" << endl;
							}


						}
						semana++;
						if (semana == 5)
						{
							mes++;
							semana = 1;
							if (mes == 13)
							{
								mes = 1;
								año++;
							}
						}
						break;
					case 1:

						if (fama < 6000)
						{
							cout << "Wow! Como has crecido, ahora la gente de tu REGION habla de ti y de tu musica" << endl;
							cout << "Empezaras a ser telonero de mejores bandas y festivales pequeños!" << endl;
							cout << "Mucha suerte para lo que sigue en este camino en el cual vas creciendo" << endl;
							cout << "La gente canta y pogea con " << pcancion << "tu exito empieza a ser escuchado y compartido en las redes" << endl;
							system("pause");
							system("cls");
							cout << "Bueno este miercoles estas invitado a una nueva fecha de festival 'UnderMusic' de tu region" << endl;
							cout << "Entras como primer banda del show, rockea!" << endl;
							cout << R"(
							 &&%#/,     
                          @@@@@@%*     
                        @@@@@@&(.      
                      (@@@@@@@@@@@,    
                    .@@@@@@@@@@@@@#.   
                   @@@@@@@@@@@@@@&*    
     .@@%        @@@@@@@@@@@@@@@(.     
     #@@%*    .@   &@@@@@@@@@%(.       
   @@@@(, *@@@@@@@@@@@@@@@@@@@@@@@@@@( 
   @@@@@(%@@@@@@@@@@@@@@@@@@@@@@@@@@@#.
   @@@@@@@@%@,#@@@@@@@@@@@@@@@@@@@@@@#.
   @@@@@,,*(#&@@@@@@@@@@@@@@@@@@(%@#.  
#@@@@@@@@@@@@*@@/#%#%@@,     %@(   
 @%@@@@@@@@@@@@@/#@@(. @@#,      %@(   
 @*,@/@#/%(@@@@@/#@*   @@#.      ./*.  
 @/*@#@@@@/.@@@@@@@*   @@#,            
 ..   @/ @*    .,,,.   /##*        

)";
							cout << endl << endl << endl;
							system("pause");
							system("cls");
							randam = rand() % 10 + 1;
							if (randam <= 8)
							{
								cout << "Ha sido una gran noche!, asi empezaron muchas bandas grandes" << endl;
								cout << "Siendo teloneras de Salta la banqueta" << endl;
								cout << "Recuerda siempre estar atento a la clave del exito" << endl;
								fama = fama + 500;
								dinero = dinero + 50;
								cansancio = cansancio - 25;
								system("pause");
								system("cls");
							}
							else if (randam >= 9)
							{
								cout << "La gente del festival se la paso muy bien contigo y esperan que estes las proximas fechas aqui " << endl;
								fama = fama + 500;
								system("pause");
								system("cls");
								cout << "Debido a tu estrepitoso crecimiento como artista" << endl;
								cout << "Este domingo has sido invitado por la secretaria de cultura de tu ciudad a un festival como artista local" << endl;
								cout << "Tendras la oportunidad de ser el primer telonero de una grande como Soledad Pestoruto" << endl;
								system("pause");
								system("cls");
								cout << "..." << endl << "El domingo" << endl << "..." << endl;
								cout << "Puede ser tu gran oportunidad de dar un gran impacto" << endl;
								cout << "..." << endl;
								cout << R"(
    |\                                                   
    | \                /|    |\              
----|-/--\_-----------/ |----|-\------------------|----------------------||
    |/ \_ \)         /  |    |  \                 |                      ||
---/|---\)----------/---|----|---\----------------|----------------------||
  /_|__    \_      /|   |    |   |\       |    |  |    |    |    |    |  ||
 //-|--\-\_-\)----//|---|----|---|\\------|----|--|----|----|----|----|--||
||  |   | \)     // |   |    |   | \\     |    |  |    |    |    |    |  ||
|-\-|---|-------|/--|---|----|---|--\|----|----|--|----|----|----|----|--||
 \ \|  /        |   |  _|   _|   |   |   _|   _|  |   _|   _|   _|   _|  ||
--\-|-/---------|--_|-(_)--(_)--_|---|--(_)--(_)--|--(_)--(_)--(_)--(_)--||
   -|-         _| (_)   \__/   (_)  _|    |    |       |    |   _|   _|
   /         -(_)-                -(_)-   |    |     -_|---_|--(_)--(_)
  O                                      _|   _|     (_)  (_)
                                       -(_)--(_)-
)";
								cout << endl << endl << "El publico ha estado muy contento y has conocido a Soledad, una artista de gran nivel " << endl;
								fama = fama + 3000;
								cansancio = cansancio - 50;
								system("pause");
								system("cls");
								cout << "A pesar de las buenas, siempre hay malas, siempre que toques dos veces en la semana tu cansancio disminuira el doble" << endl;
								cout << "Por lo cual siempre, sera bueno descansar" << endl;
							}
						}
						else
						{
							cout << "Wow! Que gran crecimiento estas marcando ahora ya solo falta poco para que seas un artista de nivel nacional" << endl;
							cout << "Te has vuelto un clasico en el festival 'Under Music'" << endl;
							cout << "La gente empieza a hacer planes para ir a verte semana tras semana" << endl;
							cout << "Hoy sales como evento principal, devuelvele el amor a la gente que te hizo quien eres" << endl;
							cout << R"(
                __                                        __ 
                |--|                                      |--|
     .._       o' o'                     (())))     _    o' o'
    //\\\    |  __                      )) _ _))  ,' ; |  __  
   ((-.-\)  o' |--|  ,;::::;.          (C    )   / /^ o' |--| 
  _))'='(\-.  o' o' ,:;;;;;::.         )\   -'( / /     o' o'
 (          \       :' o o `::       ,-)()  /_.')/                 .
 | | .)(. |\ \      (  (_    )      /  (  `'  /\_)    .:izf:,_  .  |
 | | _   _| \ \     :| ,==. |:     /  ,   _  / 1  \ .:q568Glip-, \ |
 \ \/ '-' (__\_\____::\`--'/::    /  /   / \/ /|\  \-38'^"^`8k='  \L,
  \__\\[][]____(_\_|::,`--',::   /  /   /__/ <(  \  \8) o o 18-'_ ( /
   :\o*.-.(     '-,':   _    :`.|  L----' _)/ ))-..__)(  J  498:- /]
   :   [   \     |     |=|   '  |\_____|,/.' //.   -38, 7~ P88;-'/ /
   :  | \   \    |  |  |_|   |  |    ||  :: (( :   :  ,`""'`-._,' /
   :  |  \   \   ;  |   |    |  |    \ \_::_)) |  :  ,     ,_    /
   :( |   /  )) /  /|   |    |  |    |    [    |   \_\      _;--==--._ 
MJP:  |  /  /  /  / |   |    |  |    |    Y    |CJR (_\____:_        _:
   :  | /  / _/  /  \   |lf  |  |  CJ|mk  |    | ,--==--.  |_`--==--'_|
                                                         "   `--==--'

)";

							system("pause");
							system("cls");
							randam = rand() % 10 + 1;
							if (randam < 2)
							{
								cout << endl << endl << "Vaya que show para el olvido has dado" << endl;
								cout << "No todos son flores en el rock, vuelve la semana que viene a demostrarles que puedes dar el doble" << endl;
								dinero = dinero + 100;
								cansancio = cansancio - 25;
								fama = fama - 1000;
								system("pause");
								system("cls");
							}
							if (randam >= 3 && randam <= 8)
							{
								cout << "Tu show supero las expectativas  y la gente canto al ritmo de " << pcancion << endl;
								cout << "Tienes a este publico dominado" << endl;
								fama = fama + 750;
								cansancio = cansancio - 25;
								system("pause");
								system("cls");
							}
							else if (randam >= 9)
							{
								cout << "La gente pedia mas, mas y mas!" << endl;
								cout << "Eres el fenomeno de moda en tu region sin duda ya empiezas a tocar la gran fama" << endl;
								fama = fama + 1000;
								system("pause");
								system("cls");
								cout << "Te han llamado del brama rock y quieren que formes parte el proximo mes!!!!!" << endl;
								cout << "Los grandes organizadores empiezan a conocer de " << nombre << " y su gran potencial " << endl;
								cout << "Las oportunidades así ocurren una vez en la vida arrasa con todo! " << endl;
								mes = mes + 1;
								system("pause");
								system("cls");
								cout << "..." << endl << "El proximo mes" << endl << "..." << endl;

								cout << "Entras a las 3 de la tarde en el main stage 2" << endl;
								cout << R"(
/_\_/_\_/_\_/_\_/_\_/_\_/_\_/_\_/_\_/_\_/_\_/_\_/_\_/_\_/_\_/_\_/_\_/_\
                      ..oooooo...oo.......ooooo...
                      ..oo.......oo.......oo..oo..
 ___ ___              ..oooo.....oo.......ooooo...             ___ ___
|ooo|ooo|             ..oo.......oo.......oo......______      |ooo|ooo|
|===|===|             ..oooooo...oooooo...oo.....|##:[~]|     |===|===|
|(O)|(O)|    -,-\   Q ,      ___                _|, Q :!|=m   |(O)|(O)|
|(O)|(O)|    / -..\/H'=i=   |###|   Q .         / .-/|::=m/   |(O)|(O)|
|mmm|mmm|___'|__|_,-.[]|\\__|###|__/W\_\_______MKm~'/--=m/)___|mmm|mmm|
'======='    |  |(apx) |  `~'===' (`&}=|"    _ {|\ /|   /\(   '======='
   `~.__,-._/'\/'\`-' /'\  '._   ,'`}\ |    [M\)|-\| \ /--\'._.~
                           .  `~(_ / //'\
_______________________________`~-'____________________________________				

								)";
								cout << endl << endl << "..." << endl;
								cout << "Te han pagado 500 $ por actuar hoy, y te has hecho de conocer mucho en el ambiente under de tu ciudad" << endl;
								fama = fama + 2500;
								dinero = dinero + 500;
								cansancio = cansancio - 50;
								cout << "A pesar de las buenas, siempre hay malas, los conciertos con largos viajes llevan tu cansancio al maximo" << endl;
								cout << "Descansa las proximas semanas o tu salud empezara a verse afectada" << endl;
								cout << "Por lo cual siempre, sera bueno descansar" << endl;
								system("pause");
								system("cls");
							}

						}
						semana++;
						if (semana == 5)
						{
							mes++;
							semana = 1;
							if (mes == 13)
							{
								mes = 1;
								año++;
							}
						}
						break;
					case 2:

						if (fama < 25000)
						{
							cout << "Eres el nuevo artista nacional por excelencia" << endl;
							cout << "Lo has logrado, te codeas con los grandes desde hoy solo te toca hacer historia" << endl;
							cout << "Se puede ver tu cara en revistas " << endl;
							cout << "La gente canta y pogea con " << pcancion << "tu exito empieza a ser escuchado y compartido en las redes" << endl;
							system("pause");
							system("cls");
							cout << "Esta mes seras uno de los headliner de un festival de gama internacional que se hara en tu pais" << endl;
							cout << "Compartiras escenario con los monos articos y los tuenti uan pailots " << endl;
							cout << "Muchisimia suerte!" << endl;
							system("pause");
							system("cls");
							cout << "...En el monapaloosa..." << endl;
							cout << R"(
/_\_/_\_/_\_/_\_/_\_/_\_/_\_/_\_/_\_/_\_/_\_/_\_/_\_/_\_/_\_/_\_/_\_/_\
                      ..oooooo...oo.......ooooo...
                      ..oo.......oo.......oo..oo..
 ___ ___              ..oooo.....oo.......ooooo...             ___ ___
|ooo|ooo|             ..oo.......oo.......oo......______      |ooo|ooo|
|===|===|             ..oooooo...oooooo...oo.....|##:[~]|     |===|===|
|(O)|(O)|    -,-\   Q ,      ___                _|, Q :!|=m   |(O)|(O)|
|(O)|(O)|    / -..\/H'=i=   |###|   Q .         / .-/|::=m/   |(O)|(O)|
|mmm|mmm|___'|__|_,-.[]|\\__|###|__/W\_\_______MKm~'/--=m/)___|mmm|mmm|
'======='    |  |(apx) |  `~'===' (`&}=|"    _ {|\ /|   /\(   '======='
   `~.__,-._/'\/'\`-' /'\  '._   ,'`}\ |    [M\)|-\| \ /--\'._.~
                           .  `~(_ / //'\
              
_______________________________`~-'____________________________________				

								)";
							randam = rand() % 10 + 1;
							if (randam < 2)
							{
								cout << endl << endl << "Eres un artista de primer nivel como para dar ese show" << endl;
								cout << "La gente empieza a pensar que te has dejado llevar por la vida del rock" << endl;
								dinero = dinero + 3000;
								cansancio = cansancio - 50;
								fama = fama - 4000;
								system("pause");
								system("cls");
							}
							if (randam >= 3 && randam <= 8)
							{
								cout << "Tu show fue de excelencia como los tienes acostumbrados" << endl;
								cout << "la verdad todo un dominador del escenario" << pcancion << endl;
								cout << "Tienes a este publico dominado" << endl;
								fama = fama + 5000;
								cansancio = cansancio - 25;
								dinero = dinero + 3000;
								system("pause");
								system("cls");
							}
							else if (randam >= 9)
							{
								cout << "La gente pedia mas, mas y mas!" << endl;
								cout << "Los monos articos te han felicitado y te han invitado a tocar con ellos " << endl;
								fama = fama + 10000;
								cansancio = cansancio - 50;
								cout << "A pesar de las buenas, siempre hay malas, los conciertos dobles llevan tu cansancio al maximo" << endl;
								cout << "Descansa las proximas semanas o tu salud empezara a verse afectada" << endl;
								cout << "Por lo cual siempre, sera bueno descansar" << endl;
								system("pause");
								system("cls");
							}
						}
						else
						{
							cout << "Bueno es hora de que empieces a irte de gira por tu pais" << endl;
							cout << "Agotas entradas donde vas y tus patrocinadores estan muy contentos contigo " << endl;
							cout << "Estaras las dos proximas semanas girando por el pais muchisima suerte" << endl;
							cout << "Muchisimia suerte!" << endl;
							system("pause");
							system("cls");
							semana++;
							randam = rand() % 10 + 1;
							dinero = dinero + 10000;
							cansancio = 0;
							for (int i = 0; i = 3; i++)
							{
								cout << endl;
								cout << endl;
								cout << "Bueno, concierto numero " << i << " hoy andaras por el veamos como te va" << endl;
								cout << R"(
                __                                        __ 
                |--|                                      |--|
     .._       o' o'                     (())))     _    o' o'
    //\\\    |  __                      )) _ _))  ,' ; |  __  
   ((-.-\)  o' |--|  ,;::::;.          (C    )   / /^ o' |--| 
  _))'='(\-.  o' o' ,:;;;;;::.         )\   -'( / /     o' o'
 (          \       :' o o `::       ,-)()  /_.')/                 .
 | | .)(. |\ \      (  (_    )      /  (  `'  /\_)    .:izf:,_  .  |
 | | _   _| \ \     :| ,==. |:     /  ,   _  / 1  \ .:q568Glip-, \ |
 \ \/ '-' (__\_\____::\`--'/::    /  /   / \/ /|\  \-38'^"^`8k='  \L,
  \__\\[][]____(_\_|::,`--',::   /  /   /__/ <(  \  \8) o o 18-'_ ( /
   :\o*.-.(     '-,':   _    :`.|  L----' _)/ ))-..__)(  J  498:- /]
   :   [   \     |     |=|   '  |\_____|,/.' //.   -38, 7~ P88;-'/ /
   :  | \   \    |  |  |_|   |  |    ||  :: (( :   :  ,`""'`-._,' /
   :  |  \   \   ;  |   |    |  |    \ \_::_)) |  :  ,     ,_    /
   :( |   /  )) /  /|   |    |  |    |    [    |   \_\      _;--==--._ 
MJP:  |  /  /  /  / |   |    |  |    |    Y    |CJR (_\____:_        _:
   :  | /  / _/  /  \   |lf  |  |  CJ|mk  |    | ,--==--.  |_`--==--'_|
                                                         "   `--==--'

)";
								cout << endl;
								cout << endl;

								if (randam < 2)
								{
									cout << endl << "Los locales han estados muy tristes con tu pobre actuacion" << endl;
									cout << "La gente empieza a pensar que te has dejado llevar por los farmacos para rendimiento" << endl;

									fama = fama - 1000;
								}
								if (randam >= 3 && randam <= 8)
								{
									cout << "Tu show fue de excelencia como los tienes acostumbrados" << endl;
									cout << "Esta ciudad siempre te abrira los brazos para cuando vuelvas" << pcancion << endl;
									cout << "Tienes a este publico en tus manos" << endl;
									fama = fama + 5000;
								}
								else if (randam >= 9)
								{
									cout << "Se dice que has mejorado muchisimo tu performance en el escenario" << endl;
									cout << "Hoy te han comparado con shows como el del peluca bicolor en 2004" << endl;
									cout << "Desde hoy en mas este concierto es el que por el que miles de personas te recordaran" << endl;
									cout << "Salud por " << nombre << " y larga vida al rock!" << endl;
									fama = fama + 10000;
								}
							}
							system("pause");
							system("cls");
						}
						semana++;
						if (semana == 5)
						{
							mes++;
							semana = 1;
							if (mes == 13)
							{
								mes = 1;
								año++;
							}
						}
						break;
						cseguidos++;
						tseguidos = 0;
						if (cseguidos == 5)
						{
							cout << "Hace 5 semanas que llevas haciendo los mismos temas" << endl;
							cout << "La gente dice que empiezas a aburrir, dales algo nuevo" << endl;
							depresion = depresion + 5;
						}


					}
					break;









				case 3:
					cout << "semana finalizada pasemos a la siguiente" << endl;
					cout << "Tu dinero es " << dinero << endl;
					cout << "Tu fama es de nivel " << nsfama << endl;
					cansancio = cansancio + 50;
					cout << "Tu cansancio es " << cansancio << endl;
					cout << "Tu numero de seguidores aproximado es " << fama << endl;
					semana++;
					if (semana == 5)
					{
						mes++;
						semana = 1;
						if (mes == 13)
						{
							mes = 1;
							año++;
						}
					}
					break;
				}
			}


			break;
		case 2:
			correcto = true;
			exit(0);
			break;

		case 3:
			correcto = false;
			cout << "opcion incorrecta " << endl;
			system("pause");
			system("cls");
		}
	}
	system("pause");
	return 0;
}