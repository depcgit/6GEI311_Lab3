# 6GEI311_Lab3

## Description
Cours: 6GEI311 - Architecture des Logiciels

Laboratoire 3: Création d'un interface en Python

Auteurs: Raphaëlle Martin (MARR24569507) et David-Emmanuel Perron-Chouinard (PERD17119702)

## Instructions d'utilisation:

Avant d'exécuter le programme:

-Aller dans le fichier lab3.py à la ligne #6

-Modifier la ligne afin qu'elle contienne l'emplacement du dossier "Release", voir exemple ci-dessous:

	sys.path.append("PATH_TO_FOLDER/6GEI311_lab3/x64/Release")


## Instructions de compilation (facultatif):
Le programme est compilé directement dans Visual Studio, en mode Release x64. 
Il ne devrait pas être nécessaire de recompiler la librairie C++ dans Visual Studio. 

Les instructions de configuration sont tout de même fournis ci-dessous en cas de besoin.

Veuillez vous assurer d'être en mode "Release" et "x64"
	
-Clique droit sur "6GEI311_lab3" et aller dans properties
	
-General -> configuration type = dynamic librairy (.dll)
	
-General -> Target Name = Lab2
	
-Advanced -> Target Tile Extension = .pyd

-Advanced -> Character set = Use Multi-Byte Character Set
	
-VC++ directories -> include directories: ajouter le path vers le dossier "include" de Python
	
-VC++ directories -> librairy directories: ajouter le path vers le dossier "libs" de Python

-Linker ->Input -> Additional Dependencies: ajouter "Strmiids.lib;" au début de l'entrée

## Dépendances:
L'utilisateur doit avoir "DirectShow" et "Python 3" installé sur son ordinateur.


## Guide d'utilisation
Le programme doit être exécuté avec python, en ouvrant un indice de commande et en entrant la commande suivante:

	python PATH_TO_FILE
	
Cette commande peut varier selon votre installation de Python
Lors de l'exécution du programme, appuyer sur "Ouvrir un fichier" et aller selectionner un fichier vidéo.

Appuyer sur le bouton "Play / Pause" pause la vidéo si elle jouait et la fait jouer si elle était pausée
Appuyer sur le bouton "Accelerate" met la vitesse de la vidéo à 2x le rythme normal si elle était au rythme normal. Si la vidéo était déjà accélérée, cette touche remet sa vitesse à la normale
Appuyer sur le bouton "Replay" recommence la vidéo au début
Appuyer sur le bouton "Quit" ou sur le "X" en-haut à droite de la fenêtre ferme le programme
