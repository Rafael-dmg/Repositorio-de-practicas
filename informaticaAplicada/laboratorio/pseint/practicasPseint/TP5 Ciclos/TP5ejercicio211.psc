Algoritmo TP5ejercicio211_ordenAscendenteDescendienteAleatoria
	Definir nums, cont, cont2, aux, sum como enteros
	Dimension nums[10]
	cont <- 1
	cont2 <- 10
	sum <- 0
	aux <- 0
	para i <- 1 Hasta 10 Con Paso 1 Hacer
		Escribir "Venga el numero"
		Leer nums[i]
		sum <- sum + nums[i]
		
	si(i >1)entonces //de esta manera retrasamos un ciclo la comparacion y podemos almacenar el valor de nums[i] en aux
		Si(nums[i] > aux)Entonces //se compara con nums[i] y no con suma porque suma siempre sera mas grande
			cont <- cont + 1
			//escribir "el valor de cont es: ", cont 
		FinSi
		si(nums[i] < aux)Entonces
			cont2 <- cont2 -1
			//escribir "el valor de cont2 es: ", cont2
		FinSi
	FinSi
	
		aux <- nums[i] //se le da el valor en esta seccion para luego poder hacer las comparaciones en los demas ciclos
	FinPara
	si(cont == 10)Entonces
		Escribir "Los numeros fueron ingresados de forma ascendente"
	FinSi
	si(cont2 == 1)Entonces
		Escribir "Los numeros fueron ingresados de forma descendente"
	FinSi
	Si(cont > 0 y cont < 10)Entonces
		Escribir "Los numeros fueron ingresados de forma aleatoria"
	FinSi
FinAlgoritmo
