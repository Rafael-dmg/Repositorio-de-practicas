document.addEventListener("DOMContentLoaded", function () {
    const glossaryButtons = document.querySelectorAll(".glossary-button");

    glossaryButtons.forEach((button) => {
        button.addEventListener("click", function () {
            // Agrega aquí el código para mostrar/ocultar el glosario
            alert("Mostrar glosario aquí");
        });
    });
});
