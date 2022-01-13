ls -l | awk 'length($0) > 10' |sed -n 'p;n'
