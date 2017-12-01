# Numkinch

Projet de Programmation Orientée Objet Avancée, dans le cadre d'un semestre académique en informatique à l'UQAC.

## Description

Numkinch est un jeu de rôle / jeu de cartes 2D multi-joueurs en local s'inspirant vaguement du jeu de société Munchkin créé par Steve Jackson.

### Règles

À chaque tour blablabla.

## Équipe

Chloé Belguermi & Damien Haurat.

### Processus de développement

#### Spécifications

Nous avons rédigé les scénarios / cas d'utilisation du programme en amont du développement.

Le diagramme de cas d'utilisation est disponible dans le dossier `doc`.

#### Développement

Nous avons travaillé en ***pair-programming*** avec l'IDE CLion, sous environnements Linux et Mac.

#### Documentation

Une documentation Doxygen (http://www.stack.nl/~dimitri/doxygen/) a été générée à partir des commentaires présents dans le code. Elle recense toutes les classes avec leur hiérarchie.

Sous forme de pages HTML, la documentation permet de visualiser les membres et méthodes de chaque classe, ainsi que son diagramme de dépendances.

Pour la consulter, aller dans le dossier `doc/html`, trouver et ouvrir le fichier `index.html` (oui, il y a effectivement beaucoup de fichiers...).

**Visualisation du diagramme de classes :** ouvrir `index.html`, aller à l'onglet *Classes* puis cliquer sur *Class hierarchy*.

## Compilation des sources

### Prérequis

* Bibliothèque graphique SDL2 (voir section suivante pour l'installation).
* Moteur de production CMake.
* Outil Make.

### Installation de la SDL et de ses extensions

#### Sous macOS

Télécharger les images-disques de `SDL2`, `SDL2_image` et `SDL2_ttf` aux adresses suivantes :

https://www.libsdl.org/download-2.0.php
https://www.libsdl.org/projects/SDL_image/
https://www.libsdl.org/projects/SDL_ttf/

Ces images-disques contiennent chacune un fichier `.framework` qu'il suffit de déplacer dans le dossier `/Library/Frameworks`.

#### Sous Linux Ubuntu

Installer les paquetages `SDL2`, `SDL2_image` et `SDL2_ttf` suivants :

`sudo apt install libsdl2-dev`

`sudo apt install libsdl2-image-dev`

`sudo apt install libsdl2-ttf-dev`

(attention à bien choisir la version finissant par `dev`).

### Construction du projet (Linux et macOS)

Le dossier racine contient un fichier `CMakeLists.txt` pour construire le projet. Dans le dossier racine, lancer la commande suivante :

`cmake .`

Un `Makefile` est alors généré. Pour produire l'exécutable, lancer la commande suivante, toujours dans le dossier racine :

`make`

Un exécutable nommé `Numkinch` sera généré. Pour le lancer, saisir simplement la commande suivante :

`./Numkinch`

### Utilisation

* En cliquant sur « Nouvelle Partie », il se peut que le programme mette quelques secondes à répondre. Ne pas tenter de re-cliquer sur le bouton.
* Il peut être également possible que le programme plante après avoir cliqué sur « Jouer », la première fois qu'on l'utilise. Dans ce cas, relancer le programme et ré-essayer, le plantage ne devrait pas arriver de nouveau.

### Résolution d'écran

Le programme a été testé avec une résolution d'écran de 1 920 x 1 080.

Si vous possédez un Mac avec écran Retina, il peut être nécessaire de modifier la résolution pour que le jeu s'affiche correctement :

aller dans *Préférences Système > Moniteurs*, cocher l'option « Résolution à l'échelle » et choisir l'option « Plus d'espace ». Le texte devrait apparaître plus petit.