Algoritmo TP4ejercicio7
	Definir  numRand  Como Entero
	Definir compra, totalCompra, descuento Como Real
		
	Escribir "Ingrese compra de cliente: "
	Leer compra
	
	Si (compra <= 0) Entonces 
		Escribir "Ingrese correctamente el valor de compra del cliente: "
		Leer compra
	SiNo
		
		numRand <- azar(100)
	
	
	Si (numRand >= 74) Entonces
		descuento <- 0.20
		Escribir "SU NUMERO AL AZAR FUE: ", numRand, " TIENE UN 20% OFF!"
	sino 
		descuento <- 0.15
		Escribir "SU NUMERO AL AZAR FUE: ", numRand, " TIENE UN 15% OFF!"
	FinSi
	
	totalCompra <- compra - (compra * descuento) 
	
	Escribir "Su compra inicial es de: ", compra
	Escribir "Su total con descuento es de: ", totalCompra
	
	FinSi
FinAlgoritmo
