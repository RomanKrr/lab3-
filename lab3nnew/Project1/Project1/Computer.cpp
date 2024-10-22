#include "Computer.h"

Computer::Computer(const Device& device, HardDrive& hardDrive)
    : device(device), hD(&hardDrive) {}


void Computer::displaySystemInfo() {
    cout << endl;
    cout << "Computer System Info:" << endl;
    device.displayInfo();
    hardDrive.displayInfo();
}

void Computer::connectDevice(const Device& device) {
    cout << "Connecting device: " << device.name << " to the computer." << endl;
}

