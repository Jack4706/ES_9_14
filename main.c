#include <stdio.h>
#include "Perpendicolare.h"


int main()
{
    float m_1, m_2;

    printf("inserisci m1:\n");
    scanf("%f", &m_1);

    printf("inserisci m2:\n");
    scanf("%f", &m_2);

    if(perpendicolare(m_1, m_2)) {
        printf("perpendicolare\n");
    }
    else {
        printf("non perpendicolare\n");
    }

    return 0;
}
