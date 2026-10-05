# Problemas externos para practicar

Índice curado de problemas de otros jueces y plataformas, para ejercitar lo visto en las
prácticas de la materia (recursión, ordenamiento, búsqueda, estructuras de datos, etc.).
No son parte de la entrega en Aulas Virtuales: son práctica extra.

## Cómo usar este índice

1. Elegir un problema acorde al tema de la práctica que se está viendo.
2. Resolverlo en un archivo `.cpp` propio, con el mismo estilo de los enunciados de la
   materia (una función con firma clara y un `main` que lea/escriba).
3. Registrar el problema en la tabla de su plataforma: identificador, tema y dificultad.
4. Si se agrega la solución al repo, usar el nombre `externos/soluciones/<plataforma>/<id>.cpp`
   y un commit con mensaje `Practica NN - Externo - <plataforma> <id>: <que resuelve>`.

## Reglas importantes

- **Nunca copiar el enunciado** de una plataforma al repositorio: aquí solo se registran
  el identificador, el título, el tema y el enlace. Los enunciados son propiedad de cada
  juez (OmegaUp, UVa, Kattis, etc.).
- Verificar que el enlace siga vivo antes de agregarlo a la tabla.
- Respetar los límites de tiempo y las reglas de cada juez (no compartir código en
  concursos en vivo, etc.).

## Escala de dificultad

| Nivel | Significado |
|-------|-------------|
| 1 | Requiere solo lectura, condicionales, ciclos y aritmética básica. |
| 2 | Funciones, cadenas, vectores y recursión simple. |
| 3 | Búsqueda, ordenamiento y conteo de operaciones. |
| 4 | Recursión avanzada, memoria dinámica o implementación de algoritmos. |

---

## Para la Práctica 02 (ordenamiento y búsqueda)

Estos son los más afines a los 10 problemas de la práctica:

| Plataforma | Problema | Tema | Nivel |
|------------|----------|------|-------|
| Beecrowd | 1088 - Bubbles and Buckets | Ordenamiento por inserción, conteo | 3 |
| UVa Online Judge | 299 - Train Swapping | Contar intercambios (inserción) | 3 |
| UVa Online Judge | 612 - DNA Sorting | Cuánto "desordenado" está un vector | 3 |
| UVa Online Judge | 11942 - Lumberjack Sequencing | Verificar si está ordenado | 2 |
| Kattis | `sortofsorting` | Ordenar por los primeros caracteres | 2 |
| Kattis | `jollyjumpers` | Verificar diferencias consecutivas | 2 |
| CSES | Distinct Numbers | Contar/guardar en estructura ordenada | 2 |
| CSES | Restaurant Customers | Puntos en el tiempo, orden y búsqueda | 3 |
| Codeforces | 141A - Amusing Joke | Anagramas (comparar cadenas ordenadas) | 2 |
| Acepta el Reto | buscar "ordenación" y "búsqueda binaria" | Ordenamiento y búsqueda | 2-3 |

---

## Acepta el Reto — https://aceptaelreto.com

Plataforma en español, muy alineada con el estilo de los enunciados de la materia
(firma de función + ejemplos de entrada/salida).

| ID | Título | Tema | Nivel |
|-----|--------|------|-------|
| — | buscar "recursión" | Recursión | 2 |
| — | buscar "ordenación" | Ordenamiento | 3 |
| — | buscar "búsqueda" | Búsqueda binaria | 3 |

> Nota: registrar aquí el ID concreto del problema resuelto (el juez los numera) y
> verificar el enlace `aceptaelreto.com/verproblema/<id>`.

## Kattis — https://open.kattis.com

Juez académico con entrada/salida estricta. El enlace de cada problema es
`https://open.kattis.com/problems/<slug>`.

| Slug | Título | Tema | Nivel |
|------|--------|------|-------|
| `r2` | R2 | Aritmética | 1 |
| `fizzbuzz` | FizzBuzz | Ciclos | 1 |
| `oddities` | Oddities | Par e impar | 1 |
| `faktor` | Faktor | Aritmética | 1 |
| `bijele` | Bijele | Aritmética | 1 |
| `zamka` | Zamka | Búsqueda lineal | 2 |
| `hissingmicrophone` | Hissing Microphone | Cadenas | 2 |
| `quickbrownfox` | Quick Brown Fox | Cadenas, conjunto | 2 |
| `jollyjumpers` | Jolly Jumpers | Vectores, diferencias | 2 |
| `trik` | Trik | Simulación | 2 |
| `sortofsorting` | Sort of Sorting | Ordenamiento | 3 |
| `countingvowels` | Counting Vowels | Conteo | 2 |

