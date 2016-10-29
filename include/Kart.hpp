/* *
 * @file			Kart.hpp
 * @description		
 * @course			
 * @assignment		
 * @date			
 * @author			
 * */
#ifndef KART_HPP
#define KART_HPP

#include <iostream>
#include "Sembol.hpp"
using namespace std;

class Kart{
	Sembol *sembol;
public:
	Kart(){
		sembol = new Sembol();
	}

	Sembol* getSembol(){
		return sembol;
	}

	void setSembol(Sembol *smbl){
		sembol = smbl;
	}
};
#endif