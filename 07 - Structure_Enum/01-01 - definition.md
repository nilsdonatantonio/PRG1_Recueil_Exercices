# struct - définition
Indiquer si les définitions proposées sont correctes ou non.

1.

~~~cpp
struct Date {
   int jour, mois, annee;
}
//non, manque ";" à la fin
~~~

2.

~~~cpp
struct Date {
   int jour;
   int mois;
   int annee;
};
//correct
~~~

3.

~~~cpp
struct Date {
   int jour, mois, annee;
};
//non pas de ";"
~~~

4.

~~~cpp
struct Date {
   int jour; mois; annee;
};
//non pas de "; entre la déclaration des membres sur une seule ligne
~~~

5.

~~~cpp
struct {
   int valeur;
} date;
//correct
~~~

6.

~~~cpp
struct Vide {};
//correct
~~~

7.

~~~cpp
struct Struct {
   int  valeur;
   int* ptr = nullptr;
};
//correct
~~~

8.

~~~cpp
struct Struct {
   string text;
};
//correct
~~~

9.

~~~cpp
struct Details {
   int valeur;
};

struct Struct {
   char    car;
   Details details;
};
//correct
~~~

10.

~~~cpp
struct const Struct {
   int  valeur;
};
//non, pas de const struct
~~~

11.

~~~cpp
struct Struct {
   const char car = 'A';
};
//correct mais déconseillé de mettre des valeurs constantes dans des structures copiables
~~~

12.

~~~cpp
struct Struct {
   const char c;
};
//Same mais c doit être init
~~~


<details>
<summary> Solutions </summary>

| no | Réponse   | Commentaire                                                  |
|--- |---        |---                                                           |
| 1  | faux      | manque un `;` après `}`                                      |
| 2  | correct   | chaque type est spécifié                                     |
| 3  | correct   | le type est commun à tous les membres                        |
| 4  | faux      | les identifications sont séparés par des `;`                 |
| 5  | correct   | type *anonyme* et une variable `date`est créée               |
| 6  | correct   | un `struct` peut être vide                                   |
| 7  | correct   | `ptr`est initialisé ce qui est une bonne chose               |
| 8  | correct   | un `struc` peut contenir un `string`                         |
| 9  | correct   | un `struc` peut contenir un autre `struct`                   |
| 10 | faux      | un `struc` n'est pas constant globalement                    |
| 11 | correct   | un membre d'un `struc` peut être constant                    |
| 12 | correct   | mais une variable de ce type doit initialiser la constante c |

</details>
