<div id="structdetail_1_1is__compatible__object__type__impl_3_01_basic_json_type_00_01_compatible_object_c9788cfc69b1e1eda6ea05aee660649a">

</div>

<span id="structdetail_1_1is__compatible__object__type__impl_3_01_basic_json_type_00_01_compatible_object_c9788cfc69b1e1eda6ea05aee660649a"
label="structdetail_1_1is__compatible__object__type__impl_3_01_basic_json_type_00_01_compatible_object_c9788cfc69b1e1eda6ea05aee660649a"></span>

<div class="DoxyCompactItemize">

<span id="structdetail_1_1is__compatible__object__type__impl_3_01_basic_json_type_00_01_compatible_object_c9788cfc69b1e1eda6ea05aee660649a_a9aceed5f20cc22350e1e518c452d40db"
label="structdetail_1_1is__compatible__object__type__impl_3_01_basic_json_type_00_01_compatible_object_c9788cfc69b1e1eda6ea05aee660649a_a9aceed5f20cc22350e1e518c452d40db"></span>
using **object_t** = typename BasicJsonType::object_t

</div>

<div class="DoxyCompactItemize">

static constexpr bool
[value](#structdetail_1_1is__compatible__object__type__impl_3_01_basic_json_type_00_01_compatible_object_c9788cfc69b1e1eda6ea05aee660649a_ae4a27d3b0d3be75f86fee86cbe15ab37)

</div>

<span id="structdetail_1_1is__compatible__object__type__impl_3_01_basic_json_type_00_01_compatible_object_c9788cfc69b1e1eda6ea05aee660649a_ae4a27d3b0d3be75f86fee86cbe15ab37"
label="structdetail_1_1is__compatible__object__type__impl_3_01_basic_json_type_00_01_compatible_object_c9788cfc69b1e1eda6ea05aee660649a_ae4a27d3b0d3be75f86fee86cbe15ab37"></span>
template$<$typename BasicJsonType , typename CompatibleObjectType $>$  
constexpr bool
[detail::is_compatible_object_type_impl](#structdetail_1_1is__compatible__object__type__impl)$<$
BasicJsonType, CompatibleObjectType, enable_if_t$<$ is_detected$<$
mapped_type_t, CompatibleObjectType $>$::value &&is_detected$<$
key_type_t, CompatibleObjectType $>$::value $>$ $>$::value,

**Initial value:**

<div class="DoxyCode">

0

</div>

The documentation for this struct was generated from the following file:

<div class="DoxyCompactItemize">

MacGyver/json.hpp

</div>
