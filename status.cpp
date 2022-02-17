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

int Status::getLevel() {
	return level;
}

int Status::getHitPoint() {
	return hitpoint;
}

int Status::getStrength() {
	return strength;
}

int Status::getDefence() {
	return defence;
}

int Status::getExp() {
	return exp;
}

void Status::setLevel(int nlevel) {
	level = nlevel;
}

void Status::setHitPoint(int nhitpoint) {
	hitpoint = nhitpoint;
}

void Status::setStrength(int nstrength) {
	strength = nstrength;
}

void Status::setDefence(int ndefence) {
	defence = ndefence;
}

void Status::setExp(int nexp) {
	exp = nexp;
}

void Status::init(int level, int hitpoint, int strength, int defence, int exp) {
	setLevel(level);
	setHitPoint(hitpoint);
	setStrength(strength);
	setDefence(defence);
	setExp(exp);
}