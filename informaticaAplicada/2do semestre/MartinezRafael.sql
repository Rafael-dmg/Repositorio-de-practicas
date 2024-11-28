Create database 2doParcialLaboTN;
use 2doparciallabotn;
create table Autores(
AutorID int primary key  unique auto_increment,
NombreAut varchar(50),
nacionalidad varchar(20));
create table Libros(
LibroId int primary key  unique auto_increment,
titulo varchar(50),
fechapubli date,
AutorID int,
foreign key (AutorID) references Autores(AutorID));

create table Generos(
GeneroID int primary key  unique auto_increment,
NombreGenero varchar(50)  unique);

create table miembros(
MiembroID int primary key  unique auto_increment,
NombreMiembro varchar(50),
CorreoMiembro varchar(50) unique);

Create table Libros_genero(
GeneroId int,
LibroId int,
foreign key (GeneroId) references Generos(GeneroId),
foreign key (LibroId) references Libros(Libroid));

create table Prestamos(
PrestamoID int primary key  unique auto_increment,
LibroId int,
MiembroId int,
FechaPrest date,
FechaDev date);


-- Tabla Autores expandida a 30 registros
INSERT INTO Autores (NombreAut, Nacionalidad) VALUES
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
INSERT INTO Libros (Titulo, AutorID, Fechapubli) VALUES
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
INSERT INTO Generos (NombreGenero) VALUES
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

--------------------------------------------------------
-- Tabla Libros_Categorias expandida a 30 registros
INSERT INTO libros_genero (LibroID, GeneroId) VALUES
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

INSERT INTO libros_genero (LibroID, GeneroId) VALUES
(31, 1),  -- El amor en los tiempos del cólera - Ficción
(32, 3),  -- Harry Potter y la cámara secreta - Literatura Fantástica
(33, 2),  -- Rebelión en la granja - Ciencia Ficción
(34, 4),  -- Paula - Novela Histórica
(35, 1),  -- Tokio Blues - Ficción
(36, 1),  -- Novelas ejemplares - Ficción
(37, 1),  -- Los premios - Ficción
(38, 4),  -- Por quién doblan las campanas - Novela Histórica
(39, 1),  -- Suave es la noche - Ficción
(40, 8),  -- Orlando - Ensayo
(41, 13), -- El proceso - Terror
(42, 1),  -- Dublineses - Ficción
(43, 4),  -- Anna Karenina - Novela Histórica
(44, 4),  -- Los hermanos Karamazov - Novela Histórica
(45, 17), -- A la sombra de las muchachas en flor - Crítica Literaria
(46, 10), -- Sentido y sensibilidad - Romance
(47, 12), -- Las aventuras de Huckleberry Finn - Aventura
(48, 1),  -- Grandes esperanzas - Ficción
(49, 9),  -- Bartleby, el escribiente - Drama
(50, 4),  -- Nuestra Señora de París - Novela Histórica
(51, 3),  -- El hobbit - Literatura Fantástica
(52, 5),  -- Diez negritos - Misterio
(53, 5),  -- El perro de los Baskerville - Misterio
(54, 8),  -- Poeta en Nueva York - Poesía
(55, 8),  -- Ficciones - Cuento
(56, 1),  -- Conversación en La Catedral - Ficción
(57, 17), -- El arco y la lira - Crítica Literaria
(58, 8),  -- Veinte poemas de amor y una canción desesperada - Poesía
(59, 1),  -- Gracias por el fuego - Ficción
(60, 4);  -- Terra Nostra - Novela Histórica


-- Tabla Usuarios expandida a 30 registros
INSERT INTO miembros (Nombremiembro, CorreoMiembro) VALUES
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
INSERT INTO Prestamos (LibroID, MiembroId, FechaPrest, FechaDev) VALUES
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

INSERT INTO Libros (Titulo, AutorID, FechaPubli) VALUES
('El amor en los tiempos del cólera', 1, '1985-09-15'),
('Harry Potter y la cámara secreta', 2, '1998-07-02'),
('Rebelión en la granja', 3, '1945-08-17'),
('Paula', 4, '1994-01-01'),
('Tokio Blues', 5, '1987-01-01'),
('Novelas ejemplares', 6, '1613-01-01'),
('Los premios', 7, '1960-01-01'),
('Por quién doblan las campanas', 8, '1940-10-21'),
('Suave es la noche', 9, '1934-04-12'),
('Orlando', 10, '1928-10-11'),
('El proceso', 11, '1925-04-01'),
('Dublineses', 12, '1914-06-15'),
('Anna Karenina', 13, '1877-01-01'),
('Los hermanos Karamazov', 14, '1880-01-01'),
('A la sombra de las muchachas en flor', 15, '1919-01-01'),
('Sentido y sensibilidad', 16, '1811-10-30'),
('Las aventuras de Huckleberry Finn', 17, '1884-01-01'),
('Grandes esperanzas', 18, '1861-01-01'),
('Bartleby, el escribiente', 19, '1853-11-01'),
('Nuestra Señora de París', 20, '1831-03-16'),
('El hobbit', 21, '1937-09-21'),
('Diez negritos', 22, '1939-11-06'),
('El perro de los Baskerville', 23, '1902-01-01'),
('Poeta en Nueva York', 24, '1940-01-01'),
('Ficciones', 25, '1944-01-01'),
('Conversación en La Catedral', 26, '1969-01-01'),
('El arco y la lira', 27, '1956-01-01'),
('Veinte poemas de amor y una canción desesperada', 28, '1924-01-01'),
('Gracias por el fuego', 29, '1965-01-01'),
('Terra Nostra', 30, '1975-01-01');

select titulo AS TituloLibro, autores.NombreAut AS Autor from Libros
inner join Autores on Autores.AutorId=libros.AutoriD;

select Nombremiembro, prestamos.prestamoId from miembros
inner join prestamos on prestamos.miembroid=miembros.miembroid;

select titulo, generos.Nombregenero from libros
inner join libros_genero on libros_genero.libroId=libros.libroid
inner join generos on generos.generoId=libros_genero.generoId;

select miembros.NombreMiembro, libros.titulo from prestamos
inner join miembros on prestamos.MiembroId=miembros.miembroId
inner join libros on libros.libroId=prestamos.libroid;

Select miembros.NombreMiembro, prestamoId as Prestamo from prestamos
inner join miembros on miembros.miembroId=prestamos.miembroid;

select Titulo, prestamos.prestamoId as Prestamo from libros
inner join prestamos on prestamos.libroid=libros.libroid;

select prestamoId as Prestamo,FechaPrest as Fecha_del_Prestamo from prestamos
 where FechaPrest>'2024-01-10'order by  FechaPrest;
 
select libros.titulo, COUNT(prestamos.LibroId) as Veces_Prestado from Prestamos
inner join libros on libros.libroid=prestamos.libroid
group by Prestamos.LibroId;

SELECT Autores.NombreAut AS Autor, COUNT(Libros.LibroID) AS LibrosRegistrados FROM Libros
JOIN Autores ON Libros.AutorID = Autores.AutorID
GROUP BY Autores.Nombreaut
ORDER BY LibrosRegistrados DESC
LIMIT 3;

SELECT 
NombreGenero AS Categoria, COUNT(Libros.LibroID) AS CantidadLibros FROM Libros 
JOIN Libros_genero ON Libros.LibroID = libros_genero.LibroID
JOIN generos ON libros_genero.GeneroId = Generos.GeneroID
GROUP BY Generos.NombreGenero
ORDER BY CantidadLibros DESC
LIMIT 3;