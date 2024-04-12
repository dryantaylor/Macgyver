<div id="class_macgyver_1_1_math_1_1_force2_d">

</div>

<span id="class_macgyver_1_1_math_1_1_force2_d"
label="class_macgyver_1_1_math_1_1_force2_d"></span>

\#include $<$Force2D.h$>$

Inheritance diagram for Macgyver::Math::Force2D:

<figure>
<div class="center">
<img src="class_macgyver_1_1_math_1_1_force2_d" style="height:2cm" />
</div>
</figure>

<div class="DoxyCompactItemize">

[Force2D](#class_macgyver_1_1_math_1_1_force2_d_a15710f24ad428db74ead3a373e86e175)
(float x=0, float y=0)

<span id="class_macgyver_1_1_math_1_1_force2_d_a9970cfb63631ba63290911f248fc2417"
label="class_macgyver_1_1_math_1_1_force2_d_a9970cfb63631ba63290911f248fc2417"></span>
[Force2D](#class_macgyver_1_1_math_1_1_force2_d) **operator+** (const
[Force2D](#class_macgyver_1_1_math_1_1_force2_d) &a)

float
[magnitude](#class_macgyver_1_1_math_1_1_force2_d_aa4842b5726dd497eb168ad91be6111ea)
()

void
[normalise](#class_macgyver_1_1_math_1_1_force2_d_aa060894629473f34159e97735cfb457c)
()

void
[normalize](#class_macgyver_1_1_math_1_1_force2_d_ab82a9250dd45109b9d1d6d714bbd1dff)
()

void
[scaleToMagnitude](#class_macgyver_1_1_math_1_1_force2_d_aa4b8fb91dd09c33145a4ec90f6acdc20)
(float
[magnitude](#class_macgyver_1_1_math_1_1_force2_d_aa4842b5726dd497eb168ad91be6111ea))

void
[scalarMultiply](#class_macgyver_1_1_math_1_1_force2_d_a5cdc9621ffb56d4cc2750fc6a2abc5e2)
(float num)

[Math::Force2D](#class_macgyver_1_1_math_1_1_force2_d)
[returnScalarMultiply](#class_macgyver_1_1_math_1_1_force2_d_aa8087e4599a852606436d556b6c4ab56)
(float num)

</div>

<div class="DoxyCompactItemize">

[Vector3](#class_macgyver_1_1_math_1_1_vector3_a61fb1b28cf667c8ef1a90bcd8b405b15)
(float x=0, float y=0, float z=0)

[Vector3](#class_macgyver_1_1_math_1_1_vector3) **operator+** (const
[Vector3](#class_macgyver_1_1_math_1_1_vector3) &a)

[Vector3](#class_macgyver_1_1_math_1_1_vector3) **operator-** (const
[Vector3](#class_macgyver_1_1_math_1_1_vector3) &a)

[Vector3](#class_macgyver_1_1_math_1_1_vector3) **operator$\ast$**
(const float b)

[Vector3](#class_macgyver_1_1_math_1_1_vector3) **operator/** (const
float b)

[Vector3](#class_macgyver_1_1_math_1_1_vector3) & **operator+=** (const
[Vector3](#class_macgyver_1_1_math_1_1_vector3) &a)

[Force2D](#class_macgyver_1_1_math_1_1_force2_d)
[copyToForce2D](#class_macgyver_1_1_math_1_1_vector3_a279e0d8f02439f19d6d75af18650f7a3)
()

</div>

<div class="DoxyCompactItemize">

float **x**

float **y**

float **z**

</div>

Class to represent a 2D force being applied to an object. Inherrits from
, and will always set the z component to 0 by default.

<span id="class_macgyver_1_1_math_1_1_force2_d_a15710f24ad428db74ead3a373e86e175"
label="class_macgyver_1_1_math_1_1_force2_d_a15710f24ad428db74ead3a373e86e175"></span>

Math::Force2D::Force2D (

<div class="DoxyParamCaption">

x = ,

y =

</div>

)

Contrustor for the class

<div class="DoxyParams">

Parameters *x* & x-value for the vector, default 0  
*y* & y-value for the vector, default 0  

</div>

<span id="class_macgyver_1_1_math_1_1_force2_d_aa4842b5726dd497eb168ad91be6111ea"
label="class_macgyver_1_1_math_1_1_force2_d_aa4842b5726dd497eb168ad91be6111ea"></span>

float Math::Force2D::magnitude (

<div class="DoxyParamCaption">

</div>

)

Gets the magnitude of the vector (i.e the length if a direct line was
drawn from the start to the end of the vector)

<div class="DoxyReturn">

Returns the magnitude of the vector

</div>

<span id="class_macgyver_1_1_math_1_1_force2_d_aa060894629473f34159e97735cfb457c"
label="class_macgyver_1_1_math_1_1_force2_d_aa060894629473f34159e97735cfb457c"></span>

void Math::Force2D::normalise (

<div class="DoxyParamCaption">

</div>

)

Normalises the vector. (i.e modifies the x and y components so they
maintain the same ratio to eachother but have a magnitude of 1)
<span id="class_macgyver_1_1_math_1_1_force2_d_ab82a9250dd45109b9d1d6d714bbd1dff"
label="class_macgyver_1_1_math_1_1_force2_d_ab82a9250dd45109b9d1d6d714bbd1dff"></span>

void Math::Force2D::normalize (

<div class="DoxyParamCaption">

</div>

)

Normalizes the vector. (i.e modifies the x and y components so they
maintain the same ratio to eachother but have a magnitude of 1)
<span id="class_macgyver_1_1_math_1_1_force2_d_aa8087e4599a852606436d556b6c4ab56"
label="class_macgyver_1_1_math_1_1_force2_d_aa8087e4599a852606436d556b6c4ab56"></span>

[Math::Force2D](#class_macgyver_1_1_math_1_1_force2_d)
Macgyver::Math::Force2D::returnScalarMultiply (

<div class="DoxyParamCaption">

num

</div>

)

Multiplies the current vectors x and y components by num. Does not
mutate this object.

<div class="DoxyParams">

Parameters *num* & a scalar float to multiply by  

</div>

<div class="DoxyReturn">

Returns a new with the components of this multiplied by num

</div>

<span id="class_macgyver_1_1_math_1_1_force2_d_a5cdc9621ffb56d4cc2750fc6a2abc5e2"
label="class_macgyver_1_1_math_1_1_force2_d_a5cdc9621ffb56d4cc2750fc6a2abc5e2"></span>

void Macgyver::Math::Force2D::scalarMultiply (

<div class="DoxyParamCaption">

num

</div>

)

multiplies the x and y components by $<$num$>$, leaves any z component
untouched

<div class="DoxyParams">

Parameters *num* & number to multiply the vector by  

</div>

<span id="class_macgyver_1_1_math_1_1_force2_d_aa4b8fb91dd09c33145a4ec90f6acdc20"
label="class_macgyver_1_1_math_1_1_force2_d_aa4b8fb91dd09c33145a4ec90f6acdc20"></span>

void Math::Force2D::scaleToMagnitude (

<div class="DoxyParamCaption">

magnitude

</div>

)

Scales the x and y component so that they maintain the same ratio to
eachother but have a magnitude of $<$magnitude$>$

(Note: a value of 0 for the magnitude argument will result in the vector
being unchanged)

<div class="DoxyParams">

Parameters *magnitude* & the magnitude to scale the vector to, can be
any non-zero number  

</div>

The documentation for this class was generated from the following files:

<div class="DoxyCompactItemize">

MacGyver/Force2D.h

MacGyver/Force2D.cpp

</div>
