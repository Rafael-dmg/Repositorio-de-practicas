console.log('Hola, mundo!')

const imageContainer = document.querySelector('.arañasLobo') 
const imageHero = document.querySelector('#info') 
const hero = document.querySelector('#logo')


const arañaBlanca = document.createElement('img')
arañaBlanca.setAttribute('src', 'https://i.pinimg.com/originals/0c/b3/84/0cb3840a4fae42af6b982bed26b38a7f.jpg')
arañaBlanca.setAttribute('class', 'arañaBlanca')


const arañaLobo = document.createElement('img')
arañaLobo.setAttribute('src','assets/arañaLobo.png')

imageContainer.appendChild(arañaLobo)

hero.appendChild(arañaBlanca)