#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
    typedef struct {
        float x1, x2, y1, y2, dist;
    }calculo;
    
    scanf("%f %f %f %f", &calculo.x1, &calculo.x2, &calculo.y1, &calculo.y2);
    struct calculo.dist = ((x2-x1)*(x2-x1))+((y2-y1)+(y2-y1));
    struct calculo.dist = sqrt(calculo.dist);
    
    return 0;
}