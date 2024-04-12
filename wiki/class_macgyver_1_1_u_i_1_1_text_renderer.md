<div id="class_macgyver_1_1_u_i_1_1_text_renderer">

</div>

<span id="class_macgyver_1_1_u_i_1_1_text_renderer"
label="class_macgyver_1_1_u_i_1_1_text_renderer"></span>

<div class="DoxyCompactItemize">

<span id="class_macgyver_1_1_u_i_1_1_text_renderer_a7e81a98e1d1513f4cfbfa918304dc392"
label="class_macgyver_1_1_u_i_1_1_text_renderer_a7e81a98e1d1513f4cfbfa918304dc392"></span>
**TextRenderer** (const
[TextRenderer](#class_macgyver_1_1_u_i_1_1_text_renderer) &)=delete

<span id="class_macgyver_1_1_u_i_1_1_text_renderer_a2a694e81c2b0b488c8edc2e470ee0dc8"
label="class_macgyver_1_1_u_i_1_1_text_renderer_a2a694e81c2b0b488c8edc2e470ee0dc8"></span>
void **addFont** (std::string textureName,
[Font](#class_macgyver_1_1_u_i_1_1_font) $\ast$font)

<span id="class_macgyver_1_1_u_i_1_1_text_renderer_a8639b469c865217ba40018dd1b104e1e"
label="class_macgyver_1_1_u_i_1_1_text_renderer_a8639b469c865217ba40018dd1b104e1e"></span>
void **addFontUsage** (std::string fontName)

<span id="class_macgyver_1_1_u_i_1_1_text_renderer_a634878bf3e7bbcbe0b68a70fb12d6849"
label="class_macgyver_1_1_u_i_1_1_text_renderer_a634878bf3e7bbcbe0b68a70fb12d6849"></span>
void **removeFontUsage** (std::string fontName)

<span id="class_macgyver_1_1_u_i_1_1_text_renderer_a6f13cfb6440d0270308e17dc516f60aa"
label="class_macgyver_1_1_u_i_1_1_text_renderer_a6f13cfb6440d0270308e17dc516f60aa"></span>
SDL_Texture $\ast$ **displayText** (SDL_Renderer $\ast$renderer,
std::string fontName, std::string text, SDL_Rect $\ast$dstRect,
SDL_Color displayColour={ 255, 255, 255 }, int ptSize=-1)

</div>

<div class="DoxyCompactItemize">

<span id="class_macgyver_1_1_u_i_1_1_text_renderer_ae1904e8d7d94438384c2a825f04022e9"
label="class_macgyver_1_1_u_i_1_1_text_renderer_ae1904e8d7d94438384c2a825f04022e9"></span>
static [TextRenderer](#class_macgyver_1_1_u_i_1_1_text_renderer) &
**getInstance** ()

</div>

The documentation for this class was generated from the following files:

<div class="DoxyCompactItemize">

MacGyver/TextRenderer.h

MacGyver/TextRenderer.cpp

</div>
