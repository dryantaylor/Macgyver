<div id="structdetail_1_1is__constructible__object__type__impl_3_01_basic_json_type_00_01_constructible_oe3af2486927b63ecadb7a7d2ea385f2a">

</div>

<span id="structdetail_1_1is__constructible__object__type__impl_3_01_basic_json_type_00_01_constructible_oe3af2486927b63ecadb7a7d2ea385f2a"
label="structdetail_1_1is__constructible__object__type__impl_3_01_basic_json_type_00_01_constructible_oe3af2486927b63ecadb7a7d2ea385f2a"></span>

<div class="DoxyCompactItemize">

<span id="structdetail_1_1is__constructible__object__type__impl_3_01_basic_json_type_00_01_constructible_oe3af2486927b63ecadb7a7d2ea385f2a_a4d2f18ba45ed33ff1e6f7be379ec3ecb"
label="structdetail_1_1is__constructible__object__type__impl_3_01_basic_json_type_00_01_constructible_oe3af2486927b63ecadb7a7d2ea385f2a_a4d2f18ba45ed33ff1e6f7be379ec3ecb"></span>
using **object_t** = typename BasicJsonType::object_t

</div>

<div class="DoxyCompactItemize">

static constexpr bool
[value](#structdetail_1_1is__constructible__object__type__impl_3_01_basic_json_type_00_01_constructible_oe3af2486927b63ecadb7a7d2ea385f2a_ab3313b72e45caf312e3464d32fff3e67)

</div>

<span id="structdetail_1_1is__constructible__object__type__impl_3_01_basic_json_type_00_01_constructible_oe3af2486927b63ecadb7a7d2ea385f2a_ab3313b72e45caf312e3464d32fff3e67"
label="structdetail_1_1is__constructible__object__type__impl_3_01_basic_json_type_00_01_constructible_oe3af2486927b63ecadb7a7d2ea385f2a_ab3313b72e45caf312e3464d32fff3e67"></span>
template$<$typename BasicJsonType , typename ConstructibleObjectType
$>$  
constexpr bool
[detail::is_constructible_object_type_impl](#structdetail_1_1is__constructible__object__type__impl)$<$
BasicJsonType, ConstructibleObjectType, enable_if_t$<$ is_detected$<$
mapped_type_t, ConstructibleObjectType $>$::value &&is_detected$<$
key_type_t, ConstructibleObjectType $>$::value $>$ $>$::value,

**Initial value:**

<div class="DoxyCode">

0

</div>

The documentation for this struct was generated from the following file:

<div class="DoxyCompactItemize">

MacGyver/json.hpp

</div>
