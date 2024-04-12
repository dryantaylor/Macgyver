<div id="structdetail_1_1iterator__input__adapter__factory">

</div>

<span id="structdetail_1_1iterator__input__adapter__factory"
label="structdetail_1_1iterator__input__adapter__factory"></span>

<div class="DoxyCompactItemize">

<span id="structdetail_1_1iterator__input__adapter__factory_aff4a60e1331148d070d53d57c51d63d2"
label="structdetail_1_1iterator__input__adapter__factory_aff4a60e1331148d070d53d57c51d63d2"></span>
using **iterator_type** = IteratorType

<span id="structdetail_1_1iterator__input__adapter__factory_a806ee312b5d2266adbdc1e351b1ba19b"
label="structdetail_1_1iterator__input__adapter__factory_a806ee312b5d2266adbdc1e351b1ba19b"></span>
using **char_type** = typename
std::iterator_traits$<$iterator_type$>$::value_type

<span id="structdetail_1_1iterator__input__adapter__factory_a15284905759e09e61ea6c859eefc9d77"
label="structdetail_1_1iterator__input__adapter__factory_a15284905759e09e61ea6c859eefc9d77"></span>
using **adapter_type** =
[iterator_input_adapter](#classdetail_1_1iterator__input__adapter)$<$iterator_type$>$

</div>

<div class="DoxyCompactItemize">

<span id="structdetail_1_1iterator__input__adapter__factory_ab221afbf8e8a7555d07f4bcf6af8ddf1"
label="structdetail_1_1iterator__input__adapter__factory_ab221afbf8e8a7555d07f4bcf6af8ddf1"></span>
static adapter_type **create** (IteratorType first, IteratorType last)

</div>

The documentation for this struct was generated from the following file:

<div class="DoxyCompactItemize">

MacGyver/json.hpp

</div>
