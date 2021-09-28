#include <ros/ros.h>
#include <bobi_fishbot_v4_interface/dbus_interface.h>

#include <iostream>

using namespace bobi::dbus;

class FishbotV4 {
public:
    FishbotV4()
    {
    }

protected:
    DBusInterface _dbus_intf;
};

int main(int argc, char** argv)
{
    ros::init(argc, argv, "fishbot_interface_v4_node");
    QCoreApplication a(argc, argv);

    FishbotV4 robot;

    return a.exec();
}
