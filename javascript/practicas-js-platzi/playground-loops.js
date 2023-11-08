// En este desafío tu función solution recibirá 3 parámetros:

// estudiantes: un array de strings con varios nombres de estudiantes.
// deathCount: un número entero.
// nuevo: un string con el nombre de un nuevo estudiante (que no aparecía antes en el array).
// Tu función debe retornar un array de elementos con las siguientes indicaciones:

// Si el parámetro deathCount es igual a 0, debes retornar un array con los mismos elementos que tenía el array de estudiantes y agregando el elemento nuevo al final.

// Si el parámetro deathCount es mayor a 0, debes retornar un array con los mismos elementos del array estudiantes pero eliminando la cantidad de estudiantes que indica el número deathCount y agregando el elemento nuevo al final.

// 💡 Aclaración: NO debes eliminar TODOS los elementos del array original de estudiantes, sino eliminar la cantidad de estudiantes que indica el número deathCount.

// Ejemplo 1:

// El array estudiantes contiene los elementos "Nico" y "Zulle". El número deathCount es igual a 0. Y el nuevo estudiante es "Santi". Al deathCount ser igual a 0, "Nico" y "Zulle" se quedan. Y agregamos "Santi" al final.

// Input
solution(["Nico", "Zule"], 0, "Santi")

// Output
["Nico", "Zule", "Santi"]

// Ejemplo 2:

// El array estudiantes contiene los elementos "Juan". "Juanita" y "Daniela". El número deathCount es igual a 1. Y el nuevo estudiante es "Julian". Al deathCount ser igual a 1, el último elemento del array de estudiantes ("Daniela") se debe ir. Y agregamos "Julian" al final.

// Input
solution(["Juan", "Juanita", "Daniela"], 1, "Julian")

// Output
["Juan", "Juanita", "Julian"]

// Ejemplo 3:

// El array estudiantes contiene los elementos "Nath". "Luisa" y "Noru". El número deathCount es igual a 2. Y el nuevo estudiante es "Cami". Al deathCount ser igual a 2, los últimos 2 elementos del array de estudiantes ("Luisa" y "Noru") se deben ir. Y agregamos "Cami" al final.

// Input
solution(["Nath", "Luisa", "Noru"], 2, "Cami")

// Output
["Nath", "Cami"]


//Rescata al estudiante

//Argumentos de prueba A: ["Nico","Zule"] 0 "Santi"

//Argumentos de prueba B: ["Juan","Juanita","Daniela"] 1 "Julian"

//Argumentos de prueba C: ["Nath","Luisa","Noru"] 2 "Cami"

//EL EJERCICIO SE RESUELVE CON LOS ARGUMENTOS

//SOLUCION 1

function solution(estudiantes, deathCount, nuevo) {
    while (deathCount > 0) {
        estudiantes.pop(); //con la condicion dada, el ciclo comprobara que la condicion se cumpla y en caso de no cumplirse, eliminara uno de los estudiantes.

        deathCount--; //esta especificacion es crucial, en caso de que no indiquemos al ciclo, como llegar al valor minimo para que detenga el ciclo, seguira en un loop infinito. Con esta orden lo que indicamos es que cada ciclo que realice elimine en 1 el valor de deathCount, asi de esa manera es capaz de llegar a 0. 
    }

    estudiantes.push(); //agrega un estudiante nuevo cada vez que termine el ciclo 
    return estudiantes; //retornamos lo que se nos indico en el ejercicio
}

//explicacion: El argumento dado a cada uno de los parametros dados por el profesor, son los argumentos o valores de los parametros con los que trabajara la funcion, podemos cambiarlos si asi deseamos pero, lo importante aqui es que debemos saber que para que una funcion realice la accion especificada debemos antes darle los valores o variables con los que trabajara.

//SOLUCION 2:

function solution(estudiantes, deathCount, nuevo) {
    for (deathCount > 0; deathCount--;) {
        estudiantes.pop()
    }

    estudiantes.push();
    return estudiantes;
}