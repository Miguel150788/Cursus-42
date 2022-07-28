#!/bin/bash.
ifconfig | grep ether -w | tr -d "" | awk '{print $2}'
