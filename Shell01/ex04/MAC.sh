ifconfig -a | grep eth | grep -v media | awk '{print $2}'
