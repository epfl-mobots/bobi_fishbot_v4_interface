#include <ros/ros.h>

int main(int argc, char** argv)
{
    ros::init(argc, argv, "fishbot_interface_v4_node");
    std::shared_ptr<ros::NodeHandle> nh(new ros::NodeHandle());

    int rate;
    rate = nh->param<int>("rate", rate, 10);

    int robot_id;
    robot_id = nh->param<int>("robot_id", robot_id, -1);

    ros::Rate loop_rate(rate);
    while (ros::ok()) {
        ros::spinOnce();
        loop_rate.sleep();
    }

    return 0;
}