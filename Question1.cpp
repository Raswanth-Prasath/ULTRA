
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <unordered_map>
#include <random>
#include "../DataStructures/Graph/Classes/GraphInterface.h"
#include"../Algorithms/DepthFirstSearch.h"
#include "../Helpers/Assert.h"
#include "../Helpers/Vector/Permutation.h"
#pragma once

#include <vector>
#include <sstream>
#include <utility>
#include <algorithm>

#include "../Classes/GraphInterface.h"

#include "../../Geometry/Point.h"
#include "../../Geometry/Rectangle.h"

#include "../../../Helpers/Assert.h"
#include "../../../Helpers/String/String.h"
#include "../../../Helpers/Vector/Permutation.h"

#include "../../../Algorithms/DepthFirstSearch.h"
#include "../../../Algorithms/Dijkstra/Dijkstra.h"
#include "../../../Algorithms/StronglyConnectedComponents.h"


    clock_t time_caluculated(){
    Dijkstra<GRAPH> dijkstra(graph, weights);

     for (int i = 0; i < 200; ++i) {
        // given 200 test cases
        Vertex source = rand() % graph.numVertices;
        Vertex target = rand() % graph.numVertices;
        
        // Ensure that source and target are different and connected
        while (source == target || graph[source].empty() || graph[target].empty()) {
            source = rand() % numVertices;
            target = rand() % numVertices;
            clock_t startTime = clock();
         // Run Dijkstra's algorithm to find the shortest path
           dijkstra.run(source, target);
           int shortestDistance = dijkstra.getDistance(target);
           std::vector<Vertex> shortestPath = dijkstra.getPath(target);
            clock_t endTime = clock();
        }
        clock_t time_caluculated+=endtime-start time;
     }
     return time_caluculated;
     }
   







    


