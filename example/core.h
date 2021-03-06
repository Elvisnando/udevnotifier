#ifndef CORE_H
#define CORE_H

#include <QtCore/QObject>

#include <UdevNotifier/UdevNotifier>


namespace UdevNotifier {
    class Device;
}

class Core : public QObject
{
    Q_OBJECT

public:
    Core(QObject *parent = nullptr);
    ~Core();

private Q_SLOTS:
    void onUdevEvent(UdevNotifier::UdevNotifier::Action action, UdevNotifier::Device *device);

private:
    UdevNotifier::UdevNotifier *m_udevNotifier;
};

#endif  // CORE_H
