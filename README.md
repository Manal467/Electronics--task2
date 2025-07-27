
### Algorithm for how the walking motion will be executed in the humanoid robot
#### This algorithm is based on the Maquto Robot model - one of the Simplest Walking Robots.


This model is based on:

- A simple mechanical design:

   - Only two rigid bodies connected to a single motor.

   - The Mugatu walker is self-adjusting and is characterized by Open-loop Stability.

- Advanced locomotor capabilities:

   - Ability to stop and go from a standing position.

   - Directional control (left/right) by adjusting input parameters

### <img src="https://github.com/user-attachments/assets/9905b5d7-d30d-462c-9d00-8ab634ff71ca">


**1. Robot Initialization:**

Components:

 One motor, two stiff legs
 
 Foot Design: The shape of the feet allows for rotation forward, backward, and sideways.


**2. Center of Gravity Determination**

 The center of gravity of the robot is below the center of curvature of the feet.
 
 When standing, the robot tilts back slightly.


**3. Motion Control Start:**

 Activate the motor. 
 
 Lift the Leg: Use the motor to lift one leg upwards. 
 
 Forward Rotation: When the leg lands on the ground, the other leg is moved forward.


**4. Balance** 

 Ensure that the robot tilts in the opposite direction to the lifted leg to maintain balance.


**5. Direction Change for Walking**

 In a Straight Line: By adjusting the motor's movement frequency to match the walking frequency.
 
 For deviation: Change the motor frequency to steer the robot to the left or right.


 **6. Motion Repetition** 
 
 Repeat steps 3-5 to achieve continuous walking movement: Lift the leg, place it down, then repeat the same with the other leg.
