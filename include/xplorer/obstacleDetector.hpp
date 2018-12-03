/**============================================================================
 * @file       : obstacleDetector.hpp
 * @author     : Akash Atharv, Rishabh Choudhary
 * @version    : 1.0
 * @Copyright  : 3-Clause BSD
Copyright (c) 2018, Akash Atharv, Rishabh Choudhary
 
Redistribution and use in source and binary forms, with or without  
modification, are permitted provided that the following conditions are 
met:
 
1. Redistributions of source code must retain the above copyright notice, 
this list of conditions and the following disclaimer.
 
2. Redistributions in binary form must reproduce the above copyright 
notice, this list of conditions and the following disclaimer in the   
documentation and/or other materials provided with the distribution.
 
3. Neither the name of the copyright holder nor the names of its 
contributors may be used to endorse or promote products derived from this 
software without specific prior written permission.
 
THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS 
IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, 
THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR 
PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR 
CONTRIBUTORS BE 
LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR 
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF 
SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS 
INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN 
CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) 
ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF 
THE POSSIBILITY OF SUCH DAMAGE.
 * @brief      : Class implementation for obstacle detection functionality
 *============================================================================
 */

#ifndef INCLUDE_XPLORER_OBSTACLEDETECTOR_HPP_
#define INCLUDE_XPLORER_OBSTACLEDETECTOR_HPP_

#include <iostream>
#include "ros/ros.h"
#include "sensor_msgs/LaserScan.h"
#include "std_msgs/Float64.h"

class obstacleDetector {
  private:
    ros::NodeHandle n1;
    ros::Subscriber sub1;
    ros::Publisher pub1;
    bool collision;
    ros::Subscriber disSub1;
    ros::Publisher disPub1;
  public:
    obstacleDetector();
    ~obstacleDetector();
    void sensorCallback(const sensor_msgs::LaserScan::ConstPtr& msg);
    void sensorCallbackDist(const std_msgs::Float64::ConstPtr& msg);
    bool collisionDetect();
};

#endif //INCLUDE_XPLORER_OBSTACLEDETECTOR_HPP_


