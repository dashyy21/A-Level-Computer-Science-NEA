Ashaaz: # 3D Action RPG Combat Framework (Unreal Engine / C++)

## Project Overview
This project is an advanced, high-performance 3D Action RPG combat framework built primarily in native C++ within Unreal Engine. Stripping away narrative elements, the project focuses entirely on complex gameplay architecture, algorithmic systems design, state management, and responsive enemy AI. 

The framework features a highly capable player character with modular combat and movement systems, operating alongside an autonomous AI agent capable of multi-tiered offensive strategies.

---

## Tech Stack & Architecture
* *Primary Language:* C++ (95%+ of core codebase for memory optimization and performance)
* *Engine:* Unreal Engine 
* *Scripting/Compilation:* Blueprints (utilized strictl…
[15:12, 04/07/2026] Ashaaz: # 3D Action RPG Combat Framework (Unreal Engine / C++)

## Project Overview
This project is an advanced, high-performance 3D Action RPG combat framework built primarily in native C++ within Unreal Engine. Stripping away narrative elements, the project focuses entirely on complex gameplay architecture, algorithmic systems design, state management, and responsive enemy AI. 

The framework features a highly capable player character with modular combat and movement systems, operating alongside an autonomous AI agent capable of multi-tiered offensive strategies.

---

## Tech Stack & Architecture
* *Primary Language:* C++ (95%+ of core codebase for memory optimization and performance)
* *Engine:* Unreal Engine 
* *Scripting/Compilation:* Blueprints (utilized strictly for asset referencing, UI binding, and compilation wrappers)
* *AI Systems:* Behavior Trees, Blackboard Components, AI Perception, Navigation Mesh (NavMesh)

---

## Core Technical Features

### 1. Advanced Finite State Machine & Resource Management
Engineered a robust, real-time tracking system for player vitals (Health and Stamina) governed by strict state logic:
* *Stamina Mechanics:* Depletes dynamically upon executing sprinting states or specific attack combos. Implemented an asynchronous regeneration loop that restores stamina over time when the character is in an idle or standard movement state.
* *Health & Auto-Regen:* Health depletes upon registering collision and damage frames from enemy attacks. Implemented a non-combat cooldown buffer; if no damage events are registered within a set threshold, a regeneration algorithm activates to gradually restore health.

### 2. Complex Player Combat & Locomotion Mechanics
* *Target-Lock System:* Developed an algorithmic camera and orientation lock system. Utilizing vector math and distance checking, the player can dynamically cast to and lock onto an active enemy target, constraining movement axes to face the threat.
* *Multi-Tiered Combo Attacks:* Built a modular attack chaining framework handling distinct light, heavy, or multi-stage attack inputs, utilizing animation notifies to open and close precise damage-window frames.
* *Enhanced Locomotion:* Coupled sprint logic directly with the physics engine and the stamina tracking array, instantly throttling velocity if stamina reserves hit zero.

### 3. Hierarchical AI Behavior Tree Architecture
The enemy AI operates autonomously via custom C++ tasks integrated into Unreal Engine’s Behavior Trees:
* *Spatial Awareness:* Uses NavMesh data and distance-vector calculation loops to dynamically calculate range variables between itself and the player.
* *Dynamic Decision Matrix:* The AI evaluates combat ranges in real time to select an optimal offensive action:
  * *Ranged Attacks:* Executes projectile-shooting logic when the player maintains a distance threshold.
  * *Closing/Chasing:* Initiates paths to track and intercept the player when out of immediate attack range.
  * *Charge Attack:* Triggers a high-velocity, high-damage linear charge maneuver when specific combat conditions or cooldowns are met.

---

## Engineering Practices & Top-Band Assessment
This project was awarded a *Top-Band (Highest Tier) Grade* for its technical complexity and execution. 
* *Object-Oriented Design (OOP):* Deep utilization of inheritance, clean encapsulation of character components, and robust C++ header/source separation.
* *Performance Optimisation:* Minimised heavy operations on the engine's Tick function, relying instead on event-driven architecture and timers for regeneration systems.
* *Rigorous Edge-Case Testing:* Handled unexpected runtime inputs, such as state interruptions (e.g., being attacked mid-sprint) and boundary collisions, ensuring zero memory leaks or game-breaking runtime crashes.
