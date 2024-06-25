//Algoritmo RafaelMartinez
//	definir pacientes, i , may, med, men Como Entero
//	definir hospital, hosp1, hosp2, hosp3 Como caracter
//	
//	
//	Dimension pacientes[4]
//	dimension hospital[4]
//	
//	Para i <- 1 Hasta 4 Con Paso 1 Hacer
//		Escribir  "Ingrese hospital "
//		leer hospital[i]
//		Escribir "Ingrese pacientes "
//		leer pacientes[i]
//		
//	Fin Para 
//	
//	si(pacientes[1] > pacientes[2] y pacientes[1] > pacientes[3])Entonces
//		//escribir "el hospital: ", hospital[1], "tiene ", pacientes[1]
//		may <- pacientes[1]
//		hosp1 <- hospital[1]
//		
//		si(pacientes[2] > pacientes[3] y pacientes[2] > pacientes[4])Entonces
//			med <- pacientes[2]
//			hosp2 <- hospital[2]
//			
//		FinSi
//		si(pacientes[3] > pacientes[4])Entonces
//			men <- pacientes[3]
//			hosp3 <- hospital[3]
//		SiNo
//			men <- pacientes[4]
//			hosp3 <- hospital[4]
//		FinSi
//	FinSi
//	
//	si(pacientes[2] > pacientes[1] y pacientes[2] > pacientes[3])Entonces
//		//escribir "el hospital: ", hospital[1], "tiene ", pacientes[1]
//		may <- pacientes[2]
//		hosp1 <- hospital[2]
//		
//		si(pacientes[1] > pacientes[3] y pacientes[1] > pacientes[4])Entonces
//			med <- pacientes[1]
//			hosp2 <- hospital[1]
//			si(pacientes[3] > pacientes[4])Entonces
//				men <- pacientes[3]
//				hosp3 <- hospital[3]
//			SiNo
//				men <- pacientes[4]
//				hosp3 <- hospital[4]
//			FinSi
//		FinSi
//	FinSi
//	
//	escribir hosp1, may, hosp2, med, hosp3, men
//	
//	//escribir pacientes[1], " ", valor2, " ", valor3, " ", valor4
//FinAlgoritmo

Algoritmo RafaelMartinez
	definir pacientes, i, j, temp_pacientes Como Entero
	definir hospital, temp_hospital Como caracter
	
	Dimension pacientes[4]
	Dimension hospital[4]
	
	Para i <- 1 Hasta 4 Con Paso 1 Hacer
		Repetir
			Escribir "Ingrese hospital ", i, ": "
			leer hospital[i]
			Hasta que hospital[i] <> ""
			
			Repetir
				Escribir "Ingrese pacientes ", i, ": "
				leer pacientes[i]
			Hasta que pacientes[i] > 0
	Fin Para
			
			// Algoritmo de selección para ordenar los valores de mayor a menor
			Para i <- 1 Hasta 3 Hacer
				Para j <- i + 1 Hasta 4 Hacer
					Si pacientes[i] < pacientes[j] Entonces
						// Intercambiar pacientes[i] y pacientes[j]
						temp_pacientes <- pacientes[i]
						pacientes[i] <- pacientes[j]
						pacientes[j] <- temp_pacientes
						
						// Intercambiar hospital[i] y hospital[j]
						temp_hospital <- hospital[i]
						hospital[i] <- hospital[j]
						hospital[j] <- temp_hospital
					Fin Si
				Fin Para
			Fin Para
			
			// Escribir los resultados
			Para i <- 1 Hasta 4 Hacer
				Escribir "El hospital ", hospital[i], " tiene ", pacientes[i], " pacientes."
			Fin Para
FinAlgoritmo
