<div id="structdetail_1_1is__compatible__integer__type__impl_3_01_real_integer_type_00_01_compatible_numb0041c726545da1e9f9d50a47e3f940c2">

</div>

<span id="structdetail_1_1is__compatible__integer__type__impl_3_01_real_integer_type_00_01_compatible_numb0041c726545da1e9f9d50a47e3f940c2"
label="structdetail_1_1is__compatible__integer__type__impl_3_01_real_integer_type_00_01_compatible_numb0041c726545da1e9f9d50a47e3f940c2"></span>

<div class="DoxyCompactItemize">

<span id="structdetail_1_1is__compatible__integer__type__impl_3_01_real_integer_type_00_01_compatible_numb0041c726545da1e9f9d50a47e3f940c2_a57e63b51f11dce7bebf325582a6c3986"
label="structdetail_1_1is__compatible__integer__type__impl_3_01_real_integer_type_00_01_compatible_numb0041c726545da1e9f9d50a47e3f940c2_a57e63b51f11dce7bebf325582a6c3986"></span>
using **RealLimits** = std::numeric_limits$<$RealIntegerType$>$

<span id="structdetail_1_1is__compatible__integer__type__impl_3_01_real_integer_type_00_01_compatible_numb0041c726545da1e9f9d50a47e3f940c2_a9a9e09e41a061d0ede6046201339e2e8"
label="structdetail_1_1is__compatible__integer__type__impl_3_01_real_integer_type_00_01_compatible_numb0041c726545da1e9f9d50a47e3f940c2_a9a9e09e41a061d0ede6046201339e2e8"></span>
using **CompatibleLimits** =
std::numeric_limits$<$CompatibleNumberIntegerType$>$

</div>

<div class="DoxyCompactItemize">

static constexpr auto
[value](#structdetail_1_1is__compatible__integer__type__impl_3_01_real_integer_type_00_01_compatible_numb0041c726545da1e9f9d50a47e3f940c2_a1a36751d3524428ec5e23b6ca3228a0d)

</div>

<span id="structdetail_1_1is__compatible__integer__type__impl_3_01_real_integer_type_00_01_compatible_numb0041c726545da1e9f9d50a47e3f940c2_a1a36751d3524428ec5e23b6ca3228a0d"
label="structdetail_1_1is__compatible__integer__type__impl_3_01_real_integer_type_00_01_compatible_numb0041c726545da1e9f9d50a47e3f940c2_a1a36751d3524428ec5e23b6ca3228a0d"></span>
template$<$typename RealIntegerType , typename
CompatibleNumberIntegerType $>$  
constexpr auto
[detail::is_compatible_integer_type_impl](#structdetail_1_1is__compatible__integer__type__impl)$<$
RealIntegerType, CompatibleNumberIntegerType, enable_if_t$<$
std::is_integral$<$ RealIntegerType $>$::value &&std::is_integral$<$
CompatibleNumberIntegerType $>$::value &&!std::is_same$<$ bool,
CompatibleNumberIntegerType $>$::value $>$ $>$::value,

**Initial value:**

<div class="DoxyCode">

0

</div>

The documentation for this struct was generated from the following file:

<div class="DoxyCompactItemize">

MacGyver/json.hpp

</div>
