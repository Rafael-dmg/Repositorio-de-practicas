console.log("hola, papu");

// document.getElementById('miBoton').addEventListener('click', function() {
//     var dropdown = document.getElementById('dropdown');
//     if (dropdown.style.visibility === 'hidden') {
//       dropdown.style.visibility = 'visible';
//       dropdown.style.opacity = '1';
//     } else {
//       dropdown.style.visibility = 'hidden';
//       dropdown.style.opacity = '0';
//     }
//    });
   
const menu = document.querySelector('.desktopMenu')
const btn = document.querySelector('.btn')

btn.addEventListener('click', toggleMenu)

function toggleMenu () {
  menu.classList.toggle('inactive')
}