# Pilas

### Una pila es una estructura de datos de entradas ordenadas tales que solo se puede introducir y eliminar por un extremo, llamado cima.

- LIFO: Last in, First out.
- Primero en entrar es el último que sale.
- Se puede implementar como vector(pila estática). 
- Se puede implementar como lista enlazada(pila dinámica).
- Al igual que las colas, se separan las operaciones.
- ¿Esta vacía?: Comprobar si una pila tiene elementos.
- ¿Tamaño?: Obtener el número de elementos de la pila.

_Las operaciones usuales en la pila son insertar(push) que añade un elemento en la cima de la pila y la operación quitar(pop) elimina saca un elemento de la pila._

![](/00.-Sources/Images/Pilas.png)

## Forma de la pila

_La pila es una estructura que tiene nodos, y ese nodo tiene uno o más datos y el otro elemento de la estructura nodo es un puntero, ese puntero va a señalar a la posición de abajo de la pila, en el caso del primer nodo, su puntero siguiente va a señalar a NULL, es decir a la nada._

![](/00.-Sources/Images/Nodo-pila.png)

_La implementación en lenguaje C es:_

```C
struct Nodo
{
    int dato;
    Nodo *siguiente;
};
```

```c
struct Nodo {
    int dato;
    struct Nodo *next;
};
```
_Nodo de una pila_

```c
struct Nodo *top = NULL;
```

```c
void push(int dato) {
    struct Nodo *nuevo = (struct Nodo *) malloc(sizeof(struct Nodo));
    nuevo->dato = dato;
    nuevo->next = top;
    top = nuevo;
}
```

```c
int pop() {
    if (top == NULL) {
        printf("La pila esta vacia");
        return -1;
    }
    struct Nodo *aux = top;
    int dato = aux->dato;
    top = top->next;
    free(aux);
    return dato;
}
```


