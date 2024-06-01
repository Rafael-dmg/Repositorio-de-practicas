console.log('Hello, world!')
//Implicit binding o enlace implicito

let escritorio = {
    nombre: 'Pico',
    especie: 'cactus',
teclado: 'analogico',
mouse: 'analogico',
monitor: 'encendido',
cactus: function () {
    console.log(`Hola, soy ${this.nombre} el ${this.especie}, vivo en un escritorio, al lado de un monitor ${this.monitor} durante 6 hrs al dia. Escucho constantemente el clickeo de un teclado ${this.teclado} y un mouse, tambien ${this.mouse}` )
}
}

escritorio.cactus()
/*Hola, soy Pico el cactus, vivo en un escritorio, al lado de un monitor encendido, durante 6 hrs al dia. Escucho constantemente el tecleo de un teclado analogico y un mouse, tambien analogico*/

//Explicit binding - Enlace explicito

function dogGreeting () {
	console.log(`Hola mi nombre es ${this.dogName}`) 
    
    //en este caso this no tiene un objeto directo al cual ubicar, entonces debemos indicar en la llamada de la funcion a traves del metodo .call() el objeto en dondes esta ubicada la propiedad que querramos usar. 
}

let perro = {
    dogName: 'estuberto',
    color: 'blanco con negro',
    estilo: 'muchisimo'
}

dogGreeting.call(perro) //aqui al llamar a la funcion agregamos la vinculacion al objeto, que seria el metodo .call() y le pasamos como argumento el objeto al que queremos acceder

//Hola mi nombre es Estuberto.

const perro2 = {
    nombre: 'eustaquio',
    color: 'negro',
}

function newDogGreeting (tutor, direccion) {
    console.log(`Hola mi nombre es ${this.nombre}, vivo en ${direccion}, con mi tutor ${tutor}`)
}

const direccion = 'la calle de tu vieja'
const tutor = 'el papu'

newDogGreeting.call(perro2, tutor, direccion)

//en este caso tenemos una ejemplo de como podemos incluso llamar variables en la llamada a la funcion con el metodo . call()
//en la llamada tenemos, al objeto que queremos entrar con el this y ademas 2 parametros mas