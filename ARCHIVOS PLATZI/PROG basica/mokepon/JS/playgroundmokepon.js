// Funcion iniciar juego
const sectionSeleccionarAtaque = document.getElementById("seleccionar-ataque")
const sectionReiniciarJuego = document.getElementById("reiniciar")
const botonMascotaJugador = document.getElementById("boton_mascota")
const botonReiniciar = document.getElementById("boton-reiniciar")

//seleccionar mascota
const sectionSeleccionarMascota = document.getElementById("seleccionar-mascota")
const spanMascotaJugador = document.getElementById("mascota-jugador")

//seleccion mascota enemigo
const spanMascotaEnemigo = document.getElementById("mascota-enemigo")

//Combate
const spanVidasJugador = document.getElementById("vidas-jugador")
const spanVidasEnemigo = document.getElementById("vidas-enemigo")

//Crear mensaje
const sectionMensajes = document.getElementById("resultado")
const ataqueDelJugador = document.getElementById("ataque-del-jugador")
const ataqueDelEnemigo = document.getElementById("ataque-del-enemigo")
const contenedorTarjetas = document.getElementById("contenedorTarjetas")
const contenedorAtaques = document.getElementById("contenedorAtaques")
const sectionVerMapa = document.getElementById("ver-mapa")

//Mensaje final


//Arrays: se declara con "= []" y puede contener muchos valores independientemente de su tipo.
let mokepones = [];
//Variables globales: estas variables son accesibles para cualquiera de nuestras funciones. Las variables dentro de las funciones solo pueden ser usadas por esa funcion donde fueron creadas.
let ataqueJugador = [];
let ataqueEnemigo = [];
let opcionDeMokepones
let inputHipodoge
let inputCapipepo 
let inputRatigueya
let inputLangostelvis 
let inputTucapalma 
let inputPydos
let mascotaJugador
let mascotaJugadorObjeto
let ataquesMokepon
let ataquesMokeponEnemigo
let botonFuego
let botonAgua
let botonTierra
let botones = [];
let indexAtaqueJugador
let indexAtaqueEnemigo
let victoriasJugador = 0
let victoriasEnemigo = 0
// Recordatorio: eliminar variables de vidasjugador y vidasenemigo a ver que pasa
let vidasJugador = 3
let vidasEnemigo = 3
let lienzo = mapa.getContext("2d")
let intervalo 
let cargarMapa = new Image()
cargarMapa.src = "/Assets/mokemap.webp"
let alturaQueBuscamos
let anchoDelMapa = window.innerWidth - 20
const anchoMaximoDelMapa = 700

if (anchoDelMapa > anchoMaximoDelMapa) {
    anchoDelMapa = anchoMaximoDelMapa - 20
}

alturaQueBuscamos = anchoDelMapa * 600 / 800

mapa.width = anchoDelMapa
mapa.height = alturaQueBuscamos

//Creacion de objetos (todas las clases empiezan con mayusculas). -Constructor- se utiliza para guardar las propiedades de nuestro objeto, y asi guardar todas las caracteristicas necesarias al momento de crearlo. -This.- hace referencia a "esto mismo" (Ejm: este nombre "x" = xx)
class Mokepon {
    constructor (nombre, imagen, vida, fotoMapa) {
        this.nombre = nombre
        this.imagen = imagen
        this.vida = vida
        this.ataques = []
        this.width = 40
        this.height = 40
        this.x = aleatorio(0, mapa.width - this.width)
        this.y = aleatorio(0, mapa.height - this.height)
        // se les da el valor que ya se les dio por parametros arriba en los atributos del objeto. De esta manera no aparecen personajes unos personajes arriba de otros.
        
        this.mapaFoto = new Image()
        this.mapaFoto.src = fotoMapa
        this.velocidadX = 0 
        // Las variables de velocidad se refieren al movimiento del personaje dentro del juego
        this.velocidadY = 0
    }

    pintarMokepon() {
        lienzo.drawImage(
            this.mapaFoto,
            this.x,
            this.y,
            this.width,
            this.height
        )
    }

}

