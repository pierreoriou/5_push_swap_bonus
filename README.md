# PUSH SWAP ALGO TURC
---
### PREAMBULE :
> _Pour repondre aux attendus du projet, il faut faire le node que l'on va associer a la liste. Initialiser les valeurs, peut-etre, ouais je pense. Inserer dans la liste en modifiant au fur et a mesure: c-a-d push dans pb jusqu'a ce qu'il n'y ait plus que trois valeurs dans pa.
Trier pa. Ouais, trier c'est important. Passer en revue toute la liste pb.
Bah... ben voir... heu... le cout le plus faible.
Puree c'est complique!_

## PARSING :
1. Accepter plusieurs arguments ou bien split une seule chaine de caracteres.
2. __Free__ ce qui doit etre free et **imprimer Error\n** sur _le canal error (fd 2)_ s'il y a des erreurs.
3. Mettre tous les arguments dans un char **elem.
4. Gerer une seule chaine vide et une chaine qui ne contient que des espaces.
5. Trim les elements avec le set "\t\n\v\f ".
6. Prendre en compte les + et -.
7. Trim les 0.
8. Gerer les __int min__, les __int max__.
9. Gerer le double unsigned long long en min : __-18446744073709551614__ (strlen > 11).
9. Gerer les caracteres qui ne sont pas des digits.
10. Gerer les doublons.

## PREALABLE :
1. Definir la structure d'une liste chainee qui acceptera:
- __value__: une valeur (_int_).
- __index__: un index (_int_).
- __is_min__: un _boolean_ qui indique si la valeur est la valeur minimum de la pile.
- __is_max__: un _boolean_ qui indique si la valeur est la valeur maximum de la pile.
- __above_med__: un _boolean_ qui indique si l'index de la valeur est au dessus ou au dessous de la mediane.
- __cost__: un cout (_int_) qui indiquera la somme:
  - du nombre d'instructions necessaires pour mettre la valeur en haut de sa pile
  - __+__
  - le nombre d'instructions necessaires pour mettre sa cible (target) en haut de sa pile.
  - _sachant que les instructions devront privilegier les mouvements doubles autant que necessaire._
```
typedef struct s_node
{
	int			value;
	int			index;
	bool			is_min;
	bool			is_max;
	bool			above_med;
	int			cost;
	struct s_node		*next;
}					t_node;
```
2. Creer une pile a partir des valeurs de __elems__ (voir PARSING 3.).
3. Creer les fonctions pour executer les instructions en prenant en compte la mise a jour des contenus de la structure du node (upd_main_properties : indexes, is_min, is_max, above_med).
   - i_swap (et i_swap both)
   - i_rotate (et i_rotate both)
   - i_reverse_rotate (et i_reverse_rotate both)
   - i_push

## Part 0 :
1. Creer une fonction __analyze_pile__ pour trier la pile en fonction du nombre d'elements dans la pile.
Elle verifiera dans l'ordre :
    - si tout est deja dans l'ordre (numbers_in_order) ou s'il n'y a qu'une seule valeur dans la pile.
    - si la pile n'a que deux elements (swap).
    - si la pile n'a que trois elements, elle appellera __une fonction sort_three__ (i.e. sort in ascending order) le cas échéant.
Pour coder la fonction sort_three, le plus simple est de placer la valeur max en bas de la pile, puis, de swap les deux premiers si necessaire.
    - si la pile a plus de trois elements, la fonction turkish_algo sera utilisée.

## Part I : phase 1 du turkish algorithm
1. (exception) Si la liste a quatre elements, on push un seul node dans pb (i_push_a), sort_three pa, et repush dans pa (i_push_a) avant de passer à la dernière partie de l'algorithme (cf Part III)
2. Si la liste a plus de quatre elements, l'utilisation de l'algorithme sera toujours la même : Push deux nodes dans pb (i_push_b) et commencer à trier de la façon suivante :
3. Passer en revue toute la liste pa pour determiner le node de pa (i.e. the cheapest!) à push en pb (upd_cost, upd_is_cheapest ...).
4. Push en pb les nodes (cheapest) jusqu'a ce qu'il ne reste plus que 3 nodes en pa.
5. Trier les trois derniers nodes en pa (sort_three).

## Part II : phase 2 du turkish algorithm
1. Passer en revue toute la liste pb pour determiner le node a push en pa.

## Part III (end) : phase 3 du turkish algorithm
1. Etre sur qu'en pa, le node min soit en haut de la pile et le max soit en bas

## LES BONUS
