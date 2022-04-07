# Raspberry PI
# Table des matières
- [Présentation](#pres)
- [Initialisation](#init)
- [Utilisation](#usage)
- [Documentation](#docu)
- [Auteur](#auteur)

# <a name="pres"/> Présentation


# <a name="init"/> Initialisation
1) Formater la carte sd et se connecter en SSH à la raspberry<br>
-> [Initialisation de la Raspberry PI](https://github.com/HandiMouv/Presentation-Generale/blob/main/DOCUMENTATION/Configuration%20Raspberry%20PI.pdf)<br>
2) Une fois connecter en ssh. Se placer dans le repertoir ci dessous<br>
```bash
cd /etc
```
3) Clone le repo<br>
```bash
git clone https://github.com/MoveAndGo/RaspberryPI MoveAndGo
```

# <a name="usage"/> Utilisation
1) Se rendre dans le répertoir<br>
```bash
cd /etc/MoveAndGo
```
2) Compiler main.c<br>
```bash
sudo gcc -o main main.c -lwiringPi -lrt -lpthread -lm -lrt -lcrypt -lbluetooth
```
3) Executer le programme
```bash
sudo ./main
```

# <a name="docu"/> Documentation
**Comment formater une carte SD pour la Raspberry PI ? Vous y connecter par SSH ? Changer d'accès WIFI ?**<br>
-> [Initialisation de la Raspberry PI](https://github.com/HandiMouv/Presentation-Generale/blob/main/DOCUMENTATION/Configuration%20Raspberry%20PI.pdf)<br>
**Comment la Raspberry PI receptionne les données bluetooth ? Comment elle emet des sockets ? Comment l'odinateur receptionne les sockets ?**<br>
-> [Connexions de la Raspberry PI](https://github.com/MoveAndGo/Presentation-Generale/blob/main/DOCUMENTATION/Connexions%20Raspberry%20PI.pdf)

# <a name="auteur"/> Auteur
Charles SAISON<br>
Romain BARRERE<br>
Henri PETRELLI<br>