//-new- hace referencia a un nuevo objeto en una clase ya existente. Los valores deben ir en el orden en el que se indico en el constructor.
let hipodoge = new Mokepon ("Hipodoge", "./Assets/mokepons_mokepon_hipodoge_attack.webp", 5, "./Assets/hipodoge.png" )
let capipepo = new Mokepon ("Capipepo", "./Assets/mokepons_mokepon_capipepo_attack.webp", 5, "/Assets/capipepo.png")
let ratigueya = new Mokepon ("Ratigueya", "./Assets/mokepons_mokepon_ratigueya_attack.webp", 5, "/Assets/ratigueya.webp")
let langostelvis = new Mokepon ("Langostelvis", "/Assets/mokepons_mokepon_langostelvis_attack.png", 5, "/Assets/iaJhdyY.png")
let tucapalma = new Mokepon ("Tucapalma", "/Assets/mokepons_mokepon_tucapalma_attack.png", 5, "/Assets/y3s277X.png")
let pydos = new Mokepon ("Pydos", "/Assets/mokepons_mokepon_pydos_attack.png", 5, "/Assets/LWkctTb.png")


let hipodogeEnemigo = new Mokepon ("Hipodoge", "./Assets/mokepons_mokepon_hipodoge_attack.webp", 5, "./Assets/hipodoge.png")
let capipepoEnemigo = new Mokepon ("Capipepo", "./Assets/mokepons_mokepon_capipepo_attack.webp", 5, "/Assets/capipepo.png")
let ratigueyaEnemigo = new Mokepon ("Ratigueya", "./Assets/mokepons_mokepon_ratigueya_attack.webp", 5, "/Assets/ratigueya.webp")
let langostelvisEnemigo = new Mokepon ("Langostelvis", "/Assets/mokepons_mokepon_langostelvis_attack.png", 5, "/Assets//iaJhdyY.png")
let tucapalmaEnemigo = new Mokepon ("Tucapalma", "/Assets/mokepons_mokepon_tucapalma_attack.png", 5, "/Assets/y3s277X.png")
let pydosEnemigo = new Mokepon ("Pydos", "/Assets/mokepons_mokepon_pydos_attack.png", 5, "/Assets/LWkctTb.png")
//con el metodo .push podemos agregar ("empujar") valores dentro de los arrays. Sirve para agregar objetos facilmente

hipodoge.ataques.push( 
    {nombre: "agua💧", id: "boton_agua"},
    {nombre: "agua💧", id: "boton_agua"},
    {nombre: "agua💧", id: "boton_agua"},
    {nombre: "fuego🔥", id: "boton_fuego"},
    {nombre: "tierra🌱", id: "boton_tierra"},
)

hipodogeEnemigo.ataques.push( 
    {nombre: "agua💧", id: "boton_agua"},
    {nombre: "agua💧", id: "boton_agua"},
    {nombre: "agua💧", id: "boton_agua"},
    {nombre: "fuego🔥", id: "boton_fuego"},
    {nombre: "tierra🌱", id: "boton_tierra"},
)


capipepo.ataques.push( 
    {nombre: "tierra🌱", id: "boton_tierra"},
    {nombre: "tierra🌱", id: "boton_tierra"},
    {nombre: "tierra🌱", id: "boton_tierra"},
    {nombre: "agua💧", id: "boton_agua"},
    {nombre: "fuego🔥", id: "boton_fuego"},
    )

capipepoEnemigo.ataques.push( 
    {nombre: "tierra🌱", id: "boton_tierra"},
    {nombre: "tierra🌱", id: "boton_tierra"},
    {nombre: "tierra🌱", id: "boton_tierra"},        
    {nombre: "agua💧", id: "boton_agua"},
    {nombre: "fuego🔥", id: "boton_fuego"},
)  

ratigueya.ataques.push( 
    {nombre: "fuego🔥", id: "boton_fuego"},
    {nombre: "fuego🔥", id: "boton_fuego"},
    {nombre: "fuego🔥", id: "boton_fuego"},
    {nombre: "agua💧", id: "boton_agua"},
    {nombre: "tierra🌱", id: "boton_tierra"},
)

