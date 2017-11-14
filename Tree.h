<<<<<<< HEAD
#pragma once
#include <vector>
#include <cerrno>
#include <iostream>
#include <string>
using namespace std;

// Node of a tree containing some data at each node
class Tree {
    // Node information
	int label;
    int area;
	int level;
	int highest;
    // Sequence of sons (empty if none)
    vector<Tree*> sons;
public:
    // Create a node with given information
    Tree(int lbl, int lvl);

    // Destruct a node and all its descendants
	void delProf(Tree arb);
    ~Tree();

    // Return information of this node
    int getLevel();

    // Set information of this node
    void setLevel(int lvl);

    // Return the number of sons of this node
    int nbSons();

    // Return the son at position pos, if any (considering left-most son is at position 0)
	// Return an error if no son exists at the given position without exiting 
    Tree* getSon(int pos);

    // Add newSon as supplementary right-most son of this node
    void addAsLastSon(Tree* newSon);

	// Displaying the tree with a depth-first search
	void display(string prefix="", string indent="  ");
=======
#pragma once
#include <vector>
#include <cerrno>
#include <iostream>
#include <string>
using namespace std;

// Node of a tree containing some data at each node
class Tree {
    // Node information
	int label;
    int area;
	int level;
	int highest;
    // Sequence of sons (empty if none)
    vector<Tree*> sons;
public:
    // Create a node with given information
    Tree(int lbl, int lvl);

    // Destruct a node and all its descendants
	void delProf(Tree arb);
    ~Tree();

    // Return information of this node
    int getLevel();

    // Set information of this node
    void setLevel(int lvl);

    // Return the number of sons of this node
    int nbSons();

    // Return the son at position pos, if any (considering left-most son is at position 0)
	// Return an error if no son exists at the given position without exiting 
    Tree* getSon(int pos);

    // Add newSon as supplementary right-most son of this node
    void addAsLastSon(Tree* newSon);

	// Displaying the tree with a depth-first search
	void display(string prefix="", string indent="  ");
>>>>>>> f548aa03602e1d806803a0e8f3ad13edeb030929
};