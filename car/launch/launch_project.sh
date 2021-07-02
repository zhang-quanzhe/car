#!/bin/bash
gnome-terminal --tab -e 'bash -c "roscore;exec bash"' 
sleep 10 
gnome-terminal --tab -e 'bash -c "rosrun ultra_serial_port ultra_publish;exec bash"' --tab -e 'bash -c "rosrun sbg_driver_2 ellipse;exec bash"' 
sleep 10
gnome-terminal --window -e 'bash -c "rosrun car_navigation car_navigation;exec bash"' --tab -e 'bash -c "rosrun path_planning rrt_sub;exec bash"' --tab -e 'bash -c "rosrun cancontrol cancontrol;exec bash"' 
sleep 10
gnome-terminal --window -e 'bash -c "rosrun path_planning rrt_node;exec bash"'