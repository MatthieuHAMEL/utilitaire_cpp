# HappyChrono, le chrono qui donne le smile

HappyChrono est un chronomètre très simple qui mesure les performances d'un bloc de code en utilisant des marqueurs.

Il évite d'avoir à étudier la bibliothèque std::chrono ou à copier-coller une solution un peu compliquée.

## Compilation

Le fichier main.cpp est un exemple d'utilisation du chrono, et le Makefile est également donné à titre d'exemple.

HappyChrono.cpp et .hpp peuvent être plus simplement inclus à un système de compilation type CMake.

## Utilisation 

Dans le code source, il suffit de placer les marqueurs où on le souhaite :

```cpp

// (...)

une_instruction();

HappyChrono hc;

hc.mark("Mon marqueur");

// Bloc de code dont on veut mesurer la durée d'exécution

hc.mark("Second marqueur");

// Autre bloc de code

hc.mark("Autre marqueur");

cout << hc;

// (...)
```
L'affichage de "hc" indiquera la durée en millisecondes écoulée entre le premier et le deuxième marqueur, puis entre le deuxième et le troisième.

Consulter main.cpp pour un exemple simple.
