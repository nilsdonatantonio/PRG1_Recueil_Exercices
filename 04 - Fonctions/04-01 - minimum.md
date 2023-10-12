# min(a, b, c)
Ecrire une fonction `min` qui retourne le minimum de 3 valeurs reçues en paramètre.

Les instructions suivantes doivent être ppssibles ?

`int a = 5;`</br>
`int b = 2;`</br>
`int c = 9;`</br></br>
`cout << min(a, b, c);`</br>
`min(a, b, c) = 1;`</br>
`int& d = min(a, b, c);`

**NB** ne pas utiliser de `if`

<details>
<summary>Solution</summary>

~~~cpp

int& min(int& a, int& b, int& c) {
      return a < c ?
         a < c ? a : c :
         b < c ? b : c ;
}

~~~

</details>