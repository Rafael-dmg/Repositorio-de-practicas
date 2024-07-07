//Hacer un programa que cargue un vector de 20 posiciones con números al azar entre 1 y 10.
//Determinar el mayor de ese vector e informar cuantas veces se repite en el mismo y 
//mostrar en todas las posiciones que esta gravado.
//Calcular la media de ese vector y mostrar las posiciones que son mayores a la media.

Algoritmo VectoresOrdeMayorMenor
	definir num, may, men Como Entero
	Dimension num[20]
	
	Para i <- 1 Hasta 20 Con Paso 1 Hacer
		num[i] <- Aleatorio(1, 10)
	FinPara
	
	men <- num[1]
	may <- num[1]
	
	Para i <- 1 Hasta 20 Con Paso 1 Hacer
		Si num[i] > may Entonces
			may <- num[i]
		Fin Si
		
		Escribir "la posicion de vector " , i, " es: ", num[i]
	FinPara
	
	Para i <- 1 Hasta 20 Con Paso 1 Hacer
		Si num[i] < men Entonces
			men <- num[i]
		Fin Si
	FinPara
	
	Escribir "El mayor valor encontrado es: ", may
	Escribir "El menor valor encontrado es: ", men
FinAlgoritmo
