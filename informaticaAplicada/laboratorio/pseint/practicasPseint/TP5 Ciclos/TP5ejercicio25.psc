Algoritmo TP5ejercicio25
	
	Definir nums, total, prom Como Real
	total <- 0
	
	Para i<-1 Hasta 5 Con Paso 1 Hacer
		escribir "venga el numero"
		leer nums
		total <- total+nums
		
		Escribir total
		
		Si (i == 5) Entonces
			prom <- total / 5
		FinSi
	Fin Para
	
	escribir "el total es: " prom
	
FinAlgoritmo

//Observaciones: si se hace el mismo algoritmo con el i afuera del para, no funciona porque i esta afuera del scope del resto del algoritmo, 
//solo existe dentro del Para y por esto el resultado de prom siempre era 0