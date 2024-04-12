<div id="class_macgyver_1_1_animation_handler">

</div>

<span id="class_macgyver_1_1_animation_handler"
label="class_macgyver_1_1_animation_handler"></span>

\#include $<$AnimationHandler.h$>$

<div class="DoxyCompactItemize">

<span id="class_macgyver_1_1_animation_handler_a501210dbc0431a6d49db5ce24a5a5ecc"
label="class_macgyver_1_1_animation_handler_a501210dbc0431a6d49db5ce24a5a5ecc"></span>
**AnimationHandler** (const
[AnimationHandler](#class_macgyver_1_1_animation_handler) &)=delete

<span id="class_macgyver_1_1_animation_handler_ae3a3c12c386e633a346614980739cde0"
label="class_macgyver_1_1_animation_handler_ae3a3c12c386e633a346614980739cde0"></span>
[AnimationHandler](#class_macgyver_1_1_animation_handler) &
**operator=** (const
[AnimationHandler](#class_macgyver_1_1_animation_handler) &)=delete

void
[attachRenderer](#class_macgyver_1_1_animation_handler_a367dc496d779b11d8d3e38bf9c0ace0b)
(SDL_Renderer $\ast$renderer)

bool
[addAnimation](#class_macgyver_1_1_animation_handler_ab56e8354ac281aef131e2cef2d751c7f)
(std::string name, std::string path)

bool
[addAnimation](#class_macgyver_1_1_animation_handler_a02b91d7c0f27c300f963afe2b54a51b0)
(std::string name,
[Animations::AnimationData](#struct_macgyver_1_1_animations_1_1_animation_data)
$\ast$animation)

void
[closeAnimationData](#class_macgyver_1_1_animation_handler_a3069e1496b3c52a26b5ea9c47188035b)
(std::string name)

void
[closeAllAnimationData](#class_macgyver_1_1_animation_handler_aa14ef2174adb148bf4981d02909ff7c9)
()

unsigned int
[beginAnimation](#class_macgyver_1_1_animation_handler_af6317d69b1920a4c65bb2316006bd332)
([Components::RenderableData](#struct_macgyver_1_1_components_1_1_renderable_data)
$\ast$attachedRenderable, std::string animName)

void
[changeActiveAnimation](#class_macgyver_1_1_animation_handler_a3ee78800ee93904ea16578a0612f4595)
(unsigned int id, std::string animationName)

void
[changeCurrentFrame](#class_macgyver_1_1_animation_handler_a6e0a7159f7873c00466f7c7f1f381e77)
(unsigned int id, unsigned int frame)

void
[changeCurrentTick](#class_macgyver_1_1_animation_handler_a9474aafdf72a30bbc1d0172b1c68d386)
(unsigned int id, unsigned int tick)

void
[getCurrentFrameProperties](#class_macgyver_1_1_animation_handler_a2a58f9b4bec9540afd2b6ea20e985dc3)
(unsigned int id, unsigned int $\ast$outFrameNumber, unsigned int
$\ast$outTick)

void
[closeActiveAnimation](#class_macgyver_1_1_animation_handler_a3ff3c3c57c83894f8371661c66c89879)
(unsigned int id)

void
[closeAllActiveAnimations](#class_macgyver_1_1_animation_handler_a0de546eeaafb90223fda419f6c904cb9)
()

void
[update](#class_macgyver_1_1_animation_handler_aaed2122d1268881c37da014864dd777d)
(unsigned int deltaTime)

</div>

<div class="DoxyCompactItemize">

static [AnimationHandler](#class_macgyver_1_1_animation_handler) &
[getInstance](#class_macgyver_1_1_animation_handler_a47d6dc2ae1e4731dd83ad9dac28caa9f)
()

</div>

Stores a set of animations stored as a name e.g "Player/walk" mapped to
an AnimationData object. Methods within components can call to load new
Animation objects or close them. They can bind a RENDERABLE component to
a loaded animation which creates a new entry into a map which
corresponds to an ID to access that animation at any time. Each entry
will have a unique tick count/ frame and can change between animations
through method calls via this singleton handler class.

ADD A RENDERER TO THIS CLASS BEFORE LOADING ANY COMPONENTS.

<span id="class_macgyver_1_1_animation_handler_a02b91d7c0f27c300f963afe2b54a51b0"
label="class_macgyver_1_1_animation_handler_a02b91d7c0f27c300f963afe2b54a51b0"></span>

bool Macgyver::AnimationHandler::addAnimation (

<div class="DoxyParamCaption">

name,

animation

</div>

)

Add an animation from already existing AnimationData$\ast$ Not sure why
this would be used but creating it just in case. WARNING: May be
removed.

<div class="DoxyParams">

Parameters *name* & name the animation will be stored as and referenced
by  
*animation* & AnimationData reference to the Animation. This object
should not be manually freed, lest bad things happen to you.  

</div>

<div class="DoxyReturn">

Returns true if animation could be added (no animation exists with the
name provided). False otherwise

</div>

<span id="class_macgyver_1_1_animation_handler_ab56e8354ac281aef131e2cef2d751c7f"
label="class_macgyver_1_1_animation_handler_ab56e8354ac281aef131e2cef2d751c7f"></span>

bool Macgyver::AnimationHandler::addAnimation (

<div class="DoxyParamCaption">

name,

path

</div>

)

Load an animation from file and add it to the animations.

<div class="DoxyParams">

Parameters *name* & name the animation will be stored as and referenced
by  
*path* & path relative to the working directory of the exe to find the
animation data  

</div>

<div class="DoxyReturn">

Returns true if animation could be added (no animation exists with the
name provided). False otherwise

</div>

<span id="class_macgyver_1_1_animation_handler_a367dc496d779b11d8d3e38bf9c0ace0b"
label="class_macgyver_1_1_animation_handler_a367dc496d779b11d8d3e38bf9c0ace0b"></span>

void Macgyver::AnimationHandler::attachRenderer (

<div class="DoxyParamCaption">

renderer

</div>

)

CALL ONLY ONCE IN MAIN LOOP attaches an SDL_Renderer$\ast$ for use when
creating new animations
<span id="class_macgyver_1_1_animation_handler_af6317d69b1920a4c65bb2316006bd332"
label="class_macgyver_1_1_animation_handler_af6317d69b1920a4c65bb2316006bd332"></span>

unsigned int Macgyver::AnimationHandler::beginAnimation (

<div class="DoxyParamCaption">

attachedRenderable,

animName

</div>

)

begins animating a renderable component and sets the idle animation to
the animation stored with the name provided. Active animation will
defualt to this as well. WARNING: idle animation should always loop.
Undefined behaviour if it doesnt. Losing a returned ID will mean there
is no way to modify the animation, including freeing the memory. A full
flush of all managed animations would be required to stop the animation.

<div class="DoxyParams">

Parameters *attachedRenderable* & RenderableData reference to the
Component to animate  
*animName* & name of the animation to set as the idle and first active
Animation  

</div>

<div class="DoxyReturn">

Returns unsigned int id of the animation used in all methods which
require an id to effect. Will return 0 if no more animations are
available (currently 512 at once)

</div>

<span id="class_macgyver_1_1_animation_handler_a3ee78800ee93904ea16578a0612f4595"
label="class_macgyver_1_1_animation_handler_a3ee78800ee93904ea16578a0612f4595"></span>

void Macgyver::AnimationHandler::changeActiveAnimation (

<div class="DoxyParamCaption">

id,

animationName

</div>

)

Given an id for an animation currently being managed, and a name of the
animation to change it to change the animation from the current
animation to the new one, and reset its current frame and time along
that frame. If the new animation is the same as the old one, no changes
to frame will be made.

<div class="DoxyParams">

Parameters *id* & id of the managed animation as given by the begin
animation.  
*name* & name as passed into addAnimation of the animation to swap to  

</div>

<span id="class_macgyver_1_1_animation_handler_a6e0a7159f7873c00466f7c7f1f381e77"
label="class_macgyver_1_1_animation_handler_a6e0a7159f7873c00466f7c7f1f381e77"></span>

void Macgyver::AnimationHandler::changeCurrentFrame (

<div class="DoxyParamCaption">

id,

frame

</div>

)

Given an id for an animation currently being managed, change the current
frame of that animation to frame. WARNING: passing in a value higher
than the number of frames may cause issues. If youre unsure of how many
frames an animation has check with getCurrentFrameProperties. Does not
check for id being valid.

<div class="DoxyParams">

Parameters *id* & id of the managed animation as given by the
beginAnimation.  
*frame* & frame number to set the current frame to  

</div>

<span id="class_macgyver_1_1_animation_handler_a9474aafdf72a30bbc1d0172b1c68d386"
label="class_macgyver_1_1_animation_handler_a9474aafdf72a30bbc1d0172b1c68d386"></span>

void Macgyver::AnimationHandler::changeCurrentTick (

<div class="DoxyParamCaption">

id,

tick

</div>

)

Given an id for an animation currently being managed, change the current
tick of that animation (tick meaning how far into the frame it is). Does
not check for id being valid

<div class="DoxyParams">

Parameters *id* & id of the managed animation as given by
beginAnimation  
*tick* & tick value to change the current tick to  

</div>

<span id="class_macgyver_1_1_animation_handler_a3ff3c3c57c83894f8371661c66c89879"
label="class_macgyver_1_1_animation_handler_a3ff3c3c57c83894f8371661c66c89879"></span>

void Macgyver::AnimationHandler::closeActiveAnimation (

<div class="DoxyParamCaption">

id

</div>

)

Closes the active animation given by id, and frees the id to be used
again.

<div class="DoxyParams">

Parameters *id* & id of the managed animation as given by
beginAnimation  

</div>

<span id="class_macgyver_1_1_animation_handler_a0de546eeaafb90223fda419f6c904cb9"
label="class_macgyver_1_1_animation_handler_a0de546eeaafb90223fda419f6c904cb9"></span>

void Macgyver::AnimationHandler::closeAllActiveAnimations (

<div class="DoxyParamCaption">

</div>

)

closes all active animations
<span id="class_macgyver_1_1_animation_handler_aa14ef2174adb148bf4981d02909ff7c9"
label="class_macgyver_1_1_animation_handler_aa14ef2174adb148bf4981d02909ff7c9"></span>

void Macgyver::AnimationHandler::closeAllAnimationData (

<div class="DoxyParamCaption">

</div>

)

Closes all animation data objects stored in the class
<span id="class_macgyver_1_1_animation_handler_a3069e1496b3c52a26b5ea9c47188035b"
label="class_macgyver_1_1_animation_handler_a3069e1496b3c52a26b5ea9c47188035b"></span>

void Macgyver::AnimationHandler::closeAnimationData (

<div class="DoxyParamCaption">

name

</div>

)

Closes the animation data of the animation given as name

<div class="DoxyParams">

Parameters *name* & name of the animation to close  

</div>

<span id="class_macgyver_1_1_animation_handler_a2a58f9b4bec9540afd2b6ea20e985dc3"
label="class_macgyver_1_1_animation_handler_a2a58f9b4bec9540afd2b6ea20e985dc3"></span>

void Macgyver::AnimationHandler::getCurrentFrameProperties (

<div class="DoxyParamCaption">

id,

outFrameNumber,

outTick

</div>

)

Gives the frame number and current tick of the animation given by id.

<div class="DoxyParams">

Parameters *id* & id of the managed animation as given by
beginAnimation  
*outFrameNumber* & pointer to an unsigned int to write a copy of the
frame number to, or NULL to not write it  
*outTick* & pointer to an unsigned int to write a copy of the current
tick to, or NULL to not write it  

</div>

<span id="class_macgyver_1_1_animation_handler_a47d6dc2ae1e4731dd83ad9dac28caa9f"
label="class_macgyver_1_1_animation_handler_a47d6dc2ae1e4731dd83ad9dac28caa9f"></span>

static [AnimationHandler](#class_macgyver_1_1_animation_handler) &
Macgyver::AnimationHandler::getInstance (

<div class="DoxyParamCaption">

</div>

),

Thread safe singleton. Gets the instance of the . If one does not exist
it creates one and returns that.
<span id="class_macgyver_1_1_animation_handler_aaed2122d1268881c37da014864dd777d"
label="class_macgyver_1_1_animation_handler_aaed2122d1268881c37da014864dd777d"></span>

void Macgyver::AnimationHandler::update (

<div class="DoxyParamCaption">

deltaTime

</div>

)

checks all active animations for any frame changes called by the main
game loop not individual objects

<div class="DoxyParams">

Parameters *deltaTime* & time in ms between last frame and current
frame.  

</div>

The documentation for this class was generated from the following files:

<div class="DoxyCompactItemize">

MacGyver/AnimationHandler.h

MacGyver/AnimationHandler.cpp

</div>
