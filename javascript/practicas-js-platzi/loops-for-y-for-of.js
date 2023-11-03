var estudiantes = ['maria', 'jose', 'pedro', 'juana'];

function saludarEstudiantes(estudiante) {
    console.log(`Hola, ${estudiante}`);
}

for(var i = 0; i < estudiantes.length; i++) {
    saludarEstudiantes(estudiantes[i])
}

//imprime: 
//'Hola, maria' 
//'Hola, jose' 
//'Hola, pedro' 
//'Hola, juana'

//otro metodo:

var estudiantes = ['maria', 'jose', 'pedro', 'juana'];

function saludarEstudiantes(estudiante) {
    console.log(`Hola, ${estudiante}`);
}

for(var estudiante of estudiantes) {
    saludarEstudiantes(estudiante)
}

//imprime: 
//'Hola, maria' 
//'Hola, jose' 
//'Hola, pedro' 
//'Hola, juana'

//en el segundo metodo se puede entender que en el for, la primera variable es el singular del array** y la segunda variable es el plural. El ciclo for pasara por cada uno de los valores del array (el "plural") mientras que la primera variable es el parametro cambiante perteneciente a la funcion y que se imprimira segun el valor del array en el ciclo. 

//  **: ese es el porque de los ejemplos utilizados pero no tienen nada que ver la gramatica tradicional, es meramente demostrativo ya que la computadora no entiende nuestro idioma 