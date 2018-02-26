#!/bin/sh
. /etc/rc.common

echo "                                                                  "
echo "Please type the password of \"root\" to Uninstall ..."
FROM=`dirname "$0"`

echo "Uninstalling Script and Utility ..."
sudo killall -c Wireless\ Network\ Utility
sleep 2
sudo rm -rf /Library/StartupItems/WirelessNetworkUtility
echo "Uninstalling UI..."
sudo rm -rf /Library/LaunchAgents/Wlan.Software
sudo rm -rf /Applications/Wireless\ Network\ Utility.app

echo "Removing Driver..."
sudo kextunload /System/Library/Extensions/RTL8192SUt.kext
sudo rm -rf /System/Library/Extensions/RTL8192SUt.kext

sudo kextunload /System/Library/Extensions/RTL8192CUt.kext
sudo rm -rf /System/Library/Extensions/RTL8192CUt.kext

sudo kextunload /System/Library/Extensions/RTL8188EUt.kext
sudo rm -rf /System/Library/Extensions/RTL8188EUt.kext

echo "Removing Pkg"
sudo rm -rf /Library/Receipts/wlan.pkg
sudo rm -rf /Library/Receipts/rtl8192sut.pkg
sudo rm -rf /Library/Receipts/rtl8192cut.pkg
sudo rm -rf /Library/Receipts/rtl8188eut.pkg
sudo rm -rf /Library/Receipts/wirelessNetworkUtility.pkg

echo "Uninstall Complete."
