Algoritmo RafaelMartinezTema2Ejercicio2
    definir pacientes, i, may, med, men Como Entero
    definir hospital, hosp1, hosp2, hosp3 Como caracter
    
    Dimension pacientes[4]
    Dimension hospital[4]
    
    Para i <- 1 Hasta 4 Con Paso 1 Hacer
        Escribir "Ingrese hospital "
        leer hospital[i]
        Escribir "Ingrese pacientes "
        leer pacientes[i]
    Fin Para
    
    si(pacientes[1] > pacientes[2] y pacientes[1] > pacientes[3] y pacientes[1] > pacientes[4]) Entonces
        may <- pacientes[1]
        hosp1 <- hospital[1]
        
        si(pacientes[2] > pacientes[3] y pacientes[2] > pacientes[4]) Entonces
            med <- pacientes[2]
            hosp2 <- hospital[2]
            si(pacientes[3] > pacientes[4]) Entonces
                men <- pacientes[3]
                hosp3 <- hospital[3]
            SiNo
                men <- pacientes[4]
                hosp3 <- hospital[4]
            Fin Si
        SiNo
            si(pacientes[3] > pacientes[4]) Entonces
                med <- pacientes[3]
                hosp2 <- hospital[3]
                men <- pacientes[4]
                hosp3 <- hospital[4]
            SiNo
                med <- pacientes[4]
                hosp2 <- hospital[4]
                men <- pacientes[3]
                hosp3 <- hospital[3]
            Fin Si
        Fin Si
    SiNo
        si(pacientes[2] > pacientes[3] y pacientes[2] > pacientes[4]) Entonces
            may <- pacientes[2]
            hosp1 <- hospital[2]
            
            si(pacientes[1] > pacientes[3] y pacientes[1] > pacientes[4]) Entonces
                med <- pacientes[1]
                hosp2 <- hospital[1]
                si(pacientes[3] > pacientes[4]) Entonces
                    men <- pacientes[3]
                    hosp3 <- hospital[3]
                SiNo
                    men <- pacientes[4]
                    hosp3 <- hospital[4]
                Fin Si
            SiNo
                si(pacientes[3] > pacientes[4]) Entonces
                    med <- pacientes[3]
                    hosp2 <- hospital[3]
                    men <- pacientes[4]
                    hosp3 <- hospital[4]
                SiNo
                    med <- pacientes[4]
                    hosp2 <- hospital[4]
                    men <- pacientes[3]
                    hosp3 <- hospital[3]
                Fin Si
            Fin Si
        SiNo
            si(pacientes[3] > pacientes[4]) Entonces
                may <- pacientes[3]
                hosp1 <- hospital[3]
                
                si(pacientes[1] > pacientes[2] y pacientes[1] > pacientes[4]) Entonces
                    med <- pacientes[1]
                    hosp2 <- hospital[1]
                    si(pacientes[2] > pacientes[4]) Entonces
                        men <- pacientes[2]
                        hosp3 <- hospital[2]
                    SiNo
                        men <- pacientes[4]
                        hosp3 <- hospital[4]
                    Fin Si
                SiNo
                    si(pacientes[2] > pacientes[4]) Entonces
                        med <- pacientes[2]
                        hosp2 <- hospital[2]
                        men <- pacientes[4]
                        hosp3 <- hospital[4]
                    SiNo
                        med <- pacientes[4]
                        hosp2 <- hospital[4]
                        men <- pacientes[2]
                        hosp3 <- hospital[2]
                    Fin Si
                Fin Si
            SiNo
                may <- pacientes[4]
                hosp1 <- hospital[4]
                
                si(pacientes[1] > pacientes[2] y pacientes[1] > pacientes[3]) Entonces
                    med <- pacientes[1]
                    hosp2 <- hospital[1]
                    si(pacientes[2] > pacientes[3]) Entonces
                        men <- pacientes[2]
                        hosp3 <- hospital[2]
                    SiNo
                        men <- pacientes[3]
                        hosp3 <- hospital[3]
                    Fin Si
                SiNo
                    si(pacientes[2] > pacientes[3]) Entonces
                        med <- pacientes[2]
                        hosp2 <- hospital[2]
                        men <- pacientes[3]
                        hosp3 <- hospital[3]
                    SiNo
                        med <- pacientes[3]
                        hosp2 <- hospital[3]
                        men <- pacientes[2]
                        hosp3 <- hospital[2]
                    Fin Si
                Fin Si
            Fin Si
        Fin Si
    Fin Si
    
    Escribir hosp1, " ", may 
    Escribir hosp2, " ", med
	Escribir hosp3, " ", men
FinAlgoritmo
