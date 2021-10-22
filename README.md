# 6GEI311_Lab2

## Description
Cours: 6GEI311 - Architecture des Logiciels

Laboratoire 2: Création d'un module python en C/C++

Auteurs: Raphaëlle Martin (MARR24569507) et David-Emmanuel Perron-Chouinard (PERD17119702)

## Instructions d'utilisation:

Avant d'exécuter le programme:

-Aller dans le fichier lab2.py à la ligne #23

-Modifier la ligne afin qu'elle contienne l'emplacement du ficher "Exemple.vi",voir exemple ci-dessous:

	Lab2.Start("", "PATH_TO_FILE/Example.avi")

-Toujours dans le fichier lab2.py, aller à la ligne #5

-Modifier la ligne afin qu'elle contienne l'emplacement du dossier "Release", voir exemple ci-dessous:

	sys.path.append("PATH_TO_FOLDER/6GEI311_lab2/x64/Release")


## Instructions de compilation (facultatif):
Le programme est compilé directement dans Visual Studio. 
Il ne devrait pas être nécessaire de recompiler la librairie C++ dans Visual Studio. 

Les instructions de configuration sont tout de même fournis ci-dessous en cas de besoin.

Veuillez vous assurer d'être en mode "Release"
	
-Clique droit sur "6GEI311_lab2" et aller dans properties
	
-General -> configuration type = dynamic librairy (.dll)
	
-General -> Target Name = Lab2
	
-Advanced -> target file extension = .pyd
	
-VC++ directories -> include directories: ajouter le path vers le dossier "include" de Python
	
-VC++ directories -> librairy directories: ajouter le path vers le dossier "libs" de Python

## Dépendances:
L'utilisateur doit avoir "DirectShow" et "Python 3" installé sur son ordinateur. Aussi, il doit avoir le module Python "keyboard".


## Guide d'utilisation
Le programme doit être exécuté avec python, en ouvrant un indice de commande et en entrant la commande suivante:

	python PATH_TO_FILE
	
Cette commande peut varier selon votre installation de Python
Lors de l'exécution du programme les commandes: P, A, R et Q peuvent être entrées dans la console exécutant le programme.

Appuyer sur la touche P pause la vidéo si elle jouait et la fait jouer si elle était pausée
Appuyer sur la touche A met la vitesse de la vidéo à 2x le rythme normal si elle était au rythme normal. Si la vidéo était déjà accélérée, cette touche remet sa vitesse à la normale
Appuyer sur la touche R recommence la vidéo au début
Appuyer sur la touche Q ferme le programme
