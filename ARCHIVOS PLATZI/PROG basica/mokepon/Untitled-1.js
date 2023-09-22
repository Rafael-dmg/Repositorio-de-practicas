// Para comenzar un nuevo proyecto en NODE.JS, debemos ingresar el comando "npm int" en la terminal, una vez ejecutado el comando nos preguntara los datos del proyecto y creara un archivo de package.json y nos creara otro de archivo principal del proyecto. 
// Para importar una libreria con node, en este caso express.js creamos una variable con el nombre que querramos y usamos la funcion especial de node: require. Que nos permite utilizar las librerias que utilizamos con npm. Adentro de esa funcion require, escribimos el nombre de la libreria.

const express = require("express")
const cors = require("cors")
// con esta variable almacenamos la informacion del servidor que vamos a estar usando e invocamos la libreria como si fuese una funcion
const app = express()

// esta linea de codigo es para deshabilitar posibles problemas con cors...Investigar a fondo
app.use(cors()) 
app.use(express.json())
// esta linea de codigo es para habilitar la capacidad de recibir peticiones post que tengan contenido en formato json

const jugadores = []

class Jugador {
    constructor(id) {
        this.id = id
    } 
}


//con la funcion app.get le indicamos que cada vez que un cliente solicite un recurso entregarle(get) algo. Con / indicamos la direccion de donde se le va a otorgar ese servicio. En este caso se deja solamente el / porque el servicio esta en la misma carpeta que estamos utilizando. La "arrow function" se utiliza para indicar el procedimiento siguiente a una declaracion inicial. Req (require), Res (response). .send nos permite dar valor a la variable res
app.get("/unirse", (req, res) => {
    // con los template strings logramos convertir el numero generado por la funcion math.random en una cadena de texto y manejar los id como cadenas de texto
    const id=`${Math.random()}`
    
    const jugador = new Jugador(id)

    jugadores.push(jugador)

    //el error de acces control allow origin es cuando una pagina no esta alojada en el mismo sitio que el servidor(no esta en la misma carpeta de origen por ejemplo) y el navegador por seguridad no permite su ingreso. Para ellos debemos indicar que ese tipo de solicitudes se pueden aceptar con un .setHeader. Este metodo nos permite crear una cabecera (informacion que contiene metadatos y que usan los sistemas web usan para obetener informacion de configuraciones, etc.) y le indicamos al navegador que permitimos que haga llamadas de este tipo. Para indicar que puede aceptar peticiones de todos los origenes "*". Este comodin no se recomienda en la mayoria de los casos ya que crea vulnerabilidades de seguridad
    res.setHeader("Access-Control-Allow-Origin", "*")

    res.send(id)
})

app.post("/mokepon:jugadorId", (req, res) => {
    const jugadorId = req.params.jugadorId || ""
    console.log(jugadores)
    console.log(jugadorId)
    res.end()
})



// con app.listen le indicamos al servidor que "escuche" las peticiones de los clientes por medio del puerto que vayamos a usar
app.listen(8080, () => {
    console.log("servidor funcionando")
})