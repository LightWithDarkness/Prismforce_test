# Chakravyuh Solution

This program simulates Abhimanyu's journey through the Chakravyuh, a circular formation of enemies. The objective is to determine whether Abhimanyu can successfully cross all the circles of enemies given his initial power and some strategic options.

## Table of Contents

- [Introduction](#introduction)
- [Assumptions](#assumptions)
- [How It Works](#how-it-works)
- [Usage](#usage)
- [Example Output](#example-output)

## Introduction

In this simulation, Abhimanyu encounters 11 enemies arranged in a circular formation. Each enemy has a certain power level, and Abhimanyu has to defeat each one by using his initial power. He also has the option to skip battles or recharge his power at the start.

## Assumptions

- **Enemy Regeneration**: The 3rd and 7th enemies regenerate and attack again with an additional half of the power of the previous enemy.
- **Power Recharge**: Abhimanyu can recharge his power a limited number of times, but only at the start, not during the fight.
- **Battle Skips**: Abhimanyu can skip a limited number of battles where his power is insufficient to defeat the enemy.
- **Power Consumption**: If Abhimanyu’s power is sufficient to defeat an enemy, it decreases by the enemy’s power level.

## How It Works

1. **Initialization**: The program starts with Abhimanyu's initial power and a list of enemy power levels.
2. **Regeneration**: The 3rd and 7th enemies regenerate after the initial attack.
3. **Battles**: Abhimanyu battles each enemy in sequence. He can either defeat the enemy, recharge his power at the start, or skip the battle.
4. **Outcome**: The program outputs whether Abhimanyu successfully crosses all circles of the Chakravyuh.

## Usage

1. **Compilation**: Compile the program using a C++ compiler.
   ```bash
   g++ soln.cpp 

## Example Output
- **Abhimanyu successfully crosses Chakravyuh in test case 1.**
- **Abhimanyu successfully crosses Chakravyuh in test case 2.**
  

This README file now includes the image of the output `output.png` in the same directory as your `README.md` file. Let me know if you need any further adjustments!
![output](https://github.com/user-attachments/assets/7784f97c-e4dd-4307-bd5e-29de4f198789)


