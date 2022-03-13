#!bin/bash
ifconfig -a ether | grep ether | sed 's/ether//g' | tr -d "\t "
