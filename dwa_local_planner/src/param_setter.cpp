#include <ros/ros.h>
#include <ros/console.h>

int main(int argc, char** argv) {
    // Initialize ROS node
    ros::init(argc, argv, "param_setter");
    ros::NodeHandle nh;

    // Set the parameter value using NodeHandle
    nh.setParam("/move_base/DWAPlannerROS/sim_time", 3.0);

    ROS_INFO("Parameter 'sim_time' set to 3.0 for /move_base/DWAPlannerROS");

    return 0;
}
