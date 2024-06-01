//switch es otro condicional pero este validara por casos, si el caso es verdad, pasara la condicion indicada, en caso contrario pasara a la siguiente condicion o si no dara un resultado final. 
var numero = 1;

switch (true) {
    case 1:
        console.log("Soy uno!")
        break;

    case 10:
        console.log("Soy un diez!")
        break;

    case 100:
        console.log("Soy un cien!")
        break;

    default:
        console.log("No soy nada")
}

//si no colocamos los breaks, realiza todas las validaciones que le indiquemos, asi que son fundamentales

//RETO piedra, papel o tijera:
let usuario = []
let pc = []
let jugada = prompt("piedra, papel o tijera?")
let valor = [piedra, papel, tijera]

function inicio(){
    return jugada
}

function duelo() {

switch (ususario,pc,jugada) {
    case jugador:
}
}