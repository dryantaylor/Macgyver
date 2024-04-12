<div id="classdetail_1_1out__of__range">

</div>

<span id="classdetail_1_1out__of__range"
label="classdetail_1_1out__of__range"></span>

exception indicating access out of the defined range

\#include $<$json.hpp$>$

Inheritance diagram for detail::out_of_range:

<figure>
<div class="center">
<img src="classdetail_1_1out__of__range" style="height:3cm" />
</div>
</figure>

<div class="DoxyCompactItemize">

<span id="classdetail_1_1out__of__range_a79ea0d3ec02a853629dc827e045ecff5"
label="classdetail_1_1out__of__range_a79ea0d3ec02a853629dc827e045ecff5"></span>
template$<$typename BasicJsonContext , enable_if_t$<$
[is_basic_json_context](#structdetail_1_1is__basic__json__context)$<$
BasicJsonContext
$>$[::value](#namespacedetail_a47b1bb0bbd3596589ed9187059c312efa2063c1608d6e0baf80249c42e2be5804),
int $>$ = 0$>$   
static [out_of_range](#classdetail_1_1out__of__range) **create** (int
id\_, const std::string &what_arg, BasicJsonContext context)

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

exception indicating access out of the defined range

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/out_of_range/`](https://json.nlohmann.me/api/basic_json/out_of_range/)

</div>

The documentation for this class was generated from the following file:

<div class="DoxyCompactItemize">

MacGyver/json.hpp

</div>
