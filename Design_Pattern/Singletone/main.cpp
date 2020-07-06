#include<iostream>
#include <array>
#include<vector>
#include<algorithm>
#include<deque>
#define MAX 10000
using namespace std;

class singleTone
{
	static singleTone* p;
	int i;
	singleTone()
	{
		
	}
public:
	static singleTone* getInstance()
	{
		if (p == nullptr)
		{
			p = new singleTone();
			return p;
		}
		else
		{
			return p;
		}
	}
};

singleTone* singleTone::p = nullptr;

int main()
{
	singleTone* o = singleTone::getInstance();
	singleTone* o1 = singleTone::getInstance();
}