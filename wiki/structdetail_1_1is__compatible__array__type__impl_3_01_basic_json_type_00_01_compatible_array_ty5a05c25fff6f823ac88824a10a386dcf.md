<div id="structdetail_1_1is__compatible__array__type__impl_3_01_basic_json_type_00_01_compatible_array_ty5a05c25fff6f823ac88824a10a386dcf">

</div>

<span id="structdetail_1_1is__compatible__array__type__impl_3_01_basic_json_type_00_01_compatible_array_ty5a05c25fff6f823ac88824a10a386dcf"
label="structdetail_1_1is__compatible__array__type__impl_3_01_basic_json_type_00_01_compatible_array_ty5a05c25fff6f823ac88824a10a386dcf"></span>

<div class="DoxyCompactItemize">

static constexpr bool
[value](#structdetail_1_1is__compatible__array__type__impl_3_01_basic_json_type_00_01_compatible_array_ty5a05c25fff6f823ac88824a10a386dcf_a27868f9549d1832673978f75b47c7049)

</div>

<span id="structdetail_1_1is__compatible__array__type__impl_3_01_basic_json_type_00_01_compatible_array_ty5a05c25fff6f823ac88824a10a386dcf_a27868f9549d1832673978f75b47c7049"
label="structdetail_1_1is__compatible__array__type__impl_3_01_basic_json_type_00_01_compatible_array_ty5a05c25fff6f823ac88824a10a386dcf_a27868f9549d1832673978f75b47c7049"></span>
template$<$typename BasicJsonType , typename CompatibleArrayType $>$  
constexpr bool
[detail::is_compatible_array_type_impl](#structdetail_1_1is__compatible__array__type__impl)$<$
BasicJsonType, CompatibleArrayType, enable_if_t$<$ is_detected$<$
iterator_t, CompatibleArrayType $>$::value
&&[is_iterator_traits](#structdetail_1_1is__iterator__traits)$<$
[iterator_traits](#structdetail_1_1iterator__traits)$<$ detected_t$<$
iterator_t, CompatibleArrayType $>$ $>$ $>$::value &&!std::is_same$<$
CompatibleArrayType, detected_t$<$ range_value_t, CompatibleArrayType
$>$ $>$::value $>$ $>$::value,

**Initial value:**

<div class="DoxyCode">

0

</div>

The documentation for this struct was generated from the following file:

<div class="DoxyCompactItemize">

MacGyver/json.hpp

</div>