ratigueyaEnemigo.ataques.push( 
    {nombre: "fuego🔥", id: "boton_fuego"},
    {nombre: "fuego🔥", id: "boton_fuego"},
    {nombre: "fuego🔥", id: "boton_fuego"},
    {nombre: "agua💧", id: "boton_agua"},
    {nombre: "tierra🌱", id: "boton_tierra"},
)

langostelvis.ataques.push( 
    {nombre: "agua💧", id: "boton_agua"},
    {nombre: "agua💧", id: "boton_agua"},
    {nombre: "fuego🔥", id: "boton_fuego"},
    {nombre: "fuego🔥", id: "boton_fuego"},
    {nombre: "tierra🌱", id: "boton_tierra"},
)

langostelvisEnemigo.ataques.push( 
    {nombre: "agua💧", id: "boton_agua"},
    {nombre: "agua💧", id: "boton_agua"},
    {nombre: "fuego🔥", id: "boton_fuego"},
    {nombre: "fuego🔥", id: "boton_fuego"},
    {nombre: "tierra🌱", id: "boton_tierra"},
)

tucapalma.ataques.push( 
    {nombre: "agua💧", id: "boton_agua"},
    {nombre: "agua💧", id: "boton_agua"},
    {nombre: "tierra🌱", id: "boton_tierra"},
    {nombre: "tierra🌱", id: "boton_tierra"},
    {nombre: "fuego🔥", id: "boton_fuego"},
)

tucapalmaEnemigo.ataques.push( 
    {nombre: "agua💧", id: "boton_agua"},
    {nombre: "agua💧", id: "boton_agua"},
    {nombre: "tierra🌱", id: "boton_tierra"},
    {nombre: "tierra🌱", id: "boton_tierra"},
    {nombre: "fuego🔥", id: "boton_fuego"},
)

pydos.ataques.push( 
    {nombre: "fuego🔥", id: "boton_fuego"},
    {nombre: "fuego🔥", id: "boton_fuego"},
    {nombre: "tierra🌱", id: "boton_tierra"},
    {nombre: "tierra🌱", id: "boton_tierra"},
    {nombre: "agua💧", id: "boton_agua"},
)

pydosEnemigo.ataques.push( 
    {nombre: "fuego🔥", id: "boton_fuego"},
    {nombre: "fuego🔥", id: "boton_fuego"},
    {nombre: "tierra🌱", id: "boton_tierra"},
    {nombre: "tierra🌱", id: "boton_tierra"},
    {nombre: "agua💧", id: "boton_agua"},
)

mokepones.push (hipodoge, capipepo, ratigueya, langostelvis, tucapalma, pydos)

function iniciarJuego() {
    
    sectionSeleccionarAtaque.style.display = "none"
    sectionVerMapa.style.display = "none"

    // Para crear templates literarios usamos las comillas invertidas ``. Es la forma en que podemos emplear HTML con algunos de los valores de nuestras variables y hacer un mix entre HTML y JS. Con estas le inyectamos un valor a nuestros objetos en el array, con el metodo ".forEach" 
    mokepones.forEach((mokepon) => {
        opcionDeMokepones = `
        <input type="radio" id=${mokepon.nombre} name="mascota" />
        <label class ="tarjeta-de-mokepon" for=${mokepon.nombre}>
            <p>${mokepon.nombre}</p>
            <img src=${mokepon.imagen} alt=${mokepon.nombre}>
        </label>
        `
        contenedorTarjetas.innerHTML += opcionDeMokepones

        inputHipodoge = document.getElementById("Hipodoge")
        inputCapipepo = document.getElementById("Capipepo")
        inputRatigueya = document.getElementById("Ratigueya")
        inputLangostelvis = document.getElementById("Langostelvis")
        inputTucapalma = document.getElementById("Tucapalma")
        inputPydos = document.getElementById("Pydos")
        
    })
  
    sectionReiniciarJuego.style.display = "none"
    
    
    botonMascotaJugador.addEventListener("click", seleccionarMascotaJugador)
    
    botonReiniciar.addEventListener("click", reiniciarJuego)
}

