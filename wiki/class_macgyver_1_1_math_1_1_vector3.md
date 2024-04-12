<div id="class_macgyver_1_1_math_1_1_vector3">

</div>

<span id="class_macgyver_1_1_math_1_1_vector3"
label="class_macgyver_1_1_math_1_1_vector3"></span>

\#include $<$Vector3.h$>$

Inheritance diagram for Macgyver::Math::Vector3:

<figure>
<div class="center">
<img src="class_macgyver_1_1_math_1_1_vector3" style="height:2cm" />
</div>
</figure>

<div class="DoxyCompactItemize">

[Vector3](#class_macgyver_1_1_math_1_1_vector3_a61fb1b28cf667c8ef1a90bcd8b405b15)
(float x=0, float y=0, float z=0)

<span id="class_macgyver_1_1_math_1_1_vector3_a1fa0960d05352fde9d6420458c326a99"
label="class_macgyver_1_1_math_1_1_vector3_a1fa0960d05352fde9d6420458c326a99"></span>
[Vector3](#class_macgyver_1_1_math_1_1_vector3) **operator+** (const
[Vector3](#class_macgyver_1_1_math_1_1_vector3) &a)

<span id="class_macgyver_1_1_math_1_1_vector3_a36e719303c0357ca4e4e1a31e418a760"
label="class_macgyver_1_1_math_1_1_vector3_a36e719303c0357ca4e4e1a31e418a760"></span>
[Vector3](#class_macgyver_1_1_math_1_1_vector3) **operator-** (const
[Vector3](#class_macgyver_1_1_math_1_1_vector3) &a)

<span id="class_macgyver_1_1_math_1_1_vector3_a5b2ca2c882d54c96d9e587e98f22e68a"
label="class_macgyver_1_1_math_1_1_vector3_a5b2ca2c882d54c96d9e587e98f22e68a"></span>
[Vector3](#class_macgyver_1_1_math_1_1_vector3) **operator$\ast$**
(const float b)

<span id="class_macgyver_1_1_math_1_1_vector3_a6a33e7667d05dd9db60a36038ab89568"
label="class_macgyver_1_1_math_1_1_vector3_a6a33e7667d05dd9db60a36038ab89568"></span>
[Vector3](#class_macgyver_1_1_math_1_1_vector3) **operator/** (const
float b)

<span id="class_macgyver_1_1_math_1_1_vector3_a2b28d645bb5a2b0f2a9def1e5e97d780"
label="class_macgyver_1_1_math_1_1_vector3_a2b28d645bb5a2b0f2a9def1e5e97d780"></span>
[Vector3](#class_macgyver_1_1_math_1_1_vector3) & **operator+=** (const
[Vector3](#class_macgyver_1_1_math_1_1_vector3) &a)

[Force2D](#class_macgyver_1_1_math_1_1_force2_d)
[copyToForce2D](#class_macgyver_1_1_math_1_1_vector3_a279e0d8f02439f19d6d75af18650f7a3)
()

</div>

<div class="DoxyCompactItemize">

<span id="class_macgyver_1_1_math_1_1_vector3_a269eb4134e4f0a9c26060f83c18b5ae5"
label="class_macgyver_1_1_math_1_1_vector3_a269eb4134e4f0a9c26060f83c18b5ae5"></span>
float **x**

<span id="class_macgyver_1_1_math_1_1_vector3_ab872ad5413e66215ad419e81f7c5dcc9"
label="class_macgyver_1_1_math_1_1_vector3_ab872ad5413e66215ad419e81f7c5dcc9"></span>
float **y**

<span id="class_macgyver_1_1_math_1_1_vector3_a379438d068bd4aa8514a28e36e02ed25"
label="class_macgyver_1_1_math_1_1_vector3_a379438d068bd4aa8514a28e36e02ed25"></span>
float **z**

</div>

Class to represent a 3 dimensional vector x -$>$ represents horizontal y
-$>$ represents vertical z -$>$ represents distance to the camera

<span id="class_macgyver_1_1_math_1_1_vector3_a61fb1b28cf667c8ef1a90bcd8b405b15"
label="class_macgyver_1_1_math_1_1_vector3_a61fb1b28cf667c8ef1a90bcd8b405b15"></span>

Macgyver::Math::Vector3::Vector3 (

<div class="DoxyParamCaption">

x = ,

y = ,

z =

</div>

)

Contructor for the class

<div class="DoxyParams">

Parameters *x* & x-value for the vector, default 0  
*y* & y-value for the vector, default 0  
*z* & z-value for the vector, default 0  

</div>

<span id="class_macgyver_1_1_math_1_1_vector3_a279e0d8f02439f19d6d75af18650f7a3"
label="class_macgyver_1_1_math_1_1_vector3_a279e0d8f02439f19d6d75af18650f7a3"></span>

[Macgyver::Math::Force2D](#class_macgyver_1_1_math_1_1_force2_d)
Macgyver::Math::Vector3::copyToForce2D (

<div class="DoxyParamCaption">

</div>

)

Creates a new force 2D object with the same x and y components as this
object

<div class="DoxyReturn">

Returns a object which has the same x and y components as this vector
but anb under the hood z component of 0.

</div>

The documentation for this class was generated from the following files:

<div class="DoxyCompactItemize">

MacGyver/Vector3.h

MacGyver/Vector3.cpp

</div>
