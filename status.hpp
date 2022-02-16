#pragma once

class Status {

	private:
		int level;
		int hitpoint;
		int strength;
		int defence;
		int exp;

	public:
		int getLevel();
		int getHitPoint();
		int getStrength();
		int getDefence();
		int getExp();
		void setLevel(int nlevel);
		void setHitPoint(int nhitpoint);
		void setStrength(int nstrength);
		void setDefence(int ndefence);
		void setExp(int nexp);
		void init(int level, int hitpoint, int strength, int defence, int exp);
};