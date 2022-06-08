#include <stdio.h>

int main(){
    int 
    rx1, ry1, vx1, vy1, m1,
    rx2, ry2, vx2, vy2, m2,
    rx3, ry3, vx3, vy3, m3,
    dt, t_tot;
    scanf("%d %d %d %d %d\n%d %d %d %d %d\n%d %d %d %d %d\n%d\n%d",
    &rx1, &ry1, &vx1, &vy1, &m1,
    &rx2, &ry2, &vx2, &vy2, &m2,
    &rx3, &ry3, &vx3, &vy3, &m3,
    &dt, &t_tot);
    printf("rx1 eh %d, ry1 eh %d, vx1 eh %d, vy1 eh %d, m1 eh %d, rx2 eh %d, m3 eh %d, dt eh %d, t_tot eh %d\n",
    rx1, ry1, vx1, vy1, m1, rx2, m3, dt, t_tot);
    return 0;
}