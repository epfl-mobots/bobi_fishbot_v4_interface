#!/bin/bash
rf_dev="rfcomm0"
mac_address="10:00:E8:6C:F0:49"

if [[ $(ls /dev/$rf_dev) ]]; then
    sudo rfcomm release /dev/$rf_dev
fi

sudo rfcomm bind /dev/$rf_dev $mac_address 0 &

# start asebamedulla to connect to the dbus 
asebamedulla -v -d "ser:device=/dev/$rf_dev"