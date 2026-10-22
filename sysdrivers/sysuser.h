// sysdrivers/sysuser.h
/*
      This File Contains The Kernel Definitons To Access Hardware Devices From Userspace.
*/
#ifndef SYSUSER_H
#define SYSUSER_H

// Define Device Paths (Filesystem Access Points)

#define DEVPATH_ETHERNET /dev/eth0
#define DEVPATH_WLAN /dev/wlan0
#define DEVPATH_BT /dev/bluetooth0
#define DEVPATH_HDMI /dev/display0

// Define Dualshock4 Specific Device DPs

#define DEVPATH_DUALSHOCK4_SPEAKER /dev/dualshock4/speaker0
#define DEVPATH_DUALSHOCK4_HEADSET_OUT /dev/dualshock4/speaker1
#define DEVPATH_DUALSHOCK4_HEADSET_MIC /dev/dualshock4/mic0
#define DEVPATH_DUALSHOCK4_USBDEVICE /dev/dualshock4/gamepad0

#define DEVPATH_HARDWARE_COOLING /dev/playstation/cooling
#define DEVPATH_HARDWARE_
