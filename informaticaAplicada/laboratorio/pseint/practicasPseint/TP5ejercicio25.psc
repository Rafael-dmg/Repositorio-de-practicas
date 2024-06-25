Algoritmo sin_titulo
	Definir nums, aux, total Como Real
	
	Para i<-1 Hasta 5 Con Paso 1 Hacer
		escribir "venga el numero"
		leer nums
		aux <- nums
		nums = nums + aux
		
		Si (i <- 5) Entonces
			total <- nums / 5
			
			escribir total
		FinSi
		
	Fin Para
FinAlgoritmo