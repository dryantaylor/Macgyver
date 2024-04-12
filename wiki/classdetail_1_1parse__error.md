<div id="classdetail_1_1parse__error">

</div>

<span id="classdetail_1_1parse__error"
label="classdetail_1_1parse__error"></span>

exception indicating a parse error

\#include $<$json.hpp$>$

Inheritance diagram for detail::parse_error:

<figure>
<div class="center">
<img src="classdetail_1_1parse__error" style="height:3cm" />
</div>
</figure>

<div class="DoxyCompactItemize">

template$<$typename BasicJsonContext , enable_if_t$<$
[is_basic_json_context](#structdetail_1_1is__basic__json__context)$<$
BasicJsonContext
$>$[::value](#namespacedetail_a47b1bb0bbd3596589ed9187059c312efa2063c1608d6e0baf80249c42e2be5804),
int $>$ = 0$>$   
static [parse_error](#classdetail_1_1parse__error)
[create](#classdetail_1_1parse__error_a07046ea9f33d28f120af188ed674d6df)
(int id\_, const [position_t](#structdetail_1_1position__t) &pos, const
std::string &what_arg, BasicJsonContext context)

<div class="DoxyCompactList">

*create a parse error exception*

</div>

<span id="classdetail_1_1parse__error_a55b7ac869c65efd530fbf3dee18c5e9c"
label="classdetail_1_1parse__error_a55b7ac869c65efd530fbf3dee18c5e9c"></span>
template$<$typename BasicJsonContext , enable_if_t$<$
[is_basic_json_context](#structdetail_1_1is__basic__json__context)$<$
BasicJsonContext
$>$[::value](#namespacedetail_a47b1bb0bbd3596589ed9187059c312efa2063c1608d6e0baf80249c42e2be5804),
int $>$ = 0$>$   
static [parse_error](#classdetail_1_1parse__error) **create** (int id\_,
std::size_t byte\_, const std::string &what_arg, BasicJsonContext
context)

</div>

<div class="DoxyCompactItemize">

const std::size_t
[byte](#classdetail_1_1parse__error_a5bce7d135aa3a38d1d3f4ed7bf8615e1)

<div class="DoxyCompactList">

*byte index of the parse error*

</div>

</div>

<div class="DoxyCompactItemize">

const int **id**

<div class="DoxyCompactList">

*the id of the exception*

</div>

</div>

<div class="DoxyCompactItemize">

const char $\ast$ **what** () const noexcept override

<div class="DoxyCompactList">

*returns the explanatory string*

</div>

</div>

<div class="DoxyCompactItemize">

**exception** (int id\_, const char $\ast$what_arg)

</div>

<div class="DoxyCompactItemize">

static std::string **name** (const std::string &ename, int id\_)

static std::string **diagnostics** (std::nullptr_t)

template$<$typename BasicJsonType $>$   
static std::string **diagnostics** (const BasicJsonType
$\ast$leaf_element)

</div>

exception indicating a parse error

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/parse_error/`](https://json.nlohmann.me/api/basic_json/parse_error/)

</div>

<span id="classdetail_1_1parse__error_a07046ea9f33d28f120af188ed674d6df"
label="classdetail_1_1parse__error_a07046ea9f33d28f120af188ed674d6df"></span>

template$<$typename BasicJsonContext , enable_if_t$<$
[is_basic_json_context](#structdetail_1_1is__basic__json__context)$<$
BasicJsonContext
$>$[::value](#namespacedetail_a47b1bb0bbd3596589ed9187059c312efa2063c1608d6e0baf80249c42e2be5804),
int $>$ = 0$>$  
static [parse_error](#classdetail_1_1parse__error)
detail::parse_error::create (

<div class="DoxyParamCaption">

id\_,

pos,

what_arg,

context

</div>

),

create a parse error exception

<div class="DoxyParams">

Parameters ` in` & *id\_* & the id of the exception  
` in` & *pos* & the position where the error occurred (or with
chars_read_total=0 if the position cannot be determined)  
` in` & *what_arg* & the explanatory string  

</div>

<div class="DoxyReturn">

Returns object

</div>

<span id="classdetail_1_1parse__error_a5bce7d135aa3a38d1d3f4ed7bf8615e1"
label="classdetail_1_1parse__error_a5bce7d135aa3a38d1d3f4ed7bf8615e1"></span>
const std::size_t detail::parse_error::byte

byte index of the parse error

The byte index of the last read character in the input file.

<div class="DoxyNote">

Note For an input with n bytes, 1 is the index of the first character
and n+1 is the index of the terminating null byte or the end of file.
This also holds true when reading a byte vector (CBOR or MessagePack).

</div>

The documentation for this class was generated from the following file:

<div class="DoxyCompactItemize">

MacGyver/json.hpp

</div>
