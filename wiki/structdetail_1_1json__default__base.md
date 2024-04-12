<div id="structdetail_1_1json__default__base">

</div>

<span id="structdetail_1_1json__default__base"
label="structdetail_1_1json__default__base"></span>

Default base class of the class.

\#include $<$json.hpp$>$

Default base class of the class.

So that the correct implementations of the copy / move ctors / assign
operators of do not require complex case distinctions (no base class /
custom base class used as customization point), always has a base class.
By default, this class is used because it is empty and thus has no
effect on the behavior of .

The documentation for this struct was generated from the following file:

<div class="DoxyCompactItemize">

MacGyver/json.hpp

</div>
