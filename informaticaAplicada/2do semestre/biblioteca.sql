CREATE DATABASE Biblioteca; USE Biblioteca;

CREATE TABLE Autores (    
AutorID INT PRIMARY KEY AUTO_INCREMENT,    
Nombre VARCHAR(100) NOT NULL,    
Nacionalidad VARCHAR(50) 
);

-- Tabla Libros
CREATE TABLE Libros (    
LibroID INT PRIMARY KEY AUTO_INCREMENT,    
Titulo VARCHAR(200) NOT NULL,    
AutorID INT,    
FechaPublicacion DATE,    
FOREIGN KEY (AutorID) REFERENCES Autores(AutorID) 
);

-- Forma Normal 2 (FN2)
-- Tabla Categorías 
CREATE TABLE Categorias (    
CategoriaID INT PRIMARY KEY AUTO_INCREMENT,    
Nombre VARCHAR(100) NOT NULL UNIQUE
);

-- Relación entre Libros y Categorías 
CREATE TABLE Libros_Categorias (    
LibroID INT,    
CategoriaID INT,   
PRIMARY KEY (LibroID, CategoriaID),    
FOREIGN KEY (LibroID) REFERENCES Libros(LibroID),    
FOREIGN KEY (CategoriaID) REFERENCES Categorias(CategoriaID) 
);

-- Forma Normal 3 (FN3)
-- Tabla Usuarios 
CREATE TABLE Usuarios (    
UsuarioID INT PRIMARY KEY AUTO_INCREMENT,    
Nombre VARCHAR(100) NOT NULL,    
Email VARCHAR(100) NOT NULL UNIQUE 
);

-- Tabla Préstamos 
CREATE TABLE Prestamos (    
PrestamoID INT PRIMARY KEY AUTO_INCREMENT,    
LibroID INT,
UsuarioID INT,    
FechaPrestamo DATE NOT NULL,    
FechaDevolucion DATE,    
FOREIGN KEY (LibroID) REFERENCES Libros(LibroID),    
FOREIGN KEY (UsuarioID) REFERENCES Usuarios(UsuarioID) 
);

-- Tabla Autores expandida a 30 registros
INSERT INTO Autores (Nombre, Nacionalidad) VALUES
('Gabriel García Márquez', 'Colombiano'),
('J.K. Rowling', 'Británica'),
('George Orwell', 'Británico'),
('Isabel Allende', 'Chilena'),
('Haruki Murakami', 'Japonés'),
('Miguel de Cervantes', 'Español'),
('Julio Cortázar', 'Argentino'),
('Ernest Hemingway', 'Estadounidense'),
('F. Scott Fitzgerald', 'Estadounidense'),
('Virginia Woolf', 'Británica'),
('Franz Kafka', 'Austriaco'),
('James Joyce', 'Irlandés'),
('Leo Tolstoy', 'Ruso'),
('Fyodor Dostoevsky', 'Ruso'),
('Marcel Proust', 'Francés'),
('Jane Austen', 'Británica'),
('Mark Twain', 'Estadounidense'),
('Charles Dickens', 'Británico'),
('Herman Melville', 'Estadounidense'),
('Victor Hugo', 'Francés'),
('J.R.R. Tolkien', 'Británico'),
('Agatha Christie', 'Británica'),
('Arthur Conan Doyle', 'Británico'),
('Gabriel García Lorca', 'Español'),
('Jorge Luis Borges', 'Argentino'),
('Mario Vargas Llosa', 'Peruano'),
('Octavio Paz', 'Mexicano'),
('Pablo Neruda', 'Chileno'),
('Mario Benedetti', 'Uruguayo'),
('Carlos Fuentes', 'Mexicano');

-- Tabla Libros expandida a 30 registros
INSERT INTO Libros (Titulo, AutorID, FechaPublicacion) VALUES
('Cien años de soledad', 1, '1967-06-05'),
('Harry Potter y la piedra filosofal', 2, '1997-06-26'),
('1984', 3, '1949-06-08'),
('La casa de los espíritus', 4, '1982-01-01'),
('Kafka en la orilla', 5, '2002-09-12'),
('Don Quijote de la Mancha', 6, '1605-01-16'),
('Rayuela', 7, '1963-06-28'),
('El viejo y el mar', 8, '1952-09-01'),
('El gran Gatsby', 9, '1925-04-10'),
('Al faro', 10, '1927-05-05'),
('La metamorfosis', 11, '1915-10-15'),
('Ulises', 12, '1922-02-02'),
('Guerra y paz', 13, '1869-01-01'),
('Crimen y castigo', 14, '1866-01-01'),
('En busca del tiempo perdido', 15, '1913-11-14'),
('Orgullo y prejuicio', 16, '1813-01-28'),
('Las aventuras de Tom Sawyer', 17, '1876-01-01'),
('Oliver Twist', 18, '1837-01-01'),
('Moby-Dick', 19, '1851-10-18'),
('Los Miserables', 20, '1862-01-01'),
('El Señor de los Anillos', 21, '1954-07-29'),
('Asesinato en el Orient Express', 22, '1934-01-01'),
('Estudio en escarlata', 23, '1887-01-01'),
('La casa de Bernarda Alba', 24, '1936-01-01'),
('El Aleph', 25, '1949-01-01'),
('La ciudad y los perros', 26, '1963-01-01'),
('El laberinto de la soledad', 27, '1950-01-01'),
('Canto general', 28, '1950-01-01'),
('La tregua', 29, '1960-01-01'),
('La muerte de Artemio Cruz', 30, '1962-01-01');

