Algoritmo ejemplo
	acum <- 0
	acum2 <- 0
	cont <- 0
	cont2 <- 0
	num <- 2
	num2 <- 3
	num3 <- 4
	num4 <- 5
	
	Para j <- 1 hasta 10 Con Paso 1 hacer
		acum <- num * j
		
		Escribir sin bajar acum, " "
	FinPara
	
	escribir " "
	
	Para i <- 1 Hasta 10 Con Paso 1 Hacer
		acum2 <- num2 * i
		escribir sin bajar  acum2, " "
	Fin Para
	
	escribir " "
	
	Repetir
		
		cont <- cont + 1 //cont es el contador :V
		 //mult vendria siendo un acumulador
		
		Escribir sin bajar cont, " "
	Hasta Que (cont < 10)
	
	Escribir " "
	
	Mientras (cont2 < 10) Hacer
		cont2 <- cont2 + 1 //cont es el contador :V
		mult2 <- num3 * cont2 //mult vendria siendo un acumulador
		
		Escribir sin bajar mult2, " "
	Fin Mientras
	
FinAlgoritmo
