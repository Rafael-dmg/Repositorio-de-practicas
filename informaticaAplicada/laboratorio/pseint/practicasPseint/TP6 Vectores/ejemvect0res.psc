Algoritmo ejemvect0res
	
	Definir i, total Como Entero
	Dimension edades[5]
	acu <- 0
	
	Para i <- 1 Hasta 5 Con Paso 1 Hacer
		Escribir  "Ingrese edad ", i, ": "
		leer edades[ i ]
		acu <- acu + edades[i]
	Fin Para
	
	Para i <- 1 Hasta 5 Con Paso 1 Hacer
		Escribir "la edad ", i, "es: ", edades[i]
	Fin Para
	
	Escribir acu
	
FinAlgoritmo
