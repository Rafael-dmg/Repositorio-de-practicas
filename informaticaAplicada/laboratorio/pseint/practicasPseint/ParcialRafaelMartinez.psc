Algoritmo ParcialRafaelMartinez
	definir pais, mesCh Como Caracter
	definir dia, mes, anio, fecha Como Entero
	
	Escribir "Ingrese un caracter para el pais de origen"
	leer pais
	
	Segun pais Hacer
		'A' o 'a': pais <- "Argentina"
		'B' o 'b': pais <- "Brasil"
		'C' o 'c': pais <- "Chile"
		'U' o 'u': pais <- "Uruguay"
			
		de otro modo: Escribir "Ingrese un caracter valido"
	FinSegun
	
	Escribir "Escribir un numero de 6 cifras para representar la fecha, Ejemplo: 06081995"
	leer fecha
	
	Repetir
		Escribir "Ingresa una fecha valida"
	Hasta Que fecha

FinAlgoritmo
