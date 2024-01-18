//las razones de las arrow function es para hacer mas corta una funcion y la segunda razon seria, evitar todo el tema del this en el contexto de ejecucion.

//la sintaxis de una arrow function es asi:

const estudiar = (clase, leer) => {
    return `${clase} ${leer}`
}

estudiar('computadora', 'materialExtra')

//distintas maneras de crear arrow functions

//Explicit return

const greeting = (hola, nombre) => {
    return `${hola} ${nombre}`
}

greeting('como te va?', 'Papu')

//Implicit return

const newGreeting = (nombre) => `Hola ${nombre}, como te va?`

newGreeting('Rafael')

//En este caso incluso se puede quitarle los parentesis porque es un solo parametro y quedaria asi:

const newGreeting2 = nombre => `Hola ${nombre}, como te va?`

newGreeting2('Rafael')

//PERO, si tenemos mas de un parametro necesitariamos los parentesis si o si

const newGreetingWithTwoParameters = (nombre, apellido) => `Hola ${nombre} ${apellido}, como te va?`

newGreetingWithTwoParameters('Rafael', 'Martinez')

//Lexical  Binding - Enlace lexico

const fictionalCharacter = {
        nombre: 'Coraje',
        villano: 'Katz',
        nombreFalso: 'Paquito',
        mensaje: function (mensaje) {
            console.log(`${this.nombre}: ${mensaje}`)
        },
        mensajeConArrows: (mensaje) => {
            console.log(`${this.nombre} a ${this.villano}: ${mensaje}`)
        }
}

fictionalCharacter.mensaje('Si Katz es bueno, mi nombre es Paquito...y no lo es')
fictionalCharacter.mensajeConArrows('Suelta a Muriel, sucio gato')

//en este caso el resultado sera indefinido para la invocacion de la segunda funcion, porque no tiene una vinculacion directa con el objeto, es decir no reconoce el objeto. 
//Conclusion: Es mejor trabajar con funciones tradicionales en los casos que quieras trabajar con propiedades especificas dentro de objetos, ya que con las arrow functions no tendremos acceso a las propiedades a traves del uso de this.


/*Utiliza las arrow function si y solo si no vas a usar el this
por ejemplo asi: */

const fictionalCharacterBis = {
    nombre: 'Coraje',
    villano: 'Katz',
    nombreFalso: 'Paquito',
    mensaje: function (mensaje) {
        console.log(`${this.nombre}: ${mensaje}`)
    },
    mensajeConArrows: (mensaje) => {
        console.log(`${fictionalCharacter.name} a ${fictionalCharacter.villano}: ${mensaje}`)
    }
}



// const fictionalCharacter = {
//     nombre: 'Coraje',
//     villano: 'Katz',
//     nombreFalso: 'Paquito',
//     mensaje: function (nombre, villano,nombreFalso) {
//         console.log(`${this.nombre}: Si ${this.villano} es bueno, mi nombre es ${this.nombreFalso}...y no lo es`)
//     }
// }

// fictionalCharacter.mensaje()
