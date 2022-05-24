# Lesson 1: Initial Setup and Buttons

## What is Arduino?

[Introduction to Arduino](https://www.arduino.cc/en/Guide/Introduction)

An arduino board is a very small computer known as a microcontroller.

>The Arduino software is easy-to-use for beginners, yet flexible enough for advanced users. It runs on Mac, Windows, and Linux.

>Teachers and students use it to build low cost scientific instruments, to prove chemistry and physics principles, or to get started with programming and robotics.

>Designers and architects build interactive prototypes, musicians and artists use it for installations and to experiment with new musical instruments.

>Makers, of course, use it to build many of the projects exhibited at the Maker Faire, for example.

>Arduino is a key tool to learn new things. Anyone - children, hobbyists, artists, programmers - can start tinkering just following the step by step instructions of a kit, or sharing ideas online with other members of the Arduino community.

## What is electricity`

Electricity, at it's most basic level, is a flow of electrons from one place to another.  This is called 'current'. In order to power things with electrical current, electricity needs to flow in a circuit, going round and round.  If the circuit is interrupted, the electrons can no longer flow and provide it's power.

[Here's a short video explaining it a little further](https://www.youtube.com/watch?v=oB1v-wh7EGU)


## Initial computer setup

The first thing we'll to do is set up the Arduino IDE, which is the software we will be using to write code for our Arduinos, and upload it to the actual device for testing.

[Arduino IDE download](https://www.arduino.cc/en/Guide#install-the-arduino-desktop-ide)

Pick the appropriate system (likely Windows or Mac), download the installation package, and follow the installation instructions.

[Buttons Overview](https://arduinogetstarted.com/tutorials/arduino-button)

Buttons are a type of switch.  They work in a similar manner to a light switch.  When the switch is off, the circuit is interrupted, and the electricity flow stops, causing the light to go off.  If the switch is turned on, the power flow resumes and the light 'lights' again.

What is different about a button is that it's a 'momentary' switch.  This means it's only in the 'on' state when held down, and as soon as you release it, it goes back to the 'off' state.

Games, for instance, listen for these transistions between on and off electrical states to know when a button has been pressed or released, and react accordingly


