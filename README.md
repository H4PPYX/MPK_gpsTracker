# MPK GPS Tracker

The device designed for real-time vehicle GPS tracking and sending the data to remote backend server. 

## Table of Contents

1. [Introduction](#introduction)
2. [Features](#features)
3. [Installation](#installation)
4. [Configuration](#configuration)
5. [Usage](#usage)

## Introduction

Device consists of:

- Raspberry Pi Zero W
- Waveshare SIM7000E NB-IoT / LTE / GPRS / GPS hat for Raspberry Pi
- 5V USB power supply
- 32GB SD card

## Features

- Loading setup data from txt file
- Retrieving data from GPS in real time
- Retrieving timestamp from GPS in real time
- Sending collected data to remote server

## Installation

You will need:
- CMmake
- C++ compiler
- Raspberry Pi OS Lite

### Building the project

```bash
#clone repository
git clone https://github.com/H4PPYX/MPK_gpsTracker

#move to cloned repository folder
cd MPK_gpsTracker

#create build folder and move to created folder
mkdir build && cd build

#run CMake
CMake ..

#build project
make
```

## Configuration

- start with copying example config file from project folder

```bash
cp ../config.txt config.txt
```

- modify file contents according to your requirements

```bash
nano config.txt
```

- for debugging purposes it's also possible to modify the way that program works by modyfying main.cpp fle and recompiling the code

## Usage

- ***the program must be started with administrative privileges***
- to run the program you need to create an systemctl service so that as the device starts it will automatically start sending tracking data to server
- to run the program in single run mode you just need to start it with administrative privileges

```bash
sudo ./tracker
```
