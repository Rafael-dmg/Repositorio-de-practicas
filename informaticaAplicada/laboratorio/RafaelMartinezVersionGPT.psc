Algoritmo RafaelMartinezVersionGPT
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
