/*
 * Course: I2c Communication Between Arduino And Raspberry Pi
 * Platform: Arduino
 * Author: Ashraf S A AlMadhoun
 * Purpose: Auto-generated metadata block to document the learning goals.
 * Notes: Auto-generated metadata block (2025-11-18)
 */

/*
 * Course: I2c Communication Between Arduino And Raspberry Pi
 * Platform: Arduino
 * Author: Ashraf S A AlMadhoun
 * Purpose: Auto-generated metadata block to document the learning goals.
 * Notes: Auto-generated metadata block (2025-11-18)
 */

#include <stdio.h> // Include I/O for I2C logs

// Simulated Arduino <-> Raspberry Pi I2C exchange
// Main routine: orchestrates the i2c communication between arduino and raspberry pi scenario
int main(void) { // Entry
  printf("I2C Communication between Arduino and Raspberry Pi\n"); // Title
  printf("Master(Arduino) WRITE addr=0x10 reg=0x01 val=0x55\n"); // Log write
  printf("Slave(RPi) READ addr=0x10 reg=0x01 -> val=0x55\n"); // Log read
  return 0; // Exit
} // End main

