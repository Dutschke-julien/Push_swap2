#include "PushSwap.hpp"

void PushSwap::bubbleSort()
{
   // Boucle sur chaque élément de la pile
    for (int i = 0; i < stack_a.size(); i++)
    {
        // Indicateur pour vérifier si un échange a eu lieu lors de ce passage
        bool swapped = false;

        // Boucle sur les éléments non triés restants de la pile
        for (int j = 0; j < stack_a.size() - i; j++)
        {
            // Si les deux premiers éléments sont dans le mauvais ordre, les échanger
            if (stack_a.front() > stack_a[1])
            {
                sa();
                swapped = true;
            }
            // Faire tourner la pile pour amener le prochain élément non trié en haut
            ra();
        }

        // Faire tourner la pile dans l'autre sens pour remettre le plus grand élément non trié en bas
        for (int j = 0; j < stack_a.size() - i; j++)
            rra();

        // Si aucun échange n'a eu lieu lors de ce passage, la pile est triée
        if (!swapped)
            break;
    }
}