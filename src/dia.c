#include<dia.h>
#include<math.h>

int avgSide=0;
int triangle_area(int p1, int p2, int p3){
    avgSide=(p1+p2+p3)/3;
    return sqrt(avgSide*(avgSide-p1)*(avgSide-p2)*(avgSide-p3));
    }
int triangle_per(int p1, int p2, int p3){
    return p1+p2+p3;
    }
int square_area(int p1)
    {return p1*p1;}
int square_per(int p1)
    {return 4*p1;}
int rectangle_area(int p1, int p2)
    {return p1*p2;}
int rectangle_per(int p1, int p2)
    {return 2*p1+2*p2;}
int circle_area(int p1)
    {return 3.14*p1*p1;}
int circle_per(int p1)
    {return 2*3.14*p1;}
