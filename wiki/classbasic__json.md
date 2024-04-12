<div id="classbasic__json">

</div>

<span id="classbasic__json" label="classbasic__json"></span>

namespace for Niels Lohmann

\#include $<$json.hpp$>$

Inheritance diagram for basic_json$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass $>$:

<figure>
<div class="center">
<img src="classbasic__json" style="height:0.99822cm" />
</div>
</figure>

<div class="DoxyCompactItemize">

<span id="classbasic__json_a966e900415e66f3ab60f7b5ef52fd63b"
label="classbasic__json_a966e900415e66f3ab60f7b5ef52fd63b"></span> using
**value_t** =
[detail::value_t](#namespacedetail_a917c3efabea8a20dc72d9ae2c673d632)

<span id="classbasic__json_afe66720a34c11920f359394a4430a16e"
label="classbasic__json_afe66720a34c11920f359394a4430a16e"></span> using
**json_pointer** = ::nlohmann::json_pointer$<$StringType$>$

<div class="DoxyCompactList">

*JSON Pointer, see nlohmann::json_pointer.*

</div>

<span id="classbasic__json_ab75fd791f0b8fca724e5ed70b4956414"
label="classbasic__json_ab75fd791f0b8fca724e5ed70b4956414"></span>
template$<$typename T , typename SFINAE $>$   
using **json_serializer** = JSONSerializer$<$T, SFINAE$>$

<span id="classbasic__json_a2ebde9badb4f1b4cf6517f6b8e302d0d"
label="classbasic__json_a2ebde9badb4f1b4cf6517f6b8e302d0d"></span> using
**error_handler_t** =
[detail::error_handler_t](#namespacedetail_abe7cfa1fd8fa706ff4392bff9d1a8298)

<div class="DoxyCompactList">

*how to treat decoding errors*

</div>

<span id="classbasic__json_a067b4f0e63e55055272fec0a26b5b991"
label="classbasic__json_a067b4f0e63e55055272fec0a26b5b991"></span> using
**cbor_tag_handler_t** =
[detail::cbor_tag_handler_t](#namespacedetail_a7c070b2bf3d61e3d8b8013f6fb18d592)

<div class="DoxyCompactList">

*how to treat CBOR tags*

</div>

<span id="classbasic__json_a6dc15c0f6c156e43c956ad6ca0c19de3"
label="classbasic__json_a6dc15c0f6c156e43c956ad6ca0c19de3"></span> using
**initializer_list_t** =
std::initializer_list$<$[detail::json_ref](#classdetail_1_1json__ref)$<$[basic_json](#classbasic__json)$>$$>$

<div class="DoxyCompactList">

*helper type for initializer lists of values*

</div>

<span id="classbasic__json_a143e447269d8beb1d02400093eccd018"
label="classbasic__json_a143e447269d8beb1d02400093eccd018"></span> using
**input_format_t** =
[detail::input_format_t](#namespacedetail_a0ab3b338d0eadc6890b72cccef0ea04f)

<span id="classbasic__json_acefb05e1022be791038db86c9963cec7"
label="classbasic__json_acefb05e1022be791038db86c9963cec7"></span> using
**json_sax_t** =
[json_sax](#structjson__sax)$<$[basic_json](#classbasic__json)$>$

<div class="DoxyCompactList">

*SAX interface type, see nlohmann::json_sax.*

</div>

using
[parse_event_t](#classbasic__json_a53b6bf8ee18c48f4609c8bdd4bb95107) =
[detail::parse_event_t](#namespacedetail_a47b1bb0bbd3596589ed9187059c312ef)

<div class="DoxyCompactList">

*parser event types*

</div>

using
[parser_callback_t](#classbasic__json_a50644d655c9283aaf0e2a0f3a5428867)
= detail::parser_callback_t$<$[basic_json](#classbasic__json)$>$

<div class="DoxyCompactList">

*per-element parser callback type*

</div>

</div>

<div class="DoxyCompactItemize">

JSON_HEDLEY_RETURNS_NON_NULL const char $\ast$
[type_name](#classbasic__json_a15b177614647598e238e15ab1cc889c7) ()
const noexcept

<div class="DoxyCompactList">

*return the type as string*

</div>

<span id="classbasic__json_ab4b684342f67317a21b2d9e33ec8feb0"
label="classbasic__json_ab4b684342f67317a21b2d9e33ec8feb0"></span>
**data** (const
[value_t](#namespacedetail_a917c3efabea8a20dc72d9ae2c673d632) v)

<span id="classbasic__json_a2430d63f0ffd335f276c085c33c11b17"
label="classbasic__json_a2430d63f0ffd335f276c085c33c11b17"></span>
**data**
([size_type](#classbasic__json_a2c086af43cf06b1b7118f5351cab3ec9) cnt,
const [basic_json](#classbasic__json) &val)

<span id="classbasic__json_ac8aaf6afe755ea6c586ab9920389d6bf"
label="classbasic__json_ac8aaf6afe755ea6c586ab9920389d6bf"></span>
**data** () noexcept=default

<span id="classbasic__json_a08ad05755736ab9e3416f0556bb47a6a"
label="classbasic__json_a08ad05755736ab9e3416f0556bb47a6a"></span>
**data** (data &&) noexcept=default

<span id="classbasic__json_a416abf41e6c61061dd2be762a88cceb8"
label="classbasic__json_a416abf41e6c61061dd2be762a88cceb8"></span>
**data** (const data &) noexcept=delete

<span id="classbasic__json_a927438868ffbf6535f63714d47834cd1"
label="classbasic__json_a927438868ffbf6535f63714d47834cd1"></span> data
& **operator=** (data &&) noexcept=delete

<span id="classbasic__json_a4961a9b6e8be5c581766516572989b2e"
label="classbasic__json_a4961a9b6e8be5c581766516572989b2e"></span> data
& **operator=** (const data &) noexcept=delete

</div>

<div class="DoxyCompactItemize">

static
[allocator_type](#classbasic__json_a83f845db2d54cedad97279bad70aea52)
[get_allocator](#classbasic__json_a4bceecf563151eb58af179416d8e6299) ()

<div class="DoxyCompactList">

*returns the allocator associated with the container*

</div>

static JSON_HEDLEY_WARN_UNUSED_RESULT [basic_json](#classbasic__json)
[meta](#classbasic__json_a7b435c2ed2db99cb1daa78ae3c6c4580) ()

<div class="DoxyCompactList">

*returns version information on the library*

</div>

<span id="classbasic__json_addedd5e53fa6eff6cd621f1615741c3d"
label="classbasic__json_addedd5e53fa6eff6cd621f1615741c3d"></span>
JSON_PRIVATE_UNLESS_TESTED
[const_reference](#classbasic__json_a31370bb451b78198d42c86dd31955deb)
bool static SAX bool **sax_parse** (InputType &&i, SAX $\ast$sax,
[input_format_t](#namespacedetail_a0ab3b338d0eadc6890b72cccef0ea04f)
format=input_format_t::json, const bool strict=true, const bool
ignore_comments=false)

template$<$class IteratorType , class SAX $>$   
static bool
[sax_parse](#classbasic__json_a94cbf1844fef86e9301282ad8ca0f822)
(IteratorType first, IteratorType last, SAX $\ast$sax,
[input_format_t](#namespacedetail_a0ab3b338d0eadc6890b72cccef0ea04f)
format=input_format_t::json, const bool strict=true, const bool
ignore_comments=false)

<div class="DoxyCompactList">

*generate SAX events*

</div>

template$<$typename SAX $>$   
static bool
[sax_parse](#classbasic__json_ad018e709338c810c56eaad606186a77e)
([detail::span_input_adapter](#classdetail_1_1span__input__adapter) &&i,
SAX $\ast$sax,
[input_format_t](#namespacedetail_a0ab3b338d0eadc6890b72cccef0ea04f)
format=input_format_t::json, const bool strict=true, const bool
ignore_comments=false)

<div class="DoxyCompactList">

*generate SAX events*

</div>

</div>

<div class="DoxyCompactItemize">

<span id="classbasic__json_a27054edf6738852b42e0218fe4337e1c"
label="classbasic__json_a27054edf6738852b42e0218fe4337e1c"></span>
JSON_PRIVATE_UNLESS_TESTED : struct data {
[value_t](#namespacedetail_a917c3efabea8a20dc72d9ae2c673d632) m_type =
value_t::null

<span id="classbasic__json_acd0f167153f047a246b51858d7c921b8"
label="classbasic__json_acd0f167153f047a246b51858d7c921b8"></span>
json_value **m_value** = {}

<div class="DoxyCompactList">

*the value of the current element*

</div>

<span id="classbasic__json_a4f7fd3c3afd2abb77797652506ab6bc0"
label="classbasic__json_a4f7fd3c3afd2abb77797652506ab6bc0"></span> data
**m_data** = {}

</div>

<div class="DoxyCompactItemize">

<span id="classbasic__json_a6275ed57bae6866cdf5db5370a7ad47c"
label="classbasic__json_a6275ed57bae6866cdf5db5370a7ad47c"></span>
template$<$[detail::value_t](#namespacedetail_a917c3efabea8a20dc72d9ae2c673d632)
$>$   
struct **detail::external_constructor**

<span id="classbasic__json_a43f901b14cf3f7135269b0c75c9ac233"
label="classbasic__json_a43f901b14cf3f7135269b0c75c9ac233"></span>
template$<$typename $>$   
class **::nlohmann::json_pointer**

<span id="classbasic__json_ac8f3125911eb018ef4ab00d879487baf"
label="classbasic__json_ac8f3125911eb018ef4ab00d879487baf"></span>
template$<$typename BasicJsonType , typename InputType $>$   
class **::nlohmann::detail::parser**

<span id="classbasic__json_a842e5c7ca096025c18b11e715d3401f4"
label="classbasic__json_a842e5c7ca096025c18b11e715d3401f4"></span>
template$<$typename BasicJsonType $>$   
class **::nlohmann::detail::iter_impl**

<span id="classbasic__json_a69d491bbda88ade6d3c7a2b11309e8bf"
label="classbasic__json_a69d491bbda88ade6d3c7a2b11309e8bf"></span>
template$<$typename BasicJsonType , typename CharType $>$   
class **::nlohmann::detail::binary_writer**

<span id="classbasic__json_aa226ed5103dfd10e27e562d35a3a106b"
label="classbasic__json_aa226ed5103dfd10e27e562d35a3a106b"></span>
template$<$typename BasicJsonType , typename InputType , typename SAX
$>$   
class **::nlohmann::detail::binary_reader**

<span id="classbasic__json_a47aabb1eceae32e8a6e8e7f0ff34be60"
label="classbasic__json_a47aabb1eceae32e8a6e8e7f0ff34be60"></span>
template$<$typename BasicJsonType $>$   
class **::nlohmann::detail::json_sax_dom_parser**

<span id="classbasic__json_a95574da8d12905ea99dc348934c837da"
label="classbasic__json_a95574da8d12905ea99dc348934c837da"></span>
template$<$typename BasicJsonType $>$   
class **::nlohmann::detail::json_sax_dom_callback_parser**

<span id="classbasic__json_abdcb15d025676b4d3db0f32a50f4393f"
label="classbasic__json_abdcb15d025676b4d3db0f32a50f4393f"></span> class
**::nlohmann::detail::exception**

std::istream &
[operator$<$$<$](#classbasic__json_af9907af448f7ff794120033e132025f6)
([basic_json](#classbasic__json) &j, std::istream &i)

<div class="DoxyCompactList">

*deserialize from stream*

</div>

std::istream &
[operator$>$$>$](#classbasic__json_aea0de29387d532e0bc5f2475cb83995d)
(std::istream &i, [basic_json](#classbasic__json) &j)

<div class="DoxyCompactList">

*deserialize from stream*

</div>

</div>

Access to the JSON value.

<div class="DoxyCompactItemize">

[reference](#classbasic__json_a6ca7bfb35987ce7cb8d27447cda5b80a)
[at](#classbasic__json_a899e4623fe377af5c9ad14c40c64280c)
([size_type](#classbasic__json_a2c086af43cf06b1b7118f5351cab3ec9) idx)

<div class="DoxyCompactList">

*access specified array element with bounds checking*

</div>

[const_reference](#classbasic__json_a31370bb451b78198d42c86dd31955deb)
[at](#classbasic__json_af076d8a80f4263cf821da2033d5773b6)
([size_type](#classbasic__json_a2c086af43cf06b1b7118f5351cab3ec9) idx)
const

<div class="DoxyCompactList">

*access specified array element with bounds checking*

</div>

[reference](#classbasic__json_a6ca7bfb35987ce7cb8d27447cda5b80a)
[at](#classbasic__json_accafaaf23f60bb245ddb1fa0972b33a3) (const
typename object_t::key_type &key)

<div class="DoxyCompactList">

*access specified object element with bounds checking*

</div>

template$<$class KeyType , detail::enable_if_t$<$
detail::is_usable_as_basic_json_key_type$<$ basic_json_t, KeyType
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef), int
$>$ = 0$>$   
[reference](#classbasic__json_a6ca7bfb35987ce7cb8d27447cda5b80a)
[at](#classbasic__json_a4cd9ba2f2164d9cee83b07f76d40843f) (KeyType
&&key)

<div class="DoxyCompactList">

*access specified object element with bounds checking*

</div>

[const_reference](#classbasic__json_a31370bb451b78198d42c86dd31955deb)
[at](#classbasic__json_aba9a21714e81e98fc5786a2339ea1665) (const
typename object_t::key_type &key) const

<div class="DoxyCompactList">

*access specified object element with bounds checking*

</div>

template$<$class KeyType , detail::enable_if_t$<$
detail::is_usable_as_basic_json_key_type$<$ basic_json_t, KeyType
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef), int
$>$ = 0$>$   
[const_reference](#classbasic__json_a31370bb451b78198d42c86dd31955deb)
[at](#classbasic__json_a7ae6267ca4bd85e25f61dc5ba30204da) (KeyType
&&key) const

<div class="DoxyCompactList">

*access specified object element with bounds checking*

</div>

[reference](#classbasic__json_a6ca7bfb35987ce7cb8d27447cda5b80a)
[operator\[$\,$\]](#classbasic__json_ab4f511db82b9d5eba85d5b2b8e1c6dbb)
([size_type](#classbasic__json_a2c086af43cf06b1b7118f5351cab3ec9) idx)

<div class="DoxyCompactList">

*access specified array element*

</div>

[const_reference](#classbasic__json_a31370bb451b78198d42c86dd31955deb)
[operator\[$\,$\]](#classbasic__json_ae369d1565482903c3af75bf99467776b)
([size_type](#classbasic__json_a2c086af43cf06b1b7118f5351cab3ec9) idx)
const

<div class="DoxyCompactList">

*access specified array element*

</div>

[reference](#classbasic__json_a6ca7bfb35987ce7cb8d27447cda5b80a)
[operator\[$\,$\]](#classbasic__json_a9c5825034534bf9256a33d2dd995c25a)
(typename object_t::key_type key)

<div class="DoxyCompactList">

*access specified object element*

</div>

[const_reference](#classbasic__json_a31370bb451b78198d42c86dd31955deb)
[operator\[$\,$\]](#classbasic__json_a3d3ea17617e94886f3e86ac921095a13)
(const typename object_t::key_type &key) const

<div class="DoxyCompactList">

*access specified object element*

</div>

<span id="classbasic__json_a87cae3810ae0a9c56b17842b06fc405e"
label="classbasic__json_a87cae3810ae0a9c56b17842b06fc405e"></span>
template$<$typename T $>$   
[reference](#classbasic__json_a6ca7bfb35987ce7cb8d27447cda5b80a)
**operator\[$\,$\]** (T $\ast$key)

<span id="classbasic__json_ab12a4386e6913012ca4dffa0245fdf99"
label="classbasic__json_ab12a4386e6913012ca4dffa0245fdf99"></span>
template$<$typename T $>$   
[const_reference](#classbasic__json_a31370bb451b78198d42c86dd31955deb)
**operator\[$\,$\]** (T $\ast$key) const

template$<$class KeyType , detail::enable_if_t$<$
detail::is_usable_as_basic_json_key_type$<$ basic_json_t, KeyType
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef), int
$>$ = 0$>$   
[reference](#classbasic__json_a6ca7bfb35987ce7cb8d27447cda5b80a)
[operator\[$\,$\]](#classbasic__json_a06fe1a1c7aa8c193c73aa40b17ee5f68)
(KeyType &&key)

<div class="DoxyCompactList">

*access specified object element*

</div>

template$<$class KeyType , detail::enable_if_t$<$
detail::is_usable_as_basic_json_key_type$<$ basic_json_t, KeyType
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef), int
$>$ = 0$>$   
[const_reference](#classbasic__json_a31370bb451b78198d42c86dd31955deb)
[operator\[$\,$\]](#classbasic__json_a2e11a3f2a234cd296b515173b6a3b986)
(KeyType &&key) const

<div class="DoxyCompactList">

*access specified object element*

</div>

template$<$class ValueType , detail::enable_if_t$<$
\![detail::is_transparent](#structdetail_1_1is__transparent)$<$
[object_comparator_t](#classbasic__json_af12040e0663db54840d73d363979643a)
$>$::value &&[detail::is_getable](#structdetail_1_1is__getable)$<$
basic_json_t, ValueType $>$::value &&!std::is_same$<$
[value_t](#namespacedetail_a917c3efabea8a20dc72d9ae2c673d632),
detail::uncvref_t$<$ ValueType $>$ $>$::value, int $>$ = 0$>$   
ValueType [value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef)
(const typename object_t::key_type &key, const ValueType &default_value)
const

<div class="DoxyCompactList">

*access specified object element with default value*

</div>

template$<$class ValueType , class ReturnType = typename
value_return_type$<$ValueType$>$::type, detail::enable_if_t$<$
\![detail::is_transparent](#structdetail_1_1is__transparent)$<$
[object_comparator_t](#classbasic__json_af12040e0663db54840d73d363979643a)
$>$::value &&[detail::is_getable](#structdetail_1_1is__getable)$<$
basic_json_t, ReturnType $>$::value &&!std::is_same$<$
[value_t](#namespacedetail_a917c3efabea8a20dc72d9ae2c673d632),
detail::uncvref_t$<$ ValueType $>$ $>$::value, int $>$ = 0$>$   
ReturnType [value](#classbasic__json_a56244e0ed0943ad62faf61b06e7ba139)
(const typename object_t::key_type &key, ValueType &&default_value)
const

<div class="DoxyCompactList">

*access specified object element with default value*

</div>

template$<$class ValueType , class KeyType , detail::enable_if_t$<$
[detail::is_transparent](#structdetail_1_1is__transparent)$<$
[object_comparator_t](#classbasic__json_af12040e0663db54840d73d363979643a)
$>$::value &&!detail::is_json_pointer$<$ KeyType $>$::value
&&[is_comparable_with_object_key](#structdetail_1_1is__comparable)$<$
KeyType $>$::value
&&[detail::is_getable](#structdetail_1_1is__getable)$<$ basic_json_t,
ValueType $>$::value &&!std::is_same$<$
[value_t](#namespacedetail_a917c3efabea8a20dc72d9ae2c673d632),
detail::uncvref_t$<$ ValueType $>$ $>$::value, int $>$ = 0$>$   
ValueType [value](#classbasic__json_acbe572bbfbd4687a7a9167465e4d41f2)
(KeyType &&key, const ValueType &default_value) const

<div class="DoxyCompactList">

*access specified object element with default value*

</div>

template$<$class ValueType , class KeyType , class ReturnType = typename
value_return_type$<$ValueType$>$::type, detail::enable_if_t$<$
[detail::is_transparent](#structdetail_1_1is__transparent)$<$
[object_comparator_t](#classbasic__json_af12040e0663db54840d73d363979643a)
$>$::value &&!detail::is_json_pointer$<$ KeyType $>$::value
&&[is_comparable_with_object_key](#structdetail_1_1is__comparable)$<$
KeyType $>$::value
&&[detail::is_getable](#structdetail_1_1is__getable)$<$ basic_json_t,
ReturnType $>$::value &&!std::is_same$<$
[value_t](#namespacedetail_a917c3efabea8a20dc72d9ae2c673d632),
detail::uncvref_t$<$ ValueType $>$ $>$::value, int $>$ = 0$>$   
ReturnType [value](#classbasic__json_a694398741710ce1c22797ad47109898b)
(KeyType &&key, ValueType &&default_value) const

<div class="DoxyCompactList">

*access specified object element via JSON Pointer with default value*

</div>

template$<$class ValueType , detail::enable_if_t$<$
[detail::is_getable](#structdetail_1_1is__getable)$<$ basic_json_t,
ValueType $>$::value &&!std::is_same$<$
[value_t](#namespacedetail_a917c3efabea8a20dc72d9ae2c673d632),
detail::uncvref_t$<$ ValueType $>$ $>$::value, int $>$ = 0$>$   
ValueType [value](#classbasic__json_ac63045992eb552c11f77fefddd801591)
(const
[json_pointer](#classbasic__json_afe66720a34c11920f359394a4430a16e)
&ptr, const ValueType &default_value) const

<div class="DoxyCompactList">

*access specified object element via JSON Pointer with default value*

</div>

template$<$class ValueType , class ReturnType = typename
value_return_type$<$ValueType$>$::type, detail::enable_if_t$<$
[detail::is_getable](#structdetail_1_1is__getable)$<$ basic_json_t,
ReturnType $>$::value &&!std::is_same$<$
[value_t](#namespacedetail_a917c3efabea8a20dc72d9ae2c673d632),
detail::uncvref_t$<$ ValueType $>$ $>$::value, int $>$ = 0$>$   
ReturnType [value](#classbasic__json_a1ab7b5edf8e5831195940f8d377a6ee3)
(const
[json_pointer](#classbasic__json_afe66720a34c11920f359394a4430a16e)
&ptr, ValueType &&default_value) const

<div class="DoxyCompactList">

*access specified object element via JSON Pointer with default value*

</div>

<span id="classbasic__json_a7e65cc92d9f1db5edb42294a705c2d4e"
label="classbasic__json_a7e65cc92d9f1db5edb42294a705c2d4e"></span>
template$<$class ValueType , class BasicJsonType ,
detail::enable_if_t$<$
[detail::is_basic_json](#structdetail_1_1is__basic__json)$<$
BasicJsonType $>$::value
&&[detail::is_getable](#structdetail_1_1is__getable)$<$ basic_json_t,
ValueType $>$::value &&!std::is_same$<$
[value_t](#namespacedetail_a917c3efabea8a20dc72d9ae2c673d632),
detail::uncvref_t$<$ ValueType $>$ $>$::value, int $>$ = 0$>$   
ValueType **value** (const ::nlohmann::json_pointer$<$ BasicJsonType $>$
&ptr, const ValueType &default_value) const

<span id="classbasic__json_a001e11f0e7bef081d390651f69acf346"
label="classbasic__json_a001e11f0e7bef081d390651f69acf346"></span>
template$<$class ValueType , class BasicJsonType , class ReturnType =
typename value_return_type$<$ValueType$>$::type, detail::enable_if_t$<$
[detail::is_basic_json](#structdetail_1_1is__basic__json)$<$
BasicJsonType $>$::value
&&[detail::is_getable](#structdetail_1_1is__getable)$<$ basic_json_t,
ReturnType $>$::value &&!std::is_same$<$
[value_t](#namespacedetail_a917c3efabea8a20dc72d9ae2c673d632),
detail::uncvref_t$<$ ValueType $>$ $>$::value, int $>$ = 0$>$   
ReturnType **value** (const ::nlohmann::json_pointer$<$ BasicJsonType
$>$ &ptr, ValueType &&default_value) const

[reference](#classbasic__json_a6ca7bfb35987ce7cb8d27447cda5b80a)
[front](#classbasic__json_ad4dd162b4990cfb69925193797415f7e) ()

<div class="DoxyCompactList">

*access the first element*

</div>

[const_reference](#classbasic__json_a31370bb451b78198d42c86dd31955deb)
[front](#classbasic__json_a162089e94f24182ba3e4484be63c0c1a) () const

<div class="DoxyCompactList">

*access the first element*

</div>

[reference](#classbasic__json_a6ca7bfb35987ce7cb8d27447cda5b80a)
[back](#classbasic__json_a0d93dc1dbdf67a6ee3a5cf1d2439ca77) ()

<div class="DoxyCompactList">

*access the last element*

</div>

[const_reference](#classbasic__json_a31370bb451b78198d42c86dd31955deb)
[back](#classbasic__json_a41eee3066cd1ebfea746f9f07fd03f6f) () const

<div class="DoxyCompactList">

*access the last element*

</div>

template$<$class IteratorType , detail::enable_if_t$<$ std::is_same$<$
IteratorType, typename basic_json_t::iterator
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef)$\vert$$\vert$std::is_same$<$
IteratorType, typename basic_json_t::const_iterator
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef), int
$>$ = 0$>$   
IteratorType
[erase](#classbasic__json_a7d0fef086b1b72372113db6ce7446189)
(IteratorType pos)

<div class="DoxyCompactList">

*remove element given an iterator*

</div>

template$<$class IteratorType , detail::enable_if_t$<$ std::is_same$<$
IteratorType, typename basic_json_t::iterator
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef)$\vert$$\vert$std::is_same$<$
IteratorType, typename basic_json_t::const_iterator
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef), int
$>$ = 0$>$   
IteratorType
[erase](#classbasic__json_a437b81c6e968a4192a22bc0de6c4df80)
(IteratorType first, IteratorType last)

<div class="DoxyCompactList">

*remove elements given an iterator range*

</div>

[size_type](#classbasic__json_a2c086af43cf06b1b7118f5351cab3ec9)
[erase](#classbasic__json_a05da3b93f2d4a7164589abffaa9acb33) (const
typename object_t::key_type &key)

<div class="DoxyCompactList">

*remove element from a JSON object given a key*

</div>

template$<$class KeyType , detail::enable_if_t$<$
detail::is_usable_as_basic_json_key_type$<$ basic_json_t, KeyType
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef), int
$>$ = 0$>$   
[size_type](#classbasic__json_a2c086af43cf06b1b7118f5351cab3ec9)
[erase](#classbasic__json_a5f763336e84232f38e2d80e142f9820e) (KeyType
&&key)

<div class="DoxyCompactList">

*remove element from a JSON object given a key*

</div>

void [erase](#classbasic__json_ac2c58b5f34c2ff56e27630214f5a9df4) (const
[size_type](#classbasic__json_a2c086af43cf06b1b7118f5351cab3ec9) idx)

<div class="DoxyCompactList">

*remove element from a JSON array given an index*

</div>

</div>

Classes to implement user-defined exceptions.

<div class="DoxyCompactItemize">

<span id="classbasic__json_a4ed57fa411e69ae5741bc2f333a967c9"
label="classbasic__json_a4ed57fa411e69ae5741bc2f333a967c9"></span> using
**exception** = [detail::exception](#classdetail_1_1exception)

<span id="classbasic__json_a0fe1802a6a2de032f3c4e4f0f555ae10"
label="classbasic__json_a0fe1802a6a2de032f3c4e4f0f555ae10"></span> using
**parse_error** = [detail::parse_error](#classdetail_1_1parse__error)

<span id="classbasic__json_a34b69b2a91df080e00cc8f36c342bb6b"
label="classbasic__json_a34b69b2a91df080e00cc8f36c342bb6b"></span> using
**invalid_iterator** =
[detail::invalid_iterator](#classdetail_1_1invalid__iterator)

<span id="classbasic__json_a2c52f112e54d1be294055ea9186a1c35"
label="classbasic__json_a2c52f112e54d1be294055ea9186a1c35"></span> using
**type_error** = [detail::type_error](#classdetail_1_1type__error)

<span id="classbasic__json_aa45e2d88a6cf9236c1f45a1fad18442d"
label="classbasic__json_aa45e2d88a6cf9236c1f45a1fad18442d"></span> using
**out_of_range** =
[detail::out_of_range](#classdetail_1_1out__of__range)

<span id="classbasic__json_adb2d18607e0835c4695f53996b181379"
label="classbasic__json_adb2d18607e0835c4695f53996b181379"></span> using
**other_error** = [detail::other_error](#classdetail_1_1other__error)

</div>

The canonic container types to use like any other STL container.

<div class="DoxyCompactItemize">

<span id="classbasic__json_a0d9e6a7acee2992e310ea21a7b59c67a"
label="classbasic__json_a0d9e6a7acee2992e310ea21a7b59c67a"></span> using
**value_type** = [basic_json](#classbasic__json)

<div class="DoxyCompactList">

*the type of elements in a container*

</div>

<span id="classbasic__json_a6ca7bfb35987ce7cb8d27447cda5b80a"
label="classbasic__json_a6ca7bfb35987ce7cb8d27447cda5b80a"></span> using
**reference** =
[value_type](#classbasic__json_a0d9e6a7acee2992e310ea21a7b59c67a)&

<div class="DoxyCompactList">

*the type of an element reference*

</div>

<span id="classbasic__json_a31370bb451b78198d42c86dd31955deb"
label="classbasic__json_a31370bb451b78198d42c86dd31955deb"></span> using
**const_reference** = const
[value_type](#classbasic__json_a0d9e6a7acee2992e310ea21a7b59c67a)&

<div class="DoxyCompactList">

*the type of an element const reference*

</div>

<span id="classbasic__json_ae45e8f7ce7c3e62035cd097a39910399"
label="classbasic__json_ae45e8f7ce7c3e62035cd097a39910399"></span> using
**difference_type** = std::ptrdiff_t

<div class="DoxyCompactList">

*a type to represent differences between iterators*

</div>

<span id="classbasic__json_a2c086af43cf06b1b7118f5351cab3ec9"
label="classbasic__json_a2c086af43cf06b1b7118f5351cab3ec9"></span> using
**size_type** = std::size_t

<div class="DoxyCompactList">

*a type to represent container sizes*

</div>

<span id="classbasic__json_a83f845db2d54cedad97279bad70aea52"
label="classbasic__json_a83f845db2d54cedad97279bad70aea52"></span> using
**allocator_type** = AllocatorType$<$[basic_json](#classbasic__json)$>$

<div class="DoxyCompactList">

*the allocator type*

</div>

<span id="classbasic__json_a84279673ab13fb6360cf17173a29a1f1"
label="classbasic__json_a84279673ab13fb6360cf17173a29a1f1"></span> using
**pointer** = typename
std::allocator_traits$<$[allocator_type](#classbasic__json_a83f845db2d54cedad97279bad70aea52)$>$::pointer

<div class="DoxyCompactList">

*the type of an element pointer*

</div>

<span id="classbasic__json_a2862fa42527f5c14d9f737411e0facd4"
label="classbasic__json_a2862fa42527f5c14d9f737411e0facd4"></span> using
**const_pointer** = typename
std::allocator_traits$<$[allocator_type](#classbasic__json_a83f845db2d54cedad97279bad70aea52)$>$::const_pointer

<div class="DoxyCompactList">

*the type of an element const pointer*

</div>

<span id="classbasic__json_ae206a491161d043f8efaa1330f1ccf97"
label="classbasic__json_ae206a491161d043f8efaa1330f1ccf97"></span> using
**iterator** = iter_impl$<$[basic_json](#classbasic__json)$>$

<div class="DoxyCompactList">

*an iterator for a container*

</div>

<span id="classbasic__json_a1f5af3d9d06d43b91fefe1767794b1e8"
label="classbasic__json_a1f5af3d9d06d43b91fefe1767794b1e8"></span> using
**const_iterator** = iter_impl$<$const
[basic_json](#classbasic__json)$>$

<div class="DoxyCompactList">

*a const iterator for a container*

</div>

<span id="classbasic__json_aedc059cdae078322bb0d434b2127d1cf"
label="classbasic__json_aedc059cdae078322bb0d434b2127d1cf"></span> using
**reverse_iterator** = json_reverse_iterator$<$typename
[basic_json::iterator](#classbasic__json_ae206a491161d043f8efaa1330f1ccf97)$>$

<div class="DoxyCompactList">

*a reverse iterator for a container*

</div>

<span id="classbasic__json_a240f61567d8acffe831532f4f9b379cb"
label="classbasic__json_a240f61567d8acffe831532f4f9b379cb"></span> using
**const_reverse_iterator** = json_reverse_iterator$<$typename
[basic_json::const_iterator](#classbasic__json_a1f5af3d9d06d43b91fefe1767794b1e8)$>$

<div class="DoxyCompactList">

*a const reverse iterator for a container*

</div>

</div>

The data types to store a JSON value. These types are derived from the
template arguments passed to class .

<div class="DoxyCompactItemize">

using
[default_object_comparator_t](#classbasic__json_a991d005e7f648cbf37bb36daf85183ca)
= std::less$<$StringType$>$

<div class="DoxyCompactList">

*default object key comparator type The actual object key comparator
type () may be different.*

</div>

using [object_t](#classbasic__json_a67bb0d6dfaf1709d918b7107f5b94a3d)

<div class="DoxyCompactList">

*a type for an object*

</div>

using [array_t](#classbasic__json_a60644b7dccc409e6b367361d37841333) =
ArrayType$<$[basic_json](#classbasic__json),
AllocatorType$<$[basic_json](#classbasic__json)$>$$>$

<div class="DoxyCompactList">

*a type for an array*

</div>

using [string_t](#classbasic__json_ac8c9cde32146e6c343e1960aefc11fba) =
StringType

<div class="DoxyCompactList">

*a type for a string*

</div>

using [boolean_t](#classbasic__json_a9301890c48e9b957edc07f9eb767bd10) =
BooleanType

<div class="DoxyCompactList">

*a type for a boolean*

</div>

using
[number_integer_t](#classbasic__json_aba48b0bdee31228a4e19b7c040b6d2a5)
= NumberIntegerType

<div class="DoxyCompactList">

*a type for a number (integer)*

</div>

using
[number_unsigned_t](#classbasic__json_ae8505b599e706768a1e0bd6718cc7117)
= NumberUnsignedType

<div class="DoxyCompactList">

*a type for a number (unsigned)*

</div>

using
[number_float_t](#classbasic__json_a80a229dbc84c1334171ce9c49c873c56) =
NumberFloatType

<div class="DoxyCompactList">

*a type for a number (floating-point)*

</div>

using [binary_t](#classbasic__json_a4c1b5ea434b48cf31097617bb1c1ca1e) =
nlohmann::byte_container_with_subtype$<$BinaryType$>$

<div class="DoxyCompactList">

*a type for a packed binary type*

</div>

using
[object_comparator_t](#classbasic__json_af12040e0663db54840d73d363979643a)
=
detail::actual_object_comparator_t$<$[basic_json](#classbasic__json)$>$

<div class="DoxyCompactList">

*object key comparator type*

</div>

</div>

<div class="DoxyCompactItemize">

void [swap](#classbasic__json_a44c98b48b8a0b5e53087776fbb63961f)
([reference](#classbasic__json_a6ca7bfb35987ce7cb8d27447cda5b80a) left,
[reference](#classbasic__json_a6ca7bfb35987ce7cb8d27447cda5b80a) right)
noexcept(std::is_nothrow_move_constructible$<$
[value_t](#namespacedetail_a917c3efabea8a20dc72d9ae2c673d632)
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef)
&&std::is_nothrow_move_assignable$<$
[value_t](#namespacedetail_a917c3efabea8a20dc72d9ae2c673d632)
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef)
&&std::is_nothrow_move_constructible$<$ json_value
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef)
&&//NOLINT(cppcoreguidelines-noexcept-swap, performance-noexcept-swap)
std::is_nothrow_move_assignable$<$ json_value
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef))

<div class="DoxyCompactList">

*exchanges the values*

</div>

void [clear](#classbasic__json_ad8cb21b66e4a4de652828345d51a8fc1) ()
noexcept

<div class="DoxyCompactList">

*clears the contents*

</div>

void [push_back](#classbasic__json_a3d13acce4e49e0d5ee768643a7b89010)
([basic_json](#classbasic__json) &&val)

<div class="DoxyCompactList">

*add an object to an array*

</div>

[reference](#classbasic__json_a6ca7bfb35987ce7cb8d27447cda5b80a)
[operator+=](#classbasic__json_ac444a656905e3f207ad9fc19275faf25)
([basic_json](#classbasic__json) &&val)

<div class="DoxyCompactList">

*add an object to an array*

</div>

void [push_back](#classbasic__json_aca01ca3a9bc310e5c5d067a39dca6933)
(const [basic_json](#classbasic__json) &val)

<div class="DoxyCompactList">

*add an object to an array*

</div>

[reference](#classbasic__json_a6ca7bfb35987ce7cb8d27447cda5b80a)
[operator+=](#classbasic__json_a4475e951f51506808ca6fe7e77eb38ca) (const
[basic_json](#classbasic__json) &val)

<div class="DoxyCompactList">

*add an object to an array*

</div>

void [push_back](#classbasic__json_af17fe93acad9b0b991600225dabd42be)
(const typename object_t::value_type &val)

<div class="DoxyCompactList">

*add an object to an object*

</div>

[reference](#classbasic__json_a6ca7bfb35987ce7cb8d27447cda5b80a)
[operator+=](#classbasic__json_a996a58d60e4badd9beadfd3e2e7ffdc1) (const
typename object_t::value_type &val)

<div class="DoxyCompactList">

*add an object to an object*

</div>

void [push_back](#classbasic__json_a4fcacc90f17b156f0b6c8e0430624853)
([initializer_list_t](#classbasic__json_a6dc15c0f6c156e43c956ad6ca0c19de3)
init)

<div class="DoxyCompactList">

*add an object to an object*

</div>

[reference](#classbasic__json_a6ca7bfb35987ce7cb8d27447cda5b80a)
[operator+=](#classbasic__json_a3af74b651da5642cd8b77a3ecc635331)
([initializer_list_t](#classbasic__json_a6dc15c0f6c156e43c956ad6ca0c19de3)
init)

<div class="DoxyCompactList">

*add an object to an object*

</div>

template$<$class... Args$>$   
[reference](#classbasic__json_a6ca7bfb35987ce7cb8d27447cda5b80a)
[emplace_back](#classbasic__json_ac5f0a15957842b188826aea98a9cfd3d)
(Args &&... args)

<div class="DoxyCompactList">

*add an object to an array*

</div>

template$<$class... Args$>$   
std::pair$<$
[iterator](#classbasic__json_ae206a491161d043f8efaa1330f1ccf97), bool
$>$ [emplace](#classbasic__json_af298488e59ff260d2ca950070cf19196) (Args
&&... args)

<div class="DoxyCompactList">

*add an object to an object if key does not exist*

</div>

template$<$typename... Args$>$   
[iterator](#classbasic__json_ae206a491161d043f8efaa1330f1ccf97)
[insert_iterator](#classbasic__json_af8c5ca19d22a32054452470669c43bb9)
([const_iterator](#classbasic__json_a1f5af3d9d06d43b91fefe1767794b1e8)
pos, Args &&... args)

[iterator](#classbasic__json_ae206a491161d043f8efaa1330f1ccf97)
[insert](#classbasic__json_a7f3817060c2bec896a99cb2c236b9c27)
([const_iterator](#classbasic__json_a1f5af3d9d06d43b91fefe1767794b1e8)
pos, const [basic_json](#classbasic__json) &val)

<div class="DoxyCompactList">

*inserts element into array*

</div>

[iterator](#classbasic__json_ae206a491161d043f8efaa1330f1ccf97)
[insert](#classbasic__json_ae5da62116a40a0f86e87f11fdd54e9f0)
([const_iterator](#classbasic__json_a1f5af3d9d06d43b91fefe1767794b1e8)
pos, [basic_json](#classbasic__json) &&val)

<div class="DoxyCompactList">

*inserts element into array*

</div>

[iterator](#classbasic__json_ae206a491161d043f8efaa1330f1ccf97)
[insert](#classbasic__json_a47b623200562da188886a385c716d101)
([const_iterator](#classbasic__json_a1f5af3d9d06d43b91fefe1767794b1e8)
pos, [size_type](#classbasic__json_a2c086af43cf06b1b7118f5351cab3ec9)
cnt, const [basic_json](#classbasic__json) &val)

<div class="DoxyCompactList">

*inserts copies of element into array*

</div>

[iterator](#classbasic__json_ae206a491161d043f8efaa1330f1ccf97)
[insert](#classbasic__json_a68e1707248a00a2608a304da5ae5c911)
([const_iterator](#classbasic__json_a1f5af3d9d06d43b91fefe1767794b1e8)
pos,
[const_iterator](#classbasic__json_a1f5af3d9d06d43b91fefe1767794b1e8)
first,
[const_iterator](#classbasic__json_a1f5af3d9d06d43b91fefe1767794b1e8)
last)

<div class="DoxyCompactList">

*inserts range of elements into array*

</div>

[iterator](#classbasic__json_ae206a491161d043f8efaa1330f1ccf97)
[insert](#classbasic__json_abdfee6a3db80431a24c68bfaf038c47d)
([const_iterator](#classbasic__json_a1f5af3d9d06d43b91fefe1767794b1e8)
pos,
[initializer_list_t](#classbasic__json_a6dc15c0f6c156e43c956ad6ca0c19de3)
ilist)

<div class="DoxyCompactList">

*inserts elements from initializer list into array*

</div>

void [insert](#classbasic__json_aaf55c485c75ddd7bd5f9791e59d3aec7)
([const_iterator](#classbasic__json_a1f5af3d9d06d43b91fefe1767794b1e8)
first,
[const_iterator](#classbasic__json_a1f5af3d9d06d43b91fefe1767794b1e8)
last)

<div class="DoxyCompactList">

*inserts range of elements into object*

</div>

void [update](#classbasic__json_a3819f393e82396782ccc22785575b01d)
([const_reference](#classbasic__json_a31370bb451b78198d42c86dd31955deb)
j, bool merge_objects=false)

<div class="DoxyCompactList">

*updates a JSON object from another object, overwriting existing keys*

</div>

void [update](#classbasic__json_a4ea2b8cef5e4aba5b92d14e6ebe25936)
([const_iterator](#classbasic__json_a1f5af3d9d06d43b91fefe1767794b1e8)
first,
[const_iterator](#classbasic__json_a1f5af3d9d06d43b91fefe1767794b1e8)
last, bool merge_objects=false)

<div class="DoxyCompactList">

*updates a JSON object from another object, overwriting existing keys*

</div>

void [swap](#classbasic__json_a1a94e5348ebb34852092d51a44e21d24)
([reference](#classbasic__json_a6ca7bfb35987ce7cb8d27447cda5b80a) other)
noexcept(std::is_nothrow_move_constructible$<$
[value_t](#namespacedetail_a917c3efabea8a20dc72d9ae2c673d632)
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef)
&&std::is_nothrow_move_assignable$<$
[value_t](#namespacedetail_a917c3efabea8a20dc72d9ae2c673d632)
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef)
&&std::is_nothrow_move_constructible$<$ json_value
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef)
&&//NOLINT(cppcoreguidelines-noexcept-swap, performance-noexcept-swap)
std::is_nothrow_move_assignable$<$ json_value
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef))

<div class="DoxyCompactList">

*exchanges the values*

</div>

void [swap](#classbasic__json_ac1e32c91d5e641c25c52486341f5a9db)
([array_t](#classbasic__json_a60644b7dccc409e6b367361d37841333) &other)

<div class="DoxyCompactList">

*exchanges the values*

</div>

void [swap](#classbasic__json_abc9ea6dec87e254de172c2bfeaeef7df)
([object_t](#classbasic__json_a67bb0d6dfaf1709d918b7107f5b94a3d) &other)

<div class="DoxyCompactList">

*exchanges the values*

</div>

void [swap](#classbasic__json_aeac8816c033c659ef8b43a5f03d5f553)
([string_t](#classbasic__json_ac8c9cde32146e6c343e1960aefc11fba) &other)

<div class="DoxyCompactList">

*exchanges the values*

</div>

void [swap](#classbasic__json_a3624e1bbc880bd196e3fa4a220554755)
([binary_t](#classbasic__json_a4c1b5ea434b48cf31097617bb1c1ca1e) &other)

<div class="DoxyCompactList">

*exchanges the values*

</div>

void [swap](#classbasic__json_aa987625005046c81e7748dca1e84a0e3)
(typename binary_t::container_type &other)

<div class="DoxyCompactList">

*exchanges the values*

</div>

</div>

<div class="DoxyCompactItemize">

<span id="classbasic__json_a7dd56e6dab5328365a3c9b9d15f98e1b"
label="classbasic__json_a7dd56e6dab5328365a3c9b9d15f98e1b"></span>
JSON_PRIVATE_UNLESS_TESTED : static bool
compares_unordered([const_reference](#classbasic__json_a31370bb451b78198d42c86dd31955deb)
lhs

<span id="classbasic__json_a3a549b97cc690cd390145249335d3768"
label="classbasic__json_a3a549b97cc690cd390145249335d3768"></span>
JSON_PRIVATE_UNLESS_TESTED
[const_reference](#classbasic__json_a31370bb451b78198d42c86dd31955deb)
**rhs**

<span id="classbasic__json_a54aba2f4314135e3ccf511fb17ca45a5"
label="classbasic__json_a54aba2f4314135e3ccf511fb17ca45a5"></span>
JSON_PRIVATE_UNLESS_TESTED
[const_reference](#classbasic__json_a31370bb451b78198d42c86dd31955deb)
bool **inverse**

</div>

Direct access to the stored value of a JSON value.

<div class="DoxyCompactItemize">

template$<$typename PointerType , typename std::enable_if$<$
std::is_pointer$<$ PointerType
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef), int
$>$[::type](#classbasic__json_ac5e52dbb3cb4e9fcabd1b88c37985aef) = 0$>$
  
auto [get_ptr](#classbasic__json_aba60354728e2f7f64e3e5c6b02c5b820) ()
noexcept -$>$ decltype(std::declval$<$ basic_json_t &
$>$().get_impl_ptr(std::declval$<$ PointerType $>$()))

<div class="DoxyCompactList">

*get a pointer value (implicit)*

</div>

template$<$typename PointerType , typename std::enable_if$<$
std::is_pointer$<$ PointerType
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef)
&&std::is_const$<$ typename std::remove_pointer$<$ PointerType
$>$[::type](#classbasic__json_ac5e52dbb3cb4e9fcabd1b88c37985aef)
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef), int
$>$[::type](#classbasic__json_ac5e52dbb3cb4e9fcabd1b88c37985aef) = 0$>$
  
constexpr auto
[get_ptr](#classbasic__json_a9db8d5e59277a70a736f899c4aec0af0) () const
noexcept -$>$ decltype(std::declval$<$ const basic_json_t &
$>$().get_impl_ptr(std::declval$<$ PointerType $>$()))

<div class="DoxyCompactList">

*get a pointer value (implicit)*

</div>

template$<$typename ValueTypeCV , typename ValueType =
detail::uncvref_t$<$ValueTypeCV$>$$>$   
auto [get](#classbasic__json_a0ab31c7fdbab38898070bca01637f886) () const
noexcept(noexcept(std::declval$<$ const basic_json_t & $>$().template
get_impl$<$ ValueType
$>$([detail::priority_tag](#structdetail_1_1priority__tag)$<$ 4 $>$
{}))) -$>$ decltype(std::declval$<$ const basic_json_t & $>$().template
get_impl$<$ ValueType
$>$([detail::priority_tag](#structdetail_1_1priority__tag)$<$ 4 $>$ {}))

<div class="DoxyCompactList">

*get a (pointer) value (explicit)*

</div>

template$<$typename PointerType , typename std::enable_if$<$
std::is_pointer$<$ PointerType
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef), int
$>$[::type](#classbasic__json_ac5e52dbb3cb4e9fcabd1b88c37985aef) = 0$>$
  
auto [get](#classbasic__json_ab11f66d4edc50a209fab3f8c48664a53) ()
noexcept -$>$ decltype(std::declval$<$ basic_json_t & $>$().template
[get_ptr](#classbasic__json_aba60354728e2f7f64e3e5c6b02c5b820)$<$
PointerType $>$())

<div class="DoxyCompactList">

*get a pointer value (explicit)*

</div>

template$<$typename ValueType , detail::enable_if_t$<$
\![detail::is_basic_json](#structdetail_1_1is__basic__json)$<$ ValueType
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef)
&&[detail::has_from_json](#structdetail_1_1has__from__json)$<$
basic_json_t, ValueType
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef), int
$>$ = 0$>$   
ValueType &
[get_to](#classbasic__json_a8773ee34154b4f492549f5496c640ce5) (ValueType
&v) const noexcept(noexcept(JSONSerializer$<$ ValueType
$>$::from_json(std::declval$<$ const basic_json_t & $>$(), v)))

<div class="DoxyCompactList">

*get a value (explicit)*

</div>

<span id="classbasic__json_a5105a87bfca21ce2700960f9c4e4cf0a"
label="classbasic__json_a5105a87bfca21ce2700960f9c4e4cf0a"></span>
template$<$typename ValueType , detail::enable_if_t$<$
[detail::is_basic_json](#structdetail_1_1is__basic__json)$<$ ValueType
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef), int
$>$ = 0$>$   
ValueType & **get_to** (ValueType &v) const

<span id="classbasic__json_ab8ffeca3b8431bbc7bab0280f843f79e"
label="classbasic__json_ab8ffeca3b8431bbc7bab0280f843f79e"></span>
template$<$typename T , std::size_t N, typename Array = T (&)\[N\],
detail::enable_if_t$<$
[detail::has_from_json](#structdetail_1_1has__from__json)$<$
basic_json_t, Array
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef), int
$>$ = 0$>$   
Array **get_to** (T(&v)\[N\]) const noexcept(noexcept(JSONSerializer$<$
Array $>$::from_json(std::declval$<$ const basic_json_t & $>$(), v)))

template$<$typename ReferenceType , typename std::enable_if$<$
std::is_reference$<$ ReferenceType
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef), int
$>$[::type](#classbasic__json_ac5e52dbb3cb4e9fcabd1b88c37985aef) = 0$>$
  
ReferenceType
[get_ref](#classbasic__json_a3697078e748abc4a99c23e36e321b439) ()

<div class="DoxyCompactList">

*get a reference value (implicit)*

</div>

template$<$typename ReferenceType , typename std::enable_if$<$
std::is_reference$<$ ReferenceType
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef)
&&std::is_const$<$ typename std::remove_reference$<$ ReferenceType
$>$[::type](#classbasic__json_ac5e52dbb3cb4e9fcabd1b88c37985aef)
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef), int
$>$[::type](#classbasic__json_ac5e52dbb3cb4e9fcabd1b88c37985aef) = 0$>$
  
ReferenceType
[get_ref](#classbasic__json_a39c5dbafcc6eef79143c251096827549) () const

<div class="DoxyCompactList">

*get a reference value (implicit)*

</div>

template$<$typename ValueType , typename std::enable_if$<$
[detail::conjunction](#structdetail_1_1conjunction)$<$
[detail::negation](#structdetail_1_1negation)$<$ std::is_pointer$<$
ValueType $>$ $>$, [detail::negation](#structdetail_1_1negation)$<$
std::is_same$<$ ValueType, std::nullptr_t $>$ $>$,
[detail::negation](#structdetail_1_1negation)$<$ std::is_same$<$
ValueType, [detail::json_ref](#classdetail_1_1json__ref)$<$
[basic_json](#classbasic__json) $>$ $>$ $>$,
[detail::negation](#structdetail_1_1negation)$<$ std::is_same$<$
ValueType, typename string_t::value_type $>$ $>$,
[detail::negation](#structdetail_1_1negation)$<$
[detail::is_basic_json](#structdetail_1_1is__basic__json)$<$ ValueType
$>$ $>$, [detail::negation](#structdetail_1_1negation)$<$
std::is_same$<$ ValueType, std::initializer_list$<$ typename
string_t::value_type $>$ $>$ $>$,
[detail::is_detected_lazy](#structdetail_1_1is__detected__lazy)$<$
detail::get_template_function, const basic_json_t &, ValueType $>$
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef), int
$>$[::type](#classbasic__json_ac5e52dbb3cb4e9fcabd1b88c37985aef) = 0$>$
  
JSON_EXPLICIT
[operator ValueType](#classbasic__json_a747e3e19891143442991bbdb33edb917)
() const

<div class="DoxyCompactList">

*get a value (implicit)*

</div>

[binary_t](#classbasic__json_a4c1b5ea434b48cf31097617bb1c1ca1e) &
[get_binary](#classbasic__json_aaa2432a7c01833b02c6330709211ede7) ()

<div class="DoxyCompactList">

*get a binary value*

</div>

const [binary_t](#classbasic__json_a4c1b5ea434b48cf31097617bb1c1ca1e) &
[get_binary](#classbasic__json_a67d6da9fb8325a87d9513f960d88512a) ()
const

<div class="DoxyCompactList">

*get a binary value*

</div>

</div>

Constructors of class , copy/move constructor, copy assignment, static
functions creating objects, and the destructor.

<div class="DoxyCompactItemize">

static JSON_HEDLEY_WARN_UNUSED_RESULT [basic_json](#classbasic__json)
[binary](#classbasic__json_a743ac3bcbc4b0f7897244d4cea387eee) (const
typename binary_t::container_type &init)

<div class="DoxyCompactList">

*explicitly create a binary array (without subtype)*

</div>

static JSON_HEDLEY_WARN_UNUSED_RESULT [basic_json](#classbasic__json)
[binary](#classbasic__json_a45e65e73d9ecf780537d632372fa2c51) (const
typename binary_t::container_type &init, typename binary_t::subtype_type
subtype)

<div class="DoxyCompactList">

*explicitly create a binary array (with subtype)*

</div>

static JSON_HEDLEY_WARN_UNUSED_RESULT [basic_json](#classbasic__json)
[binary](#classbasic__json_a5af2196a9acde33f742ef054e7c2109c) (typename
binary_t::container_type &&init)

<div class="DoxyCompactList">

*explicitly create a binary array*

</div>

static JSON_HEDLEY_WARN_UNUSED_RESULT [basic_json](#classbasic__json)
[binary](#classbasic__json_ac00a2a38929ce21eae65f9dd09b03ce3) (typename
binary_t::container_type &&init, typename binary_t::subtype_type
subtype)

<div class="DoxyCompactList">

*explicitly create a binary array (with subtype)*

</div>

static JSON_HEDLEY_WARN_UNUSED_RESULT [basic_json](#classbasic__json)
[array](#classbasic__json_ac736994a792cb8460a30a3f4dd86fd78)
([initializer_list_t](#classbasic__json_a6dc15c0f6c156e43c956ad6ca0c19de3)
init={})

<div class="DoxyCompactList">

*explicitly create an array from an initializer list*

</div>

static JSON_HEDLEY_WARN_UNUSED_RESULT [basic_json](#classbasic__json)
[object](#classbasic__json_a50a0e8dacc0f4aa12162da666595e6fd)
([initializer_list_t](#classbasic__json_a6dc15c0f6c156e43c956ad6ca0c19de3)
init={})

<div class="DoxyCompactList">

*explicitly create an object from an initializer list*

</div>

[basic_json](#classbasic__json_ae2d5bc42270881ed3e219e8b1456fec5) (const
[value_t](#namespacedetail_a917c3efabea8a20dc72d9ae2c673d632) v)

<div class="DoxyCompactList">

*create an empty value with a given type*

</div>

[basic_json](#classbasic__json_a5b1fab9ded0a2a182837bd66c0e5189e)
(std::nullptr_t=nullptr) noexcept

<div class="DoxyCompactList">

*create a null object*

</div>

template$<$typename CompatibleType , typename U =
detail::uncvref_t$<$CompatibleType$>$, detail::enable_if_t$<$
\![detail::is_basic_json](#structdetail_1_1is__basic__json)$<$ U
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef)
&&[detail::is_compatible_type](#structdetail_1_1is__compatible__type)$<$
basic_json_t, U
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef), int
$>$ = 0$>$   
[basic_json](#classbasic__json_a0f24e66b152203259eaf05c33ebaeed4)
(CompatibleType &&val)
noexcept(noexcept(//NOLINT(bugprone-forwarding-[reference](#classbasic__json_a6ca7bfb35987ce7cb8d27447cda5b80a)-overload,
bugprone-[exception](#classdetail_1_1exception)-escape)
JSONSerializer$<$ U $>$::to_json(std::declval$<$ basic_json_t & $>$(),
std::forward$<$ CompatibleType $>$(val))))

<div class="DoxyCompactList">

*create a JSON value from compatible types*

</div>

template$<$typename BasicJsonType , detail::enable_if_t$<$
[detail::is_basic_json](#structdetail_1_1is__basic__json)$<$
BasicJsonType
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef)
&&!std::is_same$<$ [basic_json](#classbasic__json), BasicJsonType
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef), int
$>$ = 0$>$   
[basic_json](#classbasic__json_aeaf10402e79a1acce9a74f5a9654d403) (const
BasicJsonType &val)

<div class="DoxyCompactList">

*create a JSON value from an existing one*

</div>

[basic_json](#classbasic__json_aa911d47d3c99184a301bf4fd304199b2)
([initializer_list_t](#classbasic__json_a6dc15c0f6c156e43c956ad6ca0c19de3)
init, bool type_deduction=true,
[value_t](#namespacedetail_a917c3efabea8a20dc72d9ae2c673d632)
manual_type=value_t::array)

<div class="DoxyCompactList">

*create a container (array or object) from an initializer list*

</div>

[basic_json](#classbasic__json_a7b6f0605b09a002567fd18a289cef31b)
([size_type](#classbasic__json_a2c086af43cf06b1b7118f5351cab3ec9) cnt,
const [basic_json](#classbasic__json) &val)

<div class="DoxyCompactList">

*construct an array with count copies of given value*

</div>

template$<$class InputIT , typename std::enable_if$<$ std::is_same$<$
InputIT, typename basic_json_t::iterator
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef)$\vert$$\vert$std::is_same$<$
InputIT, typename basic_json_t::const_iterator
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef), int
$>$[::type](#classbasic__json_ac5e52dbb3cb4e9fcabd1b88c37985aef) = 0$>$
  
[basic_json](#classbasic__json_af97b4fcd01509076c8a7b32ec1a10aec)
(InputIT first, InputIT last)

<div class="DoxyCompactList">

*construct a JSON container given an iterator range*

</div>

<span id="classbasic__json_ab6712795591ec744415b50bc01d768ed"
label="classbasic__json_ab6712795591ec744415b50bc01d768ed"></span>
template$<$typename JsonRef , detail::enable_if_t$<$
[detail::conjunction](#structdetail_1_1conjunction)$<$
[detail::is_json_ref](#structdetail_1_1is__json__ref)$<$ JsonRef $>$,
std::is_same$<$ typename JsonRef::value_type,
[basic_json](#classbasic__json) $>$
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef), int
$>$ = 0$>$   
**basic_json** (const JsonRef &ref)

[basic_json](#classbasic__json_af15244e1249b6e7282127d460b5b2e3e) (const
[basic_json](#classbasic__json) &other)

<div class="DoxyCompactList">

*copy constructor*

</div>

[basic_json](#classbasic__json_ae18629aae4bd76e6f7920cf4e7b4dd60)
([basic_json](#classbasic__json) &&other) noexcept

<div class="DoxyCompactList">

*move constructor*

</div>

[basic_json](#classbasic__json) &
[operator=](#classbasic__json_ab8154023fc24515222c9cf61d677871e)
([basic_json](#classbasic__json) other)
noexcept(std::is_nothrow_move_constructible$<$
[value_t](#namespacedetail_a917c3efabea8a20dc72d9ae2c673d632)
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef)
&&std::is_nothrow_move_assignable$<$
[value_t](#namespacedetail_a917c3efabea8a20dc72d9ae2c673d632)
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef)
&&std::is_nothrow_move_constructible$<$ json_value
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef)
&&std::is_nothrow_move_assignable$<$ json_value
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef)
&&std::is_nothrow_move_assignable$<$ json_base_class_t
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef))

<div class="DoxyCompactList">

*copy assignment*

</div>

[$\sim$basic_json](#classbasic__json_a9f3bcb6dc54f447ad95085715104494e)
() noexcept

<div class="DoxyCompactList">

*destructor*

</div>

</div>

<div class="DoxyCompactItemize">

static iteration_proxy$<$
[iterator](#classbasic__json_ae206a491161d043f8efaa1330f1ccf97) $>$
[iterator_wrapper](#classbasic__json_ab8b4e0acdea49e5f0a77abdf1ce465d2)
([reference](#classbasic__json_a6ca7bfb35987ce7cb8d27447cda5b80a) ref)
noexcept

<div class="DoxyCompactList">

*wrapper to access iterator member functions in range-based for*

</div>

static iteration_proxy$<$
[const_iterator](#classbasic__json_a1f5af3d9d06d43b91fefe1767794b1e8)
$>$
[iterator_wrapper](#classbasic__json_a7c0314258e5347eade0c6851017bf5a5)
([const_reference](#classbasic__json_a31370bb451b78198d42c86dd31955deb)
ref) noexcept

<div class="DoxyCompactList">

*wrapper to access iterator member functions in range-based for*

</div>

[iterator](#classbasic__json_ae206a491161d043f8efaa1330f1ccf97)
[begin](#classbasic__json_a5251a08382864af52c854fca1bdba61c) () noexcept

<div class="DoxyCompactList">

*returns an iterator to the first element*

</div>

[const_iterator](#classbasic__json_a1f5af3d9d06d43b91fefe1767794b1e8)
[begin](#classbasic__json_aac84462424ea7a14f9abb4ddb8e6dd7f) () const
noexcept

<div class="DoxyCompactList">

*returns an iterator to the first element*

</div>

[const_iterator](#classbasic__json_a1f5af3d9d06d43b91fefe1767794b1e8)
[cbegin](#classbasic__json_a9ab2ece6530b3b2be5b876f80c68dc78) () const
noexcept

<div class="DoxyCompactList">

*returns a const iterator to the first element*

</div>

[iterator](#classbasic__json_ae206a491161d043f8efaa1330f1ccf97)
[end](#classbasic__json_a4dbc83213b31a171aa8ba65ff00fa954) () noexcept

<div class="DoxyCompactList">

*returns an iterator to one past the last element*

</div>

[const_iterator](#classbasic__json_a1f5af3d9d06d43b91fefe1767794b1e8)
[end](#classbasic__json_a0c10232619bee4e73749dae621c01376) () const
noexcept

<div class="DoxyCompactList">

*returns an iterator to one past the last element*

</div>

[const_iterator](#classbasic__json_a1f5af3d9d06d43b91fefe1767794b1e8)
[cend](#classbasic__json_a57c63700f006c54624eb2433ec6526b0) () const
noexcept

<div class="DoxyCompactList">

*returns an iterator to one past the last element*

</div>

[reverse_iterator](#classbasic__json_aedc059cdae078322bb0d434b2127d1cf)
[rbegin](#classbasic__json_a11da8db436685032e97563cbb7490ff5) ()
noexcept

<div class="DoxyCompactList">

*returns an iterator to the reverse-beginning*

</div>

[const_reverse_iterator](#classbasic__json_a240f61567d8acffe831532f4f9b379cb)
[rbegin](#classbasic__json_a4ef4aee2259af5183267f6e8f774d0eb) () const
noexcept

<div class="DoxyCompactList">

*returns an iterator to the reverse-beginning*

</div>

[reverse_iterator](#classbasic__json_aedc059cdae078322bb0d434b2127d1cf)
[rend](#classbasic__json_a8d8855a8c04ee7986ae8bab283c4f0de) () noexcept

<div class="DoxyCompactList">

*returns an iterator to the reverse-end*

</div>

[const_reverse_iterator](#classbasic__json_a240f61567d8acffe831532f4f9b379cb)
[rend](#classbasic__json_ae81c3b38089a63d988a1efefe3ebc4bf) () const
noexcept

<div class="DoxyCompactList">

*returns an iterator to the reverse-end*

</div>

[const_reverse_iterator](#classbasic__json_a240f61567d8acffe831532f4f9b379cb)
[crbegin](#classbasic__json_acdde2a6628e43b3e3f7f27c6af6998f8) () const
noexcept

<div class="DoxyCompactList">

*returns a const reverse iterator to the last element*

</div>

[const_reverse_iterator](#classbasic__json_a240f61567d8acffe831532f4f9b379cb)
[crend](#classbasic__json_aa52cc6cc0de1e81d9cc21f9c48feb588) () const
noexcept

<div class="DoxyCompactList">

*returns a const reverse iterator to one before the first*

</div>

iteration_proxy$<$
[iterator](#classbasic__json_ae206a491161d043f8efaa1330f1ccf97) $>$
[items](#classbasic__json_ac12884e86980aa85b6a9ffbb8b84de6a) () noexcept

<div class="DoxyCompactList">

*helper to access iterator member functions in range-based for*

</div>

iteration_proxy$<$
[const_iterator](#classbasic__json_a1f5af3d9d06d43b91fefe1767794b1e8)
$>$ [items](#classbasic__json_a3f2fdaf6048ea339c901b5208b93a64d) ()
const noexcept

<div class="DoxyCompactList">

*helper to access iterator member functions in range-based for*

</div>

</div>

<div class="DoxyCompactItemize">

static std::vector$<$ std::uint8_t $>$
[to_cbor](#classbasic__json_a7c47280dbbb39288384058b771f8eec6) (const
[basic_json](#classbasic__json) &j)

<div class="DoxyCompactList">

*create a CBOR serialization of a given JSON value*

</div>

static void
[to_cbor](#classbasic__json_a706ccab0e47bd75cd36911db84451cd1) (const
[basic_json](#classbasic__json) &j,
[detail::output_adapter](#classdetail_1_1output__adapter)$<$
std::uint8_t $>$ o)

<div class="DoxyCompactList">

*create a CBOR serialization of a given JSON value*

</div>

static void
[to_cbor](#classbasic__json_af31f5ee23264fb21bd31e16bc27adab2) (const
[basic_json](#classbasic__json) &j,
[detail::output_adapter](#classdetail_1_1output__adapter)$<$ char $>$ o)

<div class="DoxyCompactList">

*create a CBOR serialization of a given JSON value*

</div>

static std::vector$<$ std::uint8_t $>$
[to_msgpack](#classbasic__json_aea0ea0404f7ea72f66b0d5d0032b1367) (const
[basic_json](#classbasic__json) &j)

<div class="DoxyCompactList">

*create a MessagePack serialization of a given JSON value*

</div>

static void
[to_msgpack](#classbasic__json_af46fdac62559d4c38e623d99ad7064e9) (const
[basic_json](#classbasic__json) &j,
[detail::output_adapter](#classdetail_1_1output__adapter)$<$
std::uint8_t $>$ o)

<div class="DoxyCompactList">

*create a MessagePack serialization of a given JSON value*

</div>

static void
[to_msgpack](#classbasic__json_a51da13ff4e850d4ad1cf23ce4f3b9e4a) (const
[basic_json](#classbasic__json) &j,
[detail::output_adapter](#classdetail_1_1output__adapter)$<$ char $>$ o)

<div class="DoxyCompactList">

*create a MessagePack serialization of a given JSON value*

</div>

static std::vector$<$ std::uint8_t $>$
[to_ubjson](#classbasic__json_a906e81d488ebcac169960a1d48f6b065) (const
[basic_json](#classbasic__json) &j, const bool use_size=false, const
bool use_type=false)

<div class="DoxyCompactList">

*create a UBJSON serialization of a given JSON value*

</div>

static void
[to_ubjson](#classbasic__json_ada3d71f1dcfea24465d364b815d11445) (const
[basic_json](#classbasic__json) &j,
[detail::output_adapter](#classdetail_1_1output__adapter)$<$
std::uint8_t $>$ o, const bool use_size=false, const bool
use_type=false)

<div class="DoxyCompactList">

*create a UBJSON serialization of a given JSON value*

</div>

static void
[to_ubjson](#classbasic__json_ab8b6c6cc3ba1b49af628fe0ec8c73b77) (const
[basic_json](#classbasic__json) &j,
[detail::output_adapter](#classdetail_1_1output__adapter)$<$ char $>$ o,
const bool use_size=false, const bool use_type=false)

<div class="DoxyCompactList">

*create a UBJSON serialization of a given JSON value*

</div>

static std::vector$<$ std::uint8_t $>$
[to_bjdata](#classbasic__json_a0912e7738f47e604ac96fe8cdde1a96e) (const
[basic_json](#classbasic__json) &j, const bool use_size=false, const
bool use_type=false)

<div class="DoxyCompactList">

*create a BJData serialization of a given JSON value*

</div>

static void
[to_bjdata](#classbasic__json_a2736658c256401394059599f97139ee9) (const
[basic_json](#classbasic__json) &j,
[detail::output_adapter](#classdetail_1_1output__adapter)$<$
std::uint8_t $>$ o, const bool use_size=false, const bool
use_type=false)

<div class="DoxyCompactList">

*create a BJData serialization of a given JSON value*

</div>

static void
[to_bjdata](#classbasic__json_a1fa9828fcbe4e33c9a036834564f7dbd) (const
[basic_json](#classbasic__json) &j,
[detail::output_adapter](#classdetail_1_1output__adapter)$<$ char $>$ o,
const bool use_size=false, const bool use_type=false)

<div class="DoxyCompactList">

*create a BJData serialization of a given JSON value*

</div>

static std::vector$<$ std::uint8_t $>$
[to_bson](#classbasic__json_a4ea6478022ab79b47216fda4b53ae1d4) (const
[basic_json](#classbasic__json) &j)

<div class="DoxyCompactList">

*create a BSON serialization of a given JSON value*

</div>

static void
[to_bson](#classbasic__json_afd718b745034da1f4eea4c69f45cebda) (const
[basic_json](#classbasic__json) &j,
[detail::output_adapter](#classdetail_1_1output__adapter)$<$
std::uint8_t $>$ o)

<div class="DoxyCompactList">

*create a BSON serialization of a given JSON value*

</div>

static void
[to_bson](#classbasic__json_a71794547dde3dd67e444aa45131ca861) (const
[basic_json](#classbasic__json) &j,
[detail::output_adapter](#classdetail_1_1output__adapter)$<$ char $>$ o)

<div class="DoxyCompactList">

*create a BSON serialization of a given JSON value*

</div>

template$<$typename InputType $>$   
static JSON_HEDLEY_WARN_UNUSED_RESULT [basic_json](#classbasic__json)
[from_cbor](#classbasic__json_a5bc3c67eaf6e9b22c8b446f9695249e9)
(InputType &&i, const bool strict=true, const bool
allow_exceptions=true, const
[cbor_tag_handler_t](#namespacedetail_a7c070b2bf3d61e3d8b8013f6fb18d592)
tag_handler=cbor_tag_handler_t::error)

<div class="DoxyCompactList">

*create a JSON value from an input in CBOR format*

</div>

template$<$typename IteratorType $>$   
static JSON_HEDLEY_WARN_UNUSED_RESULT [basic_json](#classbasic__json)
[from_cbor](#classbasic__json_a08ab03513b96f5a864bf623aeb70f122)
(IteratorType first, IteratorType last, const bool strict=true, const
bool allow_exceptions=true, const
[cbor_tag_handler_t](#namespacedetail_a7c070b2bf3d61e3d8b8013f6fb18d592)
tag_handler=cbor_tag_handler_t::error)

<div class="DoxyCompactList">

*create a JSON value from an input in CBOR format*

</div>

<span id="classbasic__json_a89a8b31922ebb7a637e723ac7873fa4a"
label="classbasic__json_a89a8b31922ebb7a637e723ac7873fa4a"></span>
template$<$typename T $>$   
static JSON_HEDLEY_WARN_UNUSED_RESULT [basic_json](#classbasic__json)
**from_cbor** (const T $\ast$ptr, std::size_t len, const bool
strict=true, const bool allow_exceptions=true, const
[cbor_tag_handler_t](#namespacedetail_a7c070b2bf3d61e3d8b8013f6fb18d592)
tag_handler=cbor_tag_handler_t::error)

<span id="classbasic__json_a8680ff0784c185b6898839a98de88486"
label="classbasic__json_a8680ff0784c185b6898839a98de88486"></span>
static JSON_HEDLEY_WARN_UNUSED_RESULT [basic_json](#classbasic__json)
**from_cbor**
([detail::span_input_adapter](#classdetail_1_1span__input__adapter) &&i,
const bool strict=true, const bool allow_exceptions=true, const
[cbor_tag_handler_t](#namespacedetail_a7c070b2bf3d61e3d8b8013f6fb18d592)
tag_handler=cbor_tag_handler_t::error)

template$<$typename InputType $>$   
static JSON_HEDLEY_WARN_UNUSED_RESULT [basic_json](#classbasic__json)
[from_msgpack](#classbasic__json_ab0c025488572f913ca5529a2ef62d066)
(InputType &&i, const bool strict=true, const bool
allow_exceptions=true)

<div class="DoxyCompactList">

*create a JSON value from an input in MessagePack format*

</div>

template$<$typename IteratorType $>$   
static JSON_HEDLEY_WARN_UNUSED_RESULT [basic_json](#classbasic__json)
[from_msgpack](#classbasic__json_af7d84b161b2d93f9b2b3ac8d68afeb96)
(IteratorType first, IteratorType last, const bool strict=true, const
bool allow_exceptions=true)

<div class="DoxyCompactList">

*create a JSON value from an input in MessagePack format*

</div>

<span id="classbasic__json_a2a721efc291300b45ac410ab75b8478b"
label="classbasic__json_a2a721efc291300b45ac410ab75b8478b"></span>
template$<$typename T $>$   
static JSON_HEDLEY_WARN_UNUSED_RESULT [basic_json](#classbasic__json)
**from_msgpack** (const T $\ast$ptr, std::size_t len, const bool
strict=true, const bool allow_exceptions=true)

<span id="classbasic__json_ae8c5fdb783d4f97a9062ab41809ec0c6"
label="classbasic__json_ae8c5fdb783d4f97a9062ab41809ec0c6"></span>
static JSON_HEDLEY_WARN_UNUSED_RESULT [basic_json](#classbasic__json)
**from_msgpack**
([detail::span_input_adapter](#classdetail_1_1span__input__adapter) &&i,
const bool strict=true, const bool allow_exceptions=true)

template$<$typename InputType $>$   
static JSON_HEDLEY_WARN_UNUSED_RESULT [basic_json](#classbasic__json)
[from_ubjson](#classbasic__json_a4588941095d03624ada4f0023d93944a)
(InputType &&i, const bool strict=true, const bool
allow_exceptions=true)

<div class="DoxyCompactList">

*create a JSON value from an input in UBJSON format*

</div>

template$<$typename IteratorType $>$   
static JSON_HEDLEY_WARN_UNUSED_RESULT [basic_json](#classbasic__json)
[from_ubjson](#classbasic__json_a5dd7470a3be83b27cf162c0261e6b63d)
(IteratorType first, IteratorType last, const bool strict=true, const
bool allow_exceptions=true)

<div class="DoxyCompactList">

*create a JSON value from an input in UBJSON format*

</div>

<span id="classbasic__json_aa375318d8ef6052fd4d606d596d9c424"
label="classbasic__json_aa375318d8ef6052fd4d606d596d9c424"></span>
template$<$typename T $>$   
static JSON_HEDLEY_WARN_UNUSED_RESULT [basic_json](#classbasic__json)
**from_ubjson** (const T $\ast$ptr, std::size_t len, const bool
strict=true, const bool allow_exceptions=true)

<span id="classbasic__json_ad915ce03b8ec612764bb67d09e658a0d"
label="classbasic__json_ad915ce03b8ec612764bb67d09e658a0d"></span>
static JSON_HEDLEY_WARN_UNUSED_RESULT [basic_json](#classbasic__json)
**from_ubjson**
([detail::span_input_adapter](#classdetail_1_1span__input__adapter) &&i,
const bool strict=true, const bool allow_exceptions=true)

template$<$typename InputType $>$   
static JSON_HEDLEY_WARN_UNUSED_RESULT [basic_json](#classbasic__json)
[from_bjdata](#classbasic__json_a59327f708c0555e2928487bcddf71293)
(InputType &&i, const bool strict=true, const bool
allow_exceptions=true)

<div class="DoxyCompactList">

*create a JSON value from an input in BJData format*

</div>

template$<$typename IteratorType $>$   
static JSON_HEDLEY_WARN_UNUSED_RESULT [basic_json](#classbasic__json)
[from_bjdata](#classbasic__json_accf7ae6f9b2fee171484c5ef54f08d1e)
(IteratorType first, IteratorType last, const bool strict=true, const
bool allow_exceptions=true)

<div class="DoxyCompactList">

*create a JSON value from an input in BJData format*

</div>

template$<$typename InputType $>$   
static JSON_HEDLEY_WARN_UNUSED_RESULT [basic_json](#classbasic__json)
[from_bson](#classbasic__json_a4b0dfca88b11ea59a2568707767622d8)
(InputType &&i, const bool strict=true, const bool
allow_exceptions=true)

<div class="DoxyCompactList">

*create a JSON value from an input in BSON format*

</div>

template$<$typename IteratorType $>$   
static JSON_HEDLEY_WARN_UNUSED_RESULT [basic_json](#classbasic__json)
[from_bson](#classbasic__json_a2513159e8df9a81bf03ed34e1147b42e)
(IteratorType first, IteratorType last, const bool strict=true, const
bool allow_exceptions=true)

<div class="DoxyCompactList">

*create a JSON value from an input in BSON format*

</div>

<span id="classbasic__json_a7e33baaab9ab497f0fe6b797134c9524"
label="classbasic__json_a7e33baaab9ab497f0fe6b797134c9524"></span>
template$<$typename T $>$   
static JSON_HEDLEY_WARN_UNUSED_RESULT [basic_json](#classbasic__json)
**from_bson** (const T $\ast$ptr, std::size_t len, const bool
strict=true, const bool allow_exceptions=true)

<span id="classbasic__json_aed9761fba9571455a96309f7ba647757"
label="classbasic__json_aed9761fba9571455a96309f7ba647757"></span>
static JSON_HEDLEY_WARN_UNUSED_RESULT [basic_json](#classbasic__json)
**from_bson**
([detail::span_input_adapter](#classdetail_1_1span__input__adapter) &&i,
const bool strict=true, const bool allow_exceptions=true)

</div>

<div class="DoxyCompactItemize">

static JSON_HEDLEY_WARN_UNUSED_RESULT [basic_json](#classbasic__json)
[diff](#classbasic__json_a699ef418df577e75f28dfce6b04d6c2f) (const
[basic_json](#classbasic__json) &source, const
[basic_json](#classbasic__json) &target, const std::string &path="")

<div class="DoxyCompactList">

*creates a diff as a JSON patch*

</div>

void
[patch_inplace](#classbasic__json_a693812b31e106dec9166e93d8f6dd7d7)
(const [basic_json](#classbasic__json) &json_patch)

<div class="DoxyCompactList">

*applies a JSON patch in-place without copying the object*

</div>

[basic_json](#classbasic__json)
[patch](#classbasic__json_a145a004c0a2fa5be84b260ecc98ab5d9) (const
[basic_json](#classbasic__json) &json_patch) const

<div class="DoxyCompactList">

*applies a JSON patch to a copy of the current object*

</div>

</div>

Functions to inspect the type of a JSON value.

<div class="DoxyCompactItemize">

[string_t](#classbasic__json_ac8c9cde32146e6c343e1960aefc11fba)
[dump](#classbasic__json_a85df48caed9e341bb14d98ab88891d1e) (const int
indent=-1, const char indent_char= , const bool ensure_ascii=false,
const
[error_handler_t](#namespacedetail_abe7cfa1fd8fa706ff4392bff9d1a8298)
error_handler=error_handler_t::strict) const

<div class="DoxyCompactList">

*serialization*

</div>

constexpr [value_t](#namespacedetail_a917c3efabea8a20dc72d9ae2c673d632)
[type](#classbasic__json_ac5e52dbb3cb4e9fcabd1b88c37985aef) () const
noexcept

<div class="DoxyCompactList">

*return the type of the JSON value (explicit)*

</div>

constexpr bool
[is_primitive](#classbasic__json_ad650dd5a7e019b970abce3d8864b5654) ()
const noexcept

<div class="DoxyCompactList">

*return whether type is primitive*

</div>

constexpr bool
[is_structured](#classbasic__json_a2d3a5f8761bc6f163f4119bddaf7b092) ()
const noexcept

<div class="DoxyCompactList">

*return whether type is structured*

</div>

constexpr bool
[is_null](#classbasic__json_ad8789d0a365d5afaab61e7492908d8b2) () const
noexcept

<div class="DoxyCompactList">

*return whether value is null*

</div>

constexpr bool
[is_boolean](#classbasic__json_acfe2e3c359b545f8edbb72f6bd78718c) ()
const noexcept

<div class="DoxyCompactList">

*return whether value is a boolean*

</div>

constexpr bool
[is_number](#classbasic__json_aacf244be5088fb183f4ba21a66af9631) ()
const noexcept

<div class="DoxyCompactList">

*return whether value is a number*

</div>

constexpr bool
[is_number_integer](#classbasic__json_a2330e35cda16540058fef090abc709bf)
() const noexcept

<div class="DoxyCompactList">

*return whether value is an integer number*

</div>

constexpr bool
[is_number_unsigned](#classbasic__json_a4de72635745144ee519157d23fe7189a)
() const noexcept

<div class="DoxyCompactList">

*return whether value is an unsigned integer number*

</div>

constexpr bool
[is_number_float](#classbasic__json_a8d5bb82dfc8cceae1753b52a588eef92)
() const noexcept

<div class="DoxyCompactList">

*return whether value is a floating-point number*

</div>

constexpr bool
[is_object](#classbasic__json_af355a2b131068acf3d623eb6d80a711c) ()
const noexcept

<div class="DoxyCompactList">

*return whether value is an object*

</div>

constexpr bool
[is_array](#classbasic__json_a184ba4a6b47e6da3703af19349bd776f) () const
noexcept

<div class="DoxyCompactList">

*return whether value is an array*

</div>

constexpr bool
[is_string](#classbasic__json_a007ecebde9a7d40714e300ce0ff52908) ()
const noexcept

<div class="DoxyCompactList">

*return whether value is a string*

</div>

constexpr bool
[is_binary](#classbasic__json_abbdd993df08641faa3e24b5d2151e8f8) ()
const noexcept

<div class="DoxyCompactList">

*return whether value is a binary array*

</div>

constexpr bool
[is_discarded](#classbasic__json_a39e4946a414cc978b88939ed1b343d46) ()
const noexcept

<div class="DoxyCompactList">

*return whether value is discarded*

</div>

constexpr
[operator value_t](#classbasic__json_a70e1c8fbdb62f3f8bc04e69eef9cc9cf)
() const noexcept

<div class="DoxyCompactList">

*return the type of the JSON value (implicit)*

</div>

</div>

<div class="DoxyCompactItemize">

[iterator](#classbasic__json_ae206a491161d043f8efaa1330f1ccf97)
[find](#classbasic__json_a727e3cfb5a874314d8deb12cb53a8105) (const
typename object_t::key_type &key)

<div class="DoxyCompactList">

*find an element in a JSON object*

</div>

[const_iterator](#classbasic__json_a1f5af3d9d06d43b91fefe1767794b1e8)
[find](#classbasic__json_a7bf93ae61eb63a9e543cafb3f723900c) (const
typename object_t::key_type &key) const

<div class="DoxyCompactList">

*find an element in a JSON object*

</div>

template$<$class KeyType , detail::enable_if_t$<$
detail::is_usable_as_basic_json_key_type$<$ basic_json_t, KeyType
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef), int
$>$ = 0$>$   
[iterator](#classbasic__json_ae206a491161d043f8efaa1330f1ccf97)
[find](#classbasic__json_a89dd769ce700326266883ba96a98a8f2) (KeyType
&&key)

<div class="DoxyCompactList">

*find an element in a JSON object*

</div>

template$<$class KeyType , detail::enable_if_t$<$
detail::is_usable_as_basic_json_key_type$<$ basic_json_t, KeyType
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef), int
$>$ = 0$>$   
[const_iterator](#classbasic__json_a1f5af3d9d06d43b91fefe1767794b1e8)
[find](#classbasic__json_afe1bb257797042aef7142c91f35390d8) (KeyType
&&key) const

<div class="DoxyCompactList">

*find an element in a JSON object*

</div>

[size_type](#classbasic__json_a2c086af43cf06b1b7118f5351cab3ec9)
[count](#classbasic__json_ad1e1eff03a320299e6a8639a7579ca46) (const
typename object_t::key_type &key) const

<div class="DoxyCompactList">

*returns the number of occurrences of a key in a JSON object*

</div>

template$<$class KeyType , detail::enable_if_t$<$
detail::is_usable_as_basic_json_key_type$<$ basic_json_t, KeyType
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef), int
$>$ = 0$>$   
[size_type](#classbasic__json_a2c086af43cf06b1b7118f5351cab3ec9)
[count](#classbasic__json_a1ba1cd73d36a2cd58a9da7021b0f7317) (KeyType
&&key) const

<div class="DoxyCompactList">

*returns the number of occurrences of a key in a JSON object*

</div>

bool [contains](#classbasic__json_afd5ea67fe1a4778be5189423e2545d7a)
(const typename object_t::key_type &key) const

<div class="DoxyCompactList">

*check the existence of an element in a JSON object*

</div>

template$<$class KeyType , detail::enable_if_t$<$
detail::is_usable_as_basic_json_key_type$<$ basic_json_t, KeyType
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef), int
$>$ = 0$>$   
bool [contains](#classbasic__json_a7053bdd8e9ee2fcb0ca9c54ec85f1297)
(KeyType &&key) const

<div class="DoxyCompactList">

*check the existence of an element in a JSON object*

</div>

bool [contains](#classbasic__json_ac4c37affef3aa8c79cab9f3bfa2cb5e1)
(const
[json_pointer](#classbasic__json_afe66720a34c11920f359394a4430a16e)
&ptr) const

<div class="DoxyCompactList">

*check the existence of an element in a JSON object given a JSON
pointer*

</div>

<span id="classbasic__json_a90d85402530880892f708ce056cf9fa1"
label="classbasic__json_a90d85402530880892f708ce056cf9fa1"></span>
template$<$typename BasicJsonType , detail::enable_if_t$<$
[detail::is_basic_json](#structdetail_1_1is__basic__json)$<$
BasicJsonType
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef), int
$>$ = 0$>$   
bool **contains** (const typename ::nlohmann::json_pointer$<$
BasicJsonType $>$ &ptr) const

</div>

<div class="DoxyCompactItemize">

bool [empty](#classbasic__json_ac1e01c92bcf41fb7d857f72e5de7ca11) ()
const noexcept

<div class="DoxyCompactList">

*checks whether the container is empty.*

</div>

[size_type](#classbasic__json_a2c086af43cf06b1b7118f5351cab3ec9)
[size](#classbasic__json_a086cbfd1ad4ba83a8127c87467a92f47) () const
noexcept

<div class="DoxyCompactList">

*returns the number of elements*

</div>

[size_type](#classbasic__json_a2c086af43cf06b1b7118f5351cab3ec9)
[max_size](#classbasic__json_a380f98b02e7d50cf28af056a6ad8ffe6) () const
noexcept

<div class="DoxyCompactList">

*returns the maximum possible number of elements*

</div>

</div>

<div class="DoxyCompactItemize">

[reference](#classbasic__json_a6ca7bfb35987ce7cb8d27447cda5b80a)
[operator\[$\,$\]](#classbasic__json_a274307158c76b820701077dd471cc75b)
(const
[json_pointer](#classbasic__json_afe66720a34c11920f359394a4430a16e)
&ptr)

<div class="DoxyCompactList">

*access specified element via JSON Pointer*

</div>

<span id="classbasic__json_a1aae035a602172b9a7f35b9f83b908d3"
label="classbasic__json_a1aae035a602172b9a7f35b9f83b908d3"></span>
template$<$typename BasicJsonType , detail::enable_if_t$<$
[detail::is_basic_json](#structdetail_1_1is__basic__json)$<$
BasicJsonType
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef), int
$>$ = 0$>$   
[reference](#classbasic__json_a6ca7bfb35987ce7cb8d27447cda5b80a)
**operator\[$\,$\]** (const ::nlohmann::json_pointer$<$ BasicJsonType
$>$ &ptr)

[const_reference](#classbasic__json_a31370bb451b78198d42c86dd31955deb)
[operator\[$\,$\]](#classbasic__json_a6aedef6230f66b1271d71a6f77e7fed3)
(const
[json_pointer](#classbasic__json_afe66720a34c11920f359394a4430a16e)
&ptr) const

<div class="DoxyCompactList">

*access specified element via JSON Pointer*

</div>

<span id="classbasic__json_a4d87a097dc4c82b046d2ba13b256a355"
label="classbasic__json_a4d87a097dc4c82b046d2ba13b256a355"></span>
template$<$typename BasicJsonType , detail::enable_if_t$<$
[detail::is_basic_json](#structdetail_1_1is__basic__json)$<$
BasicJsonType
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef), int
$>$ = 0$>$   
[const_reference](#classbasic__json_a31370bb451b78198d42c86dd31955deb)
**operator\[$\,$\]** (const ::nlohmann::json_pointer$<$ BasicJsonType
$>$ &ptr) const

[reference](#classbasic__json_a6ca7bfb35987ce7cb8d27447cda5b80a)
[at](#classbasic__json_a91d1ad7e10a1c3aae885ddd992385612) (const
[json_pointer](#classbasic__json_afe66720a34c11920f359394a4430a16e)
&ptr)

<div class="DoxyCompactList">

*access specified element via JSON Pointer*

</div>

<span id="classbasic__json_af743fd1dc4ad2ca92d7a5e7f2b93d601"
label="classbasic__json_af743fd1dc4ad2ca92d7a5e7f2b93d601"></span>
template$<$typename BasicJsonType , detail::enable_if_t$<$
[detail::is_basic_json](#structdetail_1_1is__basic__json)$<$
BasicJsonType
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef), int
$>$ = 0$>$   
[reference](#classbasic__json_a6ca7bfb35987ce7cb8d27447cda5b80a) **at**
(const ::nlohmann::json_pointer$<$ BasicJsonType $>$ &ptr)

[const_reference](#classbasic__json_a31370bb451b78198d42c86dd31955deb)
[at](#classbasic__json_a5a3a35d456e3250640a90c6f7a7fd555) (const
[json_pointer](#classbasic__json_afe66720a34c11920f359394a4430a16e)
&ptr) const

<div class="DoxyCompactList">

*access specified element via JSON Pointer*

</div>

<span id="classbasic__json_a3e37c3b53deca782b81e5a1b45aa4182"
label="classbasic__json_a3e37c3b53deca782b81e5a1b45aa4182"></span>
template$<$typename BasicJsonType , detail::enable_if_t$<$
[detail::is_basic_json](#structdetail_1_1is__basic__json)$<$
BasicJsonType
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef), int
$>$ = 0$>$   
[const_reference](#classbasic__json_a31370bb451b78198d42c86dd31955deb)
**at** (const ::nlohmann::json_pointer$<$ BasicJsonType $>$ &ptr) const

[basic_json](#classbasic__json)
[flatten](#classbasic__json_a5cd6c211f030b109f7ef361250366bb0) () const

<div class="DoxyCompactList">

*return flattened JSON value*

</div>

[basic_json](#classbasic__json)
[unflatten](#classbasic__json_abdb57996898f80522e9abbb5e1e61e46) ()
const

<div class="DoxyCompactList">

*unflatten a previously flattened JSON value*

</div>

</div>

<div class="DoxyCompactItemize">

void [merge_patch](#classbasic__json_a8676ac2433fe299b8d420f00a0741395)
(const [basic_json](#classbasic__json) &apply_patch)

<div class="DoxyCompactList">

*applies a JSON Merge Patch*

</div>

</div>

### template$<$template$<$ typename U, typename V, typename... Args $>$ class ObjectType = std::map, template$<$ typename U, typename... Args $>$ class ArrayType = std::vector, class StringType = std::string, class BooleanType = bool, class NumberIntegerType = std::int64_t, class NumberUnsignedType = std::uint64_t, class NumberFloatType = double, template$<$ typename U $>$ class AllocatorType = std::allocator, template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer = adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class CustomBaseClass = void$>$ class basic_json$<$ ObjectType, ArrayType, StringType, BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType, AllocatorType, JSONSerializer, BinaryType, CustomBaseClass $>$

namespace for Niels Lohmann

a class to store JSON values

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/`](https://json.nlohmann.me/api/basic_json/)

[` https://github.com/nlohmann`](https://github.com/nlohmann)

</div>

<div class="DoxySince">

Since version 1..

</div>

a class to store JSON values

<div class="DoxySince">

Since version 1..

</div>

<span id="classbasic__json_a60644b7dccc409e6b367361d37841333"
label="classbasic__json_a60644b7dccc409e6b367361d37841333"></span>
template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
using [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::array_t =
ArrayType$<$[basic_json](#classbasic__json),
AllocatorType$<$[basic_json](#classbasic__json)$>$$>$

a type for an array

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/array_t/`](https://json.nlohmann.me/api/basic_json/array_t/)

</div>

<span id="classbasic__json_a4c1b5ea434b48cf31097617bb1c1ca1e"
label="classbasic__json_a4c1b5ea434b48cf31097617bb1c1ca1e"></span>
template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
using [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::binary_t =
nlohmann::byte_container_with_subtype$<$BinaryType$>$

a type for a packed binary type

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/binary_t/`](https://json.nlohmann.me/api/basic_json/binary_t/)

</div>

<span id="classbasic__json_a9301890c48e9b957edc07f9eb767bd10"
label="classbasic__json_a9301890c48e9b957edc07f9eb767bd10"></span>
template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
using [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::boolean_t = BooleanType

a type for a boolean

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/boolean_t/`](https://json.nlohmann.me/api/basic_json/boolean_t/)

</div>

<span id="classbasic__json_a991d005e7f648cbf37bb36daf85183ca"
label="classbasic__json_a991d005e7f648cbf37bb36daf85183ca"></span>
template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
using [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::default_object_comparator_t =
std::less$<$StringType$>$

default object key comparator type The actual object key comparator type
() may be different.

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/default_object_comparator_t/`](https://json.nlohmann.me/api/basic_json/default_object_comparator_t/)

</div>

<span id="classbasic__json_a80a229dbc84c1334171ce9c49c873c56"
label="classbasic__json_a80a229dbc84c1334171ce9c49c873c56"></span>
template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
using [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::number_float_t = NumberFloatType

a type for a number (floating-point)

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/number_float_t/`](https://json.nlohmann.me/api/basic_json/number_float_t/)

</div>

<span id="classbasic__json_aba48b0bdee31228a4e19b7c040b6d2a5"
label="classbasic__json_aba48b0bdee31228a4e19b7c040b6d2a5"></span>
template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
using [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::number_integer_t = NumberIntegerType

a type for a number (integer)

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/number_integer_t/`](https://json.nlohmann.me/api/basic_json/number_integer_t/)

</div>

<span id="classbasic__json_ae8505b599e706768a1e0bd6718cc7117"
label="classbasic__json_ae8505b599e706768a1e0bd6718cc7117"></span>
template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
using [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::number_unsigned_t = NumberUnsignedType

a type for a number (unsigned)

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/number_unsigned_t/`](https://json.nlohmann.me/api/basic_json/number_unsigned_t/)

</div>

<span id="classbasic__json_af12040e0663db54840d73d363979643a"
label="classbasic__json_af12040e0663db54840d73d363979643a"></span>
template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
using [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::object_comparator_t =
detail::actual_object_comparator_t$<$[basic_json](#classbasic__json)$>$

object key comparator type

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/object_comparator_t/`](https://json.nlohmann.me/api/basic_json/object_comparator_t/)

</div>

<span id="classbasic__json_a67bb0d6dfaf1709d918b7107f5b94a3d"
label="classbasic__json_a67bb0d6dfaf1709d918b7107f5b94a3d"></span>
template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
using [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::object_t

**Initial value:**

<div class="DoxyCode">

0

</div>

a type for an object

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/object_t/`](https://json.nlohmann.me/api/basic_json/object_t/)

</div>

<span id="classbasic__json_a53b6bf8ee18c48f4609c8bdd4bb95107"
label="classbasic__json_a53b6bf8ee18c48f4609c8bdd4bb95107"></span>
template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
using [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::parse_event_t =
[detail::parse_event_t](#namespacedetail_a47b1bb0bbd3596589ed9187059c312ef)

parser event types

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/parse_event_t/`](https://json.nlohmann.me/api/basic_json/parse_event_t/)

</div>

<span id="classbasic__json_a50644d655c9283aaf0e2a0f3a5428867"
label="classbasic__json_a50644d655c9283aaf0e2a0f3a5428867"></span>
template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
using [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::parser_callback_t =
detail::parser_callback_t$<$[basic_json](#classbasic__json)$>$

per-element parser callback type

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/parser_callback_t/`](https://json.nlohmann.me/api/basic_json/parser_callback_t/)

</div>

<span id="classbasic__json_ac8c9cde32146e6c343e1960aefc11fba"
label="classbasic__json_ac8c9cde32146e6c343e1960aefc11fba"></span>
template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
using [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::string_t = StringType

a type for a string

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/string_t/`](https://json.nlohmann.me/api/basic_json/string_t/)

</div>

<span id="classbasic__json_ae2d5bc42270881ed3e219e8b1456fec5"
label="classbasic__json_ae2d5bc42270881ed3e219e8b1456fec5"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
$>$[::basic_json](#classbasic__json) (

<div class="DoxyParamCaption">

v

</div>

)

create an empty value with a given type

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/basic_json/`](https://json.nlohmann.me/api/basic_json/basic_json/)

</div>

<span id="classbasic__json_a5b1fab9ded0a2a182837bd66c0e5189e"
label="classbasic__json_a5b1fab9ded0a2a182837bd66c0e5189e"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
$>$[::basic_json](#classbasic__json) (

<div class="DoxyParamCaption">

= nullptr

</div>

),

create a null object

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/basic_json/`](https://json.nlohmann.me/api/basic_json/basic_json/)

</div>

<span id="classbasic__json_a0f24e66b152203259eaf05c33ebaeed4"
label="classbasic__json_a0f24e66b152203259eaf05c33ebaeed4"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
template$<$typename CompatibleType , typename U =
detail::uncvref_t$<$CompatibleType$>$, detail::enable_if_t$<$
\![detail::is_basic_json](#structdetail_1_1is__basic__json)$<$ U
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef)
&&[detail::is_compatible_type](#structdetail_1_1is__compatible__type)$<$
basic_json_t, U
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef), int
$>$ = 0$>$  
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
$>$[::basic_json](#classbasic__json) (

<div class="DoxyParamCaption">

val

</div>

),

create a JSON value from compatible types

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/basic_json/`](https://json.nlohmann.me/api/basic_json/basic_json/)

</div>

<span id="classbasic__json_aeaf10402e79a1acce9a74f5a9654d403"
label="classbasic__json_aeaf10402e79a1acce9a74f5a9654d403"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
template$<$typename BasicJsonType , detail::enable_if_t$<$
[detail::is_basic_json](#structdetail_1_1is__basic__json)$<$
BasicJsonType
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef)
&&!std::is_same$<$ [basic_json](#classbasic__json), BasicJsonType
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef), int
$>$ = 0$>$  
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
$>$[::basic_json](#classbasic__json) (

<div class="DoxyParamCaption">

val

</div>

)

create a JSON value from an existing one

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/basic_json/`](https://json.nlohmann.me/api/basic_json/basic_json/)

</div>

<span id="classbasic__json_aa911d47d3c99184a301bf4fd304199b2"
label="classbasic__json_aa911d47d3c99184a301bf4fd304199b2"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
$>$[::basic_json](#classbasic__json) (

<div class="DoxyParamCaption">

init,

type_deduction = true,

manual_type = value_t::array

</div>

)

create a container (array or object) from an initializer list

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/basic_json/`](https://json.nlohmann.me/api/basic_json/basic_json/)

</div>

<span id="classbasic__json_a7b6f0605b09a002567fd18a289cef31b"
label="classbasic__json_a7b6f0605b09a002567fd18a289cef31b"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
$>$[::basic_json](#classbasic__json) (

<div class="DoxyParamCaption">

cnt,

val

</div>

)

construct an array with count copies of given value

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/basic_json/`](https://json.nlohmann.me/api/basic_json/basic_json/)

</div>

<span id="classbasic__json_af97b4fcd01509076c8a7b32ec1a10aec"
label="classbasic__json_af97b4fcd01509076c8a7b32ec1a10aec"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
template$<$class InputIT , typename std::enable_if$<$ std::is_same$<$
InputIT, typename basic_json_t::iterator
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef)$\vert$$\vert$std::is_same$<$
InputIT, typename basic_json_t::const_iterator
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef), int
$>$[::type](#classbasic__json_ac5e52dbb3cb4e9fcabd1b88c37985aef) =
0$>$  
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
$>$[::basic_json](#classbasic__json) (

<div class="DoxyParamCaption">

first,

last

</div>

)

construct a JSON container given an iterator range

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/basic_json/`](https://json.nlohmann.me/api/basic_json/basic_json/)

</div>

<span id="classbasic__json_af15244e1249b6e7282127d460b5b2e3e"
label="classbasic__json_af15244e1249b6e7282127d460b5b2e3e"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
$>$[::basic_json](#classbasic__json) (

<div class="DoxyParamCaption">

other

</div>

)

copy constructor

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/basic_json/`](https://json.nlohmann.me/api/basic_json/basic_json/)

</div>

<span id="classbasic__json_ae18629aae4bd76e6f7920cf4e7b4dd60"
label="classbasic__json_ae18629aae4bd76e6f7920cf4e7b4dd60"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
$>$[::basic_json](#classbasic__json) (

<div class="DoxyParamCaption">

other

</div>

),

move constructor

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/basic_json/`](https://json.nlohmann.me/api/basic_json/basic_json/)

</div>

<span id="classbasic__json_a9f3bcb6dc54f447ad95085715104494e"
label="classbasic__json_a9f3bcb6dc54f447ad95085715104494e"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
$>$::$\sim$[basic_json](#classbasic__json) (

<div class="DoxyParamCaption">

</div>

),

destructor

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/`$\sim$`basic_json/`](https://json.nlohmann.me/api/basic_json/~basic_json/)

</div>

<span id="classbasic__json_ac736994a792cb8460a30a3f4dd86fd78"
label="classbasic__json_ac736994a792cb8460a30a3f4dd86fd78"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
static JSON_HEDLEY_WARN_UNUSED_RESULT [basic_json](#classbasic__json)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass $>$::array (

<div class="DoxyParamCaption">

init = {}

</div>

),

explicitly create an array from an initializer list

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/array/`](https://json.nlohmann.me/api/basic_json/array/)

</div>

<span id="classbasic__json_a91d1ad7e10a1c3aae885ddd992385612"
label="classbasic__json_a91d1ad7e10a1c3aae885ddd992385612"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
[reference](#classbasic__json_a6ca7bfb35987ce7cb8d27447cda5b80a)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass $>$::at (

<div class="DoxyParamCaption">

ptr

</div>

)

access specified element via JSON Pointer

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/at/`](https://json.nlohmann.me/api/basic_json/at/)

</div>

<span id="classbasic__json_a5a3a35d456e3250640a90c6f7a7fd555"
label="classbasic__json_a5a3a35d456e3250640a90c6f7a7fd555"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
[const_reference](#classbasic__json_a31370bb451b78198d42c86dd31955deb)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass $>$::at (

<div class="DoxyParamCaption">

ptr

</div>

) const

access specified element via JSON Pointer

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/at/`](https://json.nlohmann.me/api/basic_json/at/)

</div>

<span id="classbasic__json_accafaaf23f60bb245ddb1fa0972b33a3"
label="classbasic__json_accafaaf23f60bb245ddb1fa0972b33a3"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
[reference](#classbasic__json_a6ca7bfb35987ce7cb8d27447cda5b80a)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass $>$::at (

<div class="DoxyParamCaption">

key

</div>

)

access specified object element with bounds checking

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/at/`](https://json.nlohmann.me/api/basic_json/at/)

</div>

<span id="classbasic__json_aba9a21714e81e98fc5786a2339ea1665"
label="classbasic__json_aba9a21714e81e98fc5786a2339ea1665"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
[const_reference](#classbasic__json_a31370bb451b78198d42c86dd31955deb)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass $>$::at (

<div class="DoxyParamCaption">

key

</div>

) const

access specified object element with bounds checking

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/at/`](https://json.nlohmann.me/api/basic_json/at/)

</div>

<span id="classbasic__json_a4cd9ba2f2164d9cee83b07f76d40843f"
label="classbasic__json_a4cd9ba2f2164d9cee83b07f76d40843f"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
template$<$class KeyType , detail::enable_if_t$<$
detail::is_usable_as_basic_json_key_type$<$ basic_json_t, KeyType
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef), int
$>$ = 0$>$  
[reference](#classbasic__json_a6ca7bfb35987ce7cb8d27447cda5b80a)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass $>$::at (

<div class="DoxyParamCaption">

key

</div>

)

access specified object element with bounds checking

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/at/`](https://json.nlohmann.me/api/basic_json/at/)

</div>

<span id="classbasic__json_a7ae6267ca4bd85e25f61dc5ba30204da"
label="classbasic__json_a7ae6267ca4bd85e25f61dc5ba30204da"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
template$<$class KeyType , detail::enable_if_t$<$
detail::is_usable_as_basic_json_key_type$<$ basic_json_t, KeyType
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef), int
$>$ = 0$>$  
[const_reference](#classbasic__json_a31370bb451b78198d42c86dd31955deb)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass $>$::at (

<div class="DoxyParamCaption">

key

</div>

) const

access specified object element with bounds checking

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/at/`](https://json.nlohmann.me/api/basic_json/at/)

</div>

<span id="classbasic__json_a899e4623fe377af5c9ad14c40c64280c"
label="classbasic__json_a899e4623fe377af5c9ad14c40c64280c"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
[reference](#classbasic__json_a6ca7bfb35987ce7cb8d27447cda5b80a)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass $>$::at (

<div class="DoxyParamCaption">

idx

</div>

)

access specified array element with bounds checking

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/at/`](https://json.nlohmann.me/api/basic_json/at/)

</div>

<span id="classbasic__json_af076d8a80f4263cf821da2033d5773b6"
label="classbasic__json_af076d8a80f4263cf821da2033d5773b6"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
[const_reference](#classbasic__json_a31370bb451b78198d42c86dd31955deb)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass $>$::at (

<div class="DoxyParamCaption">

idx

</div>

) const

access specified array element with bounds checking

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/at/`](https://json.nlohmann.me/api/basic_json/at/)

</div>

<span id="classbasic__json_a0d93dc1dbdf67a6ee3a5cf1d2439ca77"
label="classbasic__json_a0d93dc1dbdf67a6ee3a5cf1d2439ca77"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
[reference](#classbasic__json_a6ca7bfb35987ce7cb8d27447cda5b80a)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass $>$::back (

<div class="DoxyParamCaption">

</div>

)

access the last element

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/back/`](https://json.nlohmann.me/api/basic_json/back/)

</div>

<span id="classbasic__json_a41eee3066cd1ebfea746f9f07fd03f6f"
label="classbasic__json_a41eee3066cd1ebfea746f9f07fd03f6f"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
[const_reference](#classbasic__json_a31370bb451b78198d42c86dd31955deb)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass $>$::back (

<div class="DoxyParamCaption">

</div>

) const

access the last element

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/back/`](https://json.nlohmann.me/api/basic_json/back/)

</div>

<span id="classbasic__json_aac84462424ea7a14f9abb4ddb8e6dd7f"
label="classbasic__json_aac84462424ea7a14f9abb4ddb8e6dd7f"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
[const_iterator](#classbasic__json_a1f5af3d9d06d43b91fefe1767794b1e8)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass $>$::begin (

<div class="DoxyParamCaption">

</div>

) const,

returns an iterator to the first element

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/begin/`](https://json.nlohmann.me/api/basic_json/begin/)

</div>

<span id="classbasic__json_a5251a08382864af52c854fca1bdba61c"
label="classbasic__json_a5251a08382864af52c854fca1bdba61c"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
[iterator](#classbasic__json_ae206a491161d043f8efaa1330f1ccf97)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass $>$::begin (

<div class="DoxyParamCaption">

</div>

),

returns an iterator to the first element

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/begin/`](https://json.nlohmann.me/api/basic_json/begin/)

</div>

<span id="classbasic__json_a743ac3bcbc4b0f7897244d4cea387eee"
label="classbasic__json_a743ac3bcbc4b0f7897244d4cea387eee"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
static JSON_HEDLEY_WARN_UNUSED_RESULT [basic_json](#classbasic__json)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass $>$::binary (

<div class="DoxyParamCaption">

init

</div>

),

explicitly create a binary array (without subtype)

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/binary/`](https://json.nlohmann.me/api/basic_json/binary/)

</div>

<span id="classbasic__json_a45e65e73d9ecf780537d632372fa2c51"
label="classbasic__json_a45e65e73d9ecf780537d632372fa2c51"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
static JSON_HEDLEY_WARN_UNUSED_RESULT [basic_json](#classbasic__json)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass $>$::binary (

<div class="DoxyParamCaption">

init,

subtype

</div>

),

explicitly create a binary array (with subtype)

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/binary/`](https://json.nlohmann.me/api/basic_json/binary/)

</div>

<span id="classbasic__json_a5af2196a9acde33f742ef054e7c2109c"
label="classbasic__json_a5af2196a9acde33f742ef054e7c2109c"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
static JSON_HEDLEY_WARN_UNUSED_RESULT [basic_json](#classbasic__json)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass $>$::binary (

<div class="DoxyParamCaption">

init

</div>

),

explicitly create a binary array

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/binary/`](https://json.nlohmann.me/api/basic_json/binary/)

</div>

<span id="classbasic__json_ac00a2a38929ce21eae65f9dd09b03ce3"
label="classbasic__json_ac00a2a38929ce21eae65f9dd09b03ce3"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
static JSON_HEDLEY_WARN_UNUSED_RESULT [basic_json](#classbasic__json)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass $>$::binary (

<div class="DoxyParamCaption">

init,

subtype

</div>

),

explicitly create a binary array (with subtype)

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/binary/`](https://json.nlohmann.me/api/basic_json/binary/)

</div>

<span id="classbasic__json_a9ab2ece6530b3b2be5b876f80c68dc78"
label="classbasic__json_a9ab2ece6530b3b2be5b876f80c68dc78"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
[const_iterator](#classbasic__json_a1f5af3d9d06d43b91fefe1767794b1e8)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass $>$::cbegin (

<div class="DoxyParamCaption">

</div>

) const,

returns a const iterator to the first element

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/cbegin/`](https://json.nlohmann.me/api/basic_json/cbegin/)

</div>

<span id="classbasic__json_a57c63700f006c54624eb2433ec6526b0"
label="classbasic__json_a57c63700f006c54624eb2433ec6526b0"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
[const_iterator](#classbasic__json_a1f5af3d9d06d43b91fefe1767794b1e8)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass $>$::cend (

<div class="DoxyParamCaption">

</div>

) const,

returns an iterator to one past the last element

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/cend/`](https://json.nlohmann.me/api/basic_json/cend/)

</div>

<span id="classbasic__json_ad8cb21b66e4a4de652828345d51a8fc1"
label="classbasic__json_ad8cb21b66e4a4de652828345d51a8fc1"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
void [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::clear (

<div class="DoxyParamCaption">

</div>

),

clears the contents

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/clear/`](https://json.nlohmann.me/api/basic_json/clear/)

</div>

<span id="classbasic__json_ac4c37affef3aa8c79cab9f3bfa2cb5e1"
label="classbasic__json_ac4c37affef3aa8c79cab9f3bfa2cb5e1"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
bool [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::contains (

<div class="DoxyParamCaption">

ptr

</div>

) const

check the existence of an element in a JSON object given a JSON pointer

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/contains/`](https://json.nlohmann.me/api/basic_json/contains/)

</div>

<span id="classbasic__json_afd5ea67fe1a4778be5189423e2545d7a"
label="classbasic__json_afd5ea67fe1a4778be5189423e2545d7a"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
bool [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::contains (

<div class="DoxyParamCaption">

key

</div>

) const

check the existence of an element in a JSON object

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/contains/`](https://json.nlohmann.me/api/basic_json/contains/)

</div>

<span id="classbasic__json_a7053bdd8e9ee2fcb0ca9c54ec85f1297"
label="classbasic__json_a7053bdd8e9ee2fcb0ca9c54ec85f1297"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
template$<$class KeyType , detail::enable_if_t$<$
detail::is_usable_as_basic_json_key_type$<$ basic_json_t, KeyType
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef), int
$>$ = 0$>$  
bool [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::contains (

<div class="DoxyParamCaption">

key

</div>

) const

check the existence of an element in a JSON object

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/contains/`](https://json.nlohmann.me/api/basic_json/contains/)

</div>

<span id="classbasic__json_ad1e1eff03a320299e6a8639a7579ca46"
label="classbasic__json_ad1e1eff03a320299e6a8639a7579ca46"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
[size_type](#classbasic__json_a2c086af43cf06b1b7118f5351cab3ec9)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass $>$::count (

<div class="DoxyParamCaption">

key

</div>

) const

returns the number of occurrences of a key in a JSON object

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/count/`](https://json.nlohmann.me/api/basic_json/count/)

</div>

<span id="classbasic__json_a1ba1cd73d36a2cd58a9da7021b0f7317"
label="classbasic__json_a1ba1cd73d36a2cd58a9da7021b0f7317"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
template$<$class KeyType , detail::enable_if_t$<$
detail::is_usable_as_basic_json_key_type$<$ basic_json_t, KeyType
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef), int
$>$ = 0$>$  
[size_type](#classbasic__json_a2c086af43cf06b1b7118f5351cab3ec9)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass $>$::count (

<div class="DoxyParamCaption">

key

</div>

) const

returns the number of occurrences of a key in a JSON object

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/count/`](https://json.nlohmann.me/api/basic_json/count/)

</div>

<span id="classbasic__json_acdde2a6628e43b3e3f7f27c6af6998f8"
label="classbasic__json_acdde2a6628e43b3e3f7f27c6af6998f8"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
[const_reverse_iterator](#classbasic__json_a240f61567d8acffe831532f4f9b379cb)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass $>$::crbegin
(

<div class="DoxyParamCaption">

</div>

) const,

returns a const reverse iterator to the last element

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/crbegin/`](https://json.nlohmann.me/api/basic_json/crbegin/)

</div>

<span id="classbasic__json_aa52cc6cc0de1e81d9cc21f9c48feb588"
label="classbasic__json_aa52cc6cc0de1e81d9cc21f9c48feb588"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
[const_reverse_iterator](#classbasic__json_a240f61567d8acffe831532f4f9b379cb)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass $>$::crend (

<div class="DoxyParamCaption">

</div>

) const,

returns a const reverse iterator to one before the first

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/crend/`](https://json.nlohmann.me/api/basic_json/crend/)

</div>

<span id="classbasic__json_a699ef418df577e75f28dfce6b04d6c2f"
label="classbasic__json_a699ef418df577e75f28dfce6b04d6c2f"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
static JSON_HEDLEY_WARN_UNUSED_RESULT [basic_json](#classbasic__json)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass $>$::diff (

<div class="DoxyParamCaption">

source,

target,

path = ""

</div>

),

creates a diff as a JSON patch

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/diff/`](https://json.nlohmann.me/api/basic_json/diff/)

</div>

<span id="classbasic__json_a85df48caed9e341bb14d98ab88891d1e"
label="classbasic__json_a85df48caed9e341bb14d98ab88891d1e"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
[string_t](#classbasic__json_ac8c9cde32146e6c343e1960aefc11fba)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass $>$::dump (

<div class="DoxyParamCaption">

indent = -1,

indent_char =  ,

ensure_ascii = false,

error_handler = error_handler_t::strict

</div>

) const

serialization

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/dump/`](https://json.nlohmann.me/api/basic_json/dump/)

</div>

<span id="classbasic__json_af298488e59ff260d2ca950070cf19196"
label="classbasic__json_af298488e59ff260d2ca950070cf19196"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
template$<$class... Args$>$  
std::pair$<$
[iterator](#classbasic__json_ae206a491161d043f8efaa1330f1ccf97), bool
$>$ [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::emplace (

<div class="DoxyParamCaption">

args

</div>

)

add an object to an object if key does not exist

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/emplace/`](https://json.nlohmann.me/api/basic_json/emplace/)

</div>

<span id="classbasic__json_ac5f0a15957842b188826aea98a9cfd3d"
label="classbasic__json_ac5f0a15957842b188826aea98a9cfd3d"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
template$<$class... Args$>$  
[reference](#classbasic__json_a6ca7bfb35987ce7cb8d27447cda5b80a)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
$>$::emplace_back (

<div class="DoxyParamCaption">

args

</div>

)

add an object to an array

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/emplace_back/`](https://json.nlohmann.me/api/basic_json/emplace_back/)

</div>

<span id="classbasic__json_ac1e01c92bcf41fb7d857f72e5de7ca11"
label="classbasic__json_ac1e01c92bcf41fb7d857f72e5de7ca11"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
bool [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::empty (

<div class="DoxyParamCaption">

</div>

) const,

checks whether the container is empty.

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/empty/`](https://json.nlohmann.me/api/basic_json/empty/)

</div>

<span id="classbasic__json_a0c10232619bee4e73749dae621c01376"
label="classbasic__json_a0c10232619bee4e73749dae621c01376"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
[const_iterator](#classbasic__json_a1f5af3d9d06d43b91fefe1767794b1e8)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass $>$::end (

<div class="DoxyParamCaption">

</div>

) const,

returns an iterator to one past the last element

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/end/`](https://json.nlohmann.me/api/basic_json/end/)

</div>

<span id="classbasic__json_a4dbc83213b31a171aa8ba65ff00fa954"
label="classbasic__json_a4dbc83213b31a171aa8ba65ff00fa954"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
[iterator](#classbasic__json_ae206a491161d043f8efaa1330f1ccf97)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass $>$::end (

<div class="DoxyParamCaption">

</div>

),

returns an iterator to one past the last element

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/end/`](https://json.nlohmann.me/api/basic_json/end/)

</div>

<span id="classbasic__json_ac2c58b5f34c2ff56e27630214f5a9df4"
label="classbasic__json_ac2c58b5f34c2ff56e27630214f5a9df4"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
void [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::erase (

<div class="DoxyParamCaption">

idx

</div>

)

remove element from a JSON array given an index

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/erase/`](https://json.nlohmann.me/api/basic_json/erase/)

</div>

<span id="classbasic__json_a05da3b93f2d4a7164589abffaa9acb33"
label="classbasic__json_a05da3b93f2d4a7164589abffaa9acb33"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
[size_type](#classbasic__json_a2c086af43cf06b1b7118f5351cab3ec9)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass $>$::erase (

<div class="DoxyParamCaption">

key

</div>

)

remove element from a JSON object given a key

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/erase/`](https://json.nlohmann.me/api/basic_json/erase/)

</div>

<span id="classbasic__json_a437b81c6e968a4192a22bc0de6c4df80"
label="classbasic__json_a437b81c6e968a4192a22bc0de6c4df80"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
template$<$class IteratorType , detail::enable_if_t$<$ std::is_same$<$
IteratorType, typename basic_json_t::iterator
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef)$\vert$$\vert$std::is_same$<$
IteratorType, typename basic_json_t::const_iterator
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef), int
$>$ = 0$>$  
IteratorType [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::erase (

<div class="DoxyParamCaption">

first,

last

</div>

)

remove elements given an iterator range

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/erase/`](https://json.nlohmann.me/api/basic_json/erase/)

</div>

<span id="classbasic__json_a7d0fef086b1b72372113db6ce7446189"
label="classbasic__json_a7d0fef086b1b72372113db6ce7446189"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
template$<$class IteratorType , detail::enable_if_t$<$ std::is_same$<$
IteratorType, typename basic_json_t::iterator
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef)$\vert$$\vert$std::is_same$<$
IteratorType, typename basic_json_t::const_iterator
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef), int
$>$ = 0$>$  
IteratorType [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::erase (

<div class="DoxyParamCaption">

pos

</div>

)

remove element given an iterator

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/erase/`](https://json.nlohmann.me/api/basic_json/erase/)

</div>

<span id="classbasic__json_a5f763336e84232f38e2d80e142f9820e"
label="classbasic__json_a5f763336e84232f38e2d80e142f9820e"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
template$<$class KeyType , detail::enable_if_t$<$
detail::is_usable_as_basic_json_key_type$<$ basic_json_t, KeyType
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef), int
$>$ = 0$>$  
[size_type](#classbasic__json_a2c086af43cf06b1b7118f5351cab3ec9)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass $>$::erase (

<div class="DoxyParamCaption">

key

</div>

)

remove element from a JSON object given a key

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/erase/`](https://json.nlohmann.me/api/basic_json/erase/)

</div>

<span id="classbasic__json_a727e3cfb5a874314d8deb12cb53a8105"
label="classbasic__json_a727e3cfb5a874314d8deb12cb53a8105"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
[iterator](#classbasic__json_ae206a491161d043f8efaa1330f1ccf97)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass $>$::find (

<div class="DoxyParamCaption">

key

</div>

)

find an element in a JSON object

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/find/`](https://json.nlohmann.me/api/basic_json/find/)

</div>

<span id="classbasic__json_a7bf93ae61eb63a9e543cafb3f723900c"
label="classbasic__json_a7bf93ae61eb63a9e543cafb3f723900c"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
[const_iterator](#classbasic__json_a1f5af3d9d06d43b91fefe1767794b1e8)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass $>$::find (

<div class="DoxyParamCaption">

key

</div>

) const

find an element in a JSON object

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/find/`](https://json.nlohmann.me/api/basic_json/find/)

</div>

<span id="classbasic__json_a89dd769ce700326266883ba96a98a8f2"
label="classbasic__json_a89dd769ce700326266883ba96a98a8f2"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
template$<$class KeyType , detail::enable_if_t$<$
detail::is_usable_as_basic_json_key_type$<$ basic_json_t, KeyType
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef), int
$>$ = 0$>$  
[iterator](#classbasic__json_ae206a491161d043f8efaa1330f1ccf97)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass $>$::find (

<div class="DoxyParamCaption">

key

</div>

)

find an element in a JSON object

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/find/`](https://json.nlohmann.me/api/basic_json/find/)

</div>

<span id="classbasic__json_afe1bb257797042aef7142c91f35390d8"
label="classbasic__json_afe1bb257797042aef7142c91f35390d8"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
template$<$class KeyType , detail::enable_if_t$<$
detail::is_usable_as_basic_json_key_type$<$ basic_json_t, KeyType
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef), int
$>$ = 0$>$  
[const_iterator](#classbasic__json_a1f5af3d9d06d43b91fefe1767794b1e8)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass $>$::find (

<div class="DoxyParamCaption">

key

</div>

) const

find an element in a JSON object

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/find/`](https://json.nlohmann.me/api/basic_json/find/)

</div>

<span id="classbasic__json_a5cd6c211f030b109f7ef361250366bb0"
label="classbasic__json_a5cd6c211f030b109f7ef361250366bb0"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
[basic_json](#classbasic__json) [basic_json](#classbasic__json)$<$
ObjectType, ArrayType, StringType, BooleanType, NumberIntegerType,
NumberUnsignedType, NumberFloatType, AllocatorType, JSONSerializer,
BinaryType, CustomBaseClass $>$::flatten (

<div class="DoxyParamCaption">

</div>

) const

return flattened JSON value

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/flatten/`](https://json.nlohmann.me/api/basic_json/flatten/)

</div>

<span id="classbasic__json_a59327f708c0555e2928487bcddf71293"
label="classbasic__json_a59327f708c0555e2928487bcddf71293"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
template$<$typename InputType $>$  
static JSON_HEDLEY_WARN_UNUSED_RESULT [basic_json](#classbasic__json)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
$>$::from_bjdata (

<div class="DoxyParamCaption">

i,

strict = true,

allow_exceptions = true

</div>

),

create a JSON value from an input in BJData format

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/from_bjdata/`](https://json.nlohmann.me/api/basic_json/from_bjdata/)

</div>

<span id="classbasic__json_accf7ae6f9b2fee171484c5ef54f08d1e"
label="classbasic__json_accf7ae6f9b2fee171484c5ef54f08d1e"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
template$<$typename IteratorType $>$  
static JSON_HEDLEY_WARN_UNUSED_RESULT [basic_json](#classbasic__json)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
$>$::from_bjdata (

<div class="DoxyParamCaption">

first,

last,

strict = true,

allow_exceptions = true

</div>

),

create a JSON value from an input in BJData format

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/from_bjdata/`](https://json.nlohmann.me/api/basic_json/from_bjdata/)

</div>

<span id="classbasic__json_a4b0dfca88b11ea59a2568707767622d8"
label="classbasic__json_a4b0dfca88b11ea59a2568707767622d8"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
template$<$typename InputType $>$  
static JSON_HEDLEY_WARN_UNUSED_RESULT [basic_json](#classbasic__json)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
$>$::from_bson (

<div class="DoxyParamCaption">

i,

strict = true,

allow_exceptions = true

</div>

),

create a JSON value from an input in BSON format

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/from_bson/`](https://json.nlohmann.me/api/basic_json/from_bson/)

</div>

<span id="classbasic__json_a2513159e8df9a81bf03ed34e1147b42e"
label="classbasic__json_a2513159e8df9a81bf03ed34e1147b42e"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
template$<$typename IteratorType $>$  
static JSON_HEDLEY_WARN_UNUSED_RESULT [basic_json](#classbasic__json)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
$>$::from_bson (

<div class="DoxyParamCaption">

first,

last,

strict = true,

allow_exceptions = true

</div>

),

create a JSON value from an input in BSON format

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/from_bson/`](https://json.nlohmann.me/api/basic_json/from_bson/)

</div>

<span id="classbasic__json_a5bc3c67eaf6e9b22c8b446f9695249e9"
label="classbasic__json_a5bc3c67eaf6e9b22c8b446f9695249e9"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
template$<$typename InputType $>$  
static JSON_HEDLEY_WARN_UNUSED_RESULT [basic_json](#classbasic__json)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
$>$::from_cbor (

<div class="DoxyParamCaption">

i,

strict = true,

allow_exceptions = true,

tag_handler = cbor_tag_handler_t::error

</div>

),

create a JSON value from an input in CBOR format

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/from_cbor/`](https://json.nlohmann.me/api/basic_json/from_cbor/)

</div>

<span id="classbasic__json_a08ab03513b96f5a864bf623aeb70f122"
label="classbasic__json_a08ab03513b96f5a864bf623aeb70f122"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
template$<$typename IteratorType $>$  
static JSON_HEDLEY_WARN_UNUSED_RESULT [basic_json](#classbasic__json)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
$>$::from_cbor (

<div class="DoxyParamCaption">

first,

last,

strict = true,

allow_exceptions = true,

tag_handler = cbor_tag_handler_t::error

</div>

),

create a JSON value from an input in CBOR format

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/from_cbor/`](https://json.nlohmann.me/api/basic_json/from_cbor/)

</div>

<span id="classbasic__json_ab0c025488572f913ca5529a2ef62d066"
label="classbasic__json_ab0c025488572f913ca5529a2ef62d066"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
template$<$typename InputType $>$  
static JSON_HEDLEY_WARN_UNUSED_RESULT [basic_json](#classbasic__json)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
$>$::from_msgpack (

<div class="DoxyParamCaption">

i,

strict = true,

allow_exceptions = true

</div>

),

create a JSON value from an input in MessagePack format

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/from_msgpack/`](https://json.nlohmann.me/api/basic_json/from_msgpack/)

</div>

<span id="classbasic__json_af7d84b161b2d93f9b2b3ac8d68afeb96"
label="classbasic__json_af7d84b161b2d93f9b2b3ac8d68afeb96"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
template$<$typename IteratorType $>$  
static JSON_HEDLEY_WARN_UNUSED_RESULT [basic_json](#classbasic__json)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
$>$::from_msgpack (

<div class="DoxyParamCaption">

first,

last,

strict = true,

allow_exceptions = true

</div>

),

create a JSON value from an input in MessagePack format

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/from_msgpack/`](https://json.nlohmann.me/api/basic_json/from_msgpack/)

</div>

<span id="classbasic__json_a4588941095d03624ada4f0023d93944a"
label="classbasic__json_a4588941095d03624ada4f0023d93944a"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
template$<$typename InputType $>$  
static JSON_HEDLEY_WARN_UNUSED_RESULT [basic_json](#classbasic__json)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
$>$::from_ubjson (

<div class="DoxyParamCaption">

i,

strict = true,

allow_exceptions = true

</div>

),

create a JSON value from an input in UBJSON format

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/from_ubjson/`](https://json.nlohmann.me/api/basic_json/from_ubjson/)

</div>

<span id="classbasic__json_a5dd7470a3be83b27cf162c0261e6b63d"
label="classbasic__json_a5dd7470a3be83b27cf162c0261e6b63d"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
template$<$typename IteratorType $>$  
static JSON_HEDLEY_WARN_UNUSED_RESULT [basic_json](#classbasic__json)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
$>$::from_ubjson (

<div class="DoxyParamCaption">

first,

last,

strict = true,

allow_exceptions = true

</div>

),

create a JSON value from an input in UBJSON format

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/from_ubjson/`](https://json.nlohmann.me/api/basic_json/from_ubjson/)

</div>

<span id="classbasic__json_ad4dd162b4990cfb69925193797415f7e"
label="classbasic__json_ad4dd162b4990cfb69925193797415f7e"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
[reference](#classbasic__json_a6ca7bfb35987ce7cb8d27447cda5b80a)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass $>$::front (

<div class="DoxyParamCaption">

</div>

)

access the first element

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/front/`](https://json.nlohmann.me/api/basic_json/front/)

</div>

<span id="classbasic__json_a162089e94f24182ba3e4484be63c0c1a"
label="classbasic__json_a162089e94f24182ba3e4484be63c0c1a"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
[const_reference](#classbasic__json_a31370bb451b78198d42c86dd31955deb)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass $>$::front (

<div class="DoxyParamCaption">

</div>

) const

access the first element

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/front/`](https://json.nlohmann.me/api/basic_json/front/)

</div>

<span id="classbasic__json_a0ab31c7fdbab38898070bca01637f886"
label="classbasic__json_a0ab31c7fdbab38898070bca01637f886"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
template$<$typename ValueTypeCV , typename ValueType =
detail::uncvref_t$<$ValueTypeCV$>$$>$  
auto [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::get (

<div class="DoxyParamCaption">

</div>

) const -$>$ decltype(std::declval$<$const basic_json_t&$>$().template
get_impl$<$ValueType$>$([detail::priority_tag](#structdetail_1_1priority__tag)$<$<!-- -->4$>$
{})) ,

get a (pointer) value (explicit)

Performs explicit type conversion between the JSON value and a
compatible value if required.

<div class="DoxyItemize">

If the requested type is a pointer to the internally stored JSON value
that pointer is returned. No copies are made.

If the requested type is the current , or a different convertible from
the current .

Otherwise the value is converted by calling the
json_serializer$<$ValueType$>$ from_json() method.

</div>

<div class="DoxyTemplParams">

Template Parameters *ValueTypeCV* & the provided value type  
*ValueType* & the returned value type  

</div>

<div class="DoxyReturn">

Returns copy of the JSON value, converted to

</div>

<div class="DoxyTemplParams">

Template Parameters *ValueType* & if necessary  

</div>

<div class="DoxyExceptions">

Exceptions *what* & json_serializer$<$ValueType$>$ from_json() method
throws if conversion is required  

</div>

<div class="DoxySince">

Since version 2..

</div>

<span id="classbasic__json_ab11f66d4edc50a209fab3f8c48664a53"
label="classbasic__json_ab11f66d4edc50a209fab3f8c48664a53"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
template$<$typename PointerType , typename std::enable_if$<$
std::is_pointer$<$ PointerType
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef), int
$>$[::type](#classbasic__json_ac5e52dbb3cb4e9fcabd1b88c37985aef) =
0$>$  
auto [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::get (

<div class="DoxyParamCaption">

</div>

) -$>$ decltype(std::declval$<$basic_json_t&$>$().template
[get_ptr](#classbasic__json_aba60354728e2f7f64e3e5c6b02c5b820)$<$PointerType$>$())
,

get a pointer value (explicit)

Explicit pointer access to the internally stored JSON value. No copies
are made.

<div class="DoxyWarning">

Warning The pointer becomes invalid if the underlying JSON object
changes.

</div>

<div class="DoxyTemplParams">

Template Parameters *PointerType* & pointer type; must be a pointer to ,
, , , , , or .  

</div>

<div class="DoxyReturn">

Returns pointer to the internally stored JSON value if the requested
pointer type *PointerType* fits to the JSON value; nullptr otherwise

</div>

@complexity Constant.

@liveexample{The example below shows how pointers to internal values of
a JSON value can be requested. Note that no type conversions are made
and a nullptr is returned if the value and the requested pointer type
does not match.,get\_\_PointerType}

<div class="DoxySeeAlso">

See also see for explicit pointer-member access

</div>

<div class="DoxySince">

Since version 1..

</div>

<span id="classbasic__json_a4bceecf563151eb58af179416d8e6299"
label="classbasic__json_a4bceecf563151eb58af179416d8e6299"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
static
[allocator_type](#classbasic__json_a83f845db2d54cedad97279bad70aea52)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
$>$::get_allocator (

<div class="DoxyParamCaption">

</div>

),

returns the allocator associated with the container

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/get_allocator/`](https://json.nlohmann.me/api/basic_json/get_allocator/)

</div>

<span id="classbasic__json_aaa2432a7c01833b02c6330709211ede7"
label="classbasic__json_aaa2432a7c01833b02c6330709211ede7"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
[binary_t](#classbasic__json_a4c1b5ea434b48cf31097617bb1c1ca1e) &
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
$>$::get_binary (

<div class="DoxyParamCaption">

</div>

)

get a binary value

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/get_binary/`](https://json.nlohmann.me/api/basic_json/get_binary/)

</div>

<span id="classbasic__json_a67d6da9fb8325a87d9513f960d88512a"
label="classbasic__json_a67d6da9fb8325a87d9513f960d88512a"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
const [binary_t](#classbasic__json_a4c1b5ea434b48cf31097617bb1c1ca1e) &
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
$>$::get_binary (

<div class="DoxyParamCaption">

</div>

) const

get a binary value

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/get_binary/`](https://json.nlohmann.me/api/basic_json/get_binary/)

</div>

<span id="classbasic__json_a9db8d5e59277a70a736f899c4aec0af0"
label="classbasic__json_a9db8d5e59277a70a736f899c4aec0af0"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
template$<$typename PointerType , typename std::enable_if$<$
std::is_pointer$<$ PointerType
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef)
&&std::is_const$<$ typename std::remove_pointer$<$ PointerType
$>$[::type](#classbasic__json_ac5e52dbb3cb4e9fcabd1b88c37985aef)
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef), int
$>$[::type](#classbasic__json_ac5e52dbb3cb4e9fcabd1b88c37985aef) =
0$>$  
constexpr auto [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::get_ptr (

<div class="DoxyParamCaption">

</div>

) const -$>$ decltype(std::declval$<$const
basic_json_t&$>$().get_impl_ptr(std::declval$<$PointerType$>$())) , ,

get a pointer value (implicit)

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/get_ptr/`](https://json.nlohmann.me/api/basic_json/get_ptr/)

</div>

<span id="classbasic__json_aba60354728e2f7f64e3e5c6b02c5b820"
label="classbasic__json_aba60354728e2f7f64e3e5c6b02c5b820"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
template$<$typename PointerType , typename std::enable_if$<$
std::is_pointer$<$ PointerType
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef), int
$>$[::type](#classbasic__json_ac5e52dbb3cb4e9fcabd1b88c37985aef) =
0$>$  
auto [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::get_ptr (

<div class="DoxyParamCaption">

</div>

) -$>$
decltype(std::declval$<$basic_json_t&$>$().get_impl_ptr(std::declval$<$PointerType$>$()))
,

get a pointer value (implicit)

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/get_ptr/`](https://json.nlohmann.me/api/basic_json/get_ptr/)

</div>

<span id="classbasic__json_a3697078e748abc4a99c23e36e321b439"
label="classbasic__json_a3697078e748abc4a99c23e36e321b439"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
template$<$typename ReferenceType , typename std::enable_if$<$
std::is_reference$<$ ReferenceType
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef), int
$>$[::type](#classbasic__json_ac5e52dbb3cb4e9fcabd1b88c37985aef) =
0$>$  
ReferenceType [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::get_ref (

<div class="DoxyParamCaption">

</div>

)

get a reference value (implicit)

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/get_ref/`](https://json.nlohmann.me/api/basic_json/get_ref/)

</div>

<span id="classbasic__json_a39c5dbafcc6eef79143c251096827549"
label="classbasic__json_a39c5dbafcc6eef79143c251096827549"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
template$<$typename ReferenceType , typename std::enable_if$<$
std::is_reference$<$ ReferenceType
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef)
&&std::is_const$<$ typename std::remove_reference$<$ ReferenceType
$>$[::type](#classbasic__json_ac5e52dbb3cb4e9fcabd1b88c37985aef)
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef), int
$>$[::type](#classbasic__json_ac5e52dbb3cb4e9fcabd1b88c37985aef) =
0$>$  
ReferenceType [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::get_ref (

<div class="DoxyParamCaption">

</div>

) const

get a reference value (implicit)

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/get_ref/`](https://json.nlohmann.me/api/basic_json/get_ref/)

</div>

<span id="classbasic__json_a8773ee34154b4f492549f5496c640ce5"
label="classbasic__json_a8773ee34154b4f492549f5496c640ce5"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
template$<$typename ValueType , detail::enable_if_t$<$
\![detail::is_basic_json](#structdetail_1_1is__basic__json)$<$ ValueType
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef)
&&[detail::has_from_json](#structdetail_1_1has__from__json)$<$
basic_json_t, ValueType
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef), int
$>$ = 0$>$  
ValueType & [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::get_to (

<div class="DoxyParamCaption">

v

</div>

) const,

get a value (explicit)

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/get_to/`](https://json.nlohmann.me/api/basic_json/get_to/)

</div>

<span id="classbasic__json_aaf55c485c75ddd7bd5f9791e59d3aec7"
label="classbasic__json_aaf55c485c75ddd7bd5f9791e59d3aec7"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
void [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::insert (

<div class="DoxyParamCaption">

first,

last

</div>

)

inserts range of elements into object

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/insert/`](https://json.nlohmann.me/api/basic_json/insert/)

</div>

<span id="classbasic__json_ae5da62116a40a0f86e87f11fdd54e9f0"
label="classbasic__json_ae5da62116a40a0f86e87f11fdd54e9f0"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
[iterator](#classbasic__json_ae206a491161d043f8efaa1330f1ccf97)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass $>$::insert (

<div class="DoxyParamCaption">

pos,

val

</div>

)

inserts element into array

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/insert/`](https://json.nlohmann.me/api/basic_json/insert/)

</div>

<span id="classbasic__json_a7f3817060c2bec896a99cb2c236b9c27"
label="classbasic__json_a7f3817060c2bec896a99cb2c236b9c27"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
[iterator](#classbasic__json_ae206a491161d043f8efaa1330f1ccf97)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass $>$::insert (

<div class="DoxyParamCaption">

pos,

val

</div>

)

inserts element into array

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/insert/`](https://json.nlohmann.me/api/basic_json/insert/)

</div>

<span id="classbasic__json_a68e1707248a00a2608a304da5ae5c911"
label="classbasic__json_a68e1707248a00a2608a304da5ae5c911"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
[iterator](#classbasic__json_ae206a491161d043f8efaa1330f1ccf97)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass $>$::insert (

<div class="DoxyParamCaption">

pos,

first,

last

</div>

)

inserts range of elements into array

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/insert/`](https://json.nlohmann.me/api/basic_json/insert/)

</div>

<span id="classbasic__json_abdfee6a3db80431a24c68bfaf038c47d"
label="classbasic__json_abdfee6a3db80431a24c68bfaf038c47d"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
[iterator](#classbasic__json_ae206a491161d043f8efaa1330f1ccf97)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass $>$::insert (

<div class="DoxyParamCaption">

pos,

ilist

</div>

)

inserts elements from initializer list into array

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/insert/`](https://json.nlohmann.me/api/basic_json/insert/)

</div>

<span id="classbasic__json_a47b623200562da188886a385c716d101"
label="classbasic__json_a47b623200562da188886a385c716d101"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
[iterator](#classbasic__json_ae206a491161d043f8efaa1330f1ccf97)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass $>$::insert (

<div class="DoxyParamCaption">

pos,

cnt,

val

</div>

)

inserts copies of element into array

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/insert/`](https://json.nlohmann.me/api/basic_json/insert/)

</div>

<span id="classbasic__json_af8c5ca19d22a32054452470669c43bb9"
label="classbasic__json_af8c5ca19d22a32054452470669c43bb9"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
template$<$typename... Args$>$  
[iterator](#classbasic__json_ae206a491161d043f8efaa1330f1ccf97)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
$>$::insert_iterator (

<div class="DoxyParamCaption">

pos,

args

</div>

)

Helper for insertion of an iterator

<div class="DoxyNote">

Note : This uses std::distance to support GCC 4., see
[` https://github.com/nlohmann/json/pull/1257`](https://github.com/nlohmann/json/pull/1257)

</div>

<span id="classbasic__json_a184ba4a6b47e6da3703af19349bd776f"
label="classbasic__json_a184ba4a6b47e6da3703af19349bd776f"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
constexpr bool [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::is_array (

<div class="DoxyParamCaption">

</div>

) const, ,

return whether value is an array

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/is_array/`](https://json.nlohmann.me/api/basic_json/is_array/)

</div>

<span id="classbasic__json_abbdd993df08641faa3e24b5d2151e8f8"
label="classbasic__json_abbdd993df08641faa3e24b5d2151e8f8"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
constexpr bool [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::is_binary (

<div class="DoxyParamCaption">

</div>

) const, ,

return whether value is a binary array

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/is_binary/`](https://json.nlohmann.me/api/basic_json/is_binary/)

</div>

<span id="classbasic__json_acfe2e3c359b545f8edbb72f6bd78718c"
label="classbasic__json_acfe2e3c359b545f8edbb72f6bd78718c"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
constexpr bool [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::is_boolean (

<div class="DoxyParamCaption">

</div>

) const, ,

return whether value is a boolean

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/is_boolean/`](https://json.nlohmann.me/api/basic_json/is_boolean/)

</div>

<span id="classbasic__json_a39e4946a414cc978b88939ed1b343d46"
label="classbasic__json_a39e4946a414cc978b88939ed1b343d46"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
constexpr bool [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::is_discarded (

<div class="DoxyParamCaption">

</div>

) const, ,

return whether value is discarded

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/is_discarded/`](https://json.nlohmann.me/api/basic_json/is_discarded/)

</div>

<span id="classbasic__json_ad8789d0a365d5afaab61e7492908d8b2"
label="classbasic__json_ad8789d0a365d5afaab61e7492908d8b2"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
constexpr bool [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::is_null (

<div class="DoxyParamCaption">

</div>

) const, ,

return whether value is null

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/is_null/`](https://json.nlohmann.me/api/basic_json/is_null/)

</div>

<span id="classbasic__json_aacf244be5088fb183f4ba21a66af9631"
label="classbasic__json_aacf244be5088fb183f4ba21a66af9631"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
constexpr bool [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::is_number (

<div class="DoxyParamCaption">

</div>

) const, ,

return whether value is a number

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/is_number/`](https://json.nlohmann.me/api/basic_json/is_number/)

</div>

<span id="classbasic__json_a8d5bb82dfc8cceae1753b52a588eef92"
label="classbasic__json_a8d5bb82dfc8cceae1753b52a588eef92"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
constexpr bool [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::is_number_float (

<div class="DoxyParamCaption">

</div>

) const, ,

return whether value is a floating-point number

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/is_number_float/`](https://json.nlohmann.me/api/basic_json/is_number_float/)

</div>

<span id="classbasic__json_a2330e35cda16540058fef090abc709bf"
label="classbasic__json_a2330e35cda16540058fef090abc709bf"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
constexpr bool [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::is_number_integer (

<div class="DoxyParamCaption">

</div>

) const, ,

return whether value is an integer number

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/is_number_integer/`](https://json.nlohmann.me/api/basic_json/is_number_integer/)

</div>

<span id="classbasic__json_a4de72635745144ee519157d23fe7189a"
label="classbasic__json_a4de72635745144ee519157d23fe7189a"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
constexpr bool [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::is_number_unsigned (

<div class="DoxyParamCaption">

</div>

) const, ,

return whether value is an unsigned integer number

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/is_number_unsigned/`](https://json.nlohmann.me/api/basic_json/is_number_unsigned/)

</div>

<span id="classbasic__json_af355a2b131068acf3d623eb6d80a711c"
label="classbasic__json_af355a2b131068acf3d623eb6d80a711c"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
constexpr bool [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::is_object (

<div class="DoxyParamCaption">

</div>

) const, ,

return whether value is an object

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/is_object/`](https://json.nlohmann.me/api/basic_json/is_object/)

</div>

<span id="classbasic__json_ad650dd5a7e019b970abce3d8864b5654"
label="classbasic__json_ad650dd5a7e019b970abce3d8864b5654"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
constexpr bool [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::is_primitive (

<div class="DoxyParamCaption">

</div>

) const, ,

return whether type is primitive

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/is_primitive/`](https://json.nlohmann.me/api/basic_json/is_primitive/)

</div>

<span id="classbasic__json_a007ecebde9a7d40714e300ce0ff52908"
label="classbasic__json_a007ecebde9a7d40714e300ce0ff52908"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
constexpr bool [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::is_string (

<div class="DoxyParamCaption">

</div>

) const, ,

return whether value is a string

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/is_string/`](https://json.nlohmann.me/api/basic_json/is_string/)

</div>

<span id="classbasic__json_a2d3a5f8761bc6f163f4119bddaf7b092"
label="classbasic__json_a2d3a5f8761bc6f163f4119bddaf7b092"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
constexpr bool [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::is_structured (

<div class="DoxyParamCaption">

</div>

) const, ,

return whether type is structured

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/is_structured/`](https://json.nlohmann.me/api/basic_json/is_structured/)

</div>

<span id="classbasic__json_a3f2fdaf6048ea339c901b5208b93a64d"
label="classbasic__json_a3f2fdaf6048ea339c901b5208b93a64d"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
iteration_proxy$<$
[const_iterator](#classbasic__json_a1f5af3d9d06d43b91fefe1767794b1e8)
$>$ [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::items (

<div class="DoxyParamCaption">

</div>

) const,

helper to access iterator member functions in range-based for

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/items/`](https://json.nlohmann.me/api/basic_json/items/)

</div>

<span id="classbasic__json_ac12884e86980aa85b6a9ffbb8b84de6a"
label="classbasic__json_ac12884e86980aa85b6a9ffbb8b84de6a"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
iteration_proxy$<$
[iterator](#classbasic__json_ae206a491161d043f8efaa1330f1ccf97) $>$
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass $>$::items (

<div class="DoxyParamCaption">

</div>

),

helper to access iterator member functions in range-based for

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/items/`](https://json.nlohmann.me/api/basic_json/items/)

</div>

<span id="classbasic__json_a7c0314258e5347eade0c6851017bf5a5"
label="classbasic__json_a7c0314258e5347eade0c6851017bf5a5"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
static iteration_proxy$<$
[const_iterator](#classbasic__json_a1f5af3d9d06d43b91fefe1767794b1e8)
$>$ [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::iterator_wrapper (

<div class="DoxyParamCaption">

ref

</div>

), ,

wrapper to access iterator member functions in range-based for

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/items/`](https://json.nlohmann.me/api/basic_json/items/)

</div>

<div class="DoxyRefDesc">

Deprecated

This function is deprecated since 3.. and will be removed in version 4..
of the library. Please use instead; that is, replace
json::iterator_wrapper(j) with j.items().

</div>

<span id="classbasic__json_ab8b4e0acdea49e5f0a77abdf1ce465d2"
label="classbasic__json_ab8b4e0acdea49e5f0a77abdf1ce465d2"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
static iteration_proxy$<$
[iterator](#classbasic__json_ae206a491161d043f8efaa1330f1ccf97) $>$
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
$>$::iterator_wrapper (

<div class="DoxyParamCaption">

ref

</div>

), ,

wrapper to access iterator member functions in range-based for

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/items/`](https://json.nlohmann.me/api/basic_json/items/)

</div>

<div class="DoxyRefDesc">

Deprecated

This function is deprecated since 3.. and will be removed in version 4..
of the library. Please use instead; that is, replace
json::iterator_wrapper(j) with j.items().

</div>

<span id="classbasic__json_a380f98b02e7d50cf28af056a6ad8ffe6"
label="classbasic__json_a380f98b02e7d50cf28af056a6ad8ffe6"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
[size_type](#classbasic__json_a2c086af43cf06b1b7118f5351cab3ec9)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass $>$::max_size
(

<div class="DoxyParamCaption">

</div>

) const,

returns the maximum possible number of elements

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/max_size/`](https://json.nlohmann.me/api/basic_json/max_size/)

</div>

<span id="classbasic__json_a8676ac2433fe299b8d420f00a0741395"
label="classbasic__json_a8676ac2433fe299b8d420f00a0741395"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
void [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::merge_patch (

<div class="DoxyParamCaption">

apply_patch

</div>

)

applies a JSON Merge Patch

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/merge_patch/`](https://json.nlohmann.me/api/basic_json/merge_patch/)

</div>

<span id="classbasic__json_a7b435c2ed2db99cb1daa78ae3c6c4580"
label="classbasic__json_a7b435c2ed2db99cb1daa78ae3c6c4580"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
static JSON_HEDLEY_WARN_UNUSED_RESULT [basic_json](#classbasic__json)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass $>$::meta (

<div class="DoxyParamCaption">

</div>

),

returns version information on the library

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/meta/`](https://json.nlohmann.me/api/basic_json/meta/)

</div>

<span id="classbasic__json_a50a0e8dacc0f4aa12162da666595e6fd"
label="classbasic__json_a50a0e8dacc0f4aa12162da666595e6fd"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
static JSON_HEDLEY_WARN_UNUSED_RESULT [basic_json](#classbasic__json)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass $>$::object (

<div class="DoxyParamCaption">

init = {}

</div>

),

explicitly create an object from an initializer list

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/object/`](https://json.nlohmann.me/api/basic_json/object/)

</div>

<span id="classbasic__json_a70e1c8fbdb62f3f8bc04e69eef9cc9cf"
label="classbasic__json_a70e1c8fbdb62f3f8bc04e69eef9cc9cf"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
constexpr [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::operator
[value_t](#namespacedetail_a917c3efabea8a20dc72d9ae2c673d632) (

<div class="DoxyParamCaption">

</div>

) const, ,

return the type of the JSON value (implicit)

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/operator_value_t/`](https://json.nlohmann.me/api/basic_json/operator_value_t/)

</div>

<span id="classbasic__json_a747e3e19891143442991bbdb33edb917"
label="classbasic__json_a747e3e19891143442991bbdb33edb917"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
template$<$typename ValueType , typename std::enable_if$<$
[detail::conjunction](#structdetail_1_1conjunction)$<$
[detail::negation](#structdetail_1_1negation)$<$ std::is_pointer$<$
ValueType $>$ $>$, [detail::negation](#structdetail_1_1negation)$<$
std::is_same$<$ ValueType, std::nullptr_t $>$ $>$,
[detail::negation](#structdetail_1_1negation)$<$ std::is_same$<$
ValueType, [detail::json_ref](#classdetail_1_1json__ref)$<$
[basic_json](#classbasic__json) $>$ $>$ $>$,
[detail::negation](#structdetail_1_1negation)$<$ std::is_same$<$
ValueType, typename string_t::value_type $>$ $>$,
[detail::negation](#structdetail_1_1negation)$<$
[detail::is_basic_json](#structdetail_1_1is__basic__json)$<$ ValueType
$>$ $>$, [detail::negation](#structdetail_1_1negation)$<$
std::is_same$<$ ValueType, std::initializer_list$<$ typename
string_t::value_type $>$ $>$ $>$,
[detail::is_detected_lazy](#structdetail_1_1is__detected__lazy)$<$
detail::get_template_function, const basic_json_t &, ValueType $>$
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef), int
$>$[::type](#classbasic__json_ac5e52dbb3cb4e9fcabd1b88c37985aef) =
0$>$  
JSON_EXPLICIT [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::operator ValueType (

<div class="DoxyParamCaption">

</div>

) const

get a value (implicit)

Implicit type conversion between the JSON value and a compatible value.
The call is realized by calling .

<div class="DoxyTemplParams">

Template Parameters *ValueType* & non-pointer type compatible to the
JSON value, for instance int for JSON integer numbers, bool for JSON
booleans, or std::vector types for JSON arrays. The character type of as
well as an initializer list of this type is excluded to avoid
ambiguities as these types implicitly convert to std::string.  

</div>

<div class="DoxyReturn">

Returns copy of the JSON value, converted to type *ValueType*

</div>

<div class="DoxyExceptions">

Exceptions *type_error.* & in case passed type *ValueType* is
incompatible to the JSON value type (e.g., the JSON value is of type
boolean, but a string is requested); see example below  

</div>

@complexity Linear in the size of the JSON value.

@liveexample{The example below shows several conversions from JSON
values to other types. There a few things to note: (1) Floating-point
numbers can be converted to integers\\ (2) A JSON array can be converted
to a standard std::vector$<$short$>$\\ (3) A JSON object can be
converted to C++ associative containers such as
std::unordered_map$<$std::string\\ json$>$.,operator\_\_ValueType}

<div class="DoxySince">

Since version 1..

</div>

<span id="classbasic__json_ac444a656905e3f207ad9fc19275faf25"
label="classbasic__json_ac444a656905e3f207ad9fc19275faf25"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
[reference](#classbasic__json_a6ca7bfb35987ce7cb8d27447cda5b80a)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
$>$::operator+= (

<div class="DoxyParamCaption">

val

</div>

)

add an object to an array

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/operator+=/`](https://json.nlohmann.me/api/basic_json/operator+=/)

</div>

<span id="classbasic__json_a4475e951f51506808ca6fe7e77eb38ca"
label="classbasic__json_a4475e951f51506808ca6fe7e77eb38ca"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
[reference](#classbasic__json_a6ca7bfb35987ce7cb8d27447cda5b80a)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
$>$::operator+= (

<div class="DoxyParamCaption">

val

</div>

)

add an object to an array

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/operator+=/`](https://json.nlohmann.me/api/basic_json/operator+=/)

</div>

<span id="classbasic__json_a996a58d60e4badd9beadfd3e2e7ffdc1"
label="classbasic__json_a996a58d60e4badd9beadfd3e2e7ffdc1"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
[reference](#classbasic__json_a6ca7bfb35987ce7cb8d27447cda5b80a)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
$>$::operator+= (

<div class="DoxyParamCaption">

val

</div>

)

add an object to an object

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/operator+=/`](https://json.nlohmann.me/api/basic_json/operator+=/)

</div>

<span id="classbasic__json_a3af74b651da5642cd8b77a3ecc635331"
label="classbasic__json_a3af74b651da5642cd8b77a3ecc635331"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
[reference](#classbasic__json_a6ca7bfb35987ce7cb8d27447cda5b80a)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
$>$::operator+= (

<div class="DoxyParamCaption">

init

</div>

)

add an object to an object

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/operator+=/`](https://json.nlohmann.me/api/basic_json/operator+=/)

</div>

<span id="classbasic__json_ab8154023fc24515222c9cf61d677871e"
label="classbasic__json_ab8154023fc24515222c9cf61d677871e"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
[basic_json](#classbasic__json) & [basic_json](#classbasic__json)$<$
ObjectType, ArrayType, StringType, BooleanType, NumberIntegerType,
NumberUnsignedType, NumberFloatType, AllocatorType, JSONSerializer,
BinaryType, CustomBaseClass $>$::operator= (

<div class="DoxyParamCaption">

other

</div>

),

copy assignment

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/operator=/`](https://json.nlohmann.me/api/basic_json/operator=/)

</div>

<span id="classbasic__json_a274307158c76b820701077dd471cc75b"
label="classbasic__json_a274307158c76b820701077dd471cc75b"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
[reference](#classbasic__json_a6ca7bfb35987ce7cb8d27447cda5b80a)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
$>$::operator\[$\,$\] (

<div class="DoxyParamCaption">

ptr

</div>

)

access specified element via JSON Pointer

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/operator%5B%5D/`](https://json.nlohmann.me/api/basic_json/operator%5B%5D/)

</div>

<span id="classbasic__json_a6aedef6230f66b1271d71a6f77e7fed3"
label="classbasic__json_a6aedef6230f66b1271d71a6f77e7fed3"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
[const_reference](#classbasic__json_a31370bb451b78198d42c86dd31955deb)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
$>$::operator\[$\,$\] (

<div class="DoxyParamCaption">

ptr

</div>

) const

access specified element via JSON Pointer

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/operator%5B%5D/`](https://json.nlohmann.me/api/basic_json/operator%5B%5D/)

</div>

<span id="classbasic__json_a3d3ea17617e94886f3e86ac921095a13"
label="classbasic__json_a3d3ea17617e94886f3e86ac921095a13"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
[const_reference](#classbasic__json_a31370bb451b78198d42c86dd31955deb)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
$>$::operator\[$\,$\] (

<div class="DoxyParamCaption">

key

</div>

) const

access specified object element

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/operator%5B%5D/`](https://json.nlohmann.me/api/basic_json/operator%5B%5D/)

</div>

<span id="classbasic__json_a06fe1a1c7aa8c193c73aa40b17ee5f68"
label="classbasic__json_a06fe1a1c7aa8c193c73aa40b17ee5f68"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
template$<$class KeyType , detail::enable_if_t$<$
detail::is_usable_as_basic_json_key_type$<$ basic_json_t, KeyType
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef), int
$>$ = 0$>$  
[reference](#classbasic__json_a6ca7bfb35987ce7cb8d27447cda5b80a)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
$>$::operator\[$\,$\] (

<div class="DoxyParamCaption">

key

</div>

)

access specified object element

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/operator%5B%5D/`](https://json.nlohmann.me/api/basic_json/operator%5B%5D/)

</div>

<span id="classbasic__json_a2e11a3f2a234cd296b515173b6a3b986"
label="classbasic__json_a2e11a3f2a234cd296b515173b6a3b986"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
template$<$class KeyType , detail::enable_if_t$<$
detail::is_usable_as_basic_json_key_type$<$ basic_json_t, KeyType
$>$[::value](#classbasic__json_a80c2436388fd16a1529ce9afce8229ef), int
$>$ = 0$>$  
[const_reference](#classbasic__json_a31370bb451b78198d42c86dd31955deb)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
$>$::operator\[$\,$\] (

<div class="DoxyParamCaption">

key

</div>

) const

access specified object element

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/operator%5B%5D/`](https://json.nlohmann.me/api/basic_json/operator%5B%5D/)

</div>

<span id="classbasic__json_ab4f511db82b9d5eba85d5b2b8e1c6dbb"
label="classbasic__json_ab4f511db82b9d5eba85d5b2b8e1c6dbb"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
[reference](#classbasic__json_a6ca7bfb35987ce7cb8d27447cda5b80a)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
$>$::operator\[$\,$\] (

<div class="DoxyParamCaption">

idx

</div>

)

access specified array element

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/operator%5B%5D/`](https://json.nlohmann.me/api/basic_json/operator%5B%5D/)

</div>

<span id="classbasic__json_ae369d1565482903c3af75bf99467776b"
label="classbasic__json_ae369d1565482903c3af75bf99467776b"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
[const_reference](#classbasic__json_a31370bb451b78198d42c86dd31955deb)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
$>$::operator\[$\,$\] (

<div class="DoxyParamCaption">

idx

</div>

) const

access specified array element

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/operator%5B%5D/`](https://json.nlohmann.me/api/basic_json/operator%5B%5D/)

</div>

<span id="classbasic__json_a9c5825034534bf9256a33d2dd995c25a"
label="classbasic__json_a9c5825034534bf9256a33d2dd995c25a"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
[reference](#classbasic__json_a6ca7bfb35987ce7cb8d27447cda5b80a)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
$>$::operator\[$\,$\] (

<div class="DoxyParamCaption">

key

</div>

)

access specified object element

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/operator%5B%5D/`](https://json.nlohmann.me/api/basic_json/operator%5B%5D/)

</div>

<span id="classbasic__json_a145a004c0a2fa5be84b260ecc98ab5d9"
label="classbasic__json_a145a004c0a2fa5be84b260ecc98ab5d9"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
[basic_json](#classbasic__json) [basic_json](#classbasic__json)$<$
ObjectType, ArrayType, StringType, BooleanType, NumberIntegerType,
NumberUnsignedType, NumberFloatType, AllocatorType, JSONSerializer,
BinaryType, CustomBaseClass $>$::patch (

<div class="DoxyParamCaption">

json_patch

</div>

) const

applies a JSON patch to a copy of the current object

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/patch/`](https://json.nlohmann.me/api/basic_json/patch/)

</div>

<span id="classbasic__json_a693812b31e106dec9166e93d8f6dd7d7"
label="classbasic__json_a693812b31e106dec9166e93d8f6dd7d7"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
void [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::patch_inplace (

<div class="DoxyParamCaption">

json_patch

</div>

)

applies a JSON patch in-place without copying the object

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/patch/`](https://json.nlohmann.me/api/basic_json/patch/)

</div>

<span id="classbasic__json_a3d13acce4e49e0d5ee768643a7b89010"
label="classbasic__json_a3d13acce4e49e0d5ee768643a7b89010"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
void [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::push_back (

<div class="DoxyParamCaption">

val

</div>

)

add an object to an array

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/push_back/`](https://json.nlohmann.me/api/basic_json/push_back/)

</div>

<span id="classbasic__json_aca01ca3a9bc310e5c5d067a39dca6933"
label="classbasic__json_aca01ca3a9bc310e5c5d067a39dca6933"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
void [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::push_back (

<div class="DoxyParamCaption">

val

</div>

)

add an object to an array

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/push_back/`](https://json.nlohmann.me/api/basic_json/push_back/)

</div>

<span id="classbasic__json_af17fe93acad9b0b991600225dabd42be"
label="classbasic__json_af17fe93acad9b0b991600225dabd42be"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
void [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::push_back (

<div class="DoxyParamCaption">

val

</div>

)

add an object to an object

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/push_back/`](https://json.nlohmann.me/api/basic_json/push_back/)

</div>

<span id="classbasic__json_a4fcacc90f17b156f0b6c8e0430624853"
label="classbasic__json_a4fcacc90f17b156f0b6c8e0430624853"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
void [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::push_back (

<div class="DoxyParamCaption">

init

</div>

)

add an object to an object

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/push_back/`](https://json.nlohmann.me/api/basic_json/push_back/)

</div>

<span id="classbasic__json_a4ef4aee2259af5183267f6e8f774d0eb"
label="classbasic__json_a4ef4aee2259af5183267f6e8f774d0eb"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
[const_reverse_iterator](#classbasic__json_a240f61567d8acffe831532f4f9b379cb)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass $>$::rbegin (

<div class="DoxyParamCaption">

</div>

) const,

returns an iterator to the reverse-beginning

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/rbegin/`](https://json.nlohmann.me/api/basic_json/rbegin/)

</div>

<span id="classbasic__json_a11da8db436685032e97563cbb7490ff5"
label="classbasic__json_a11da8db436685032e97563cbb7490ff5"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
[reverse_iterator](#classbasic__json_aedc059cdae078322bb0d434b2127d1cf)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass $>$::rbegin (

<div class="DoxyParamCaption">

</div>

),

returns an iterator to the reverse-beginning

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/rbegin/`](https://json.nlohmann.me/api/basic_json/rbegin/)

</div>

<span id="classbasic__json_ae81c3b38089a63d988a1efefe3ebc4bf"
label="classbasic__json_ae81c3b38089a63d988a1efefe3ebc4bf"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
[const_reverse_iterator](#classbasic__json_a240f61567d8acffe831532f4f9b379cb)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass $>$::rend (

<div class="DoxyParamCaption">

</div>

) const,

returns an iterator to the reverse-end

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/rend/`](https://json.nlohmann.me/api/basic_json/rend/)

</div>

<span id="classbasic__json_a8d8855a8c04ee7986ae8bab283c4f0de"
label="classbasic__json_a8d8855a8c04ee7986ae8bab283c4f0de"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
[reverse_iterator](#classbasic__json_aedc059cdae078322bb0d434b2127d1cf)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass $>$::rend (

<div class="DoxyParamCaption">

</div>

),

returns an iterator to the reverse-end

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/rend/`](https://json.nlohmann.me/api/basic_json/rend/)

</div>

<span id="classbasic__json_ad018e709338c810c56eaad606186a77e"
label="classbasic__json_ad018e709338c810c56eaad606186a77e"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
template$<$typename SAX $>$  
static bool [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::sax_parse (

<div class="DoxyParamCaption">

i,

sax,

format = input_format_t::json,

strict = true,

ignore_comments = false

</div>

),

generate SAX events

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/sax_parse/`](https://json.nlohmann.me/api/basic_json/sax_parse/)

</div>

<div class="DoxyRefDesc">

Deprecated

This function is deprecated since 3.. and will be removed in version 4..
of the library. Please use sax_parse(ptr, ptr + len) instead.

</div>

<span id="classbasic__json_a94cbf1844fef86e9301282ad8ca0f822"
label="classbasic__json_a94cbf1844fef86e9301282ad8ca0f822"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
template$<$class IteratorType , class SAX $>$  
static bool [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::sax_parse (

<div class="DoxyParamCaption">

first,

last,

sax,

format = input_format_t::json,

strict = true,

ignore_comments = false

</div>

),

generate SAX events

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/sax_parse/`](https://json.nlohmann.me/api/basic_json/sax_parse/)

</div>

<span id="classbasic__json_a086cbfd1ad4ba83a8127c87467a92f47"
label="classbasic__json_a086cbfd1ad4ba83a8127c87467a92f47"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
[size_type](#classbasic__json_a2c086af43cf06b1b7118f5351cab3ec9)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass $>$::size (

<div class="DoxyParamCaption">

</div>

) const,

returns the number of elements

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/size/`](https://json.nlohmann.me/api/basic_json/size/)

</div>

<span id="classbasic__json_ac1e32c91d5e641c25c52486341f5a9db"
label="classbasic__json_ac1e32c91d5e641c25c52486341f5a9db"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
void [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::swap (

<div class="DoxyParamCaption">

other

</div>

)

exchanges the values

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/swap/`](https://json.nlohmann.me/api/basic_json/swap/)

</div>

<span id="classbasic__json_a3624e1bbc880bd196e3fa4a220554755"
label="classbasic__json_a3624e1bbc880bd196e3fa4a220554755"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
void [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::swap (

<div class="DoxyParamCaption">

other

</div>

)

exchanges the values

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/swap/`](https://json.nlohmann.me/api/basic_json/swap/)

</div>

<span id="classbasic__json_abc9ea6dec87e254de172c2bfeaeef7df"
label="classbasic__json_abc9ea6dec87e254de172c2bfeaeef7df"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
void [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::swap (

<div class="DoxyParamCaption">

other

</div>

)

exchanges the values

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/swap/`](https://json.nlohmann.me/api/basic_json/swap/)

</div>

<span id="classbasic__json_a1a94e5348ebb34852092d51a44e21d24"
label="classbasic__json_a1a94e5348ebb34852092d51a44e21d24"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
void [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::swap (

<div class="DoxyParamCaption">

other

</div>

),

exchanges the values

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/swap/`](https://json.nlohmann.me/api/basic_json/swap/)

</div>

<span id="classbasic__json_aeac8816c033c659ef8b43a5f03d5f553"
label="classbasic__json_aeac8816c033c659ef8b43a5f03d5f553"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
void [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::swap (

<div class="DoxyParamCaption">

other

</div>

)

exchanges the values

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/swap/`](https://json.nlohmann.me/api/basic_json/swap/)

</div>

<span id="classbasic__json_aa987625005046c81e7748dca1e84a0e3"
label="classbasic__json_aa987625005046c81e7748dca1e84a0e3"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
void [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::swap (

<div class="DoxyParamCaption">

other

</div>

)

exchanges the values

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/swap/`](https://json.nlohmann.me/api/basic_json/swap/)

</div>

<span id="classbasic__json_a0912e7738f47e604ac96fe8cdde1a96e"
label="classbasic__json_a0912e7738f47e604ac96fe8cdde1a96e"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
static std::vector$<$ std::uint8_t $>$
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
$>$::to_bjdata (

<div class="DoxyParamCaption">

j,

use_size = false,

use_type = false

</div>

),

create a BJData serialization of a given JSON value

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/to_bjdata/`](https://json.nlohmann.me/api/basic_json/to_bjdata/)

</div>

<span id="classbasic__json_a1fa9828fcbe4e33c9a036834564f7dbd"
label="classbasic__json_a1fa9828fcbe4e33c9a036834564f7dbd"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
static void [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::to_bjdata (

<div class="DoxyParamCaption">

j,

o,

use_size = false,

use_type = false

</div>

),

create a BJData serialization of a given JSON value

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/to_bjdata/`](https://json.nlohmann.me/api/basic_json/to_bjdata/)

</div>

<span id="classbasic__json_a2736658c256401394059599f97139ee9"
label="classbasic__json_a2736658c256401394059599f97139ee9"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
static void [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::to_bjdata (

<div class="DoxyParamCaption">

j,

o,

use_size = false,

use_type = false

</div>

),

create a BJData serialization of a given JSON value

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/to_bjdata/`](https://json.nlohmann.me/api/basic_json/to_bjdata/)

</div>

<span id="classbasic__json_a4ea6478022ab79b47216fda4b53ae1d4"
label="classbasic__json_a4ea6478022ab79b47216fda4b53ae1d4"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
static std::vector$<$ std::uint8_t $>$
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass $>$::to_bson
(

<div class="DoxyParamCaption">

j

</div>

),

create a BSON serialization of a given JSON value

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/to_bson/`](https://json.nlohmann.me/api/basic_json/to_bson/)

</div>

<span id="classbasic__json_a71794547dde3dd67e444aa45131ca861"
label="classbasic__json_a71794547dde3dd67e444aa45131ca861"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
static void [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::to_bson (

<div class="DoxyParamCaption">

j,

o

</div>

),

create a BSON serialization of a given JSON value

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/to_bson/`](https://json.nlohmann.me/api/basic_json/to_bson/)

</div>

<span id="classbasic__json_afd718b745034da1f4eea4c69f45cebda"
label="classbasic__json_afd718b745034da1f4eea4c69f45cebda"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
static void [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::to_bson (

<div class="DoxyParamCaption">

j,

o

</div>

),

create a BSON serialization of a given JSON value

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/to_bson/`](https://json.nlohmann.me/api/basic_json/to_bson/)

</div>

<span id="classbasic__json_a7c47280dbbb39288384058b771f8eec6"
label="classbasic__json_a7c47280dbbb39288384058b771f8eec6"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
static std::vector$<$ std::uint8_t $>$
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass $>$::to_cbor
(

<div class="DoxyParamCaption">

j

</div>

),

create a CBOR serialization of a given JSON value

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/to_cbor/`](https://json.nlohmann.me/api/basic_json/to_cbor/)

</div>

<span id="classbasic__json_af31f5ee23264fb21bd31e16bc27adab2"
label="classbasic__json_af31f5ee23264fb21bd31e16bc27adab2"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
static void [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::to_cbor (

<div class="DoxyParamCaption">

j,

o

</div>

),

create a CBOR serialization of a given JSON value

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/to_cbor/`](https://json.nlohmann.me/api/basic_json/to_cbor/)

</div>

<span id="classbasic__json_a706ccab0e47bd75cd36911db84451cd1"
label="classbasic__json_a706ccab0e47bd75cd36911db84451cd1"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
static void [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::to_cbor (

<div class="DoxyParamCaption">

j,

o

</div>

),

create a CBOR serialization of a given JSON value

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/to_cbor/`](https://json.nlohmann.me/api/basic_json/to_cbor/)

</div>

<span id="classbasic__json_aea0ea0404f7ea72f66b0d5d0032b1367"
label="classbasic__json_aea0ea0404f7ea72f66b0d5d0032b1367"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
static std::vector$<$ std::uint8_t $>$
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
$>$::to_msgpack (

<div class="DoxyParamCaption">

j

</div>

),

create a MessagePack serialization of a given JSON value

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/to_msgpack/`](https://json.nlohmann.me/api/basic_json/to_msgpack/)

</div>

<span id="classbasic__json_a51da13ff4e850d4ad1cf23ce4f3b9e4a"
label="classbasic__json_a51da13ff4e850d4ad1cf23ce4f3b9e4a"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
static void [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::to_msgpack (

<div class="DoxyParamCaption">

j,

o

</div>

),

create a MessagePack serialization of a given JSON value

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/to_msgpack/`](https://json.nlohmann.me/api/basic_json/to_msgpack/)

</div>

<span id="classbasic__json_af46fdac62559d4c38e623d99ad7064e9"
label="classbasic__json_af46fdac62559d4c38e623d99ad7064e9"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
static void [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::to_msgpack (

<div class="DoxyParamCaption">

j,

o

</div>

),

create a MessagePack serialization of a given JSON value

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/to_msgpack/`](https://json.nlohmann.me/api/basic_json/to_msgpack/)

</div>

<span id="classbasic__json_a906e81d488ebcac169960a1d48f6b065"
label="classbasic__json_a906e81d488ebcac169960a1d48f6b065"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
static std::vector$<$ std::uint8_t $>$
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
$>$::to_ubjson (

<div class="DoxyParamCaption">

j,

use_size = false,

use_type = false

</div>

),

create a UBJSON serialization of a given JSON value

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/to_ubjson/`](https://json.nlohmann.me/api/basic_json/to_ubjson/)

</div>

<span id="classbasic__json_ab8b6c6cc3ba1b49af628fe0ec8c73b77"
label="classbasic__json_ab8b6c6cc3ba1b49af628fe0ec8c73b77"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
static void [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::to_ubjson (

<div class="DoxyParamCaption">

j,

o,

use_size = false,

use_type = false

</div>

),

create a UBJSON serialization of a given JSON value

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/to_ubjson/`](https://json.nlohmann.me/api/basic_json/to_ubjson/)

</div>

<span id="classbasic__json_ada3d71f1dcfea24465d364b815d11445"
label="classbasic__json_ada3d71f1dcfea24465d364b815d11445"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
static void [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::to_ubjson (

<div class="DoxyParamCaption">

j,

o,

use_size = false,

use_type = false

</div>

),

create a UBJSON serialization of a given JSON value

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/to_ubjson/`](https://json.nlohmann.me/api/basic_json/to_ubjson/)

</div>

<span id="classbasic__json_ac5e52dbb3cb4e9fcabd1b88c37985aef"
label="classbasic__json_ac5e52dbb3cb4e9fcabd1b88c37985aef"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
constexpr [value_t](#namespacedetail_a917c3efabea8a20dc72d9ae2c673d632)
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass $>$::type (

<div class="DoxyParamCaption">

</div>

) const, ,

return the type of the JSON value (explicit)

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/type/`](https://json.nlohmann.me/api/basic_json/type/)

</div>

<span id="classbasic__json_a15b177614647598e238e15ab1cc889c7"
label="classbasic__json_a15b177614647598e238e15ab1cc889c7"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
JSON_HEDLEY_RETURNS_NON_NULL const char $\ast$
[basic_json](#classbasic__json)$<$ ObjectType, ArrayType, StringType,
BooleanType, NumberIntegerType, NumberUnsignedType, NumberFloatType,
AllocatorType, JSONSerializer, BinaryType, CustomBaseClass
$>$::type_name (

<div class="DoxyParamCaption">

</div>

) const,

return the type as string

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/type_name/`](https://json.nlohmann.me/api/basic_json/type_name/)

</div>

<span id="classbasic__json_abdb57996898f80522e9abbb5e1e61e46"
label="classbasic__json_abdb57996898f80522e9abbb5e1e61e46"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
[basic_json](#classbasic__json) [basic_json](#classbasic__json)$<$
ObjectType, ArrayType, StringType, BooleanType, NumberIntegerType,
NumberUnsignedType, NumberFloatType, AllocatorType, JSONSerializer,
BinaryType, CustomBaseClass $>$::unflatten (

<div class="DoxyParamCaption">

</div>

) const

unflatten a previously flattened JSON value

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/unflatten/`](https://json.nlohmann.me/api/basic_json/unflatten/)

</div>

<span id="classbasic__json_a4ea2b8cef5e4aba5b92d14e6ebe25936"
label="classbasic__json_a4ea2b8cef5e4aba5b92d14e6ebe25936"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
void [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::update (

<div class="DoxyParamCaption">

first,

last,

merge_objects = false

</div>

)

updates a JSON object from another object, overwriting existing keys

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/update/`](https://json.nlohmann.me/api/basic_json/update/)

</div>

<span id="classbasic__json_a3819f393e82396782ccc22785575b01d"
label="classbasic__json_a3819f393e82396782ccc22785575b01d"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
void [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::update (

<div class="DoxyParamCaption">

j,

merge_objects = false

</div>

)

updates a JSON object from another object, overwriting existing keys

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/update/`](https://json.nlohmann.me/api/basic_json/update/)

</div>

<span id="classbasic__json_ac63045992eb552c11f77fefddd801591"
label="classbasic__json_ac63045992eb552c11f77fefddd801591"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
template$<$class ValueType , detail::enable_if_t$<$
[detail::is_getable](#structdetail_1_1is__getable)$<$ basic_json_t,
ValueType $>$::value &&!std::is_same$<$
[value_t](#namespacedetail_a917c3efabea8a20dc72d9ae2c673d632),
detail::uncvref_t$<$ ValueType $>$ $>$::value, int $>$ = 0$>$  
ValueType [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::value (

<div class="DoxyParamCaption">

ptr,

default_value

</div>

) const

access specified object element via JSON Pointer with default value

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/value/`](https://json.nlohmann.me/api/basic_json/value/)

</div>

<span id="classbasic__json_a1ab7b5edf8e5831195940f8d377a6ee3"
label="classbasic__json_a1ab7b5edf8e5831195940f8d377a6ee3"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
template$<$class ValueType , class ReturnType = typename
value_return_type$<$ValueType$>$::type, detail::enable_if_t$<$
[detail::is_getable](#structdetail_1_1is__getable)$<$ basic_json_t,
ReturnType $>$::value &&!std::is_same$<$
[value_t](#namespacedetail_a917c3efabea8a20dc72d9ae2c673d632),
detail::uncvref_t$<$ ValueType $>$ $>$::value, int $>$ = 0$>$  
ReturnType [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::value (

<div class="DoxyParamCaption">

ptr,

default_value

</div>

) const

access specified object element via JSON Pointer with default value

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/value/`](https://json.nlohmann.me/api/basic_json/value/)

</div>

<span id="classbasic__json_a80c2436388fd16a1529ce9afce8229ef"
label="classbasic__json_a80c2436388fd16a1529ce9afce8229ef"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
template$<$class ValueType , detail::enable_if_t$<$
\![detail::is_transparent](#structdetail_1_1is__transparent)$<$
[object_comparator_t](#classbasic__json_af12040e0663db54840d73d363979643a)
$>$::value &&[detail::is_getable](#structdetail_1_1is__getable)$<$
basic_json_t, ValueType $>$::value &&!std::is_same$<$
[value_t](#namespacedetail_a917c3efabea8a20dc72d9ae2c673d632),
detail::uncvref_t$<$ ValueType $>$ $>$::value, int $>$ = 0$>$  
ValueType [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::value (

<div class="DoxyParamCaption">

key,

default_value

</div>

) const

access specified object element with default value

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/value/`](https://json.nlohmann.me/api/basic_json/value/)

</div>

<span id="classbasic__json_a56244e0ed0943ad62faf61b06e7ba139"
label="classbasic__json_a56244e0ed0943ad62faf61b06e7ba139"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
template$<$class ValueType , class ReturnType = typename
value_return_type$<$ValueType$>$::type, detail::enable_if_t$<$
\![detail::is_transparent](#structdetail_1_1is__transparent)$<$
[object_comparator_t](#classbasic__json_af12040e0663db54840d73d363979643a)
$>$::value &&[detail::is_getable](#structdetail_1_1is__getable)$<$
basic_json_t, ReturnType $>$::value &&!std::is_same$<$
[value_t](#namespacedetail_a917c3efabea8a20dc72d9ae2c673d632),
detail::uncvref_t$<$ ValueType $>$ $>$::value, int $>$ = 0$>$  
ReturnType [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::value (

<div class="DoxyParamCaption">

key,

default_value

</div>

) const

access specified object element with default value

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/value/`](https://json.nlohmann.me/api/basic_json/value/)

</div>

<span id="classbasic__json_acbe572bbfbd4687a7a9167465e4d41f2"
label="classbasic__json_acbe572bbfbd4687a7a9167465e4d41f2"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
template$<$class ValueType , class KeyType , detail::enable_if_t$<$
[detail::is_transparent](#structdetail_1_1is__transparent)$<$
[object_comparator_t](#classbasic__json_af12040e0663db54840d73d363979643a)
$>$::value &&!detail::is_json_pointer$<$ KeyType $>$::value
&&[is_comparable_with_object_key](#structdetail_1_1is__comparable)$<$
KeyType $>$::value
&&[detail::is_getable](#structdetail_1_1is__getable)$<$ basic_json_t,
ValueType $>$::value &&!std::is_same$<$
[value_t](#namespacedetail_a917c3efabea8a20dc72d9ae2c673d632),
detail::uncvref_t$<$ ValueType $>$ $>$::value, int $>$ = 0$>$  
ValueType [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::value (

<div class="DoxyParamCaption">

key,

default_value

</div>

) const

access specified object element with default value

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/value/`](https://json.nlohmann.me/api/basic_json/value/)

</div>

<span id="classbasic__json_a694398741710ce1c22797ad47109898b"
label="classbasic__json_a694398741710ce1c22797ad47109898b"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
template$<$class ValueType , class KeyType , class ReturnType = typename
value_return_type$<$ValueType$>$::type, detail::enable_if_t$<$
[detail::is_transparent](#structdetail_1_1is__transparent)$<$
[object_comparator_t](#classbasic__json_af12040e0663db54840d73d363979643a)
$>$::value &&!detail::is_json_pointer$<$ KeyType $>$::value
&&[is_comparable_with_object_key](#structdetail_1_1is__comparable)$<$
KeyType $>$::value
&&[detail::is_getable](#structdetail_1_1is__getable)$<$ basic_json_t,
ReturnType $>$::value &&!std::is_same$<$
[value_t](#namespacedetail_a917c3efabea8a20dc72d9ae2c673d632),
detail::uncvref_t$<$ ValueType $>$ $>$::value, int $>$ = 0$>$  
ReturnType [basic_json](#classbasic__json)$<$ ObjectType, ArrayType,
StringType, BooleanType, NumberIntegerType, NumberUnsignedType,
NumberFloatType, AllocatorType, JSONSerializer, BinaryType,
CustomBaseClass $>$::value (

<div class="DoxyParamCaption">

key,

default_value

</div>

) const

access specified object element via JSON Pointer with default value

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/value/`](https://json.nlohmann.me/api/basic_json/value/)

</div>

<span id="classbasic__json_af9907af448f7ff794120033e132025f6"
label="classbasic__json_af9907af448f7ff794120033e132025f6"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
std::istream & operator$<$$<$ (

<div class="DoxyParamCaption">

j,

i

</div>

)

deserialize from stream

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/operator_gtgt/`](https://json.nlohmann.me/api/basic_json/operator_gtgt/)

</div>

<div class="DoxyRefDesc">

Deprecated

This stream operator is deprecated since 3.. and will be removed in
version 4.. of the library. Please use instead; that is, replace calls
like j $<$$<$ i; with i $>$$>$ j;.

</div>

<span id="classbasic__json_aea0de29387d532e0bc5f2475cb83995d"
label="classbasic__json_aea0de29387d532e0bc5f2475cb83995d"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
std::istream & operator$>$$>$ (

<div class="DoxyParamCaption">

i,

j

</div>

)

deserialize from stream

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/operator_gtgt/`](https://json.nlohmann.me/api/basic_json/operator_gtgt/)

</div>

<span id="classbasic__json_a44c98b48b8a0b5e53087776fbb63961f"
label="classbasic__json_a44c98b48b8a0b5e53087776fbb63961f"></span>

template$<$template$<$ typename U, typename V, typename... Args $>$
class ObjectType = std::map, template$<$ typename U, typename... Args
$>$ class ArrayType = std::vector, class StringType = std::string, class
BooleanType = bool, class NumberIntegerType = std::int64_t, class
NumberUnsignedType = std::uint64_t, class NumberFloatType = double,
template$<$ typename U $>$ class AllocatorType = std::allocator,
template$<$ typename T, typename SFINAE=void $>$ class JSONSerializer =
adl_serializer, class BinaryType = std::vector$<$std::uint8_t$>$, class
CustomBaseClass = void$>$  
void swap (

<div class="DoxyParamCaption">

left,

right

</div>

)

exchanges the values

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/swap/`](https://json.nlohmann.me/api/basic_json/swap/)

</div>

The documentation for this class was generated from the following file:

<div class="DoxyCompactItemize">

MacGyver/json.hpp

</div>
