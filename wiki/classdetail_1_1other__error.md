<div id="classdetail_1_1other__error">

</div>

<span id="classdetail_1_1other__error"
label="classdetail_1_1other__error"></span>

exception indicating other library errors

\#include $<$json.hpp$>$

Inheritance diagram for detail::other_error:

<figure>
<div class="center">
<img src="classdetail_1_1other__error" style="height:3cm" />
</div>
</figure>

<div class="DoxyCompactItemize">

<span id="classdetail_1_1other__error_a687565ec69bfdf7a15f9a672038b0f0f"
label="classdetail_1_1other__error_a687565ec69bfdf7a15f9a672038b0f0f"></span>
template$<$typename BasicJsonContext , enable_if_t$<$
[is_basic_json_context](#structdetail_1_1is__basic__json__context)$<$
BasicJsonContext
$>$[::value](#namespacedetail_a47b1bb0bbd3596589ed9187059c312efa2063c1608d6e0baf80249c42e2be5804),
int $>$ = 0$>$   
static [other_error](#classdetail_1_1other__error) **create** (int id\_,
const std::string &what_arg, BasicJsonContext context)

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

exception indicating other library errors

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/other_error/`](https://json.nlohmann.me/api/basic_json/other_error/)

</div>

The documentation for this class was generated from the following file:

<div class="DoxyCompactItemize">

MacGyver/json.hpp

</div>
