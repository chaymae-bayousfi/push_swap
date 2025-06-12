# 🚀 push_swap

Bienvenue dans le projet **push_swap** !  
Ce projet a pour but de trier une pile d'entiers à l'aide d'un nombre limité d'opérations et d’optimiser le nombre de coups joués.  
Challenge incontournable de l’école 42, il met à l’épreuve vos compétences en algorithmie et en gestion de la mémoire.  

---

## 📝 Sommaire

- [Présentation](#présentation)
- [Fonctionnalités](#fonctionnalités)
- [Installation](#installation)
- [Utilisation](#utilisation)
- [Exemples d'interaction](#exemples-dinteraction)
- [Liste des opérations](#liste-des-opérations)
- [Tests et bonus](#tests-et-bonus)
- [Astuces & Ressources](#astuces--ressources)
- [Auteur](#auteur)

---

## 🎯 Présentation

Le projet consiste à trier une liste de nombres entiers, reçue en argument, en utilisant deux piles (A et B) et un ensemble restreint d’opérations.  
Le but ultime est de **minimiser le nombre d’opérations** nécessaires pour parvenir à un tableau trié.

---

## ⚡ Fonctionnalités

- Tri optimisé pour petits et grands ensembles d'entiers
- Gestion des erreurs d'input (valeurs non entières, doublons, etc.)
- Utilisation efficace de la mémoire (libération dynamique)
- Script de test pour explorer les cas limites

---

## 🛠️ Installation

```bash
git clone https://github.com/chaymae-bayousfi/push_swap.git
cd push_swap/push_swap
make
```

---

## 🕹️ Utilisation

Lancez le programme avec une liste de nombres à trier :

```bash
./push_swap 4 67 3 87 23
```

Le programme affiche sur la sortie standard la liste des opérations à effectuer pour trier la pile.

---

## 🤝 Exemples d'interaction

### ➡️ Exécution de base
```bash
./push_swap 2 1 3
```
Affiche par exemple :
```
sa
```

### ➡️ Tester toutes les permutations de 3 éléments (bonus)
Un script de test est fourni :
```bash
bash elkess_test.sh
```

### ➡️ Compter le nombre d'opérations
```bash
ARG="4 2 3 1"; ./push_swap $ARG | wc -l
```

---

## 🪄 Liste des opérations

| Opération | Description                |
|-----------|---------------------------|
| sa        | Swap les 2 premiers de A  |
| sb        | Swap les 2 premiers de B  |
| ss        | sa + sb                   |
| pa        | Push de B vers A          |
| pb        | Push de A vers B          |
| ra        | Rotate A vers le haut     |
| rb        | Rotate B vers le haut     |
| rr        | ra + rb                   |
| rra       | Rotate A vers le bas      |
| rrb       | Rotate B vers le bas      |
| rrr       | rra + rrb                 |

---

## 🧪 Tests et bonus

Un script `elkess_test.sh` coloré et interactif permet de tester différentes permutations et de trouver des cas difficiles :  
```bash
bash elkess_test.sh
```
---

## 👩‍💻 Auteur

- [Chaymae Bayousfi](https://github.com/chaymae-bayousfi)  
Projet réalisé dans le cadre du cursus 42.

---

<p align="center">
  <img src="https://img.shields.io/badge/42-push_swap-blue?style=flat-square&logo=42&logoColor=white"/>
  <br><br>
  <b>Happy Sorting! 🚦</b>
</p>
