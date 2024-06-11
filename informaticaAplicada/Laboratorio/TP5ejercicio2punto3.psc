Algoritmo TP5ejercicio2p3
	Definir	suma, prom Como Real
		suma <- 0
		
		Para i <- 1 Hasta 5 Con Paso 1 Hacer
			Escribir "Ingrese un valor"
			Leer nro
			
			suma <- suma + nro
			
		Fin Para
		
		prom <- suma/5
		
		Escribir "El promedio final es: ", prom
	
FinAlgoritmo
