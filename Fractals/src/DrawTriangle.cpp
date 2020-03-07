#include "error.h"

#include "gwindow.h"
#include <cmath>
using namespace std;
void DrawTriangle(double x1, double y1, double side, GWindow &gw){

    gw.drawLine(x1,y1,x1+side,y1);
    gw.drawLine(x1,y1,x1+0.5*side,y1+sqrt(3)*side/2);
    gw.drawLine(x1+side,y1,x1+0.5*side,y1+sqrt(3)*side/2);
}
