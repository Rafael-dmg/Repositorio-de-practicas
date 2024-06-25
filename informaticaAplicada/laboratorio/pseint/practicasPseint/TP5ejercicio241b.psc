Algoritmo TP5ejercicio241b
	num <- 1
	flag <- 0
	Para j <- 1 Hasta 3 Con Paso 1 Hacer
		Para i <- 1 hasta 7 con paso 1 Hacer
			
			si(flag == 0) Entonces
				Escribir num sin saltar
				
			SiNo
				si (flag == 1) Entonces
					Escribir num + 1 Sin Saltar
				sino 
					Escribir num + 2 Sin saltar
				FinSi
				
			FinSi
			
		FinPara
		flag <- flag +1
		escribir " " 	
		i <- 0
	Fin Para
	
FinAlgoritmo
