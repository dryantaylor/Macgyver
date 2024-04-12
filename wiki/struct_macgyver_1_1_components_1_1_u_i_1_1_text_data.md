<div id="struct_macgyver_1_1_components_1_1_u_i_1_1_text_data">

</div>

<span id="struct_macgyver_1_1_components_1_1_u_i_1_1_text_data"
label="struct_macgyver_1_1_components_1_1_u_i_1_1_text_data"></span>

\#include $<$Text.h$>$

<div class="DoxyCompactItemize">

<span id="struct_macgyver_1_1_components_1_1_u_i_1_1_text_data_a53fff2e180b23670655d1144b530b0d6"
label="struct_macgyver_1_1_components_1_1_u_i_1_1_text_data_a53fff2e180b23670655d1144b530b0d6"></span>
**TextData** (SDL_Renderer $\ast$renderer, std::string txt, std::string
fnt, unsigned int
[ptSize](#struct_macgyver_1_1_components_1_1_u_i_1_1_text_data_a53f25e47d34ec0e2598cb52c023a7a95),
SDL_Rect rect)

</div>

<div class="DoxyCompactItemize">

<span id="struct_macgyver_1_1_components_1_1_u_i_1_1_text_data_aeed5e9eaeab783aedf28b5ffd204a689"
label="struct_macgyver_1_1_components_1_1_u_i_1_1_text_data_aeed5e9eaeab783aedf28b5ffd204a689"></span>
std::string **text**

<div class="DoxyCompactList">

*currently being rendered.*

</div>

<span id="struct_macgyver_1_1_components_1_1_u_i_1_1_text_data_a7ec87ed9e7219d2648db89305f29542c"
label="struct_macgyver_1_1_components_1_1_u_i_1_1_text_data_a7ec87ed9e7219d2648db89305f29542c"></span>
std::string **font**

<div class="DoxyCompactList">

*name of font being used to render text*

</div>

<span id="struct_macgyver_1_1_components_1_1_u_i_1_1_text_data_a53f25e47d34ec0e2598cb52c023a7a95"
label="struct_macgyver_1_1_components_1_1_u_i_1_1_text_data_a53f25e47d34ec0e2598cb52c023a7a95"></span>
unsigned int **ptSize**

<div class="DoxyCompactList">

*size the text is being rendered at*

</div>

std::string
[INTERNAL_cachedText](#struct_macgyver_1_1_components_1_1_u_i_1_1_text_data_a1762f7a47312594561cbd2818a259bc8)

<span id="struct_macgyver_1_1_components_1_1_u_i_1_1_text_data_ada936f2caccf604e78f53d5979bd4e4f"
label="struct_macgyver_1_1_components_1_1_u_i_1_1_text_data_ada936f2caccf604e78f53d5979bd4e4f"></span>
std::string **INTERNAL_cachedFont**

<span id="struct_macgyver_1_1_components_1_1_u_i_1_1_text_data_ad544ca9d278db1cafa0f7d93dddeec8f"
label="struct_macgyver_1_1_components_1_1_u_i_1_1_text_data_ad544ca9d278db1cafa0f7d93dddeec8f"></span>
unsigned int **INTERNAL_cachedPtSize**

<span id="struct_macgyver_1_1_components_1_1_u_i_1_1_text_data_afa8e9a0b8fc0ba2e20086e8bee510254"
label="struct_macgyver_1_1_components_1_1_u_i_1_1_text_data_afa8e9a0b8fc0ba2e20086e8bee510254"></span>
SDL_Rect **textBoundries**

<div class="DoxyCompactList">

*boundry for the text to be rendered in*

</div>

</div>

Struct to hold data about text being rendered to the screen

<span id="struct_macgyver_1_1_components_1_1_u_i_1_1_text_data_a1762f7a47312594561cbd2818a259bc8"
label="struct_macgyver_1_1_components_1_1_u_i_1_1_text_data_a1762f7a47312594561cbd2818a259bc8"></span>
std::string Macgyver::Components::UI::TextData::INTERNAL_cachedText

following data is used for tracking changes between frames

The documentation for this struct was generated from the following
files:

<div class="DoxyCompactItemize">

MacGyver/Text.h

MacGyver/Text.cpp

</div>
