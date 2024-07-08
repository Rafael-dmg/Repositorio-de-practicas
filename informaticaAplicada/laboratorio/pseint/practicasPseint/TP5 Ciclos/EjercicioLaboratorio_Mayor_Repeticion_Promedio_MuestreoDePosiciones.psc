Algoritmo EjercicioLaboratorio_Mayor_Repeticion_Promedio_MuestreoDePosiciones
	definir vec, may, ubicacion, cont, sum Como Entero
	definir prom Como Real
	Dimension vec[20]
	Dimension ubicacion[20]
	may <- 0
	cont <- 0
	sum <- 0
	Para i <- 1 Hasta 20 Con Paso 1 Hacer
		vec[i] <- Aleatorio(1, 10)
		sum <- vec[i] + sum
		//Escribir vec[i]
	FinPara
	
	Para i <- 1 Hasta 20 Con Paso 1 Hacer
		Si(vec[i] > may)Entonces
			may <- vec[i]
		FinSi
		si(i == 20)Entonces
			Para i <- 1 Hasta 20 Hacer
				si(vec[i] == may)Entonces
					cont = cont +1
				FinSi
			FinPara
		FinSi
	FinPara
	
	Escribir "La suma de las posiciones es: ", sum
	Si(cont > 1)Entonces
		Escribir "El mayor es: ", may, " y aparece ", cont, " veces en: "
	SiNo
		Escribir "El mayor es: ", may, " y aparece ", cont, " vez en: "
	FinSi
	
	Para i <- 1 Hasta 20 Con Paso 1 Hacer
		si(vec[i] == may)Entonces
//			ubicacion[j] <- vec[j]
//		FinSi
//		si(ubicacion[j] > 0)Entonces
			
			Escribir "Posicion ", i
		FinSi
	FinPara
	
	prom <- sum / 20
	Escribir "La media es: ", prom
	
	Para i <- 1 Hasta 20 Con Paso 1 Hacer
		si(vec[i] > prom)Entonces
			Escribir "La posicion ", i, " es mayor a la media"
		FinSi
	FinPara
	
FinAlgoritmo
//hacer un programa que cargue un vector de 20 posiciones con números al azar entre 1 y 10. CHECK
//	Determinar el mayor de ese vector e informar cuantas veces se repite en el mismo y mostrar en todas las posiciones que esta gravado.CHECK
//	Calcular la media de ese vector y mostrar las posiciones que son mayores a la media.
