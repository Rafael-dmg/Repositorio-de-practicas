Algoritmo RafaelMartinez1_605
	Definir codigo, codigoArq, saldo, proyectos, sumProyec, sumSaldos Como Entero
	Definir promSaldos, promProyectos como real
	Definir tipo Como Caracter
	Dimension codigoArq[4]
	Dimension proyectos[4]
	Dimension saldo[4]
	Dimension tipo[4]
	codigo <- 0
	sumProyec <- 0
	sumSaldos <- 0
	promProyectos <- 0
	promSaldos <- 0
	

	Para i <- 1 Hasta 4 Hacer
		saldo[i] <- 0
		proyectos[i] <- 0
		codigoArq[i] <- Aleatorio(1,100)
	FinPara
	Repetir
		Escribir "Ingrese el codigo del arquitecto"
		Escribir codigoArq[1], " para arquitecto A"
		Escribir codigoArq[2], " para arquitecto B"
		Escribir codigoArq[3], " para arquitecto C"
		Escribir codigoArq[4], " para arquitecto D"
		leer codigo
		Segun codigo Hacer
			codigoArq[1]:
				Escribir "Cargar datos para el arquitecto A"
				
				Escribir "Ingrese el tipo de proyecto: "
				Escribir "a o A: para Residencial"
				Escribir "b o B: para Comercial"
				Escribir "c o C: para Industrial"
				Escribir "d o D: para Publico"
				leer tipo[1]
				Segun tipo[1] Hacer
					'a' o 'A': tipo[1] <- "Residencial"
					'b' o 'B': tipo[1] <- "Comercial"
					'c' o 'C': tipo[1] <- "Industrial"
					'd' o 'D': tipo[1] <- "Publico"	
				FinSegun
				
				Escribir "Ingresa la cantidad de proyectos realizados"
				leer proyectos[1]
				
				Si(proyectos[1] > 51)Entonces
					saldo[1] <- proyectos[1] * 3000
				SiNo
					Si(proyectos[1] > 10 y proyectos[1] < 50)Entonces
						saldo[1] <- proyectos[1] * 4000
					SiNo
						saldo[1] <- proyectos[1] * 5000
					FinSi
				FinSi
			codigoArq[2]:
				Escribir "Cargar datos para el arquitecto B"
				
				Escribir "Ingrese el tipo de proyecto: "
				Escribir "a o A: para Residencial"
				Escribir "b o B: para Comercial"
				Escribir "c o C: para Industrial"
				Escribir "d o D: para Publico"
				leer tipo[2]
				Segun tipo[2] Hacer
					'a' o 'A': tipo[2] <- "Residencial"
					'b' o 'B': tipo[2] <- "Comercial"
					'c' o 'C': tipo[2] <- "Industrial"
					'd' o 'D': tipo[2] <- "Publico"	
				FinSegun
				
				Escribir "Ingresa la cantidad de proyectos realizados"
				leer proyectos[2]
				
				Si(proyectos[2] > 51)Entonces
					saldo[2] <- proyectos[2] * 3000
				SiNo
					Si(proyectos[2] > 10 y proyectos[2] < 50)Entonces
						saldo[2] <- proyectos[2] * 4000
					SiNo
						saldo[2] <- proyectos[2] * 5000
					FinSi
				FinSi
			
			codigoArq[3]:
				Escribir "Cargar datos para el arquitecto B"
				
				Escribir "Ingrese el tipo de proyecto: "
				Escribir "a o A: para Residencial"
				Escribir "b o B: para Comercial"
				Escribir "c o C: para Industrial"
				Escribir "d o D: para Publico"
				leer tipo[3]
				Segun tipo[3] Hacer
					'a' o 'A': tipo[3] <- "Residencial"
					'b' o 'B': tipo[3] <- "Comercial"
					'c' o 'C': tipo[3] <- "Industrial"
					'd' o 'D': tipo[3] <- "Publico"	
				FinSegun
				
				Escribir "Ingresa la cantidad de proyectos realizados"
				leer proyectos[3]
				
				Si(proyectos[3] > 51)Entonces
					saldo[3] <- proyectos[1] * 3000
				SiNo
					Si(proyectos[3] > 10 y proyectos[3] < 50)Entonces
						saldo[3] <- proyectos[3] * 4000
					SiNo
						saldo[3] <- proyectos[3] * 5000
					FinSi
				FinSi
				
			codigoArq[4]:	
				Escribir "Cargar datos para el arquitecto D"
				
				Escribir "Ingrese el tipo de proyecto: "
				Escribir "a o A: para Residencial"
				Escribir "b o B: para Comercial"
				Escribir "c o C: para Industrial"
				Escribir "d o D: para Publico"
				leer tipo[4]
				Segun tipo[4] Hacer
					'a' o 'A': tipo[4] <- "Residencial"
					'b' o 'B': tipo[4] <- "Comercial"
					'c' o 'C': tipo[4] <- "Industrial"
					'd' o 'D': tipo[4] <- "Publico"	
				FinSegun
				
				Escribir "Ingresa la cantidad de proyectos realizados"
				leer proyectos[4]
				
				Si(proyectos[4] > 51)Entonces
					saldo[4] <- proyectos[4] * 3000
				SiNo
					Si(proyectos[4] > 10 y proyectos[4] < 50)Entonces
						saldo[4] <- proyectos[4] * 4000
					SiNo
						saldo[4] <- proyectos[4] * 5000
					FinSi
				FinSi
		FinSegun
	Hasta Que codigo == 0 
	
	para i <-  1 Hasta 4 Hacer
		sumSaldos <- sumSaldos + saldo[i]
		sumProyec <- sumProyec + proyectos[i]
	FinPara
	
	
	Para i <- 1 Hasta 4 Hacer
		Escribir "Arquitecto de codigo: ", codigoArq[i],  " tuvo ", proyectos[i], " proyectos y un saldo de: ", saldo[i]
	FinPara
	Escribir " "
	
	promSaldos <- sumSaldos/ 4
	promProyectos <- sumProyec / 4
	
	Escribir "El promedio de proyectos realizados es de: ", promProyectos
	Escribir "El promedio de saldos logrados es de: ", promSaldos
	Escribir " "
	
	Para i <- 1 hasta 4 Hacer
		Escribir "El proyecto tipo: ", tipo[i], " registro la cantidad de: " ,proyectos[i], " proyectos con un saldo de: ", saldo[i]
	FinPara
FinAlgoritmo
