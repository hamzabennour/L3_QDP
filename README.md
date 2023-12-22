#Documentation du projet

## utilisation de la bibliothèque pdcurses

```bash
- installation des paquet dans Mingw
    mingw32-libncurses (dll)
    mingw32-libncurses (dev)
    mingw32-libpdcurses (dll)
    mingw32-libpdcurses (dev)
```

## Executer le projet 

```bash
-compilation du projet avec la commande 
    "g++ main.c -lpdcurses"
```

## initialiser un dépot

```bash
git init
git remote add origin ssh_du_depots
```
## Envoyer un comit sur un depôt distant
```bash
git add
git commit -m "Titre du comite"
git push origin nom_de la branche (ici develop)
```
## Creation d'une Branche
```bash
git checkout -b nom_de_la_branche
```
## Definir vos paramètres personnel
```bash
git config user.name "Nom_utilisateur"
git config user.email "email_uha"
```
