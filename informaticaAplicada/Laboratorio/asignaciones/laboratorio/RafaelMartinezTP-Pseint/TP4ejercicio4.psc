Algoritmo TP3ejercicio17
	definir dia, mes, año, biciesto Como Entero
	definir mesEsc Como Caracter
	
    Escribir "Ingrese el día (dos dígitos): "
    Leer dia
    Escribir "Ingrese el mes (dos dígitos): "
    Leer mes
    Escribir "Ingrese el año (dos dígitos): "
    Leer año
	
    Si (dia < 1 O dia > 31)
        Escribir "Ingrese un formato de dia valido"
    FinSi
	
    Si (mes > 12 O mes < 1)
        Escribir "Ingrese un formato entre el 1 y el 12"
    FinSi
	
    Si (año >= 25) Entonces
		año = año + 1900
	sino
		año = año + 2000
    FinSi
    
	
    Segun mes hacer
        01:
            Si (dia <= 31  ) Entonces
                mesEsc = 'Enero'
            sino 
                Escribir "No coincide fecha del dia con el mes"
			FinSi
			
		02:
			Si (año mod 4 == 0) Entonces
				Si (año mod 100 == 0) Entonces
					Si (año mod 400 == 0) Entonces
						año = 1
					Sino
						año = 0
					FinSi
				Sino
					año = 1
				FinSi
			Sino
				año = 0
			FinSi
			
			Si(año == 1 & dia <= 29) Entonces
				Escribir "Febrero"
			Sino 
				Escribir "El mes ingresado no es valido"
			FinSi
				
			03:
				Si (dia <= 31) Entonces
					mesEsc = 'Marzo'
				sino 
					Escribir "No coincide fecha del dia con el mes"
				FinSi
				
					
			04:
				Si (dia <= 30  ) Entonces
					mesEsc = 'Abril'
				sino 
					Escribir "No coincide fecha del dia con el mes"
				FinSi
				
			05:
				Si (dia <= 31) Entonces
					mesEsc = 'Mayo'
				sino 
					Escribir "No coincide fecha del dia con el mes"
				FinSi
				
			06:
				Si (dia <= 30  ) Entonces
					mesEsc = 'Junio'
				sino 
					Escribir "No coincide fecha del dia con el mes"
				FinSi
				
			07:
				Si (dia <= 31) Entonces
					mesEsc = 'Julio'
				sino 
					Escribir "No coincide fecha del dia con el mes"
				FinSi
				
			08:
				Si (dia <= 31) Entonces
					mesEsc = 'Agosto'
				sino 
					Escribir "No coincide fecha del dia con el mes"
				FinSi
				
			09:
				Si (dia <= 30  ) Entonces
					mesEsc = 'Septiembre'
				sino 
					Escribir "No coincide fecha del dia con el mes"
				FinSi
				
			10:
				Si (dia <= 31) Entonces
					mesEsc = 'Octubre'
				sino 
					Escribir "No coincide fecha del dia con el mes"
				FinSi
				
			11:
				Si (dia <= 30  ) Entonces
					mesEsc = 'Noviembre'
				sino 
					Escribir "No coincide fecha del dia con el mes"
				FinSi
				
			12: 
				Si (dia <= 31) Entonces
					mesEsc = 'Diciembre'
				sino 
					Escribir "No coincide fecha del dia con el mes"
				FinSi

			De Otro Modo:
				Escribir "Mes no válido"
			
			Fin Segun
							
								
		Escribir "La fecha indicada es el: ", dia," de ", mesEsc, " de ", año

FinAlgoritmo
