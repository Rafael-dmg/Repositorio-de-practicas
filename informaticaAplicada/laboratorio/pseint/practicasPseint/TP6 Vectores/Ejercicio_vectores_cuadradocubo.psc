Algoritmo Ejercicio_vectores_cuadradocubo
	definir vecNum, cuadrado, cubo Como Entero
	
	Dimension vecNum[10]
	
	Para i <- 1 Hasta 10 Con Paso 1 Hacer
		vecNum[i] <- azar(10)
		
		Escribir sin bajar "<-",vecNum[i],"->"
	FinPara
	
	Para i <- 1 Hasta 10 Con Paso 1 Hacer	
		cuadrado <- vecNum[i] ^ 2
		cubo <- vecNum[i] ^ 3
		Escribir " "
		Escribir "-xx-", cuadrado, "-xx-"
		Escribir "-xxx-", cubo, "-xxx-"
	FinPara
FinAlgoritmo
