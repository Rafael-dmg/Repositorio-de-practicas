Algoritmo TP5ejericio24
	Definir numEntero Como Entero
	Definir numReal, men Como Real
	
	Escribir "Ingresa un numero Entero"
	Leer numEntero
	men <- numEntero

	Para i <- 1 Hasta 5 Con Paso 1 Hacer
		Escribir "Ingresar numero Real"
		Leer numReal
		
		Si (numReal < men) Entonces
				men <- numReal
		FinSi
	FinPara
	
	Escribir "El numero de menor valor es: ", men
FinAlgoritmo


