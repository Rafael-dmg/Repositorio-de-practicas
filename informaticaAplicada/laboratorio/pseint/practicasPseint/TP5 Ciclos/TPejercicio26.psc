Algoritmo TPejercicio26
	Definir num, produc, vec, sum, positivos Como Entero
	positivos <- 0
	sum <- 0
	produc <- 1
	Dimension vec[5]
	
	Para i <- 1 Hasta 5 Con Paso 1 Hacer
		Escribir "sabes que hacer"
		leer num
		sum <- sum + num
		produc <- produc * num
		vec[i] <- num
		
		
		Si (num > 0) Entonces
			positivos <- positivos + 1
			escribir "se sumo un positivo y ahora hay: ", positivos
		FinSi
		
		Si (i == 5) Entonces
			Escribir "el primer valor es: ", vec[1]
			Escribir "el ultimo valor es: ", vec[5]
		FinSi
	FinPara
	
	Si (positivos > 0) Entonces
		Escribir "Hay ", positivos, " positivos en total"
	SiNo
		Escribir "No hubo positivos"
	FinSi
	
	Escribir "La sumatoria es: ", sum
	Escribir "La productoria es: ", produc
FinAlgoritmo