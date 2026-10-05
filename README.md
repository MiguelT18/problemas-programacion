# Prácticas de Programación (DIS121) — UAJMS

Repo de prácticas, problemas propuestos para las tareas y problemas externos para
ejercitar, de la materia **Programación I** de la Facultad de Ingeniería,
Universidad Autónoma "Juan Misael Saracho" — Tarija, Bolivia.

## Estructura

```
practica/
├── .gitignore              # ignora *.exe, *.o y las carpetas exec/
├── .gitattributes          # finales de línea CRLF para Windows
├── README.md
├── practica-01/            # recursion
│   ├── problemas.txt       # enunciado (12 problemas, formato de la materia)
│   └── problemas/          # Problema1.cpp ... Problema6.cpp, Prueba.cpp
├── practica-02/            # ordenamiento y busqueda
│   ├── Problemas-Practica02.txt
│   └── problemas/          # Problema1.cpp ... Problema10.cpp
└── externos/
    └── README.md           # indice de problemas externos por plataforma
```

- **`practica-NN/`** = un tema por práctica; el `.txt` es el enunciado con el mismo
  formato de la materia (INSTRUCCIONES, firma exacta de la función, 4 ejemplos por
  problema) y `problemas/` guarda un `.cpp` independiente por enunciado.
- **`externos/`** = problemas de otros jueces (Kattis, UVa, Acepta el Reto, CSES, ...).
  Solo se registran identificador, título, tema y enlace; nunca se copia el enunciado.

## Compilar y ejecutar

Con MinGW-w64 (`g++`) desde la raíz del repo:

```powershell
g++ -std=c++17 -O2 -o practica-02/problemas/exec/Problema1.exe practica-02/problemas/Problema1.cpp
.\practica-02\problemas\exec\Problema1.exe
```

Los binarios salen en la carpeta `exec/`, que está ignorada por git: se regeneran
compilando y nunca suben al repo (igual que los `.exe` de `practica-01`).

## Convenciones

1. Un problema por archivo, con el nombre `ProblemaN.cpp`, donde `N` es el número del
   enunciado.
2. La función requerida conserva la firma exacta del enunciado.
3. Se pueden usar funciones auxiliares (recursivas, con parámetros extra, etc.).
4. Los enunciados van en `.txt`, en el mismo formato que la materia.
5. Problema 1 de cada práctica = el más fácil; el último = el integrador.

## Mensajes de commit

Estilo libre en español, legible en `git log --oneline`:

- Un commit por archivo de solución:
  `Practica 02 - Problema 3: ordenamiento por seleccion contando intercambios`
- Enunciados y utilidades, con verbo en imperativo:
  `Agrega .gitignore para no versionar los binarios de compilacion`
  `Practica 02 - Enunciado: diez problemas de ordenamiento y busqueda`
- Correcciones, marcando qué se arregló:
  `Practica 01 - Correccion: Problema 3 ahora lee la linea completa con getline`
- Ejercicios externos, citando la fuente:
  `Practica 02 - Externo - Kattis sortofsorting: ordenar por prefijo de nombre`

Cuerpo opcional (2.ª línea) para el motivo o el caso base; título de ~70 caracteres,
sin acentos forzados y sin punto final.

## Índice de prácticas

| Práctica | Tema | Enunciado | Soluciones |
|----------|------|-----------|------------|
| 01 | Recursión (dígitos, rangos, cadenas, vectores) | `practica-01/problemas.txt` | Problema1 - 6 |
| 02 | Ordenamiento y búsqueda | `practica-02/Problemas-Practica02.txt` | Problema1 - 10 |
