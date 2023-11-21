# struct - accès aux membres
Soient les déclarations ci-dessous.

~~~cpp
struct Coord {
   int x, y, z;
};

struct Cercle {
   int   rayon;
   Coord centre;
};

const Coord origine = {0, 0, 0};
Cercle cercle = {1, {2, 3, 4}};
Cercle* ptr = &cercle;
~~~

Les instructions sont-elles correctes ?

1. `cout << cercle.rayon;`
//oui rayon est un élément de cercle
2. `cout << cercle->rayon;`
//non c'est ptr qu'il faut déréférencer
3. `cout << *(&cercle).rayon;`
4. // le point est prio sur "*" donc manque une parenthèse
4. `cercle.centre = origine;`
   //oui origine est de type Coord
5. `ptr.rayon = 2;`
    //non, il faut déréférencer
6. `*ptr.rayon = 2;`
//manque les parenthèses pour que le déréférencement soit prioritaire
7. `cercle.centre.x = 2;`
//oui
8. `ptr.centre.x = 2;`
//toujours pas
9. `Coord coord1 = cercle.centre;`
//oui centre est de type Coord
10. `Coord coord2 = ptr->centre;`
//oui ptr peut être déréférencé

<details>
<summary>Solutions</summary>

| no | Réponse   | Commentaire                                                                                                         |
|--- |---        |---                                                                                                                  |
| 1  | correct   | affiche le rayon => 1                                                                                               |
| 2  | faux      | remplacer l'opérateur `->` par un `.`                                                                               |
| 3  | faux      | selon la priorité des opérateurs, `.` est fait avant le `*`                                                         |
| 4  | correct   | le membre `centre` est affectée par les valeurs de `origine`                                                        |
| 5  | faux      | `ptr` n'a pas de membre, il faut d'abord le déréférencer</br>`(*ptr).rayon = 2;` ou `ptr->rayon = 2;`               |
| 6  | faux      | l'opérateur `.` est trop prioritaire</br>`(*ptr).rayon = 2;` ou `ptr->rayon = 2;`                                   |
| 7  | correct   | `cercle.centre` pour descendre dans `Coord` puis `.x` pour accéder au membre `x`.                                     |
| 8  | faux      | il faut déréférencer le `ptr`puis descendre dans la structure</br>`(*ptr).centre.x` ou `ptr->centre.x;`               |
| 9  | correct   | `cercle.centre` est utilisée pour initialiser `coord1`                                                               |
| 10 | correct   | `cercle.centre` pointée par `ptr` est utilisée pour initialiser `coord2`                                             |

</details>