-- Tabla Categorias expandida a 30 registros
INSERT INTO Categorias (Nombre) VALUES
('Ficción'),
('Ciencia Ficción'),
('Literatura Fantástica'),
('Novela Histórica'),
('Misterio'),
('Biografía'),
('Ensayo'),
('Poesía'),
('Drama'),
('Cuento'),
('Romance'),
('Aventura'),
('Terror'),
('Suspenso'),
('Thriller'),
('Humor'),
('Crítica Literaria'),
('Filosofía'),
('Psicología'),
('Sociología'),
('Religión'),
('Ciencia'),
('Tecnología'),
('Educación'),
('Viajes'),
('Infantil'),
('Juvenil'),
('Autoayuda'),
('Política'),
('Economía');

-- Tabla Libros_Categorias expandida a 30 registros
INSERT INTO Libros_Categorias (LibroID, CategoriaID) VALUES
(1, 1),
(2, 3),
(3, 2),
(4, 4),
(5, 5),
(6, 1),
(7, 1),
(8, 1),
(9, 1),
(10, 1),
(11, 13),
(12, 1),
(13, 4),
(14, 4),
(15, 17),
(16, 10),
(17, 10),
(18, 1),
(19, 12),
(20, 4),
(21, 3),
(22, 5),
(23, 5),
(24, 9),
(25, 8),
(26, 1),
(27, 8),
(28, 8),
(29, 10),
(30, 1);

-- Tabla Usuarios expandida a 30 registros
INSERT INTO Usuarios (Nombre, Email) VALUES
('Juan Pérez', 'juan.perez@email.com'),
('María López', 'maria.lopez@email.com'),
('Carlos Ruiz', 'carlos.ruiz@email.com'),
('Ana Torres', 'ana.torres@email.com'),
('Laura Gómez', 'laura.gomez@email.com'),
('Luis Sánchez', 'luis.sanchez@email.com'),
('Patricia Ríos', 'patricia.rios@email.com'),
('Andrés Gutiérrez', 'andres.gutierrez@email.com'),
('Elena Martínez', 'elena.martinez@email.com'),
('Raúl Castillo', 'raul.castillo@email.com'),
('Clara Fernández', 'clara.fernandez@email.com'),
('Miguel Ramírez', 'miguel.ramirez@email.com'),
('Silvia Ortiz', 'silvia.ortiz@email.com'),
('Jorge Herrera', 'jorge.herrera@email.com'),
('Carmen Morales', 'carmen.morales@email.com'),
('David Torres', 'david.torres@email.com'),
('Sara Campos', 'sara.campos@email.com'),
('Alejandro Soto', 'alejandro.soto@email.com'),
('Marta Vega', 'marta.vega@email.com'),
('Fernando Moreno', 'fernando.moreno@email.com'),
('Lucía Navarro', 'lucia.navarro@email.com'),
('Oscar Blanco', 'oscar.blanco@email.com'),
('Carolina Cruz', 'carolina.cruz@email.com'),
('Hugo Díaz', 'hugo.diaz@email.com'),
('Alba Sánchez', 'alba.sanchez@email.com'),
('Nicolás Romero', 'nicolas.romero@email.com'),
('Inés Ruiz', 'ines.ruiz@email.com'),
('Tomás Prieto', 'tomas.prieto@email.com'),
('Gloria Paredes', 'gloria.paredes@email.com'),
('Iván García', 'ivan.garcia@email.com');

-- Tabla Prestamos expandida a 30 registros
INSERT INTO Prestamos (LibroID, UsuarioID, FechaPrestamo, FechaDevolucion) VALUES
(1, 1, '2024-01-10', '2024-01-24'),
(2, 2, '2024-01-15', '2024-01-29'),
(3, 3, '2024-02-05', '2024-02-19'),
(4, 4, '2024-03-10', '2024-03-24'),
(5, 5, '2024-04-20', NULL),
(6, 6, '2024-01-11', '2024-01-25'),
(7, 7, '2024-02-14', '2024-02-28'),
(8, 8, '2024-03-19', '2024-04-02'),
(9, 9, '2024-04-25', NULL),
(10, 10, '2024-05-10', '2024-05-24'),
(11, 11, '2024-06-05', '2024-06-19'),
(12, 12, '2024-07-10', '2024-07-24'),
(13, 13, '2024-08-15', '2024-08-29'),
(14, 14, '2024-09-10', '2024-09-24'),
(15, 15, '2024-10-15', '2024-10-29'),
(16, 16, '2024-11-20', NULL),
(17, 17, '2024-12-01', '2024-12-15'),
(18, 18, '2024-01-05', '2024-01-19'),
(19, 19, '2024-02-10', '2024-02-24'),
(20, 20, '2024-03-15', '2024-03-29'),
(21, 21, '2024-04-20', NULL),
(22, 22, '2024-05-25', '2024-06-08'),
(23, 23, '2024-06-30', '2024-07-14'),
(24, 24, '2024-08-04', '2024-08-18'),
(25, 25, '2024-09-09', '2024-09-23'),
(26, 26, '2024-10-14', '2024-10-28'),
(27, 27, '2024-11-19', NULL),
(28, 28, '2024-12-24', '2025-01-07'),
(29, 29, '2024-01-28', '2024-02-11'),
(30, 30, '2024-03-03', '2024-03-17');


SELECT 
    A.Nombre AS Autor,
    L.Titulo AS Libro
FROM 
    Libros L
JOIN 
    Autores A ON L.AutorID = A.AutorID
WHERE 
    A.Nombre = 'George Orwell';
    
    SELECT 
    L.Titulo AS Libro,
    C.Nombre AS Categoria
FROM 
    Libros L
JOIN 
    libros_categorias T ON L.libroID = T.LibroID
JOIN
	categorias C on T.CategoriaID = C.CategoriaID
WHERE 
    C.Nombre = 'Misterio';
