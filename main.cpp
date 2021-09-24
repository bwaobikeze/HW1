#include <iostream>
#include "BMP.h"
#include <cmath>
#include <iostream>
using namespace std;
int x,y,p,b;
BMP sety();
void drawRasterizerElipse();
int main() {

    BMP bmpNew(200,200,false);
    bmpNew.fill_region(0, 0, 200, 200, 0, 0, 0, 0);
    for(int i=0;i<bmpNew.bmp_info_header.width;i++)
    {
        bmpNew.set_pixel(i, 100, 255, 255, 255, 0);
    }
    bmpNew.write("output.bmp");
drawRasterizerElipse();

}

// int solvingForY(){
// for(x=0 ;  ;x++){
//   y=3*sqrt((128+x)*(128-x));
//   cout<< y;
  
// }
// }

// int solvIngforX(){

// }

int MaxofY=800;

void drawRasterizerElipse(){
for(x=0 ; x<800; x++){
  y=3*sqrt((128+x)*(128-x));
  if(y<&&y>0){
    cout<< y ;
  }
 
  
}
  
}