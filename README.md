# smartWasteBin
Considering the corona virus epidemic and the importance of hygiene, 
we want to design a trash can that does not require any physical contact to open its door. 
In such a way that if a person puts his hand near the trash can, it will be detected and the door will be opened. 
We use SRF04 ultrasonic sensor to detect proximity and servo motor to open the bucket door.
But there is a problem and it is not that simple. 
Suppose that this trash can is going to be placed in a corridor of a commercial complex.
Obviously, the trash can should not be opened every time a person passes by it. 
So, we should be able to distinguish who just passed by the distance sensor of the trash can and 
who really wants to use the trash can. to solve this problem we consider only objects in proximity that stand there for a while
and then open the waste bin. we are also not allowed to use delay.
