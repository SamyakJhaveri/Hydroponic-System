

## Table of Contents
- [Introduction](#introduction)
- [About Hydroponics](#about-hydroponics)
- [Motivation](#motivation)
- [Challenges and Approach](#challenges-and-approach)
- [Results](#results)
- [Paper Link](https://www.ijsr.net/archive/v7i6/ART20183383.pdf) 

## Introduction
This project aims to address the democratization of hydroponic water management systems for the Indian market and how it can be adopted among Indian hydroponic agriculturists

[Back to Top](#table-of-contents)

## About Hydroponics
**Hydroponics** is a type of horticulture and a subset of hydroculture, which is a method of growing plants, usually crops, without soil, by using mineral nutrient solutions in an aqueous solvent.


-   Up to 90% more efficient use of water.
-   Production increases 3 to 10 times in the same amount of space.
-   Many crops can be produced twice as fast in a well managed hydroponic system.
-   Decreasing the time between harvest and consumption increases the nutritional value of the end product.
-   Indoor farming in a climate controlled environment means farms can exist in places where weather and soil conditions are not favorable for traditional food production.
-   No chemical weed or pest control products are needed when operating a hydroponic system.
  

Hydroponic crop cultivation is ideal for the Indian agriculture because of the large population density, reducing farm space for urbanization, increasingly unreliable monsoons, and requirement for more cost effective and resource-effective/efficient agricultural infrastructure. <br>


As the popularity of the benefits of hydroponics grew in the Indian market as well, more and more young entrepreneurs and farmers started shifting to hydroponic farms for producing leafy vegetables and micro-greens.

Hydroponic control systems are dedicated computing hardware devices that are used to monitor hydroponic farms’ water quality. The water quality must be maintained to keep the growth of crops at optimum levels. But these hardware systems are difficult to acquire, expensive, and complicated to install and maintain since most of these systems need to be imported.

[Back to Top](#table-of-contents)

## Motivation
To build a system that takes advantage of low-cost smartphone computing power to monitor water quality of hydroponic systems.

[Back to Top](#table-of-contents)

## Challenges and Approach

1) Understanding the most critical water quality parameters to determine which sensors are the absolute essentials for a basic hydroponic water quality monitoring system

2) Gathering inexpensive sensors and microcontrollers

3) Connecting al the sensors to work in tandem with the Arduino Microcontroller

4) Connecting the microcontroller to a smartphone via a low-energy Bluetooth module

![enter image description here](images/Arduino%20Illustration%20Snipping%20Tool.PNG)
Basic Illustration of System

5) Making an app that receives data from sensors connected to the microcontroller and displays it on the smartphone, only when a request is sent to get data from the smartphone

![enter image description here](images/Project%20Acqua%20Arduino%20Pictograph_bb%20Image.jpg)
Circuit Layout

6) Typically, hydroponic water quality systems use WiFi for IoT features, but this makes it battery intensive and is a redundant feature. Plus, an added WiFi system would mean increasing the hydroponic farm's operating costs, which is already quite expensive. A low-energy Bluetooth connectivity would not need added infrastructure and would consume less energy.

![enter image description here](images/IMG_20180310_173230_01.jpg)
Setup <br>

![enter image description here](images/TapWater%20data.PNG)
Receiving Data <br>

7) Hydroponic water quality monitoring systems have dedicated processors and cost at least 25000-30000 rupees (August 2017). Not only is this expensive, but these systems require expert installation and maintenance, which adds to the complexity and costs of the system

[Back to Top](#table-of-contents)

## Results

1) Typical dedicated hardware costs at least 25000-30000 rupees, was able to build it in 3200 rupees, including sensors and microcontroller

2) Compared the growing money plant in a solid medium, water medium (without monitor), and water medium (with monitor). Both water-grown plants grew faster than soil, and with water quality data available, was able to mature plant with fewer resources like nutrients, heating/cooling, etc. depending on the water’s quality

The system would allow a hydroponic agriculturist to access vital real-time information about the water quality without the need for an internet connection or changing batteries too frequently since it used low-energy Bluetooth.

[Back to Top](#table-of-contents)
