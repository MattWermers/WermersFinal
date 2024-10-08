#ifndef NODE_H__
#define NODE_H__

#include <iostream>
//#include <vector>
#include <list>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Node{
    private:
        string kmer;
        int length;

        list<Node*> children;
        
    
        bool finished;
    public:
        Node();

        bool pointed_to;
        int pointed_by;
        int parent_to;
        vector<int> match_position;

        void set_data ( string fragment );

        void add_child( Node* nChild , int match_position );

        void remove_child( Node* nChild );

        list<Node*> return_children();

        string get_kmer();

        void print_data();

        //void print_data_to_file();
};

#endif
