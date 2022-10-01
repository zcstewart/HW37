//Homework 37

/* 
 * Filename:        main.cpp
 * Purpose:      
 * 
 * Author:          Zachary Charles Stewart
 * Student ID:      105903414
 * Created on       May 3, 2017, 9:47 PM
 */

//Preprocessor Directives
#include <cstdlib>
#include "weightedGraph.h"


//Namespace
using namespace std;

//--------------------------------------------------------------------------//
//
//Main Function
//
//Inputs:       int argc, char** argv
//Outputs:      int
//
//Purpose:      Main program file. Other necessary files are included here 
//              in order to be run

int main(int argc, char** argv) 
{   
    weightedGraphType graph_ONE(5);
    graph_ONE.createWeightedGraph();
    graph_ONE.shortestPath(0);
    graph_ONE.printShortestDistance(0);


    //Terminate program upon successful execution
    exit(EXIT_SUCCESS);
}

//--------------------------------------------------------------------------//

