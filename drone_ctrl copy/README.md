# drone stabilizer project
# intention is a stable core system that can
# take part in an external closed lop system.
# And is fairly simple to reconfigure

where is the primary files: 
  doc/Matlab % Matlab simulation of drone and calculation of all (PI-Lead) type controllers
        hexacopter.m          % configuration and calculation script
        hexacopter_sim.slx    % simulink - simscape multibody - model
        hexacopter.txt        % result file with all control parameters
  code/       % Teensy code
        Makefile      % makefile (replaces Arduino internal make-system)
        src/          % source code (all files called *.cpp/*.h (not *.ino)
           main.cpp   % has the main loop and main(argc, argv) - should be removed for Arduino system.
  UAV_Flight_Controller/   % original *.ino code.
  
  
Missing items:
- An application to load the control parameters to the Teensy (or change soursecode)
- Code change to cascaded control as in simulation
- Code change to save parameters to EE-memory
- 

# Christian Andersen jca@elektro.dtu.dk  (®DTU2020)

----- original README from Emil and Janus ----------------

# UAV_Teensy
For all my embedded systems dudes - this Flight controller will be witten in ***pure C***: Latest start August! 

Please make sure to read the entire README.md file **BEFORE** doing anything. Thank you!

If you want to use this software please "fork" and "star" this project to make sure your version doesn't change and to get notified of any updates. Feel free to report issues to be fixed. Enjoy

****description comming a little bit after the end of this project: 5/7/2020, just need to vibe a little then its comming. Latest start August***


***IMPORTANT!!!***
 - ***Make sure all inputs and sensors are set in the same direction as the code is written***
 - ***TAKE YOUR F''''' PROPELLERS OFF!***
 - ***DON'T BE STUPID***

UAV PID control with teensy 3.6

# Main Goal 
This project will be made highly scaleble, so it's not restricted to a Hexacopter as documented in this project it can also be applyed to Quad- Hexa- octo- and so on..- copter.

# Files 
- UAV_Flight_Controller . This is the main controller with all its files, discreption is inside the files
- Processing. Just a script with a 3D model of live data, this can be found at https://www.pjrc.com/store/prop_shield.html
- matlab. Some matlab and simulink models of the Drone
- dev trash. just files from erly stages in the development... year just skip that one.

videos included 

## simulations files 
If you have a valid matlab licence you can use:
- Hexacopter sim
- Quadcopter sim

If you don't. No need to worry, i will make simulation in python soon....

# The UAV used for testing in this project 
Hardware:
- Teensy 3.6
- teensy prop shield
- Taranis Transmitter/ reciver
- Propeller: carbon 13.5x5.5
- Motor: turnigy 3508-700
- 4s 5000mAh
- hobbywing x-rotor 40A 2-6S Lipo (No BEC)

UAV specs:

- Configuration: hex x copter
- Weight without batteries: 2000g
- Arm length: 350mm

## secondary UAV test
Hardware:
- Teensy 3.5
- teensy prop shield
- Taranis Transmitter/ reciver
- Propeller: carbon 10x4.5
- Motor: turnigy 3508-700
- 4s 5000mAh
- hobbywing x-rotor 40A 2-6S Lipo (No BEC)

UAV specs:

- Configuration: quad x copter
- Weight without batteries: 1400g
- Arm length: 250mm


Data processing tools used:
- [Python](https://www.python.org/) used for extracting data.
- [Processing](https://processing.org/) used for real-time data visualization.
- [Matlab](https://www.mathworks.com/) used for simulation. 

# Licence
Using this code is **completely at your own risk!!!**
This is an open source project so you can use it as you please.


