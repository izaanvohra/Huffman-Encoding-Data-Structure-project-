#include "huffmanNode.h"
#include <iostream>
using namespace std;

// constructor for initializing data members
huffmanNode::huffmanNode()
{
    left = right = NULL;
    chr = '$';
    freq = -1;
}