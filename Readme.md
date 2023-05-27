# Robotic Arm Documentation

## Phase 1: Grip Movement
In this phase, the robotic arm performs the gripping movement.

1. Move the elbow servo to 90 degrees.
2. Open the hand servo to 45 degrees to fully open the grip.
3. Wait for the trigger (button press).
4. When the button is triggered:
   - Close the hand servo to fully grip the object.
   - Sleep for a specified time.

## Phase 2: Pick-up Movement
In this phase, the robotic arm performs the pick-up movement.

1. Wait for the trigger (button press).
2. When the button is triggered:
   - Move the elbow servo from 0 to 90 degrees.
   - Move the wrist servo from 90 to 0 degrees.

Note: The button trigger is used to initiate each phase of movement in the robotic arm. Adjust the sleep time and servo angles according to your specific requirements.