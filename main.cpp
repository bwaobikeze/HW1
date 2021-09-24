// https://meet.google.com/ocr-vrnd-xco
#include <iostream>
#include <list>
#include "BMP.h"
#include <cmath>
// temp libraries
using namespace std;
// init view
BMP bmpNew(400,400,false);
// global vars
int p,b, locMax=bmpNew.bmp_info_header.height;
list<int>yCordList = {};
list<int>xCordList = {};
// function declarations
void solvingForY();
void solvIngforX();
int getX(int yCord);
int getY(int xCord);
void printLists();
void drawRasterizerElipse();
// library
//BMP sety();

// main
int main() {
  // call init functions for y and x
  solvingForY();
  solvIngforX();
  // printLists();

  // draw BG
  bmpNew.fill_region(0, 0, 200, 200, 0, 0, 0, 0);
  // draw x white line
  for(int i=0;i<bmpNew.bmp_info_header.width;i++)
  {
      bmpNew.set_pixel(i, 200, 225, 225, 255, 0);
  }
  // draw y white line
    for(int i=0;i<bmpNew.bmp_info_header.height;i++)
  {
      bmpNew.set_pixel(200, i, 225, 225, 255, 0);
  }
  // draw elipse
  drawRasterizerElipse();
  bmpNew.write("output.bmp");
}

// adds all y values for given x
void solvingForY(){
  cout<<"solving for y array"<<endl;
  for(int i=0;i<locMax;i++){
    yCordList.push_back(getY(i));
  }
}

// adds all x values for given y
void solvIngforX(){
cout<<"solving for x array"<<endl;
  for(int i=0; i<locMax;i++){
    xCordList.push_back(getX(i));
  }
}

// gets X for given Y
int getX(int yCord){
  // cout<<"Getting x for y=" + to_string(yCord)<<endl;
  try{
      return sqrt((384+yCord)*(384-yCord))/3;
    }catch (const char* message) { 
      cout << message << endl;
      return NAN;
    }
}

// gets Y for given X
int getY(int xCord){
  // cout<<"Getting Y for x=" + to_string(xCord)<<endl;
  try{
      return cbrt((128+xCord)*(128-xCord));
    }catch (const char* message) { 
      cout << message << endl;
      return NAN;
    }
}

// print all items in xCordList and yCordList
void printLists(){
int locItr = 0;
list <int> :: iterator xListItr = xCordList.begin();
list <int> :: iterator yListItr =  yCordList.begin();
cout<< "#:x:y" <<endl;
while(yListItr != yCordList.end()){
  cout<<to_string(locItr) + ":";
  cout<< to_string(*xListItr) + ":";
  cout<< to_string(*yListItr) <<endl;
    xListItr++;
    yListItr++;
    locItr++;
  }
}

void drawRasterizerElipse(){
  cout<<"Drawing elipse for width:" + to_string(bmpNew.bmp_info_header.width) + " height:" + to_string(bmpNew.bmp_info_header.height)<<endl;
  int i = 200;
  list <int> :: iterator xListItr = xCordList.begin();
  while(xListItr != xCordList.end() ){
    if(*xListItr + 200 < bmpNew.bmp_info_header.width && i + 200 < bmpNew.bmp_info_header.height){
      bmpNew.set_pixel(*xListItr , i , 225, 100, 255, 0);
      }
    xListItr++;
    i++;
  }
    
}