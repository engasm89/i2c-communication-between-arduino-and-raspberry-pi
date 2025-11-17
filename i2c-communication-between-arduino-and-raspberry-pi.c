#include <stdio.h> // Include I/O for I2C logs

// Simulated Arduino <-> Raspberry Pi I2C exchange
int main(void) { // Entry
  printf("I2C Communication between Arduino and Raspberry Pi\n"); // Title
  printf("Master(Arduino) WRITE addr=0x10 reg=0x01 val=0x55\n"); // Log write
  printf("Slave(RPi) READ addr=0x10 reg=0x01 -> val=0x55\n"); // Log read
  return 0; // Exit
} // End main