function seleccionarMascotaJugador() {
    
    sectionSeleccionarMascota.style.display = "none"
    sectionVerMapa.style.display = "flex"
    
        if(inputHipodoge.checked){
            spanMascotaJugador.innerHTML = inputHipodoge.id
            mascotaJugador = inputHipodoge.id
    } else if (inputCapipepo.checked) {
        spanMascotaJugador.innerHTML = inputCapipepo.id
        mascotaJugador = inputCapipepo.id
    } else if (inputRatigueya.checked) {
        spanMascotaJugador.innerHTML = inputRatigueya.id
        mascotaJugador = inputRatigueya.id
    } else if (inputLangostelvis.checked) {
        spanMascotaJugador.innerHTML = inputLangostelvis.id
        mascotaJugador = inputLangostelvis.id 
    } else if (inputTucapalma.checked) {
        spanMascotaJugador.innerHTML = inputTucapalma.id
        mascotaJugador = inputTucapalma.id
    } else if (inputPydos.checked) {
        spanMascotaJugador.innerHTML = inputPydos.id
        mascotaJugador = inputPydos.id
    } else {
        alert("No seleccionaste tu mascota")
    }

    extraerAtaques(mascotaJugador)
    iniciarMapa()
    // Si quiero que una funcion se ejecute despues de otra debo llamarla dentro de la funcion anterior
}

// Con la variable mascota jugador, guardamos los nombres de cada uno de nuestros personajes, y luego extraer los ataques de cada uno de ellos con la funcion "extraerAtaques". Esta funcion lleva el parametro de nuestra variable mascotaJugador. De esta manera una vez que guarde el nombre del personaje que nosotros estamos seleccionando, buscara cuales son sus ataques.
function extraerAtaques(mascotaJugador) {
    let ataques;
    for (let i = 0; i < mokepones.length; i++) {
        if (mascotaJugador === mokepones[i].nombre) {
            ataques = mokepones[i].ataques;
        }
    }
    mostrarAtaques(ataques);
}

function mostrarAtaques(ataques) {
    ataques.forEach((ataque) => {
        ataquesMokepon = `
        <button id=${ataque.id} class="boton-ataque Bataque">${ataque.nombre}</button>
        `
        contenedorAtaques.innerHTML += ataquesMokepon;
    }) 
        botonFuego = document.getElementById("boton_fuego");
        botonAgua = document.getElementById("boton_agua");
        botonTierra = document.getElementById("boton_tierra");
        botones = document.querySelectorAll(".Bataque");
}

// La letra "e" dentro del addEventListener significa: el evento mismo, es decir, que cada uno de los elementos dentro del array, tendra un evento (en este caso "click"). Con esta logica se encuentra cada uno de los elementos de ese evento click e interactuar con ellos.
function secuenciaAtaque() {
    botones.forEach ((boton) => {
        boton.addEventListener("click", (e) => {
            if (e.target.textContent === "fuego🔥") {
                ataqueJugador.push("fuego")
                console.log(ataqueJugador)
                boton.style.background = "#112f58"
                boton.disabled = true
            } else if(e.target.textContent === "agua💧") {
                ataqueJugador.push("agua")
                console.log(ataqueJugador)
                boton.style.background = "#112f58"
                boton.disabled = true
            } else {
                ataqueJugador.push("tierra")
                console.log(ataqueJugador)
                boton.style.background = "#112f58"
                boton.disabled = true
            }
            
            ataqueAleatorioEnemigo();
            // llamamos la funcion dentro del flujo de la otra funcion para que automaticamente cuando la funcion termine su tarea, ejecute la otra funcion una vez que ya existan los elementos de la otra. Si la llamamos en otro lugar puede no ser invocada.
        })
    })
}

function seleccionarMascotaEnemigo(enemigo) {
        
    spanMascotaEnemigo.innerHTML = enemigo.nombre
    ataquesMokeponEnemigo = enemigo.ataques;
    secuenciaAtaque();
}


