#include "CH03_LMS02_Rectangle.h"

Rectangle::Rectangle() :
	width(1), height(1) {

}

Rectangle::Rectangle(int w, int h) :
	width(w), height(h) {

}

Rectangle::Rectangle(int length) :
	width(length), height(length) {

}

int Rectangle::isSquare() {
	if (width == height)return 1;
	else return 0;
}