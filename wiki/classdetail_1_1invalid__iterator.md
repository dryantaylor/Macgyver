<div id="classdetail_1_1invalid__iterator">

</div>

<span id="classdetail_1_1invalid__iterator"
label="classdetail_1_1invalid__iterator"></span>

exception indicating errors with iterators

\#include $<$json.hpp$>$

Inheritance diagram for detail::invalid_iterator:

<figure>
<div class="center">
<img src="classdetail_1_1invalid__iterator" style="height:3cm" />
</div>
</figure>

<div class="DoxyCompactItemize">

<span id="classdetail_1_1invalid__iterator_a35d0b713b151188622791891314949f9"
label="classdetail_1_1invalid__iterator_a35d0b713b151188622791891314949f9"></span>
template$<$typename BasicJsonContext , enable_if_t$<$
[is_basic_json_context](#structdetail_1_1is__basic__json__context)$<$
BasicJsonContext
$>$[::value](#namespacedetail_a47b1bb0bbd3596589ed9187059c312efa2063c1608d6e0baf80249c42e2be5804),
int $>$ = 0$>$   
static [invalid_iterator](#classdetail_1_1invalid__iterator) **create**
(int id\_, const std::string &what_arg, BasicJsonContext context)

</div>

<div class="DoxyCompactItemize">

const char $\ast$ **what** () const noexcept override

<div class="DoxyCompactList">

*returns the explanatory string*

</div>

</div>

<div class="DoxyCompactItemize">

const int **id**

<div class="DoxyCompactList">

*the id of the exception*

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

exception indicating errors with iterators

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/invalid_iterator/`](https://json.nlohmann.me/api/basic_json/invalid_iterator/)

</div>

The documentation for this class was generated from the following file:

<div class="DoxyCompactItemize">

MacGyver/json.hpp

</div>
