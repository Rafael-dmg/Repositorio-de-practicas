Algoritmo TP5ejericio24
	Definir numEntero Como Entero
	Definir numReal, men, aux Como Real
	
	Escribir "Ingresa un numero Entero"
	Leer numEntero
	
	Para i <- 1 Hasta 5 Con Paso 1 Hacer
		Escribir "Ingresar numero Real"
		Leer numReal
		
		Si (numReal < numEntero) Entonces
			aux = numReal
			
			si(aux < numReal) Entonces
				men <- aux
			SiNo
				men <- numReal
			FinSi
		SiNo
			men = numEntero
		FinSi
	FinPara
	
	Escribir "El numero de menor valor es: ", men
FinAlgoritmo
