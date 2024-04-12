<div id="class_macgyver_1_1_input">

</div>

<span id="class_macgyver_1_1_input"
label="class_macgyver_1_1_input"></span>

\#include $<$Input.h$>$

<div class="DoxyCompactItemize">

<span id="class_macgyver_1_1_input_aa549c145e33d88afc8429ca1bbc19e97"
label="class_macgyver_1_1_input_aa549c145e33d88afc8429ca1bbc19e97"></span>
**Input** (const [Input](#class_macgyver_1_1_input) &)=delete

<span id="class_macgyver_1_1_input_ac7a8c34f3c9b323e84824180d3a09caf"
label="class_macgyver_1_1_input_ac7a8c34f3c9b323e84824180d3a09caf"></span>
[Input](#class_macgyver_1_1_input) & **operator=** (const
[Input](#class_macgyver_1_1_input) &)=delete

void
[update](#class_macgyver_1_1_input_aa7fe26710dd863d11737bf2f6de4ad05) ()

<span id="class_macgyver_1_1_input_ae73e96dc600dc4ad8f7fa1ae70028cb8"
label="class_macgyver_1_1_input_ae73e96dc600dc4ad8f7fa1ae70028cb8"></span>
int32_t **getNumConnectedControllers** ()

<span id="class_macgyver_1_1_input_a706993466d0351f896d3085c0ccc7151"
label="class_macgyver_1_1_input_a706993466d0351f896d3085c0ccc7151"></span>
void **openController** (int32_t id)

<span id="class_macgyver_1_1_input_a7a3fa8f8de42ac0c23c0240ec24fdaad"
label="class_macgyver_1_1_input_a7a3fa8f8de42ac0c23c0240ec24fdaad"></span>
void **closeController** (int32_t id)

<span id="class_macgyver_1_1_input_aa1f98ea533a7b8f804a161d14b706177"
label="class_macgyver_1_1_input_aa1f98ea533a7b8f804a161d14b706177"></span>
void **closeAllControllers** ()

bool
[isKeyDown](#class_macgyver_1_1_input_a86e88130554b44ac6f32d82f6f22939e)
(SDL_KeyCode key)

bool
[isKeyDown](#class_macgyver_1_1_input_aea17facd725c667178b1c70f0b74294b)
(SDL_Scancode key)

<span id="class_macgyver_1_1_input_afaa09a631dde90b69a6ffecd7eff86a1"
label="class_macgyver_1_1_input_afaa09a631dde90b69a6ffecd7eff86a1"></span>
bool **controller_isButtonDown** (int32_t id, SDL_GameControllerButton
button)

<span id="class_macgyver_1_1_input_a6e842a64394b7a03518bb1c85d680451"
label="class_macgyver_1_1_input_a6e842a64394b7a03518bb1c85d680451"></span>
int32_t **controller_getAxisPosition** (int32_t id,
SDL_GameControllerAxis axis)

<span id="class_macgyver_1_1_input_a770ae5773f9289f1f5fe875dea9063a2"
label="class_macgyver_1_1_input_a770ae5773f9289f1f5fe875dea9063a2"></span>
bool **isMouseButtonDown** (Mouse button)

<span id="class_macgyver_1_1_input_ac7ef525d05f77cf03ebdad47a6a0dc39"
label="class_macgyver_1_1_input_ac7ef525d05f77cf03ebdad47a6a0dc39"></span>
void **getMousePosition** (int $\ast$x, int $\ast$y)

<span id="class_macgyver_1_1_input_abccc56a82c0993df8ce798eca48d2a3f"
label="class_macgyver_1_1_input_abccc56a82c0993df8ce798eca48d2a3f"></span>
void **INTERNAL_addMouseWheel** (int value)

<span id="class_macgyver_1_1_input_a944cedbcc3b64dca80b0799bd7eebe5f"
label="class_macgyver_1_1_input_a944cedbcc3b64dca80b0799bd7eebe5f"></span>
int **getMouseWheelPos** ()

<span id="class_macgyver_1_1_input_a951c054b0508b3fae8e8ae9d084a8846"
label="class_macgyver_1_1_input_a951c054b0508b3fae8e8ae9d084a8846"></span>
void **resetMouseWheelPos** ()

</div>

<div class="DoxyCompactItemize">

<span id="class_macgyver_1_1_input_a11eb22606ddadbda7ac5cf18ebec6791"
label="class_macgyver_1_1_input_a11eb22606ddadbda7ac5cf18ebec6791"></span>
static [Input](#class_macgyver_1_1_input) & **getInstance** ()

</div>

Static class to handle checking for input in the engine

<span id="class_macgyver_1_1_input_a86e88130554b44ac6f32d82f6f22939e"
label="class_macgyver_1_1_input_a86e88130554b44ac6f32d82f6f22939e"></span>

bool Input::isKeyDown (

<div class="DoxyParamCaption">

key

</div>

)

Gets if the passed in key is held. (NOTE: key will be converted to
SDL_Scancode representation internally)

<div class="DoxyParams">

Parameters *key* & SDL_KeyCode representing the selected key  

</div>

<div class="DoxyReturn">

Returns true if presed down currently, false if not

</div>

<span id="class_macgyver_1_1_input_aea17facd725c667178b1c70f0b74294b"
label="class_macgyver_1_1_input_aea17facd725c667178b1c70f0b74294b"></span>

bool Input::isKeyDown (

<div class="DoxyParamCaption">

key

</div>

)

Gets if the passed in key is held.

<div class="DoxyParams">

Parameters *key* & SDL_Scancode representing the selected key  

</div>

<div class="DoxyReturn">

Returns true if presed down currently, false if not

</div>

<span id="class_macgyver_1_1_input_aa7fe26710dd863d11737bf2f6de4ad05"
label="class_macgyver_1_1_input_aa7fe26710dd863d11737bf2f6de4ad05"></span>

void Input::update (

<div class="DoxyParamCaption">

</div>

)

Called once each frame in the main game loop Note: Must be called after
SDLs pump WARNING: ONLY CALL IN MAIN GAME LOOP

The documentation for this class was generated from the following files:

<div class="DoxyCompactItemize">

MacGyver/Input.h

MacGyver/Input.cpp

</div>
