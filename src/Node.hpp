#pragma once
#include <list>
#include <string>

class Node
{
    private:
        std::list<Node*> children;
        Node* parent;
        std::string contents;
    public:
        Node();
        std::list<Node*> getChildren();
        Node* getParent();
        std::string getContents();
};