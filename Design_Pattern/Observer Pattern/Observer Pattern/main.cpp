#include <iostream>
#include <vector>
#include "Subject.h"
#include "weatherData.h"
#include "currentConitionDisplay.h"

using namespace std;



int main()
{
	Subject *wd = new weatherData();
	currentConitionDisplay cc;
	cc.setParent(wd);

	/*mobileDisplay md;
	md.setParent(wd);*/

	wd->setMesurement(505,5.5,6.6);
	cc.displayData();

	wd->setMesurement(50,11,16);
	cc.displayData();

	return 0;
}