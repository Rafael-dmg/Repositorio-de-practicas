CREATE DATABASE IF NOT EXISTS gestionHospit;
USE gestionHospit;

CREATE TABLE Departamentos(
    idDepartamento INT PRIMARY KEY AUTO_INCREMENT, 
    Nombre VARCHAR(120), 
    NumeroCamas INT
);

CREATE TABLE Pacientes(
    idPaciente INT PRIMARY KEY AUTO_INCREMENT, 
    nombrePaciente VARCHAR(120), 
    edad INT, 
    genero VARCHAR(50)
);

CREATE TABLE PacientesEnDepartamentos(
    idPaciente INT PRIMARY KEY AUTO_INCREMENT, 
    idDepartamento INT
);

ALTER TABLE PacientesEnDepartamentos
ADD CONSTRAINT FK_ID_DPTO
FOREIGN KEY (idDepartamento)
REFERENCES Departamentos(idDepartamento);

CREATE TABLE Doctores(
    idDoctor INT PRIMARY KEY AUTO_INCREMENT,
    nombreDoctor VARCHAR(120), 
    especialidad VARCHAR(120), 
    idDepartamento INT
);

INSERT INTO Departamentos (Nombre, NúmeroCamas) VALUES
('Cardiología', 50),
('Neurología', 30),
('Pediatría', 40),
('Ginecología', 25),
('Urgencias', 60),
('Oncología', 35);

INSERT INTO Pacientes (nombrePaciente, edad, género) VALUES
('Juan Pérez', 45, 'Masculino'),
('María López', 32, 'Femenino'),
('Carlos Gómez', 28, 'Masculino'),
('Ana Sánchez', 21, 'Femenino'),
('Luis Martínez', 63, 'Masculino'),
('Gabriela Torres', 38, 'Femenino'),
('Jorge Ramírez', 55, 'Masculino'),
('Laura Gutiérrez', 47, 'Femenino'),
('Antonio Díaz', 70, 'Masculino'),
('Marta Morales', 41, 'Femenino'),
('Pedro Castillo', 29, 'Masculino'),
('Carmen Álvarez', 34, 'Femenino'),
('Ricardo Vega', 50, 'Masculino'),
('Sandra Herrera', 26, 'Femenino'),
('Eduardo Flores', 68, 'Masculino'),
('Beatriz Soto', 52, 'Femenino'),
('Miguel Sánchez', 44, 'Masculino'),
('Patricia Cruz', 31, 'Femenino'),
('Francisco Ortiz', 62, 'Masculino'),
('Isabel Rojas', 37, 'Femenino'),
('Roberto Fernández', 48, 'Masculino'),
('Lucía Jiménez', 22, 'Femenino'),
('Alejandro Navarro', 39, 'Masculino'),
('Sofía Romero', 55, 'Femenino'),
('Raúl Vargas', 33, 'Masculino'),
('Verónica Muñoz', 24, 'Femenino'),
('David Reyes', 60, 'Masculino'),
('Daniela Silva', 43, 'Femenino'),
('Emilio Castro', 53, 'Masculino'),
('Lorena García', 49, 'Femenino'),
('Manuel Méndez', 64, 'Masculino'),
('Gloria Peña', 27, 'Femenino'),
('Diego Morales', 36, 'Masculino'),
('Adriana Figueroa', 56, 'Femenino'),
('Héctor Contreras', 30, 'Masculino'),
('Mónica Ruiz', 46, 'Femenino'),
('Tomás Aguilar', 61, 'Masculino'),
('Paula Paredes', 42, 'Femenino'),
('Felipe Salinas', 54, 'Masculino');

INSERT INTO Doctores (nombreDoctor, especialidad, idDepartamento) VALUES
('Dr. Javier Ortega', 'Cardiólogo', 1),
('Dra. Laura Pérez', 'Neuróloga', 2),
('Dr. Antonio García', 'Pediatra', 3),
('Dra. Carmen Romero', 'Ginecóloga', 4),
('Dr. José Navarro', 'Urgencias', 5),
('Dra. Silvia Méndez', 'Oncóloga', 6),
('Dr. Mario Delgado', 'Cardiólogo', 1),
('Dra. Alicia Fernández', 'Neuróloga', 2);

ALTER TABLE PacientesEnDepartamentos
ADD CONSTRAINT FK_ID_PCNT_DPTO
FOREIGN KEY (idPaciente)
REFERENCES Pacientes(idPaciente);

alter TABLE Pacientes
add column idDepartamento int