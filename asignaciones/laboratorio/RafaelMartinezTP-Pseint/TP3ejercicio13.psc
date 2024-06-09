//13) Dados dos números A y B dejar en A el mayor y en B el menor.

Algoritmo TP3ejercicio13
	definir numA, numB, aux Como Entero
	
	Escribir "Ingrese dos valores"
	Leer numA, numB
	
	aux <- numA
	
	si (numA == numB)
		Escribir"Son iguales"
	SiNo
		Si (numB > numA)
			numA <- numB
			numB <- aux
			
			Escribir "numA es: ", numA
			Escribir "numB es: ", numB
		SiNo
			Escribir "numA es:", numA
			Escribir "numB es :", numB
		FinSi
	FinSi
	
FinAlgoritmo