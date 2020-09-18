#include <dia.h>
int main(){

int inp, tr1,tr2,tr3, leng,bre,rad,sq_side;
float tri_area, tri_per, rect_area, rect_per, cir_per, cir_area,sq_area,sq_per;
//printf("For Triangle #1\n    Rectangle #2\n    Cricle #3 ");
scanf("%d",&inp);
if(inp==1) {
        scanf("%d",&tr1);
        scanf("%d",&tr2);
        scanf("%d",&tr3);
        tri_area=triangle_area(tr1,tr2,tr3);
        tri_per=triangle_per(tr1,tr2,tr3);
        }

else if (inp==2) {
        scanf("%d",&sq_side);
        sq_area=square_area(sq_side);
        sq_per=square_per(sq_side);
        }
else if (inp==3){
        scanf("%d",&leng);
        scanf("%d",&bre);
        rect_area=rectangle_area(leng,bre);
        rect_per=rectangle_per(leng,bre);
}
else if (inp==4){
        scanf("%d",&cir_rad);
        cir_area=circle_area(cir_rad);
        cir_per=circle_per(cir_rad);
        }

else printf("\nWrong input")

}
