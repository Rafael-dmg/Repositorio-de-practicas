Algoritmo TP5ejercicio28(algoritmo_guardado_mayor_valor)
	Definir num, max Como Entero
	
	Repetir
		Escribir "Ingrese un numero para Positivo para operar -- Para salir ingresa ( -1 )"
		leer num
		
		si(num>max) Entonces
			max <- num
		FinSi
	Hasta Que (num == -1)
	
	Escribir "El numero de mayor valor es: ", max
FinAlgoritmo
