Algoritmo TP4ejercicio9
	definir promAlu1, promAlu2, promAlu3, aux Como Entero
	definir nombreAlu1, nombreAlu2, nombreAlu3, apellidoAlu1, apellidoAlu2, apellidoAlu3  Como Caracter
	
	Escribir "Ingrese el nombre y apellido del primer alumno"
	leer nombreAlu1, apellidoAlu1
	Escribir "Ingrese el promedio del Alumno"
	Leer promAlu1
	
	Escribir "Ingrese el nombre y apellido del segundo alumno"
	leer nombreAlu2, apellidoAlu2
	Escribir "Ingrese el promedio del Alumno"
	Leer promAlu2
	
	
	Escribir "Ingrese el nombre y apellido del tercer alumno"
	leer nombreAlu3, apellidoAlu3
	Escribir "Ingrese el promedio del Alumno"
	Leer promAlu3
	
	si (promAlu1 > promAlu2 y promAlu1 > promAlu3) Entonces
		
		si (promAlu2 > promAlu3) Entonces
			
			aux <- promAlu2
			
			Escribir "El abanderado es: ",  nombreAlu1, " ",apellidoAlu1, " con un promedio de: ", promAlu1
			Escribir "El primer escolta es: ", nombreAlu2, " ",apellidoAlu2, " con un promedio de: ", promAlu2
			Escribir "El segundo escolta es: ", nombreAlu3, " ",apellidoAlu3, " con un promedio de: ", promAlu3
		SiNo
			aux <- promAlu2
			promAlu2 <- promAlu3
			promAlu3 <- aux
			
			Escribir "El abanderado es: ",  nombreAlu1, " ",apellidoAlu1, " con un promedio de: ", promAlu1
			Escribir "El primer escolta es: ", nombreAlu2, " ",apellidoAlu2, " con un promedio de: ", promAlu2
			Escribir "El segundo escolta es: ", nombreAlu3, " ",apellidoAlu3, " con un promedio de: ", promAlu3
		FinSi
		
	FinSi
	
	si (promAlu2 > promAlu3 y promAlu2 > promAlu1) Entonces
		
		aux <- promAlu1
		promAlu1 <- promAlu2
		si (promAlu3 > aux)
			promAlu2 <- promAlu3
			promAlu3 <- aux
			
			Escribir "El abanderado es: ",  nombreAlu2, " ",apellidoAlu2, " con un promedio de: ", promAlu1
			Escribir "El primer escolta es: ", nombreAlu3, " ",apellidoAlu3, " con un promedio de: ", promAlu2
			Escribir "El segundo escolta es: ", nombreAlu1, " ",apellidoAlu1, " con un promedio de: ", promAlu3
		SiNo
			promAlu2 <- aux
			
			Escribir "El abanderado es: ",  nombreAlu2, " ",apellidoAlu2, " con un promedio de: ", promAlu1
			Escribir "El primer escolta es: ", nombreAlu1, " ",apellidoAlu1, " con un promedio de: ", promAlu2
			Escribir "El segundo escolta es: ", nombreAlu3, " ",apellidoAlu3, " con un promedio de: ", promAlu3
		FinSi
		
		Escribir promAlu1, promAlu2, promAlu3
	FinSi
	
	si (promAlu3 > promAlu1 y promAlu3 > promAlu2) Entonces
		
		aux <- promAlu1
		promAlu1 <- promAlu3
		si (aux > promAlu2) Entonces
			
			promAlu3 <- promAlu2
			promAlu2 <- aux
			
			Escribir "El abanderado es: ",  nombreAlu3, " ",apellidoAlu3, " con un promedio de: ", promAlu1
			Escribir "El primer escolta es: ", nombreAlu1, " ",apellidoAlu1, " con un promedio de: ", promAlu2
			Escribir "El segundo escolta es: ", nombreAlu2, " ",apellidoAlu2, " con un promedio de: ", promAlu3
		SiNo
			promAlu3 <- aux
			
			Escribir "El abanderado es: ",  nombreAlu3, " ",apellidoAlu3, " con un promedio de: ", promAlu1
			Escribir "El primer escolta es: ", nombreAlu2, " ",apellidoAlu2, " con un promedio de: ", promAlu2
			Escribir "El segundo escolta es: ", nombreAlu1, " ",apellidoAlu1, " con un promedio de: ", promAlu3
		FinSi
		
	FinSi	
	
FinAlgoritmo