## UVa Online Judge — https://onlinejudge.org

Clásico de la ICPC. Se busca el problema por número en "Problems" → `Volume 1`, etc.

| ID | Título | Tema | Nivel |
|-----|--------|------|-------|
| 100 | The 3n + 1 Problem | Ciclos, máximos | 1 |
| 299 | Train Swapping | Contar intercambios | 3 |
| 612 | DNA Sorting | Grado de desorden | 3 |
| 623 | 500! | Aritmética con dígitos grandes | 3 |
| 146 | ID Codes | Siguiente permutación | 4 |
| 11942 | Lumberjack Sequencing | Verificar orden | 2 |
| 10194 | Football (aka Soccer) | Ordenar con criterios múltiples | 3 |
| 10226 | Hardwood Species | Frecuencias + ordenamiento | 3 |
| 10920 | Spiral Tap | Matrices en espiral | 3 |

## Beecrowd (antes URI Online Judge) — https://www.beecrowd.com.br

Catálogo muy grande, con numeración simple y ejemplos de entrada/salida.

| ID | Título | Tema | Nivel |
|-----|--------|------|-------|
| 1001 | Extremely Basic | Entrada y salida | 1 |
| 1002 | Area of a Circle | Aritmética, decimales | 1 |
| 1010 | One Product | Entrada y salida | 1 |
| 1064 | Positives and Average | Vectores, promedios | 2 |
| 1088 | Bubbles and Buckets | Inserción, conteo | 3 |
| 1145 | Logical Sequence 2 | Vectores | 1 |
| 1180 | Highest and Position | Recorrer y comparar | 2 |
| 1228 | Start Grid | Reordenar posiciones | 3 |

## CSES Problem Set — https://cses.fi/problemset/

Ordenado por secciones, con límites claros. Secciones recomendadas:
*Introductory Problems*, *Sorting and Searching*, *Searching*.

| Problema | Sección | Tema | Nivel |
|----------|---------|------|-------|
| Weird Algorithm | Introductory | Recursión (Collatz) | 2 |
| Missing Number | Introductory | Búsqueda / marca de presencia | 2 |
| Distinct Numbers | Sorting and Searching | Valores distintos | 2 |
| Apartments | Sorting and Searching | Dos vectores, dos punteros | 3 |
| Restaurant Customers | Sorting and Searching | Intervalos y orden | 3 |

## Codeforces — https://codeforces.com/

Útil para practicar lectura de entrada y manejo de casos límite. Los problemas del
divisor 2 (A/B) son los indicados para empezar.

| ID | Título | Tema | Nivel |
|-----|--------|------|-------|
| 4A | Watermelon | Condicionales | 1 |
| 158A | Next Round | Vectores | 1 |
| 71A | Way Too Long Words | Cadenas | 1 |
| 110A | Nearly Lucky Number | Dígitos | 1 |
| 266A | Stones on the Table | Cadenas | 1 |
| 141A | Amusing Joke | Anagramas | 2 |
| 50A | Domino piling | Aritmética | 1 |

## OmegaUp — https://omegaup.com

Plataforma en español con concursos latinoamericanos. Usar *Problemas* y filtrar por
etiquetas (`ordenamiento`, `búsqueda`, `recursión`) y dificultad (nivel 1-3), o entrar a
los cursos de iniciación.

| Problema | Tema | Nivel |
|----------|------|-------|
| — | buscar por etiqueta y dificultad | 1-4 |

## Project Euler — https://projecteuler.net/

Problemas matemáticos de larga duración; se resuelven con código propio, sin subir
soluciones a un juez.

| ID | Título | Tema | Nivel |
|-----|--------|------|-------|
| 1 | Multiples of 3 or 5 | Ciclos | 1 |
| 2 | Even Fibonacci Numbers | Recursión / series | 2 |
| 3 | Largest Prime Factor | Primos | 3 |
| 4 | Largest Palindrome Product | Ciclos, palíndromos | 2 |
| 5 | Smallest Multiple | Divisibilidad | 3 |
| 6 | Sum Square Difference | Series | 1 |
| 7 | 10001st Prime | Primos | 2 |
| 22 | Names Scores | Ordenar lista de nombres | 3 |

## CodeAbbey — https://codeabbey.com

Ejercicios cortos con verificación automática; buen lugar para repetir los métodos de
ordenamiento paso a paso (Bubblesort, Insertion Sort, Binary Search).

| Problema | Tema | Nivel |
|----------|------|-------|
| buscar en la lista | Bubblesort / Insertion Sort / Binary Search | 2-3 |
