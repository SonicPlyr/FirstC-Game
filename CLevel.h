#ifndef _CLEVEL_H_
#define _CLEVEL_H_
#include <string>
#include <fstream>
#include "CGrayAlien.h"
#include "CEntity.h"
#include "CFPS.h"

struct Vaisseaux {
	string type;
	float positionX;
	float time;
};
class CLevel {
	public :
		CLevel();

		float timePassed;
		int ennemyIndex;

		static CLevel level;

		static std::vector<Vaisseaux> ships;

		void buildLevel();
		void addShip(string type, float positionX, float time);
		void spawnShip(Vaisseaux ship);
		void reset();

		void onLoop();
		

};
#endif