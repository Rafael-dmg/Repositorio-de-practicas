Algoritmo TP4ejercicio19_20
	definir int1, int2, int3, determinacion Como Entero
	
	Escribir "Cual es el estado de los interruptores?, ingrese 1 para encendido y 0 para apagado"
	leer int1, int2, int3
	
	determinacion <- int1 + int2 + int3
	
	si (determinacion < 0 O determinacion > 3)
		Escribir "Ingresa correctamente los datos"
		
	SiNo
		Segun (determinacion) Hacer
			caso 1:
				Escribir "El equipo funcionara"
			De Otro Modo:
				Escribir "El equipo no funcionara"
		FinSegun
	FinSi
	
FinAlgoritmo
