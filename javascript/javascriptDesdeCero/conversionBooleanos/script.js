console.log('Hola, mundo!')

//Como buena practica para la conversion de booleanos, las variables que guarden como valor un booleano, debe tener un nombre demostrativo o en forma de pregunta true/false. EJM:

let isActive = true; 
let hasPermission = false;

//de esta manera ya gracias a las palabras, is y has, nos ayudan a tener un codigo mas legible cuando tengamos que usarlo en otra parte del codigo.

//conversion implicita (la hace javascript)

const result = 5 < 3;

console.log(typeof isActive, result, typeof has)

const name = 'Ñame';

console.log(!!'Ñame')//de esta manera averiguamos un valor especifico, lo que preguntamos "es" "el vqaor interno es el string 'Ñame'?" por lo que me devuelve un true, en cambio si escribimos un solo ! la pregunta seria, "el valor no es 'Ñame'?"

//de igual manera si lo que queremos es saber solamente si la variable tiene un valor x, solo seria con el nombre de la variable
console.log(!!name) //de nuevo usamos !! para saber si tiene un valor y ! para saber si no lo tiene y obtener nuestro booleano

//Conversion explicita

const value = 0
const otherValue = 24
const anotherValue = -65

let explicitBoolean1 = Boolean(value)
let explicitBoolean2 = Boolean(otherValue)
let explicitBoolean3 = Boolean(anotherValue)

console.log(`Estas son las conversiones explicitas ${explicitBoolean1}, ${explicitBoolean2}, ${explicitBoolean3}`)