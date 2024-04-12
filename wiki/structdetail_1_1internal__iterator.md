<div id="structdetail_1_1internal__iterator">

</div>

<span id="structdetail_1_1internal__iterator"
label="structdetail_1_1internal__iterator"></span>

an iterator value

\#include $<$json.hpp$>$

<div class="DoxyCompactItemize">

<span id="structdetail_1_1internal__iterator_acf787101c4778e750cfdb0f44066a6ef"
label="structdetail_1_1internal__iterator_acf787101c4778e750cfdb0f44066a6ef"></span>
BasicJsonType::object_t::iterator **object_iterator** {}

<div class="DoxyCompactList">

*iterator for JSON objects*

</div>

<span id="structdetail_1_1internal__iterator_a2ad2dc9ea8bba2b50811e34f905350bd"
label="structdetail_1_1internal__iterator_a2ad2dc9ea8bba2b50811e34f905350bd"></span>
BasicJsonType::array_t::iterator **array_iterator** {}

<div class="DoxyCompactList">

*iterator for JSON arrays*

</div>

<span id="structdetail_1_1internal__iterator_a8bb8034d2d35fb129e0dd742ce024e44"
label="structdetail_1_1internal__iterator_a8bb8034d2d35fb129e0dd742ce024e44"></span>
[primitive_iterator_t](#classdetail_1_1primitive__iterator__t)
**primitive_iterator** {}

<div class="DoxyCompactList">

*generic iterator for all other types*

</div>

</div>

### template$<$typename BasicJsonType$>$ struct detail::internal_iterator$<$ BasicJsonType $>$

an iterator value

<div class="DoxyNote">

Note This structure could easily be a union, but MSVC currently does not
allow unions members with complex constructors, see
[` https://github.com/nlohmann/json/pull/105`](https://github.com/nlohmann/json/pull/105).

</div>

The documentation for this struct was generated from the following file:

<div class="DoxyCompactItemize">

MacGyver/json.hpp

</div>
