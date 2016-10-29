/* *
 * @file			Sembol.hpp
 * @description		
 * @course			
 * @assignment		
 * @date			
 * @author			
 * */
#ifndef SEMBOL_HPP
#define SEMBOL_HPP

#include <iostream>
#include <time.h>
#include <string>
#include <time.h>
#include "windows.h"
#include "winioctl.h"
using std::string;
using namespace std;

class Sembol{
	char veri;
	int renk;
public:
	Sembol(){

		veri = (char)(rand() % 255);
		renk = (rand() % 16);
	}

	char getVeri(){
		return veri;
	}

	char getRenk(){
		return renk;
	}
};
#endif