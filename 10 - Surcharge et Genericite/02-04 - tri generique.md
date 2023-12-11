# Tri générique

Soient les tabeaux déclarés

~~~cpp
vector v      {6, 2, 8, 7, 1, 3};
array  a      {"chien"s, "chat"s, "souris"s, "poisson"s};
double t[ ] = {6.1, 2.2, 8.3, 7.4, 1.5, 3.6};
~~~

Trier ces tableaux en utilisant le tri par *sélection*.<br>
Les tableaux seront affichés avant et après le tri par le programme principal.

~~~
[6, 2, 8, 7, 1, 3]
[1, 2, 3, 6, 7, 8]

[chien, chat, souris, poisson]
[chat, chien, poisson, souris]

[6.1, 2.2, 8.3, 7.4, 1.5, 3.6]
[1.5, 2.2, 3.6, 6.1, 7.4, 8.3]
~~~

<details>
<summary>Solution</summary>

~~~cpp
#include <iostream>
#include <vector>
#include <span>

using namespace std;

template <typename T>
size_t indice_min(span<const T> s) {
   size_t iMin = 0;
   for (size_t i = 1; i < s.size(); ++i)
      if (s[i] < s[iMin])
         iMin = i;
   return iMin;
}

template <typename T>
void tri_par_selection(span<T> v) {
   for (size_t i = 0; i < v.size()-1 ; ++i) {
      size_t imin = i + indice_min<T>(v.subspan(i));
      swap(v[i], v[imin]);
   }
}

template <typename T>
void afficher(span<const T> s) {
   cout << "[";
   for (size_t i = 0; i < s.size(); ++i) {
      if (i) cout << ", ";
      cout << s[i];
   }
   cout << "]";
}

int main() {
   vector v     {6, 2, 8, 7, 1, 3};
   array  a     {"chien"s, "chat"s, "souris"s, "poisson"s};
   double t[] = {6.1, 2.2, 8.3, 7.4, 1.5, 3.6};

   afficher<const int>(v);
   tri_par_selection<int>(v);
   cout << endl;
   afficher<const int>(v);
   cout << endl << endl;

   afficher<const string>(a);
   tri_par_selection<string>(a);
   cout << endl;
   afficher<const string>(a);
   cout << endl << endl;

   afficher<const double>(t);
   tri_par_selection<double>(t);
   cout << endl;
   afficher<const double>(t);
}
~~~

</details>


