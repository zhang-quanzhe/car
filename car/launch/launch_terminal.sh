#!/bin/bash
gnome-terminal --window -e 'bash -c "roscore;exec bash"' 
sleep 10 
gnome-terminal --tab -e 'bash -c "echo rosrun ultra\(tab\) ul\(tab\);exec bash"' --tab -e 'bash -c "echo rosrun sbg\(tab\) el\(tab\);exec bash"' 
sleep 10
gnome-terminal --window -e 'bash -c "echo rosrun car_navigation car_navigation;exec bash"' --tab -e 'bash -c "echo rosrun path_planning rrt_sub;exec bash"' --tab -e 'bash -c "echo rosrun cancontrol cancontrol;exec bash"' 
sleep 10
gnome-terminal --tab -e 'bash -c "echo rosrun path_planning rrt_node;exec bash"'