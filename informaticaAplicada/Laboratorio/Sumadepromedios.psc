//se ingresan 20 numeros reales de a uno por vez y se pide mostrar la suma parcial 
//y el promedio final


Algoritmo Sumadepromedios
	suma <- 0
	
	Para i <- 1 Hasta 5 Con Paso 1 Hacer
		Escribir "Ingrese un valor"
		Leer nro
		
		suma <- suma + nro
		Escribir "La suma parcial es: ", suma
		
	Fin Para
	
	prom <- suma/20
	
	Escribir "El promedio final es: ", prom
FinAlgoritmo
	