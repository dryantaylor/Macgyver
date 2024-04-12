<div id="structdetail_1_1is__constructible__array__type__impl_3_01_basic_json_type_00_01_constructible_ar54e545c8083fe861c90a40ff938a22b7">

</div>

<span id="structdetail_1_1is__constructible__array__type__impl_3_01_basic_json_type_00_01_constructible_ar54e545c8083fe861c90a40ff938a22b7"
label="structdetail_1_1is__constructible__array__type__impl_3_01_basic_json_type_00_01_constructible_ar54e545c8083fe861c90a40ff938a22b7"></span>

<div class="DoxyCompactItemize">

<span id="structdetail_1_1is__constructible__array__type__impl_3_01_basic_json_type_00_01_constructible_ar54e545c8083fe861c90a40ff938a22b7_a27b3a7d1007755a51043ffbc3381afd0"
label="structdetail_1_1is__constructible__array__type__impl_3_01_basic_json_type_00_01_constructible_ar54e545c8083fe861c90a40ff938a22b7_a27b3a7d1007755a51043ffbc3381afd0"></span>
using **value_type** = range_value_t$<$ConstructibleArrayType$>$

</div>

<div class="DoxyCompactItemize">

static constexpr bool
[value](#structdetail_1_1is__constructible__array__type__impl_3_01_basic_json_type_00_01_constructible_ar54e545c8083fe861c90a40ff938a22b7_af9e0932ee1c0d23d339ebe1e489d0afd)

</div>

<span id="structdetail_1_1is__constructible__array__type__impl_3_01_basic_json_type_00_01_constructible_ar54e545c8083fe861c90a40ff938a22b7_af9e0932ee1c0d23d339ebe1e489d0afd"
label="structdetail_1_1is__constructible__array__type__impl_3_01_basic_json_type_00_01_constructible_ar54e545c8083fe861c90a40ff938a22b7_af9e0932ee1c0d23d339ebe1e489d0afd"></span>
template$<$typename BasicJsonType , typename ConstructibleArrayType
$>$  
constexpr bool
[detail::is_constructible_array_type_impl](#structdetail_1_1is__constructible__array__type__impl)$<$
BasicJsonType, ConstructibleArrayType, enable_if_t$<$ !std::is_same$<$
ConstructibleArrayType, typename BasicJsonType::value_type $>$::value
&&\![is_compatible_string_type](#structdetail_1_1is__compatible__string__type)$<$
BasicJsonType, ConstructibleArrayType $>$::value
&&[is_default_constructible](#structdetail_1_1is__default__constructible)$<$
ConstructibleArrayType $>$::value &&(std::is_move_assignable$<$
ConstructibleArrayType
$>$::value$\vert$$\vert$std::is_copy_assignable$<$
ConstructibleArrayType $>$::value)&&is_detected$<$ iterator_t,
ConstructibleArrayType $>$::value
&&[is_iterator_traits](#structdetail_1_1is__iterator__traits)$<$
[iterator_traits](#structdetail_1_1iterator__traits)$<$ detected_t$<$
iterator_t, ConstructibleArrayType $>$ $>$ $>$::value &&is_detected$<$
range_value_t, ConstructibleArrayType $>$::value &&!std::is_same$<$
ConstructibleArrayType, detected_t$<$ range_value_t,
ConstructibleArrayType $>$ $>$::value
&&[is_complete_type](#structdetail_1_1is__complete__type)$<$
detected_t$<$ range_value_t, ConstructibleArrayType $>$ $>$::value $>$
$>$::value,

**Initial value:**

<div class="DoxyCode">

0

</div>

The documentation for this struct was generated from the following file:

<div class="DoxyCompactItemize">

MacGyver/json.hpp

</div>
