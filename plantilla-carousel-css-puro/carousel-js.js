const carousel = document.querySelector('.carousel');
const prevButton = document.querySelector('.prev-button');
const nextButton = document.querySelector('.next-button');

let currentIndex = 0;

function showImage(index) {
    carousel.style.transform = `translateX(-${index * 100}%)`;
}

function prevImage() {
    currentIndex = (currentIndex - 1 + carousel.children.length) % carousel.children.length;
    showImage(currentIndex);
}

function nextImage() {
    currentIndex = (currentIndex + 1) % carousel.children.length;
    showImage(currentIndex);
}

prevButton.addEventListener('click', prevImage);
nextButton.addEventListener('click', nextImage);

// Iniciar con la primera imagen visible
showImage(currentIndex);
