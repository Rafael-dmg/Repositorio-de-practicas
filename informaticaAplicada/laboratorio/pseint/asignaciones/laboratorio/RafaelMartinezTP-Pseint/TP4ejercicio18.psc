Algoritmo TP4ejercicio18
    Definir num, miles, centena, decena, unidad Como Entero
    Definir resultado, car1, car2, car3, car4 Como Caracter
	
	Escribir "Ingresa un numero natural"
	Leer num
	
	Si (num < 1 o num > 3999)
		Escribir "ingrse un numero valido "
	SiNo
		miles <- trunc (num / 1000)
		centena <- trunc (num / 100) mod 10
		decena <- trunc (num / 10) mod 10
		unidad <- num mod 10
		
		Segun (miles) Hacer
			caso 1: 
				car1 <- 'M'
			caso 2:
				car1 <- 'MM'
			caso 3:
				car1 <- 'MMM'
		FinSegun
		
		Segun (centena) Hacer
			Caso 1:
				car2 <- "C"
			Caso 2:
				car2 <- "CC"
			Caso 3:
				car2 <- "CCC"
			Caso 4:
				car2 <- "CD"
			Caso 5:
				car2 <- "D"
			Caso 6:
				car2 <- "DC"
			Caso 7:
				car2 <- "DCC"
			Caso 8:
				car2 <- "DCCC"
			Caso 9:
				car2 <- "CM"
		Fin Segun
		
		Segun (decena) Hacer
			Caso 1:
				car3 <- "X"
			Caso 2:
				car3 <- "XX"
			Caso 3:
				car3 <- "XXX"
			Caso 4:
				car3 <- "XL"
			Caso 5:
				car3 <- "L"
			Caso 6:
				car3 <- "LX"
			Caso 7:
				car3 <- "LXX"
			Caso 8:
				car3 <- "LXXX"
			Caso 9:
				car3 <- "XC"
		Fin Segun
		
		Segun (unidad) Hacer
			Caso 1:
				car4 <- "I"
			Caso 2:
				car4 <- "II"
			Caso 3:
				car4 <- "III"
			Caso 4:
				car4 <- "IV"
			Caso 5:
				car4 <- "V"
			Caso 6:
				car4 <- "VI"
			Caso 7:
				car4 <- "VII"
			Caso 8:
				car4 <- "VIII"
			Caso 9:
				car4 <- "IX"
		Fin Segun
		
		Escribir "" car1,car2,car3,car4
	FinSi
FinAlgoritmo

