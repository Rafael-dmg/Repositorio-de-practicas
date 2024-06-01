//Creacion de strings

const primeraOpcion = 'comillas simples';
const segundaOpcion = "comillas dobles";
const terceraOpcion = `comillas ladeadas`;

//Concatenacion: Opcion +

const direccion = "calle x"
const ciudad = "Ciudad lalala"

const direccionCOmpleta = 'mi direccion completa es ' + direccion + " " + ciudad

//Concatenacion: Template literals

const direccionCompleta = `Mi direccion completa es, ${ciudad}, ${direccion}.`

console.log(direccionCompleta)

//Concatenacion: join()

const primeraParte = "A el le gusta la ";
const segundaParte = "cerveza, aunque le";
const terceraParte = "duela la cabeza";

const pensamiento  = [primeraParte, segundaParte, terceraParte];

console.log(pensamiento.join(" "))

//Concatenacion: concat()

const hobbie1 = "Tocar la guitarra";
const hobbie2 = "Programar";
const hobbie3 = "aprender de idiomas y sobre ciencias";

const hobbies = 'Mis hobbies son: '.concat(hobbie1, ", " , hobbie2, ", " , hobbie3);
console.log(hobbies);

