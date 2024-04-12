<div id="classbyte__container__with__subtype">

</div>

<span id="classbyte__container__with__subtype"
label="classbyte__container__with__subtype"></span>

an internal type for a backed binary type

\#include $<$json.hpp$>$

Inheritance diagram for byte_container_with_subtype$<$ BinaryType $>$:

<figure>
<div class="center">
<img src="classbyte__container__with__subtype" style="height:2cm" />
</div>
</figure>

<div class="DoxyCompactItemize">

<span id="classbyte__container__with__subtype_a29aa3b98709ae1fcdaf8b55766935c08"
label="classbyte__container__with__subtype_a29aa3b98709ae1fcdaf8b55766935c08"></span>
using **container_type** = BinaryType

<span id="classbyte__container__with__subtype_a1b423c8cd161e67e1af1c72bbc2c8b90"
label="classbyte__container__with__subtype_a1b423c8cd161e67e1af1c72bbc2c8b90"></span>
using **subtype_type** = std::uint64_t

</div>

<div class="DoxyCompactItemize">

[byte_container_with_subtype](#classbyte__container__with__subtype_a17bc4a2dabb6c7a5ec2cba3f3aaf0431)
() noexcept(noexcept(container_type()))

[byte_container_with_subtype](#classbyte__container__with__subtype_a7f9fb60d4a835e97fbf1c2de7fa382e2)
(const container_type &b) noexcept(noexcept(container_type(b)))

[byte_container_with_subtype](#classbyte__container__with__subtype_a42b8b66b00eb5c0057d4420e196dadf0)
(container_type &&b) noexcept(noexcept(container_type(std::move(b))))

[byte_container_with_subtype](#classbyte__container__with__subtype_a759c6a582dd0684adf7fb9641ef586a4)
(const container_type &b, subtype_type subtype\_)
noexcept(noexcept(container_type(b)))

[byte_container_with_subtype](#classbyte__container__with__subtype_a3b43bde08a4bff8917bcfad01d9e6089)
(container_type &&b, subtype_type subtype\_)
noexcept(noexcept(container_type(std::move(b))))

<span id="classbyte__container__with__subtype_a263d63d0a518cfe9a6b6e508f9a22e85"
label="classbyte__container__with__subtype_a263d63d0a518cfe9a6b6e508f9a22e85"></span>
bool **operator==** (const
[byte_container_with_subtype](#classbyte__container__with__subtype)
&rhs) const

<span id="classbyte__container__with__subtype_a07f26c9ed1e216c1c3a1a286b9c4c197"
label="classbyte__container__with__subtype_a07f26c9ed1e216c1c3a1a286b9c4c197"></span>
bool **operator!=** (const
[byte_container_with_subtype](#classbyte__container__with__subtype)
&rhs) const

void
[set_subtype](#classbyte__container__with__subtype_aa211ecfe3f0a626e96c54ea7e160491b)
(subtype_type subtype\_) noexcept

<div class="DoxyCompactList">

*sets the binary subtype*

</div>

constexpr subtype_type
[subtype](#classbyte__container__with__subtype_a678460360dd494c33fbfde782e7c8201)
() const noexcept

<div class="DoxyCompactList">

*return the binary subtype*

</div>

constexpr bool
[has_subtype](#classbyte__container__with__subtype_a793fab04ad06741b6909dde032d9ea35)
() const noexcept

<div class="DoxyCompactList">

*return whether the value has a subtype*

</div>

void
[clear_subtype](#classbyte__container__with__subtype_ad18f6a7557a2bfce28f1ed8d4d10607c)
() noexcept

<div class="DoxyCompactList">

*clears the binary subtype*

</div>

</div>

### template$<$typename BinaryType$>$ class byte_container_with_subtype$<$ BinaryType $>$

an internal type for a backed binary type

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/byte_container_with_subtype/`](https://json.nlohmann.me/api/byte_container_with_subtype/)

</div>

<span id="classbyte__container__with__subtype_a17bc4a2dabb6c7a5ec2cba3f3aaf0431"
label="classbyte__container__with__subtype_a17bc4a2dabb6c7a5ec2cba3f3aaf0431"></span>

template$<$typename BinaryType $>$  
[byte_container_with_subtype](#classbyte__container__with__subtype)$<$
BinaryType
$>$[::byte_container_with_subtype](#classbyte__container__with__subtype)
(

<div class="DoxyParamCaption">

</div>

),

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/byte_container_with_subtype/byte_container_with_subtype/`](https://json.nlohmann.me/api/byte_container_with_subtype/byte_container_with_subtype/)

</div>

<span id="classbyte__container__with__subtype_a7f9fb60d4a835e97fbf1c2de7fa382e2"
label="classbyte__container__with__subtype_a7f9fb60d4a835e97fbf1c2de7fa382e2"></span>

template$<$typename BinaryType $>$  
[byte_container_with_subtype](#classbyte__container__with__subtype)$<$
BinaryType
$>$[::byte_container_with_subtype](#classbyte__container__with__subtype)
(

<div class="DoxyParamCaption">

b

</div>

),

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/byte_container_with_subtype/byte_container_with_subtype/`](https://json.nlohmann.me/api/byte_container_with_subtype/byte_container_with_subtype/)

</div>

<span id="classbyte__container__with__subtype_a42b8b66b00eb5c0057d4420e196dadf0"
label="classbyte__container__with__subtype_a42b8b66b00eb5c0057d4420e196dadf0"></span>

template$<$typename BinaryType $>$  
[byte_container_with_subtype](#classbyte__container__with__subtype)$<$
BinaryType
$>$[::byte_container_with_subtype](#classbyte__container__with__subtype)
(

<div class="DoxyParamCaption">

b

</div>

),

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/byte_container_with_subtype/byte_container_with_subtype/`](https://json.nlohmann.me/api/byte_container_with_subtype/byte_container_with_subtype/)

</div>

<span id="classbyte__container__with__subtype_a759c6a582dd0684adf7fb9641ef586a4"
label="classbyte__container__with__subtype_a759c6a582dd0684adf7fb9641ef586a4"></span>

template$<$typename BinaryType $>$  
[byte_container_with_subtype](#classbyte__container__with__subtype)$<$
BinaryType
$>$[::byte_container_with_subtype](#classbyte__container__with__subtype)
(

<div class="DoxyParamCaption">

b,

subtype\_

</div>

),

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/byte_container_with_subtype/byte_container_with_subtype/`](https://json.nlohmann.me/api/byte_container_with_subtype/byte_container_with_subtype/)

</div>

<span id="classbyte__container__with__subtype_a3b43bde08a4bff8917bcfad01d9e6089"
label="classbyte__container__with__subtype_a3b43bde08a4bff8917bcfad01d9e6089"></span>

template$<$typename BinaryType $>$  
[byte_container_with_subtype](#classbyte__container__with__subtype)$<$
BinaryType
$>$[::byte_container_with_subtype](#classbyte__container__with__subtype)
(

<div class="DoxyParamCaption">

b,

subtype\_

</div>

),

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/byte_container_with_subtype/byte_container_with_subtype/`](https://json.nlohmann.me/api/byte_container_with_subtype/byte_container_with_subtype/)

</div>

<span id="classbyte__container__with__subtype_ad18f6a7557a2bfce28f1ed8d4d10607c"
label="classbyte__container__with__subtype_ad18f6a7557a2bfce28f1ed8d4d10607c"></span>

template$<$typename BinaryType $>$  
void
[byte_container_with_subtype](#classbyte__container__with__subtype)$<$
BinaryType $>$::clear_subtype (

<div class="DoxyParamCaption">

</div>

),

clears the binary subtype

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/byte_container_with_subtype/clear_subtype/`](https://json.nlohmann.me/api/byte_container_with_subtype/clear_subtype/)

</div>

<span id="classbyte__container__with__subtype_a793fab04ad06741b6909dde032d9ea35"
label="classbyte__container__with__subtype_a793fab04ad06741b6909dde032d9ea35"></span>

template$<$typename BinaryType $>$  
constexpr bool
[byte_container_with_subtype](#classbyte__container__with__subtype)$<$
BinaryType $>$::has_subtype (

<div class="DoxyParamCaption">

</div>

) const, ,

return whether the value has a subtype

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/byte_container_with_subtype/has_subtype/`](https://json.nlohmann.me/api/byte_container_with_subtype/has_subtype/)

</div>

<span id="classbyte__container__with__subtype_aa211ecfe3f0a626e96c54ea7e160491b"
label="classbyte__container__with__subtype_aa211ecfe3f0a626e96c54ea7e160491b"></span>

template$<$typename BinaryType $>$  
void
[byte_container_with_subtype](#classbyte__container__with__subtype)$<$
BinaryType $>$::set_subtype (

<div class="DoxyParamCaption">

subtype\_

</div>

),

sets the binary subtype

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/byte_container_with_subtype/set_subtype/`](https://json.nlohmann.me/api/byte_container_with_subtype/set_subtype/)

</div>

<span id="classbyte__container__with__subtype_a678460360dd494c33fbfde782e7c8201"
label="classbyte__container__with__subtype_a678460360dd494c33fbfde782e7c8201"></span>

template$<$typename BinaryType $>$  
constexpr subtype_type
[byte_container_with_subtype](#classbyte__container__with__subtype)$<$
BinaryType $>$::subtype (

<div class="DoxyParamCaption">

</div>

) const, ,

return the binary subtype

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/byte_container_with_subtype/subtype/`](https://json.nlohmann.me/api/byte_container_with_subtype/subtype/)

</div>

The documentation for this class was generated from the following file:

<div class="DoxyCompactItemize">

MacGyver/json.hpp

</div>
