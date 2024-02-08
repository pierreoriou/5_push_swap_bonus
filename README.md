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
9. Gerer les caracteres qui ne sont pas des digits (donc, y compris un element qui ne contient qu'un caractere nul).
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
  - _sachant que les instructions devront privilegier les mouvements doubles (rr, rrr)._
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
2. Creer une pile a partir (fonction __fill_pile__) des valeurs de __elems__ (voir PARSING 3.).
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
1. (exception) Si la _pile a_ n'a que quatre elements, on push un seul node dans la _pile b_ (i_push_b), __sort_three__ la _pile a_, et repush dans la _pile a_ (i_push_a) avant de passer à la dernière partie de l'algorithme (cf _Part III, derniere phase du turkish algorithm_).
2. Si la liste a plus de quatre elements, l'utilisation de l'algorithme sera toujours la même : __Push dans la pile b l'element le plus rapide a trier (aka the cheapest), et par la meme occasion trier au fur et a mesure la pile b__ jusqu'a ce qu'il ne reste plus que trois elements a __sort_three__ dans la _pile a_. Ce qui veut dire que :
    - Chaque element de la _pile a_ a un node cible (target) dans la _pile b_. Le node cible (target) est celui dont la valeur est a la fois plus __petite__ que la valeur du node en _pile a_ et la plus proche possible de la valeur du node en _pile a_ (fonction __determine_target_under)__; ou bien, si aucune valeur n'est plus petite dans la _pile b_, le node cible (target) sera celui dont la valeur est _is_max_ dans la _pile b_ (fonction __determine_max__).
    - Avant de push un element d'une pile dans une autre pile, il faudra compter le nombre d'operations minimum (cost) pour mettre les deux elements (the cheapest and its target (aka node cible)) en haut de leurs propres piles (la fonction upd_cost modifiera le parametre _cost_ de chaque node) de sorte a ce que suite au push dans la _pile b_, les deux elements aient deja fait l'objet d'un premier tri.
    - Pour trouver le cout, il faudra :
        - determiner la mediane de la pile ((lstsize + 1) / 2)
        - compter le nombre de i_rotate ou i_reverse_rotate en fonction de leur placement par rapport a la mediane, pour mettre les nodes (the cheapest and its target (aka node cible)) en haut de leur pile.
        - il faudra utiliser autant que possible les i_rotate_both et i_reverse_rotate_both.
    - Une fois les couts des differents nodes mis a jour, il sera possible de determiner le node a push (the cheapest) avec la fonction determine_cheapest, et effectuer toutes les instructions pour mettre les deux nodes (the cheapest and its target) en haut de leurs piles (fonction putontop_bef_pb).

## Part II : phase 2 du turkish algorithm
1. Une fois que les trois derniers nodes en _pile_a_ sont tries, il s'agira de: __Push dans pa l'element le plus rapide a trier (aka the cheapest), et par la meme occasion trier au fur et a mesure la pile a__ jusqu'a ce qu'il ne reste plus aucun node dans la _pile b_. Ce qui veut dire que :
    - Chaque element de la _pile b_ a un node cible (target) dans la _pile a_. Le node cible (target) est celui dont la valeur est a la fois plus __grande__ que la valeur du node en _pile b_ et la plus proche possible de la valeur du node en _pile b_ (fonction __determine_target_above)__; ou bien, si aucune valeur n'est plus grande dans la _pile a_, le node cible sera celui dont la valeur est _is_min_ dans la _pile a_ (fonction __determine_min__).
    - Avant de push un element d'une pile dans une autre pile, il faudra compter le nombre d'operations minimum (cost) pour mettre les deux elements (the cheapest and its target (aka node cible)) en haut de leurs propres piles (la fonction upd_cost modifiera le parametre _cost_ de chaque node).
    - Pour trouver le cout, il faudra :
        - determiner la mediane de la pile ((lstsize + 1) / 2)
        - utiliser i_rotate ou i_reverse_rotate en fonction du placement des nodes (the cheapest and its target (aka node cible)) par rapport a leur mediane, pour mettre les nodes en haut de leur pile.
        - il faudra utiliser autant que possible les i_rotate_both et i_reverse_rotate_both.
    - Une fois les couts des differents nodes mis a jour, il sera possible de determiner le node a push (the cheapest) avec la fonction determine_cheapest, et effectuer toutes les instructions pour mettre les deux nodes (the cheapest and its target) en haut de leurs piles (fonction putontop_bef_pa).

## Part III (end) : phase 3 du turkish algorithm
1. A ce stade, il n'y a plus aucun node dans la _pile b_, mais il restera un dernier tri a faire; celui-ci consistera a mettre la valeur __min__ en haut de la pile. Si l'index du node _is_min_ est au dessus de la mediane, il faudra __i_rotate__, et si l'index du node _is_min_ est au dessous de la mediane, il faudra __i_reverse_rotate__.

### Verifier avec le checker_linux
1. Telecharger sur l'intra le checker_linux.
2. Changer les droit du programme pour autoriser les executions (chmod +x)
3. Mettre le programme dans le dossier push_swap.
4. Compiler le programme et le tester avec la ligne de commande suivante :
```
ARGS="231 56 89"; ./push_swap $ARGS | ./checker_linux $ARGS
```
5. S'il y a une erreur, "Error" s'affichera deux fois (une fois depuis push_swap et une fois depuis le programme). Si la pile n'est pas triee, "OK\n" apparaitra sur la sortie standard, sinon "KO".

## BONUS : LE CHECKER
Pour faire le bonus, il s'agira de creer un dossier "Checker", dans lequel nous creerons un programme qui affichera _Error\n_, _OK\n_ ou _KO\n_ en fonction des arguments qui sont passes et des instructions effectuees.
### LE FONCTIONNEMENT DU CHECKER
1. Verifier les erreurs parmi les arguments communiques et prealablement mis dans un char **elems (le parsing similaire identique au precedentm cf is_error.c). Il faudra imprimer _Error\n_ si le parsing echoue.
2. Garder les instructions dans une pile (fonction __stash_instructions__)
```
typedef struct s_inst
{
	char			*inst;
	struct s_inst	*next;
}					t_inst;
```
3. Creer une pile a partir (fonction __fill_pile__) des valeurs de __elems__.
```
typedef struct s_node
{
	int				value;
	struct s_node	*next;
}					t_node;
```
4. Executer les instructions stockees sur les elements de la pile et
    - verifier l'ordre de la _pile a_
    - verifier si la _pile b_ est vide
5. Imprimer _OK\n_ si tout est dans l'ordre, ou _KO\n_ dans le cas contraire.
### L'UTILISATION DU CHECKER
L'utilisation du checker est la suivante:
```
// Pour compiler avec le checker :
make bonus
./checker 12 84 56
```
A ce stade, il faudra rentrer les instructions les unes apres les autres(valides, sinon _Error\n_ s'affichera sur la sortie standard). Pour terminer l'entree des instructions, il faudra faire "CTR + D"
```
rra (puis Entree)
sa (puis Entree)
CTR + D
```

### EXTRA
Pour tester soi-meme le projet avec bonus, il est possible d'utiliser cette ligne de commande.
```
MAX=5; ARG="$(shuf -i 0-$MAX -n$MAX | tr '\n' ' ')" ; valgrind ./push_swap $ARG | ./checker $ARG ; ./push_swap $ARG | ./checker_linux $ARG ; ./push_swap $ARG | wc -l
```

