<div id="classdetail_1_1file__input__adapter">

</div>

<span id="classdetail_1_1file__input__adapter"
label="classdetail_1_1file__input__adapter"></span>

\#include $<$json.hpp$>$

<div class="DoxyCompactItemize">

<span id="classdetail_1_1file__input__adapter_a3b5e06ee3f6561da1cc28cbf123c68d5"
label="classdetail_1_1file__input__adapter_a3b5e06ee3f6561da1cc28cbf123c68d5"></span>
using **char_type** = char

</div>

<div class="DoxyCompactItemize">

<span id="classdetail_1_1file__input__adapter_a85d302c9edf55671d7c97c55a168f489"
label="classdetail_1_1file__input__adapter_a85d302c9edf55671d7c97c55a168f489"></span>
**file_input_adapter** (std::FILE $\ast$f) noexcept

<span id="classdetail_1_1file__input__adapter_a54b65d48bd61c205d8a2858a219cb9e8"
label="classdetail_1_1file__input__adapter_a54b65d48bd61c205d8a2858a219cb9e8"></span>
**file_input_adapter** (const
[file_input_adapter](#classdetail_1_1file__input__adapter) &)=delete

<span id="classdetail_1_1file__input__adapter_ab2476871ff7a60abf66cac4edc62aab0"
label="classdetail_1_1file__input__adapter_ab2476871ff7a60abf66cac4edc62aab0"></span>
**file_input_adapter**
([file_input_adapter](#classdetail_1_1file__input__adapter) &&)
noexcept=default

<span id="classdetail_1_1file__input__adapter_a8f94fafdffaeb7946085f6b068a70e10"
label="classdetail_1_1file__input__adapter_a8f94fafdffaeb7946085f6b068a70e10"></span>
[file_input_adapter](#classdetail_1_1file__input__adapter) &
**operator=** (const
[file_input_adapter](#classdetail_1_1file__input__adapter) &)=delete

<span id="classdetail_1_1file__input__adapter_a96320c058ba7dbd820d8dd7979657714"
label="classdetail_1_1file__input__adapter_a96320c058ba7dbd820d8dd7979657714"></span>
[file_input_adapter](#classdetail_1_1file__input__adapter) &
**operator=**
([file_input_adapter](#classdetail_1_1file__input__adapter) &&)=delete

<span id="classdetail_1_1file__input__adapter_aaa2985dac52c3518e6d11ecf2cc53ed8"
label="classdetail_1_1file__input__adapter_aaa2985dac52c3518e6d11ecf2cc53ed8"></span>
std::char_traits$<$ char $>$::int_type **get_character** () noexcept

</div>

Input adapter for stdio file access. This adapter read only 1 byte and
do not use any buffer. This adapter is a very low level adapter.

The documentation for this class was generated from the following file:

<div class="DoxyCompactItemize">

MacGyver/json.hpp

</div>
