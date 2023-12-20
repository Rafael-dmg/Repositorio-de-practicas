console.log('Hola, mundo!');

//Null
const nookie = null;
console.log(nookie);
console.log(typeof nookie); //esto nos dara un error comun de JS que es catalogar null como de tipo objeto, no se corrige por la cantidad de programas que ya existen con javascript que podrian romperse si este error fuese corregido el dia de hoy.

//Undefined

const cookie = undefined;
console.log(cookie);
//es resultado aca sera justamente un undefined pero no es una buena practica ya que JS lo hace directamente al declarar la variable sin valor o sin inicializarla.

//Symbol
/* nos sirve para valores uq eno queremos que cambien que sean siempre los mismos, que no se modifiquen mas adelante en el codigo. Por ejemplo, ids unicos, variables inmutables, etc. */
const uniqueId = Symbol('id')
const symbol1 = Symbol(1)
const symbol2 = Symbol(1)

console.log(symbol1 === symbol2); //este resultado nos da un falso, porque symbol hace que cada variable sea de las seleccionadas sean unicas en su tipo con su propio identificador, a pesar de que tengan el mismo valor, por ello, son tan utiles para los id por ejemplo de usuarios.

const ID = Symbol('id')
const user = {}
user[ID] = '1234'
console.log(user)

//Bigint

const yoMamasSize = 4318094183648130870431047183461834730n;
console.log(yoMamasSize);

const particulasEnElUniverso = 13743184134104813084031840813408134081340713084013n;
console.log(particulasEnElUniverso);

/*]estos  numeros al ser demasiado grandes javasdcript tiene problemas para lidiar con ellos, por ejemplo si ejecutamos los console.log de ambas variables sin haberles escrito la n al final obtendremos: 
- 4.318094183648131e+36
- 1.3743184134104813e+49
estos resultados no son los esperamos, porque necesitamos los nuemros enteros que especificamos ene los valores, para esto es necesario el especificarlo con la n al final de dichos numeros lo que activara el bigint:

- 4318094183648130870431047183461834730n
- 13743184134104813084031840813408134081340713084013n

*/