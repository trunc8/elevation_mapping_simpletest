#include "ros/ros.h"
#include "elevation_mapping/ElevationMap.hpp"

#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    std::cout << "Hello elevation_mapping world!" << std::endl;

    ros::init(argc, argv, "elevation_mapping_simpletest_node");
    ros::NodeHandle nh;
    elevation_mapping::ElevationMap map(nh);
    

    return 0;
}