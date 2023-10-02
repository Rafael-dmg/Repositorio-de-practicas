'use strict';

var usuario = []
var pc = []

function juego(usuario,pc) {
    usuario = prompt("piedra, papel o tijera?")
    pc = "piedra"
    
    if (usuario === "papel" && pc === "piedra") {
        alert("gana jugador")
    } else if (usuario === "piedra" && pc === "tijera") {
        alert("gana jugador")
    } else if (usuario === "tijera" && pc === "papel") {
        alert("gana jugador")
    } else if (usuario === pc) {
        alert("empate")
    } else {
        alert("gana pc")
    }
};