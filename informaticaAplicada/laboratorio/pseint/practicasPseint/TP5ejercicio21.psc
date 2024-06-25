Algoritmo TP5ejercicio2p1
	
		definir num Como Real
		flag <- 0
		
		Para i <- 1 Hasta 5 Con Paso 1 Hacer
			Escribir "Ingrese los numeros a comparar"
			Leer num
			
			Escribir "El numero es: ", num
			
			Si (num < 0) Entonces
				flag <- 1
			FinSi
		Fin Para
		
		
		Escribir "Hay al menos 1 dato negativo"


FinAlgoritmo
