Funcion mensaje <- Mensaje (rtausuario)
	//definir mensaje Como Entero
	
	Escribir "Si el cura tiene ganas se le mueve?"
	Escribir "Selecciona 1 si tiene ganas"
	Escribir "Selecciona 2 si no tiene ganas"
	Escribir "Otra respuesta"
	leer rtausuario
	
	mensaje <- rtausuario
Fin Funcion


Funcion rta <- Ganas ( rta, mensaje )
	definir rta Como Caracter[30]

	Segun mensaje Hacer
		1:
			rta <- "Se le mueve la sotana"
		2:
			rta <- "Se le mueve el sombrero"
		De Otro Modo:
			rta <- "Mentira siempre tiene ganas"
	Fin Segun
	
Fin Funcion

Algoritmo Cura
	definir rtausuario como entero
	
	Escribir Mensaje(rtausuario)
	Escribir 	Ganas(rta, rtausuario)
FinAlgoritmo