function ataqueAleatorioEnemigo() {
    let ataqueAleatorio = aleatorio(0, ataquesMokeponEnemigo.length -1)
// .push es un metodo exclusivo para ingresar elementos a los arrays, por lo que, debemos convertir en arrays las variables a las que querramos inyectarle valores. En este caso a "ataqueEnemigo"
    if (ataqueAleatorio == 0 || ataqueAleatorio == 1) {
        ataqueEnemigo.push("fuego")
    } else if (ataqueAleatorio == 3 || ataqueAleatorio == 4) {
        ataqueEnemigo.push("agua")
    } else {
        ataqueEnemigo.push("tierra")
    }
    console.log(ataqueEnemigo)
    iniciarPelea()
}

function iniciarPelea() {
    if (ataqueJugador.length === 5) {
        combate()
    }
}

function indexAmbosOponentes (jugador, enemigo) {
    indexAtaqueJugador = ataqueJugador[jugador]
    indexAtaqueEnemigo = ataqueEnemigo[enemigo]
}
   
function combate() {

    // for nos ayuda a generar loops a traves de los 2 arrays que tenemos. El for nos ayuda a recorrer cada uno de los elementos dentro de estos arrays, visualizar y validarlos.
    // index es = 0 en la primera vuelta inicial en este caso, pero luego se convierte en otro numero una vez que haya sido validado. Con esto decidimos que queremos que pase una vez que ya tenga ese valor distinto a 0
    
    for (let index = 0; index < ataqueJugador.length; index++) {
        if (ataqueJugador[index] === ataqueEnemigo[index]) {
            indexAmbosOponentes(index, index)
            crearMensaje("Empate")
        } else if (ataqueJugador[index] === "fuego" && ataqueEnemigo[index] === "tierra") {
            indexAmbosOponentes(index, index)
            crearMensaje("Ganaste")
            victoriasJugador++
            spanVidasJugador.innerHTML = victoriasJugador
        } else if (ataqueJugador[index] === "agua" && ataqueEnemigo[index] === "fuego") {
            indexAmbosOponentes(index, index)
            crearMensaje("Ganaste")
            victoriasJugador++
            spanVidasJugador.innerHTML = victoriasJugador
        } else if (ataqueJugador[index] === "tierra" && ataqueEnemigo[index] === "agua") {
            indexAmbosOponentes(index, index)
            crearMensaje("Ganaste")
            victoriasJugador++
            spanVidasJugador.innerHTML = victoriasJugador
        } else {
            indexAmbosOponentes(index, index)
            crearMensaje("PERDISTE")
            victoriasEnemigo++
            spanVidasEnemigo.innerHTML = victoriasEnemigo
        }
            
    }

    revisarVidas()
}

function revisarVidas() {
    if (victoriasJugador === victoriasEnemigo) {
        mensajeFinal("Empate")
    } else if (victoriasJugador > victoriasEnemigo)  {
        mensajeFinal("FELICITACIONES GANASTE!!!🎉🎉")
    } else {
        mensajeFinal("LO SIENTO; PERDISTE😿😿. VUELVE A JUGAR")
    }
} 

function crearMensaje(resultado) {
    
    let nuevoAtaqueJugador = document.createElement("p")
    let nuevoAtaqueEnemigo = document.createElement("p")
    
    sectionMensajes.innerHTML = resultado
    nuevoAtaqueJugador.innerHTML =  indexAtaqueJugador
    nuevoAtaqueEnemigo.innerHTML = indexAtaqueEnemigo

    ataqueDelJugador.appendChild(nuevoAtaqueJugador)
    ataqueDelEnemigo.appendChild(nuevoAtaqueEnemigo)
}

function mensajeFinal(resultadoFinal) {
    sectionMensajes.innerHTML = resultadoFinal
    
      
    sectionReiniciarJuego.style.display = "block"
}

function reiniciarJuego ()   {
    location.reload()
}

function aleatorio(min, max) {
    return Math.floor(Math.random() * (max - min + 1) + min)
}

