<div id="classjson__pointer">

</div>

<span id="classjson__pointer" label="classjson__pointer"></span>

JSON Pointer defines a string syntax for identifying a specific value
within a JSON document.

\#include $<$json.hpp$>$

<div class="DoxyCompactItemize">

<span id="classjson__pointer_a21dae78c5120aa3044d4c0fa1d970291"
label="classjson__pointer_a21dae78c5120aa3044d4c0fa1d970291"></span>
using **string_t** = typename string_t_helper$<$RefStringType$>$::type

</div>

<div class="DoxyCompactItemize">

[json_pointer](#classjson__pointer_a5288b8f5d6ff6faca37f664b98a16ecd)
(const string_t &s="")

<div class="DoxyCompactList">

*create JSON pointer*

</div>

string_t
[to_string](#classjson__pointer_a6b94e2003be4cd72c4f145bcea2578ec) ()
const

<div class="DoxyCompactList">

*return a string representation of the JSON pointer*

</div>

[operator string_t](#classjson__pointer_a97364e516620b02f1049f847b2ad43c9)
() const

<div class="DoxyCompactList">

*return a string representation of the JSON pointer*

</div>

[json_pointer](#classjson__pointer) &
[operator/=](#classjson__pointer_a8bb8e43c6e01a6370cd49ba130171219)
(const [json_pointer](#classjson__pointer) &ptr)

<div class="DoxyCompactList">

*append another JSON pointer at the end of this JSON pointer*

</div>

[json_pointer](#classjson__pointer) &
[operator/=](#classjson__pointer_aa810a9db8c1d6e67c4a3703dc66a18d4)
(string_t token)

<div class="DoxyCompactList">

*append an unescaped reference token at the end of this JSON pointer*

</div>

[json_pointer](#classjson__pointer) &
[operator/=](#classjson__pointer_a6c2bffffbf08b77259e0b658c841703c)
(std::size_t array_idx)

<div class="DoxyCompactList">

*append an array index at the end of this JSON pointer*

</div>

[json_pointer](#classjson__pointer)
[parent_pointer](#classjson__pointer_aa03c0c1206e171342d27a4583258858b)
() const

<div class="DoxyCompactList">

*returns the parent of this JSON pointer*

</div>

void [pop_back](#classjson__pointer_a662118b470c87a1b564946c2602c49ce)
()

<div class="DoxyCompactList">

*remove last reference token*

</div>

const string_t &
[back](#classjson__pointer_aba71e63e4032cfc46dd90aeb09e5cb0f) () const

<div class="DoxyCompactList">

*return last reference token*

</div>

void [push_back](#classjson__pointer_adbe97f9c00a221fb7be88d940b39a24f)
(const string_t &token)

<div class="DoxyCompactList">

*append an unescaped token at the end of the reference pointer*

</div>

void [push_back](#classjson__pointer_a6fa4848eafc232ae1af91c3d2696897e)
(string_t &&token)

<div class="DoxyCompactList">

*append an unescaped token at the end of the reference pointer*

</div>

bool [empty](#classjson__pointer_a5c3d08bd0a0e99c3377db33600c68a64) ()
const noexcept

<div class="DoxyCompactList">

*return whether pointer points to the root document*

</div>

</div>

<div class="DoxyCompactItemize">

<span id="classjson__pointer_ada3100cdb8700566051828f1355fa745"
label="classjson__pointer_ada3100cdb8700566051828f1355fa745"></span>
class **basic_json**

std::ostream &
[operator$<$$<$](#classjson__pointer_ad4140db2dd2f347f46f3abae0fc2156f)
(std::ostream &o, const [json_pointer](#classjson__pointer) &ptr)

<div class="DoxyCompactList">

*write string representation of the JSON pointer to stream*

</div>

[json_pointer](#classjson__pointer)
[operator/](#classjson__pointer_a90a11fe6c7f37b1746a3ff9cb24b0d53)
(const [json_pointer](#classjson__pointer) &lhs, const
[json_pointer](#classjson__pointer) &rhs)

<div class="DoxyCompactList">

*create a new JSON pointer by appending the right JSON pointer at the
end of the left JSON pointer*

</div>

[json_pointer](#classjson__pointer)
[operator/](#classjson__pointer_a116956f4487af44732dd685e970679b0)
(const [json_pointer](#classjson__pointer) &lhs, string_t token)

<div class="DoxyCompactList">

*create a new JSON pointer by appending the unescaped token at the end
of the JSON pointer*

</div>

[json_pointer](#classjson__pointer)
[operator/](#classjson__pointer_a29f6d4b492e784b9d196b05a4048c289)
(const [json_pointer](#classjson__pointer) &lhs, std::size_t array_idx)

<div class="DoxyCompactList">

*create a new JSON pointer by appending the array-index-token at the end
of the JSON pointer*

</div>

template$<$typename RefStringTypeLhs , typename RefStringTypeRhs $>$   
bool [operator==](#classjson__pointer_a613a4889154f7ab2ee4efbe0fe147cf2)
(const [json_pointer](#classjson__pointer)$<$ RefStringTypeLhs $>$ &lhs,
const [json_pointer](#classjson__pointer)$<$ RefStringTypeRhs $>$ &rhs)
noexcept

<div class="DoxyCompactList">

*compares two JSON pointers for equality*

</div>

template$<$typename RefStringTypeLhs , typename StringType $>$   
bool [operator==](#classjson__pointer_af6bf727798ad49870a709094e5ff981c)
(const [json_pointer](#classjson__pointer)$<$ RefStringTypeLhs $>$ &lhs,
const StringType &rhs)

<div class="DoxyCompactList">

*compares JSON pointer and string for equality*

</div>

template$<$typename RefStringTypeRhs , typename StringType $>$   
bool [operator==](#classjson__pointer_ae7aabbb2a365ddaac5192ccea3226bfb)
(const StringType &lhs, const [json_pointer](#classjson__pointer)$<$
RefStringTypeRhs $>$ &rhs)

<div class="DoxyCompactList">

*compares string and JSON pointer for equality*

</div>

template$<$typename RefStringTypeLhs , typename RefStringTypeRhs $>$   
bool [operator!=](#classjson__pointer_aa72a84c70e970b738f1262cfd8a66b4d)
(const [json_pointer](#classjson__pointer)$<$ RefStringTypeLhs $>$ &lhs,
const [json_pointer](#classjson__pointer)$<$ RefStringTypeRhs $>$ &rhs)
noexcept

<div class="DoxyCompactList">

*compares two JSON pointers for inequality*

</div>

template$<$typename RefStringTypeLhs , typename StringType $>$   
bool [operator!=](#classjson__pointer_ae0bb92b1f034ac1738d44eb7540f8f66)
(const [json_pointer](#classjson__pointer)$<$ RefStringTypeLhs $>$ &lhs,
const StringType &rhs)

<div class="DoxyCompactList">

*compares JSON pointer and string for inequality*

</div>

template$<$typename RefStringTypeRhs , typename StringType $>$   
bool [operator!=](#classjson__pointer_a32b28c0ef5f1c96b646817a0c360d7e6)
(const StringType &lhs, const [json_pointer](#classjson__pointer)$<$
RefStringTypeRhs $>$ &rhs)

<div class="DoxyCompactList">

*compares string and JSON pointer for inequality*

</div>

<span id="classjson__pointer_af8c9bbaed20be0634a2e522f54265d96"
label="classjson__pointer_af8c9bbaed20be0634a2e522f54265d96"></span>
template$<$typename RefStringTypeLhs , typename RefStringTypeRhs $>$   
bool **operator$<$** (const [json_pointer](#classjson__pointer)$<$
RefStringTypeLhs $>$ &lhs, const [json_pointer](#classjson__pointer)$<$
RefStringTypeRhs $>$ &rhs) noexcept

<div class="DoxyCompactList">

*compares two JSON pointer for less-than*

</div>

</div>

### template$<$typename RefStringType$>$ class json_pointer$<$ RefStringType $>$

JSON Pointer defines a string syntax for identifying a specific value
within a JSON document.

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/json_pointer/`](https://json.nlohmann.me/api/json_pointer/)

</div>

<span id="classjson__pointer_a5288b8f5d6ff6faca37f664b98a16ecd"
label="classjson__pointer_a5288b8f5d6ff6faca37f664b98a16ecd"></span>

template$<$typename RefStringType $>$  
[json_pointer](#classjson__pointer)$<$ RefStringType
$>$[::json_pointer](#classjson__pointer) (

<div class="DoxyParamCaption">

s = ""

</div>

),

create JSON pointer

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/json_pointer/json_pointer/`](https://json.nlohmann.me/api/json_pointer/json_pointer/)

</div>

<span id="classjson__pointer_aba71e63e4032cfc46dd90aeb09e5cb0f"
label="classjson__pointer_aba71e63e4032cfc46dd90aeb09e5cb0f"></span>

template$<$typename RefStringType $>$  
const string_t & [json_pointer](#classjson__pointer)$<$ RefStringType
$>$::back (

<div class="DoxyParamCaption">

</div>

) const

return last reference token

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/json_pointer/back/`](https://json.nlohmann.me/api/json_pointer/back/)

</div>

<span id="classjson__pointer_a5c3d08bd0a0e99c3377db33600c68a64"
label="classjson__pointer_a5c3d08bd0a0e99c3377db33600c68a64"></span>

template$<$typename RefStringType $>$  
bool [json_pointer](#classjson__pointer)$<$ RefStringType $>$::empty (

<div class="DoxyParamCaption">

</div>

) const,

return whether pointer points to the root document

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/json_pointer/empty/`](https://json.nlohmann.me/api/json_pointer/empty/)

</div>

<span id="classjson__pointer_a97364e516620b02f1049f847b2ad43c9"
label="classjson__pointer_a97364e516620b02f1049f847b2ad43c9"></span>

template$<$typename RefStringType $>$  
[json_pointer](#classjson__pointer)$<$ RefStringType $>$::operator
string_t (

<div class="DoxyParamCaption">

</div>

) const

return a string representation of the JSON pointer

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/json_pointer/operator_string/`](https://json.nlohmann.me/api/json_pointer/operator_string/)

</div>

<span id="classjson__pointer_a8bb8e43c6e01a6370cd49ba130171219"
label="classjson__pointer_a8bb8e43c6e01a6370cd49ba130171219"></span>

template$<$typename RefStringType $>$  
[json_pointer](#classjson__pointer) &
[json_pointer](#classjson__pointer)$<$ RefStringType $>$::operator/= (

<div class="DoxyParamCaption">

ptr

</div>

)

append another JSON pointer at the end of this JSON pointer

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/json_pointer/operator_slasheq/`](https://json.nlohmann.me/api/json_pointer/operator_slasheq/)

</div>

<span id="classjson__pointer_a6c2bffffbf08b77259e0b658c841703c"
label="classjson__pointer_a6c2bffffbf08b77259e0b658c841703c"></span>

template$<$typename RefStringType $>$  
[json_pointer](#classjson__pointer) &
[json_pointer](#classjson__pointer)$<$ RefStringType $>$::operator/= (

<div class="DoxyParamCaption">

array_idx

</div>

)

append an array index at the end of this JSON pointer

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/json_pointer/operator_slasheq/`](https://json.nlohmann.me/api/json_pointer/operator_slasheq/)

</div>

<span id="classjson__pointer_aa810a9db8c1d6e67c4a3703dc66a18d4"
label="classjson__pointer_aa810a9db8c1d6e67c4a3703dc66a18d4"></span>

template$<$typename RefStringType $>$  
[json_pointer](#classjson__pointer) &
[json_pointer](#classjson__pointer)$<$ RefStringType $>$::operator/= (

<div class="DoxyParamCaption">

token

</div>

)

append an unescaped reference token at the end of this JSON pointer

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/json_pointer/operator_slasheq/`](https://json.nlohmann.me/api/json_pointer/operator_slasheq/)

</div>

<span id="classjson__pointer_aa03c0c1206e171342d27a4583258858b"
label="classjson__pointer_aa03c0c1206e171342d27a4583258858b"></span>

template$<$typename RefStringType $>$  
[json_pointer](#classjson__pointer)
[json_pointer](#classjson__pointer)$<$ RefStringType $>$::parent_pointer
(

<div class="DoxyParamCaption">

</div>

) const

returns the parent of this JSON pointer

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/json_pointer/parent_pointer/`](https://json.nlohmann.me/api/json_pointer/parent_pointer/)

</div>

<span id="classjson__pointer_a662118b470c87a1b564946c2602c49ce"
label="classjson__pointer_a662118b470c87a1b564946c2602c49ce"></span>

template$<$typename RefStringType $>$  
void [json_pointer](#classjson__pointer)$<$ RefStringType $>$::pop_back
(

<div class="DoxyParamCaption">

</div>

)

remove last reference token

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/json_pointer/pop_back/`](https://json.nlohmann.me/api/json_pointer/pop_back/)

</div>

<span id="classjson__pointer_adbe97f9c00a221fb7be88d940b39a24f"
label="classjson__pointer_adbe97f9c00a221fb7be88d940b39a24f"></span>

template$<$typename RefStringType $>$  
void [json_pointer](#classjson__pointer)$<$ RefStringType $>$::push_back
(

<div class="DoxyParamCaption">

token

</div>

)

append an unescaped token at the end of the reference pointer

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/json_pointer/push_back/`](https://json.nlohmann.me/api/json_pointer/push_back/)

</div>

<span id="classjson__pointer_a6fa4848eafc232ae1af91c3d2696897e"
label="classjson__pointer_a6fa4848eafc232ae1af91c3d2696897e"></span>

template$<$typename RefStringType $>$  
void [json_pointer](#classjson__pointer)$<$ RefStringType $>$::push_back
(

<div class="DoxyParamCaption">

token

</div>

)

append an unescaped token at the end of the reference pointer

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/json_pointer/push_back/`](https://json.nlohmann.me/api/json_pointer/push_back/)

</div>

<span id="classjson__pointer_a6b94e2003be4cd72c4f145bcea2578ec"
label="classjson__pointer_a6b94e2003be4cd72c4f145bcea2578ec"></span>

template$<$typename RefStringType $>$  
string_t [json_pointer](#classjson__pointer)$<$ RefStringType
$>$::to_string (

<div class="DoxyParamCaption">

</div>

) const

return a string representation of the JSON pointer

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/json_pointer/to_string/`](https://json.nlohmann.me/api/json_pointer/to_string/)

</div>

<span id="classjson__pointer_aa72a84c70e970b738f1262cfd8a66b4d"
label="classjson__pointer_aa72a84c70e970b738f1262cfd8a66b4d"></span>

template$<$typename RefStringType $>$  
template$<$typename RefStringTypeLhs , typename RefStringTypeRhs $>$  
bool operator!= (

<div class="DoxyParamCaption">

lhs,

rhs

</div>

)

compares two JSON pointers for inequality

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/json_pointer/operator_ne/`](https://json.nlohmann.me/api/json_pointer/operator_ne/)

</div>

<span id="classjson__pointer_ae0bb92b1f034ac1738d44eb7540f8f66"
label="classjson__pointer_ae0bb92b1f034ac1738d44eb7540f8f66"></span>

template$<$typename RefStringType $>$  
template$<$typename RefStringTypeLhs , typename StringType $>$  
bool operator!= (

<div class="DoxyParamCaption">

lhs,

rhs

</div>

)

compares JSON pointer and string for inequality

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/json_pointer/operator_ne/`](https://json.nlohmann.me/api/json_pointer/operator_ne/)

</div>

<span id="classjson__pointer_a32b28c0ef5f1c96b646817a0c360d7e6"
label="classjson__pointer_a32b28c0ef5f1c96b646817a0c360d7e6"></span>

template$<$typename RefStringType $>$  
template$<$typename RefStringTypeRhs , typename StringType $>$  
bool operator!= (

<div class="DoxyParamCaption">

lhs,

rhs

</div>

)

compares string and JSON pointer for inequality

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/json_pointer/operator_ne/`](https://json.nlohmann.me/api/json_pointer/operator_ne/)

</div>

<span id="classjson__pointer_a90a11fe6c7f37b1746a3ff9cb24b0d53"
label="classjson__pointer_a90a11fe6c7f37b1746a3ff9cb24b0d53"></span>

template$<$typename RefStringType $>$  
[json_pointer](#classjson__pointer) operator/ (

<div class="DoxyParamCaption">

lhs,

rhs

</div>

)

create a new JSON pointer by appending the right JSON pointer at the end
of the left JSON pointer

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/json_pointer/operator_slash/`](https://json.nlohmann.me/api/json_pointer/operator_slash/)

</div>

<span id="classjson__pointer_a29f6d4b492e784b9d196b05a4048c289"
label="classjson__pointer_a29f6d4b492e784b9d196b05a4048c289"></span>

template$<$typename RefStringType $>$  
[json_pointer](#classjson__pointer) operator/ (

<div class="DoxyParamCaption">

lhs,

array_idx

</div>

)

create a new JSON pointer by appending the array-index-token at the end
of the JSON pointer

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/json_pointer/operator_slash/`](https://json.nlohmann.me/api/json_pointer/operator_slash/)

</div>

<span id="classjson__pointer_a116956f4487af44732dd685e970679b0"
label="classjson__pointer_a116956f4487af44732dd685e970679b0"></span>

template$<$typename RefStringType $>$  
[json_pointer](#classjson__pointer) operator/ (

<div class="DoxyParamCaption">

lhs,

token

</div>

)

create a new JSON pointer by appending the unescaped token at the end of
the JSON pointer

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/json_pointer/operator_slash/`](https://json.nlohmann.me/api/json_pointer/operator_slash/)

</div>

<span id="classjson__pointer_ad4140db2dd2f347f46f3abae0fc2156f"
label="classjson__pointer_ad4140db2dd2f347f46f3abae0fc2156f"></span>

template$<$typename RefStringType $>$  
std::ostream & operator$<$$<$ (

<div class="DoxyParamCaption">

o,

ptr

</div>

)

write string representation of the JSON pointer to stream

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/operator_ltlt/`](https://json.nlohmann.me/api/basic_json/operator_ltlt/)

</div>

<span id="classjson__pointer_a613a4889154f7ab2ee4efbe0fe147cf2"
label="classjson__pointer_a613a4889154f7ab2ee4efbe0fe147cf2"></span>

template$<$typename RefStringType $>$  
template$<$typename RefStringTypeLhs , typename RefStringTypeRhs $>$  
bool operator== (

<div class="DoxyParamCaption">

lhs,

rhs

</div>

)

compares two JSON pointers for equality

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/json_pointer/operator_eq/`](https://json.nlohmann.me/api/json_pointer/operator_eq/)

</div>

<span id="classjson__pointer_af6bf727798ad49870a709094e5ff981c"
label="classjson__pointer_af6bf727798ad49870a709094e5ff981c"></span>

template$<$typename RefStringType $>$  
template$<$typename RefStringTypeLhs , typename StringType $>$  
bool operator== (

<div class="DoxyParamCaption">

lhs,

rhs

</div>

)

compares JSON pointer and string for equality

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/json_pointer/operator_eq/`](https://json.nlohmann.me/api/json_pointer/operator_eq/)

</div>

<span id="classjson__pointer_ae7aabbb2a365ddaac5192ccea3226bfb"
label="classjson__pointer_ae7aabbb2a365ddaac5192ccea3226bfb"></span>

template$<$typename RefStringType $>$  
template$<$typename RefStringTypeRhs , typename StringType $>$  
bool operator== (

<div class="DoxyParamCaption">

lhs,

rhs

</div>

)

compares string and JSON pointer for equality

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/json_pointer/operator_eq/`](https://json.nlohmann.me/api/json_pointer/operator_eq/)

</div>

The documentation for this class was generated from the following file:

<div class="DoxyCompactItemize">

MacGyver/json.hpp

</div>
