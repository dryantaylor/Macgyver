<div id="structadl__serializer">

</div>

<span id="structadl__serializer" label="structadl__serializer"></span>

namespace for Niels Lohmann

\#include $<$json.hpp$>$

<div class="DoxyCompactItemize">

template$<$typename BasicJsonType , typename TargetType = ValueType$>$
  
static auto
[from_json](#structadl__serializer_a5645c63fe43bd9b4ebc9917f9c99d0fd)
(BasicJsonType &&j, TargetType &val)
noexcept(noexcept(::nlohmann::from_json(std::forward$<$ BasicJsonType
$>$(j), val))) -$>$ decltype(::nlohmann::from_json(std::forward$<$
BasicJsonType $>$(j), val), void())

<div class="DoxyCompactList">

*convert a JSON value to any value type*

</div>

template$<$typename BasicJsonType , typename TargetType = ValueType$>$
  
static auto
[from_json](#structadl__serializer_a1e06f0bcb63296fc306dbe4162a0f2a3)
(BasicJsonType &&j)
noexcept(noexcept(::nlohmann::from_json(std::forward$<$ BasicJsonType
$>$(j), [detail::identity_tag](#structdetail_1_1identity__tag)$<$
TargetType $>$ {}))) -$>$ decltype(::nlohmann::from_json(std::forward$<$
BasicJsonType $>$(j),
[detail::identity_tag](#structdetail_1_1identity__tag)$<$ TargetType $>$
{}))

<div class="DoxyCompactList">

*convert a JSON value to any value type*

</div>

template$<$typename BasicJsonType , typename TargetType = ValueType$>$
  
static auto
[to_json](#structadl__serializer_a0216149429fe899cf45cbf14e08e2166)
(BasicJsonType &j, TargetType &&val)
noexcept(noexcept(::nlohmann::to_json(j, std::forward$<$ TargetType
$>$(val)))) -$>$ decltype(::nlohmann::to_json(j, std::forward$<$
TargetType $>$(val)), void())

<div class="DoxyCompactList">

*convert any value type to a JSON value*

</div>

</div>

### template$<$typename ValueType, typename$>$ struct adl_serializer$<$ ValueType, typename $>$

namespace for Niels Lohmann

<div class="DoxySeeAlso">

See also [` https://github.com/nlohmann`](https://github.com/nlohmann)

</div>

<div class="DoxySince">

Since version 1..

</div>

default JSONSerializer template argument

This serializer ignores the template arguments and uses ADL
([` argument-dependent lookup`](https://en.cppreference.com/w/cpp/language/adl))
for serialization.

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/adl_serializer/`](https://json.nlohmann.me/api/adl_serializer/)

</div>

<span id="structadl__serializer_a1e06f0bcb63296fc306dbe4162a0f2a3"
label="structadl__serializer_a1e06f0bcb63296fc306dbe4162a0f2a3"></span>

template$<$typename ValueType , typename $>$  
template$<$typename BasicJsonType , typename TargetType = ValueType$>$  
static auto [adl_serializer](#structadl__serializer)$<$ ValueType,
typename $>$::from_json (

<div class="DoxyParamCaption">

j

</div>

) -$>$
decltype(::nlohmann::from_json(std::forward$<$BasicJsonType$>$(j),
[detail::identity_tag](#structdetail_1_1identity__tag)$<$TargetType$>$
{})) , ,

convert a JSON value to any value type

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/adl_serializer/from_json/`](https://json.nlohmann.me/api/adl_serializer/from_json/)

</div>

<span id="structadl__serializer_a5645c63fe43bd9b4ebc9917f9c99d0fd"
label="structadl__serializer_a5645c63fe43bd9b4ebc9917f9c99d0fd"></span>

template$<$typename ValueType , typename $>$  
template$<$typename BasicJsonType , typename TargetType = ValueType$>$  
static auto [adl_serializer](#structadl__serializer)$<$ ValueType,
typename $>$::from_json (

<div class="DoxyParamCaption">

j,

val

</div>

) -$>$
decltype(::nlohmann::from_json(std::forward$<$BasicJsonType$>$(j), val),
void()) , ,

convert a JSON value to any value type

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/adl_serializer/from_json/`](https://json.nlohmann.me/api/adl_serializer/from_json/)

</div>

<span id="structadl__serializer_a0216149429fe899cf45cbf14e08e2166"
label="structadl__serializer_a0216149429fe899cf45cbf14e08e2166"></span>

template$<$typename ValueType , typename $>$  
template$<$typename BasicJsonType , typename TargetType = ValueType$>$  
static auto [adl_serializer](#structadl__serializer)$<$ ValueType,
typename $>$::to_json (

<div class="DoxyParamCaption">

j,

val

</div>

) -$>$ decltype(::nlohmann::to_json(j,
std::forward$<$TargetType$>$(val)), void()) , ,

convert any value type to a JSON value

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/adl_serializer/to_json/`](https://json.nlohmann.me/api/adl_serializer/to_json/)

</div>

The documentation for this struct was generated from the following file:

<div class="DoxyCompactItemize">

MacGyver/json.hpp

</div>
