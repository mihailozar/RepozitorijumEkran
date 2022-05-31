#include <gui/common/FrontendApplication.hpp>

FrontendApplication::FrontendApplication(Model& m, FrontendHeap& heap)
    : FrontendApplicationBase(m, heap)
{

}
int getColor(int arg){
	int ret;
	switch(arg){
	case 0:
			ret=0x00ff00;
		break;
	case 1:
			ret=0xFAD505;

		break;
	case 2:
		ret=0x19FACD;

		break;
	case 3:
		ret=0xF10AF5;

		break;
	default:
		ret=0xff0000;


	}
	return ret;
}
