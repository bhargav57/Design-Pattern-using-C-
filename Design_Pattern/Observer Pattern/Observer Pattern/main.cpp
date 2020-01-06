#include <iostream>
#include <vector>
#include "Subject.h"
#include "weatherData.h"
#include "currentConitionDisplay.h"
#include "forecasetDisplay.h"

using namespace std;



int main()
{
	Subject *wd = new weatherData();
	currentConitionDisplay ccObj;
	forecasetDisplay       fcObj;
	ccObj.setParent(wd);
	fcObj.setParent(wd);

	/*mobileDisplay md;
	md.setParent(wd);*/

	wd->setMesurement(505,5.5,6.6);
	ccObj.displayData();
	fcObj.displayData();
	
	std::cout<<"\n\n";

	wd->setMesurement(50,11,16);
	ccObj.displayData();
	fcObj.displayData();
	return 0;
}