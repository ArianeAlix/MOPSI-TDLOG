<<<<<<< HEAD
#include "Tree.h"


Tree::Tree(int lbl, int lvl) {
	label = lbl;
	level = lvl;
	area = 1;
	highest = lvl;
	vector<Tree*> sons = {};
};

void Tree::delProf(Tree arb) {
	//Détruit l'arbre en remontant à partir de la racine "arb"
	for (vector<Tree*>::iterator it = arb.sons.begin(); it != arb.sons.end(); ++it) {
		delProf(**it);
		delete *it;
	}
}

Tree::~Tree() {
	delProf(*this);
};


int Tree::getLevel() {
	return level;
};

void Tree::setLevel(int lvl) {
	level = lvl;
};

int Tree::nbSons() {
	return sons.size();
};

Tree* Tree::getSon(int pos) {
	try {
		return sons.at(pos);
	}
	catch (out_of_range &exn) {
		cerr << "Out of range :" << exn.what() << endl;
	}
};


void Tree::addAsLastSon(Tree* newSon) {
	sons.push_back(newSon);
};




void Tree::display(string prefix, string indent){
	cout << prefix << "[" << label  << "] "  << level << endl;
	prefix += indent;
	for (vector<Tree*>::iterator it = sons.begin(); it != sons.end(); ++it) {
		(*it)->display(prefix, indent);
	}
=======
#include "Tree.h"


Tree::Tree(int lbl, int lvl) {
	label = lbl;
	level = lvl;
	area = 1;
	highest = lvl;
	vector<Tree*> sons = {};
};

void Tree::delProf(Tree arb) {
	//Détruit l'arbre en remontant à partir de la racine "arb"
	for (vector<Tree*>::iterator it = arb.sons.begin(); it != arb.sons.end(); ++it) {
		delProf(**it);
		delete *it;
	}
}

Tree::~Tree() {
	delProf(*this);
};


int Tree::getLevel() {
	return level;
};

void Tree::setLevel(int lvl) {
	level = lvl;
};

int Tree::nbSons() {
	return sons.size();
};

Tree* Tree::getSon(int pos) {
	try {
		return sons.at(pos);
	}
	catch (out_of_range &exn) {
		cerr << "Out of range :" << exn.what() << endl;
	}
};


void Tree::addAsLastSon(Tree* newSon) {
	sons.push_back(newSon);
};




void Tree::display(string prefix, string indent){
	cout << prefix << "[" << label  << "] "  << level << endl;
	prefix += indent;
	for (vector<Tree*>::iterator it = sons.begin(); it != sons.end(); ++it) {
		(*it)->display(prefix, indent);
	}
>>>>>>> f548aa03602e1d806803a0e8f3ad13edeb030929
};