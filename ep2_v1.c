#include <stdio.h>
#include <math.h>

double
    G=6.67e-11,
    rx=1.49e11,
    ry=0.0,
    m1=5.972e24,
    m0=1.9885e30,
    vx=0.0,
    vy=pow(6.67e-11*1.9885e30/1.49e11, 0.5),
    dt = 3600.0,
    t_tot = 61104000.0;

double
    *prx = &rx,
    *pry = &ry,
    *pvx = &vx,
    *pvy = &vy;

double dist(double p1x, double p2x){
    return pow(p1x * p1x + p2x * p2x, 0.5);
}

double forca(char c, double x, double y){
    if (c='x'){
        return -G*m0*m1/(x*x);
    }
    if (c='y'){
        return -G*m0*m1/(y*y);
    }
}

void atualize(double *x, double *y, double *vx, double *vy, double ax, double ay, double dt){
    *x = *x + *vx * dt;
    *y = *y + *vy * dt;
    *vx = *vx + ax * dt;
    *vy = *vy + ay * dt;
}

int main(){

    /*char x,y;*/

    /*double result = forca('x', rx, ry);
    printf("%lf\n", result);*/


    /*printf("%lf\n", ry);*/

    int t;

    for (t=0; t < t_tot;){
        printf("%lf %lf\n", rx, ry);
        t = t + dt;

        atualize(prx, pry, pvx, pvy, forca('x', rx, ry)/m1, forca('y', rx, ry)/m1, dt);
    }
    return 0;
}