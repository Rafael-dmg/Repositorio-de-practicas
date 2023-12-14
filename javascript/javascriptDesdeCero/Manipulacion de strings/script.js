//string primitivos

const stringPrimitivo = 'Soy un string primitivo';
console.log(typeof stringPrimitivo);

const stringPrimitivoTambien = String('Tambien soy un string primitivo');
console.log(typeof stringPrimitivoTambien);

//String objeto

const cadenaObjeto = new String('Soy un string objeto papu');
console.log(typeof cadenaObjeto);

//Acceder a caracteres 
//ACLARACION: LA GRAN MAYORIA DE LOS METODOS SI NO TODOS DEBEN SER INICIALIZADOS CON PARENTESIS COMO FUNCIONES QUE SON, DEPENDIENDO DEL USO LLEVAN O NO PARAMETROS, PERO SIEMPRE INICIAN CON PARENTESIS DE OTRO MODO NO SERVIRAN

const saludo = 'Hola. Como estas?'

console.log(saludo[2]) //busqueda por index tipo array
console.log(saludo.charAt(2))//busqueda por index usando un metodo tambien sirve para especificar un caracter especifico a modificar.*
console.log(saludo.indexOf('o')) //busqueda por caracter, parecido a un ctrl + f 
console.log(saludo.indexOf('Como')) //igual que en el anterior pero podemos ver que este da un resultado real
console.log(saludo.indexOf('como')) //caso contrario del anterior aca nos arroja un -1 porque esta cadena de texto exacta no existe
console.log(saludo.slice(2, 6)) // con este metodo buscamos entre dos ubicaciones del index, impr en consola para ver resultado
console.log(saludo.slice(6, 11)) //impr en consola para ver resultado
console.log(saludo.length)
console.log(saludo.toLowerCase())
console.log(saludo.toUpperCase())



const saludoDividido = saludo.split(' ');
console.log(saludoDividido);

////////////////////////////EJERCICIOS CHAT GPT

/* Longitud y Concatenación:

Crea dos variables, nombre y apellido, y asígnale tu nombre y tu apellido.
Calcula la longitud de ambas cadenas y guárdalas en variables separadas.
Concatena las dos cadenas y almacena el resultado en una nueva variable llamada nombreCompleto.
Imprime en la consola el nombreCompleto y la longitud de ambas cadenas.*/

//Solucion:
let nombre = 'Rafael';
let apellido = 'Martinez';

let nombreCompleto = nombre + ' ' + apellido;  // Concatena las dos cadenas con un espacio en blanco en medio.
let longitudNombre = nombre.length;
let longitudApellido = apellido.length;
let longitudCompleto= longitudNombre + longitudApellido;
let longitudTotal= nombreCompleto.length

console.log(nombreCompleto);  // Imprime el nombre completo
console.log('Longitud del nombre:', longitudNombre);  // Imprime la longitud del nombre
console.log('Longitud del apellido:', longitudApellido);  // Imprime la longitud del apellido
console.log('Longitud del nombreCompleto:', longitudCompleto);  // Imprime la longitud total
console.log('longitud total', longitudTotal)

////EJERCICIO 2:

/* Mayúsculas y Minúsculas:

Crea una variable con una palabra en minúsculas.
Convierte la cadena a mayúsculas y almacénala en una nueva variable.
Convierte la cadena original a mayúsculas solo en la primera letra y almacénala en otra variable.
Imprime en la consola ambas versiones de la cadena.*/

let min = 'variable';

let minMay = min.toUpperCase()
let minMay2 = min.charAt(0).toUpperCase() + min.slice(1);

console.log(minMay)
console.log(minMay2)
console.log(min, minMay, minMay2)

/*AMPLIACION:  El método slice() en JavaScript se utiliza para extraer una porción de una cadena y devolver una nueva cadena sin modificar la original. Este método toma uno o dos argumentos: el índice de inicio y el índice de finalización (opcional). Si se proporciona solo el índice de inicio, slice() extraerá desde ese índice hasta el final de la cadena.

En tu caso, has utilizado min.slice(1). Aquí hay una explicación más detallada:

min: Esta es tu cadena original, en este caso, "variable".
.slice(1): Este método toma una porción de la cadena que comienza desde el índice 1 (el segundo carácter, ya que los índices en JavaScript comienzan desde 0) hasta el final de la cadena.
Entonces, en tu ejemplo, min.slice(1) extrae todos los caracteres de la cadena original "variable" comenzando desde el segundo carácter (índice 1), que es "a", hasta el final de la cadena. Como resultado, obtienes la subcadena "ariable".

Luego, al concatenar la primera letra capitalizada (min.charAt(0).toUpperCase()) con esta subcadena, obtienes una cadena donde la primera letra está en mayúsculas y el resto de la cadena permanece igual.*/

////EJERCICIO 4: 

/*Reemplazo de Caracteres:

Crea una variable con una frase que contenga al menos una palabra que quieras reemplazar.
Almacena esa palabra en una variable.
Reemplaza esa palabra con otra de tu elección y almacena el resultado en una nueva variable.
Imprime en la consola la frase original y la frase con la palabra reemplazada.*/