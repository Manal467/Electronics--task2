
### Algorithm for how the walking motion will be executed in the humanoid robot



 1. Robot Initialization Components:
 One motor, two stiff legs
 Foot Design: The shape of the feet allows for rotation forward, backward, and sideways.

 2. Center of Gravity Determination
The center of gravity of the robot is below the center of curvature of the feet.
 When standing, the robot tilts back slightly.

3. Motion Control Start: 
 Activate the motor. 
 Lift the Leg: Use the motor to lift one leg upwards. 
 Forward Rotation: When the leg lands on the ground, the other leg is moved forward.

4. Balance 
 Ensure that the robot tilts in the opposite direction to the lifted leg to maintain balance.

5. Direction Changefor Walking in a Straight Line: By adjusting the motor's movement frequency to match the walking frequency.
 For deviation: Change the motor frequency to steer the robot to the left or right.

 6. Motion Repetition 
 Repeat steps 3-5 to achieve continuous walking movement: Lift the leg, place it down, then repeat the same with the other leg.
