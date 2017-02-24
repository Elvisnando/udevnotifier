#ifndef WEBCAM_H
#define WEBCAM_H

#include <libudev.h>
#include <QtCore/QString>

#include "device.h"
#include <libudev.h>

class udev_device;


namespace UdevNotifier{



class Webcam: public Device
{
public:
    Webcam(udev_device *device = nullptr);
};
}
#endif // WEBCAM_H
