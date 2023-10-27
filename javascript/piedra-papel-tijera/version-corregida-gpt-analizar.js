'use strict';

const piedra = 'piedra';
const papel = 'papel';
const tijera = 'tijera';
let usuario;
let pc;

function jugadapc() {
    const cpu = Math.floor(Math.random() * 3);
    if (cpu === 0) {
        pc = piedra;
    } else if (cpu === 1) {
        pc = papel;
    } else {
        pc = tijera;
    }
    return pc; // Devolvemos la elección de la PC
};

function aviso() {
    alert("pc elige " + pc)
};

function juego() {
    const usuario = prompt("piedra, papel o tijera?");
    jugadapc(); // La PC hace su elección
    aviso(); // Mostramos la elección de la PC

    if (usuario === "papel" && pc === "piedra") {
        alert("gana jugador");
    } else if (usuario === "piedra" && pc === "tijera") {
        alert("gana jugador");
    } else if (usuario === "tijera" && pc === "papel") {
        alert("gana jugador");
    } else if (usuario === pc) {
        alert("empate");
    } else {
        alert("gana pc");
    }
};

//En esta version GPT lo que hizo fue eliminar variables que no eran necesarias y ademas logro corregir errores como el de la eleccion permanente de un solo valor por parte de la pc y ademas elimino la victoria constante de la pc;