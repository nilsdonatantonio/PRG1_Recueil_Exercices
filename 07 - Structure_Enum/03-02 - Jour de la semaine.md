# Jour de la semaine

Le code ci-dessous, doit afficher le jour de la semaine.

Compléter ce code pour le rendre fonctionnel.

~~~cpp
enum class Jour {LUNDI, MARDI, MERCREDI, JEUDI,
                 VENDREDI, SAMEDI, DIMANCHE};

Jour jour = SAMEDI ;      // LUNDI par exemple
string chaine = "jour de la semaine : ";
switch(jour) {
   case LUNDI: chaine += "lundi";
   case MARDI : chaine += "mardi";
   case MERCREDI : chaine += "mercredi";
   case JEUDI : chaine += "jeudi";
   case VENDREDI : chaine += "vendredi";
   case SAMEDI : chaine += "samedi";
   case DIMANCHE : chaine += "dimanche";
   default : chaine = "jour inconnu";
}
cout << chaine << endl;
~~~

<details>
<summary>Solution</summary>

~~~cpp
enum class Jour {LUNDI, MARDI, MERCREDI, JEUDI,
                    VENDREDI, SAMEDI, DIMANCHE};

Jour jour = Jour::LUNDI;      // LUNDI par exemple

string chaine = "jour de la semaine : ";
switch(jour) {
   case Jour::LUNDI     : chaine += "lundi";    break;
   case Jour::MARDI     : chaine += "mardi";    break;
   case Jour::MERCREDI  : chaine += "mercredi"; break;
   case Jour::JEUDI     : chaine += "jeudi";    break;
   case Jour::VENDREDI  : chaine += "vendredi"; break;
   case Jour::SAMEDI    : chaine += "samedi";   break;
   case Jour::DIMANCHE  : chaine += "dimanche"; break;
   default : chaine = "jour inconnu";
}
cout << chaine << endl;
~~~
</details>