function pintarCanvas() {
    mascotaJugadorObjeto.x = mascotaJugadorObjeto.x + mascotaJugadorObjeto.velocidadX
    mascotaJugadorObjeto.y = mascotaJugadorObjeto.y + mascotaJugadorObjeto.velocidadY
    lienzo.clearRect(0, 0, mapa.width, mapa.height)
    lienzo.drawImage(
        cargarMapa,
        0,
        0,
        mapa.width,
        mapa.height
    )
    mascotaJugadorObjeto.pintarMokepon()
    capipepoEnemigo.pintarMokepon()
    hipodogeEnemigo.pintarMokepon()
    ratigueyaEnemigo.pintarMokepon()
    langostelvisEnemigo.pintarMokepon()
    tucapalmaEnemigo.pintarMokepon()
    pydosEnemigo.pintarMokepon()

    if (mascotaJugadorObjeto.velocidadX !== 0 || mascotaJugadorObjeto.velocidadY !== 0) {
        revisarColision(hipodogeEnemigo)
        revisarColision(capipepoEnemigo)
        revisarColision(ratigueyaEnemigo)
        revisarColision(langostelvisEnemigo)
        revisarColision(tucapalmaEnemigo)
        revisarColision(pydosEnemigo)
    }
}

function moverDerecha() {
    mascotaJugadorObjeto.velocidadX = 5
}
function moverIzquierda() {
    mascotaJugadorObjeto.velocidadX = -5
}
function moverArriba() {
    mascotaJugadorObjeto.velocidadY = -5
}
function moverAbajo() {
    mascotaJugadorObjeto.velocidadY = 5
}

function detenerMovimiento() {
    mascotaJugadorObjeto.velocidadX = 0
    mascotaJugadorObjeto.velocidadY = 0
}

function iniciarMovimiento(event) {
    switch (event.key) {
        case "ArrowUp":
            moverArriba()
            break
        case "ArrowDown":
            moverAbajo()
            break
        case "ArrowRight":
            moverDerecha()
            break
        case "ArrowLeft":
            moverIzquierda()
            break
        default:
            break;
    }
}
// Swicht case: es una manera de hacer varios condicionales if juntos

function iniciarMapa () {
    mascotaJugadorObjeto = obtenerMokepon(mascotaJugador)
    intervalo = setInterval(pintarCanvas, 50)
     // setInterval es una funcion que llama a otra funcion constantemente esperando un tiempo determinado que nosotros le otorguemos. En este caso, cada 50 milisegundos ejecuta la funcion de pintar el personaje lo que nos permite que nuestro personaje se "mueva" de forma continua.
    window.addEventListener("keydown", iniciarMovimiento)
    window.addEventListener("keyup", detenerMovimiento)
    // keydown y keyup son eventos de presion de botones en el teclado. Con estos eventos creamos los comandos de movimiento en el teclado de nuestros mokepones
}

function obtenerMokepon() {
    for (let i = 0; i < mokepones.length; i++) {
        if (mascotaJugador === mokepones[i].nombre) {
            return mokepones[i]
        }
    }
}

function revisarColision(enemigo) {
    const arribaEnemigo = enemigo.y
    const abajoEnemigo = enemigo.y + enemigo.height
    const izquierdaEnemigo = enemigo.x
    const derechaEnemigo = enemigo.x + enemigo.width

    const arribaMascota = mascotaJugadorObjeto.y
    const abajoMascota = mascotaJugadorObjeto.y + mascotaJugadorObjeto.height
    const izquierdaMascota = mascotaJugadorObjeto.x
    const derechaMascota = mascotaJugadorObjeto.x + mascotaJugadorObjeto.width

    if (abajoMascota < arribaEnemigo || 
        arribaMascota > abajoEnemigo || 
        derechaMascota < izquierdaEnemigo || 
        izquierdaMascota > derechaEnemigo ) {
        return
    } else {
        detenerMovimiento()
        clearInterval(intervalo)
        // alert("Preparate para la batalla con " + enemigo.nombre)
        sectionSeleccionarAtaque.style.display = "flex"
        sectionVerMapa.style.display = "none"
        seleccionarMascotaEnemigo(enemigo)
    }
}

window.addEventListener("load", iniciarJuego)