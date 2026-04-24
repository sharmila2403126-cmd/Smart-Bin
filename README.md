# Smart-Bin
This project is a smart dustbin that opens its lid automatically using an ultrasonic sensor when an object is detected nearby. A servo motor is used to control the opening and closing of the lid.
Working Principle
Ultrasonic sensor detects distance of nearby object
Arduino processes the distance
If object is close → servo rotates → lid opens
If no object → lid closes automatically
🔌 Connections
Ultrasonic Sensor
VCC → 5V
GND → GND
TRIG → Pin 9
ECHO → Pin 10
Servo Motor
Red → 5V
Brown → GND
Orange → Pin 6
⚙️ Key Concepts
Distance measurement using ultrasonic waves
Servo motor angle control (0°–90°)
Automation using sensors
Touchless system (hygienic)
