Algoritmo TP4ejercicio12
	Definir valor1, valor2, resultAnd, resultNor Como Caracter
	
	Escribir "Ingrese los valores logicos de AND como v, V, f, F"
	Leer valor1, valor2
	
	Segun (valor1) Hacer
		Caso 'V': 
			valor1 <- 'v'
		Caso 'F':
			valor1 <- 'f'
		De Otro Modo:
			Escribir "ingrese un valor logico correcto"
	FinSegun
	
	Segun (valor2) Hacer
		Caso 'V': 
			valor2 <- 'v'
		Caso 'F':
			valor2 <- 'f'
		De Otro Modo:
			Escribir "ingrese un valor logico correcto"
	FinSegun
	
	si(valor1 = 'v' Y valor2 = 'v')
		resultAnd <- 'Verdadero'
	SiNo
		resultAnd <- "Falso"
	FinSi
	
	si(valor1 = 'f' Y valor2 = 'f')
		resultNor <- "Verdadero"
	SiNo
		resultNor <- "Falso"
	FinSi
	
	Escribir "Resultado AND: ", resultAND
	Escribir "Resultado NOR: ", resultNor
	
FinAlgoritmo

