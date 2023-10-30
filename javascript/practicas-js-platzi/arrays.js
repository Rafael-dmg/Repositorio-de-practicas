let acordes = ["do", "re", "mi", "fa"] //DATO IMPORTANTE: Un array no guarda 'datos distintos' por ejemplo: no puede guardar numeros y strings en un mismo array

console.log(acordes)//para ver el contenido

console.log(acordes.length)//para ver la longitud del array

console.log(acordes[2])//de esta manera buscamos una posicion especifica del array. PD: en prog. se cuenta desde el 0

//como agregamos mas elementos al array? con el metodo .push
var masAcordes = acordes.push('sol')//agrega un elemento al ultimo lugar de la lista, si o si

var menosAcordes = acordes.pop('sol')//este motodo elimina el ULTIMO elemento del array

var nuevoComienzo = acordes.unshift('si')//este metodo agrega un elemento a la lista pero lo agrega en la primera posicion

var borrarAcorde = acordes.shift('si')//elimina el primer elemento del array

//INDEXOF - nos permite buscar la posicion de los elementos en el array, por ejemplo si queremos saber la posicion del acorde fa de nuestro ejemplo

var posicion = acordes.indexOf('fa')//busca la posicion del elemento que le indiquemos en el array

posicion//se debe llamar luego a la variable para poder saber el resultado de la posicion del array
















//Resultado de Playground: detecta el elemento impostor de un array

//En este desafío vas a recibir un parámetro arraySecreto en la función solution. Debes retornar true si el primer elemento del arraySecreto es de tipo string y debes retornar false si es de cualquier otro tipo.

//Input

//solution(["Huevo", "Gallina", "Vaca"])
//solution([1, "Gallina", "Vaca"])

//Output

//true
//false

//Solucion 1
function solution(arraySecreto) {
    return typeof arraySecreto[0] === 'string' ? true : false
  }
  
  solution(["Huevo", "Gallina", "Vaca"]) //true
  solution([1, "Gallina", "Vaca"]) //false


  //Solucion 2

  function solution(arraySecreto) {
    return typeof arraySecreto[0] === 'string'
  }
  
  solution(["Huevo", "Gallina", "Vaca"]) //true
  solution([1, "Gallina", "Vaca"]) //false