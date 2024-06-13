//	Dado un valor entero de tres cifras, realizar un algoritmo que devuelva un nuevo
//	valor formado con sus tres cifras ordenadas de menor a mayor. (Ejemplo: Sin ingresa el
//	numero 512, el programa debe devolver el numero 125). En la salida mostrar ambos valores.
	
Algoritmo TP3ejercicio12
	definir cifra, cifraPrincipal, cifraCentral, cifraFinal, may, med, men Como Entero
	
	Escribir "Ingrese un valor de 3 cifras"
	Leer cifra
	
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
	
	
	Escribir "el primer valor  ingresado es: ", cifra
	Escribir "el valor reordenado es: ", men,med,may
	
	
	
FinAlgoritmo
