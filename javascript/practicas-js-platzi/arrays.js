let acordes = ["do", "re", "mi", "fa"]




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