Algoritmo Potencia_con_mientras
	Definir num, base, aux Como Entero
	aux <- 0
	num <- 1
	
	Escribir "Ingrese Base"
	leer base
	Mientras aux < 10 Hacer
		num <- num * base
		aux <- aux + 1
		
		escribir "El resultado de: ", base, " elevado a la: ", aux, " es: " num
	Fin Mientras
FinAlgoritmo
