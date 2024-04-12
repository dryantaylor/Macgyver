<div id="classdetail_1_1exception">

</div>

<span id="classdetail_1_1exception"
label="classdetail_1_1exception"></span>

general exception of the class

\#include $<$json.hpp$>$

Inheritance diagram for detail::exception:

<figure>
<div class="center">
<img src="classdetail_1_1exception" style="height:2.4cm" />
</div>
</figure>

<div class="DoxyCompactItemize">

<span id="classdetail_1_1exception_ae75d7315f5f2d85958da6d961375caf0"
label="classdetail_1_1exception_ae75d7315f5f2d85958da6d961375caf0"></span>
const char $\ast$ **what** () const noexcept override

<div class="DoxyCompactList">

*returns the explanatory string*

</div>

</div>

<div class="DoxyCompactItemize">

<span id="classdetail_1_1exception_a63b819fbb2ef34df9dad1e309207fa24"
label="classdetail_1_1exception_a63b819fbb2ef34df9dad1e309207fa24"></span>
const int **id**

<div class="DoxyCompactList">

*the id of the exception*

</div>

</div>

<div class="DoxyCompactItemize">

<span id="classdetail_1_1exception_a528d6bc77e88490bbb84cde2222b7ff0"
label="classdetail_1_1exception_a528d6bc77e88490bbb84cde2222b7ff0"></span>
**exception** (int id\_, const char $\ast$what_arg)

</div>

<div class="DoxyCompactItemize">

<span id="classdetail_1_1exception_a8f1eb56b9964c8dd84d89d0da98d883b"
label="classdetail_1_1exception_a8f1eb56b9964c8dd84d89d0da98d883b"></span>
static std::string **name** (const std::string &ename, int id\_)

<span id="classdetail_1_1exception_a6b4a786b5c1c25dd3edaceb1bf2d5120"
label="classdetail_1_1exception_a6b4a786b5c1c25dd3edaceb1bf2d5120"></span>
static std::string **diagnostics** (std::nullptr_t)

<span id="classdetail_1_1exception_af3739c53fe56a1712754d13dfa561f80"
label="classdetail_1_1exception_af3739c53fe56a1712754d13dfa561f80"></span>
template$<$typename BasicJsonType $>$   
static std::string **diagnostics** (const BasicJsonType
$\ast$leaf_element)

</div>

general exception of the class

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/basic_json/exception/`](https://json.nlohmann.me/api/basic_json/exception/)

</div>

The documentation for this class was generated from the following file:

<div class="DoxyCompactItemize">

MacGyver/json.hpp

</div>
