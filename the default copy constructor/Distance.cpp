#include "Distance.h"
#include<iostream>
using namespace std;

Distance::Distance():feet(0),inches(0)
{
}
Distance::Distance(int f,float i):feet(f),inches(i)
{
}

Distance::~Distance()
{
}

void Distance::print(){
	cout<<"feet=  "<<feet<<"\t inches= "<<inches<<"\n";
}
