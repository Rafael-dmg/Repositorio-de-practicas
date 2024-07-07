Algoritmo TP5ejercicio211
	Definir nums, cont, cont2, aux, sum como enteros
	Dimension nums[10]
	cont <- 1
	cont2 <- 10
	sum <- 0
	
	para i <- 1 Hasta 10 Con Paso 1 Hacer
		Escribir "Venga el numero"
		Leer nums[i]
		sum <- sum + nums[i]
		
	si(i >1)entonces
		Si(nums[i] > aux)Entonces
			cont <- cont + 1
			//escribir "el valor de cont es: ", cont 
		FinSi
		si(nums[i] < aux)Entonces
			cont2 <- cont2 -1
			//escribir "el valor de cont2 es: ", cont2
		FinSi
	FinSi
	
		aux <- nums[i]
	FinPara
	si(cont == 10)Entonces
		Escribir "Los numeros fueron ingresados de forma ascendente"
	FinSi
	si(cont2 == 1)Entonces
		Escribir "Los numeros fueron ingrsados de forma descendente"
	FinSi
FinAlgoritmo
