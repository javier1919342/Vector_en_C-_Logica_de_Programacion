# Inventario con Vector de Objetos (struct)

**Materia:** Lógica de Programación  
**Universidad:** Universidad Central del Este (UCE)  
**Profesor:** Ing. Gamalier Reyes del Carmen  
**Unidad 3 - Ejercicio Propuesto 2**

## Descripción

Programa en C++ que gestiona el inventario de una tienda utilizando un
`struct Producto` (nombre y precio) dentro de un `vector<Producto>`,
refactorizando el enfoque de vectores paralelos usado en el ejercicio anterior.

## Funcionalidades

- Declaración del `struct Producto` con los campos `nombre` (string) y `precio` (float).
- Inicialización del inventario con `push_back()`.
- Recorrido del vector con `for (Producto p : inventario)` para imprimir cada producto.
- Modificación de un precio accediendo por índice (`inventario[i].precio`).
- Cálculo del precio promedio del inventario.
- Uso de `at()` con manejo de excepciones (`try/catch`) para acceso seguro por posición.

## Integrantes

- Javier José Robles Cano (2025-3729)
- Ronald Valdez (2025-1402)
<img width="1920" height="1080" alt="Captura de pantalla (421)" src="https://github.com/user-attachments/assets/2910ad4c-4315-48d7-9796-e9e500f56e42" />
