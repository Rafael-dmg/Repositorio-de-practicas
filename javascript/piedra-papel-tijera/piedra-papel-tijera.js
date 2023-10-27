//comparar con el corregido por chaygpt 

'use strict';

const piedra = 'piedra';
const papel = 'papel';
const tijera = 'tijera';
let eleccion;
let usuario;
let pc;

function jugadapc(cpu) {
    cpu = Math.floor(Math.random() * 3)
        if (cpu === 0) {
            pc = piedra
            //console.log('piedra')
    } else if (cpu === 1) {
            pc = papel
            //console.log('papel')
    } else {
        pc = tijera
        //console.log('tijera')
    }
}

function aviso() {
    alert("pc elige " + pc)
};

//el aviso no se esta mostrando en el transcurso del juego



function juego(usuario,pc) {
    let usuario = prompt("piedra, papel o tijera?")
    
    jugadapc()
    aviso()
    
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

// 'use strict';

// const piedra = 'piedra';
// const papel = 'papel';
// const tijera = 'tijera';
// let pc;

// function jugadaPc() {
//     const cpu = Math.floor(Math.random() * 3);
//     if (cpu === 0) {
//         pc = piedra;
//     } else if (cpu === 1) {
//         pc = papel;
//     } else {
//         pc = tijera;
//     }
// }

// function aviso() {
//     alert('La PC eligió ' + pc);
// }

// function juego() {
//     jugadaPc(); // Llamar a la función para que la PC realice su elección.
//     aviso(); // Mostrar la elección de la PC.

//     const usuario = prompt("Piedra, papel o tijera?");
    
//     if (usuario === "papel" && pc === "piedra" || usuario === "piedra" && pc === "tijera" || usuario === "tijera" && pc === "papel") {
//         alert("¡Gana el jugador!");
//     } else if (usuario === pc) {
//         alert("¡Empate!");
//     } else {
//         alert("¡Gana la PC!");
//     }
// }

// // Llama a la función de juego para iniciar el juego.
// juego();

//↑ permite corregir que la pc gane siempre

// 'use strict';

// const piedra = 'piedra';
// const papel = 'papel';
// const tijera = 'tijera';
// let pc;

// function jugadaPc() {
//     const cpu = Math.floor(Math.random() * 3);
//     if (cpu === 0) {
//         pc = piedra;
//     } else if (cpu === 1) {
//         pc = papel;
//     } else {
//         pc = tijera;
//     }
// }

// function juego() {
//     const usuario = prompt("Piedra, papel o tijera?");
    
//     jugadaPc(); // Llamar a la función para que la PC realice su elección después de que el usuario elija.

//     alert('La PC eligió ' + pc); // Mostrar la elección de la PC.

//     if (usuario === "papel" && pc === "piedra" || usuario === "piedra" && pc === "tijera" || usuario === "tijera" && pc === "papel") {
//         alert("¡Gana el jugador!");
//     } else if (usuario === pc) {
//         alert("¡Empate!");
//     } else {
//         alert("¡Gana la PC!");
//     }
// }

// // Llama a la función de juego para iniciar el juego.
// juego();

//↑ permite que el aviso aparezca antes de la finalizacion del juego    