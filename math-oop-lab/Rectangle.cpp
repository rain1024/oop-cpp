#include "stdafx.h"
#include "Rectangle.h"


void Rectangle::set_values(int w, int h){
	width = w;
	height = h;
}

int Rectangle::get_area(){
	return width * height;
}

