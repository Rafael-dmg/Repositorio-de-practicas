//Se ingresan 20 n�meros por teclado y al final se indica si alguno fue negativo mediante un mensaje

Algoritmo TP5ejercicio2p2
	definir num Como Real
	cont <- 0
	
	Para i <- 1 Hasta 20 Con Paso 1 Hacer
		Escribir "Ingrese los numeros a comparar"
		Leer num
		
		Escribir "El numero es: ", num
		
		Si (num < 0) Entonces
			cont <- cont + 1
		FinSi
	Fin Para
	

	Escribir "Hubo una cantidad de: ", cont, " negativos"
FinAlgoritmo
