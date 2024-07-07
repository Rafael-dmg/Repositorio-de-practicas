Algoritmo TP5ejercicio27(Logaritmo_de_suma_con_promedio)
	Definir num, sum, cont Como Entero
	Definir prom Como Real
	sum <- 0
	Repetir
		Escribir "Ingresa un numero para operar -- Si queres salir presiona 0"
		leer num
		sum <- sum + num
		
		si(num > 0)Entonces
			cont <- cont +1
		FinSi
		Escribir "contador vale: ", cont
	Hasta Que (num == 0)
	
	prom <- sum / cont
	Escribir "La suma total es: ", sum
	Escribir "El promedio es: ", prom
FinAlgoritmo
