//14) Dados tres numero A, B y C ordenarlos de mayor a menor de modo que el mayor
// queda en A el menor queda en C y el restante en B. Imprimir A, B, C.

Algoritmo TP3ejercicio14
	Definir numA, numB, numC, aux Como Entero
	
	Escribir "Ingrese tres valores"
	Leer numA, numB, numC
	
	si (numA > numB y numA > numC) Entonces
		
		si (numB > numC) Entonces
			
			aux <- numB
		SiNo
			aux <- numB
			numB <- numC
			numC <- aux
		FinSi
		
		Escribir numA
		Escribir numB
		Escribir numC
	FinSi
	
	si (numB > numC y numB > numA) Entonces
		
		aux <- numA
		numA <- numB
		si (numC > aux)
			numB <- numC
			numC <- aux
		SiNo
			numB <- aux
		FinSi
		
		Escribir numA
		Escribir numB
		Escribir numC
	FinSi
	
	si (numC > numA y numC > numB) Entonces
		
		aux <- numA
		numA <- numC
		si (aux > numB) Entonces
			
			numC <- numB
			numB <- aux
		SiNo
			numC <- aux
		FinSi
		
		Escribir numA
		Escribir numB
		Escribir numC
	FinSi	
	
	
//	FALTA IMPRIMIR LOS VALORES ORDENADOS Y PROLIJOS. ADEMAS DE LA VALIDACION DE DATOS.
	
FinAlgoritmo
