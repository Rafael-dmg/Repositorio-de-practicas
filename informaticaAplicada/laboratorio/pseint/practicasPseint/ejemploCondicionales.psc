Algoritmo ejemploCondicionales
	definir num, aux Como Entero
	
	Repetir
		Escribir "ingrese un numero"
		Leer num
		
		Si num > 0 y num < 10 Entonces
			escribir "Hola"
		SiNo
			Si num > 0 y num > 10 Entonces
				Escribir "Adios"
			Fin Si
		Fin Si
	Hasta Que num > 50 o num = 0
FinAlgoritmo
