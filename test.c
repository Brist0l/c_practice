#include<X11/Xlib.h>

int main(){

	Display *dpy;

	if(!(dpy = XOpenDisplay(0x0))) return 1;
}
