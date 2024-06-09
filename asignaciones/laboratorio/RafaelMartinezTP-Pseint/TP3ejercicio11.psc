Algoritmo TP3ejercicio11
	definir cifra, cifraPrincipal, cifraCentral, cifraFinal, may, med, men Como Entero
	
	Escribir "Ingrese un valor de 3 cifras"
	Leer cifra
	
//	HAY QUE CORREGIR LOGICA EN CUANTO A VALIDACION DE NUMEROS IGUALES
	
	si(cifra < 100 O cifra > 999)
		Escribir "El numero ingresado no es correcto"
		
	SiNo
		cifraPrincipal <- trunc (cifra / 100)
		cifraCentral <- trunc (cifra / 10) mod 10
		cifraFinal <- cifra mod 10
		
	FinSi
	
	si (cifraPrincipal < cifraCentral y cifraPrincipal < cifraFinal)
		men <-  cifraPrincipal
		si(cifraCentral < cifraFinal)
			med <- cifraCentral
			may <- cifraFinal
		sino 
			med <- cifraFinal
			may <- cifraCentral
		FinSi
	FinSi
	
	si (cifracentral < cifraPrincipal y cifracentral < cifraFinal)
		men <-  cifracentral
		si(cifraPrincipal < cifraFinal)
			med <- cifraPrincipal
			may <- cifraFinal
		sino 
			med <- cifraFinal
			may <- cifraPrincipal
		FinSi
	FinSi
	
	si (cifraFinal < cifraPrincipal y cifraFinal < cifracentral)
		men <-  cifraFinal
		si(cifraPrincipal < cifracentral)
			med <- cifraPrincipal
			may <- cifracentral
		sino 
			med <- cifracentral
			may <- cifraPrincipal
		FinSi
	FinSi
	
	
	Escribir "el menor es: ", men
	Escribir "el medio es: ", med
	Escribir "el mayor es: ", may
	
	
	
FinAlgoritmo
