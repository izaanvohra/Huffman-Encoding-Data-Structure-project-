#pragma once
// class for huffmanNode
class huffmanNode
{
public:
    huffmanNode* left;
    int freq;
    char chr;
    huffmanNode* right;

    // constructor
    huffmanNode();
};
