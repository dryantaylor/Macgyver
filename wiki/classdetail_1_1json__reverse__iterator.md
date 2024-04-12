<div id="classdetail_1_1json__reverse__iterator">

</div>

<span id="classdetail_1_1json__reverse__iterator"
label="classdetail_1_1json__reverse__iterator"></span>

a template for a reverse iterator class

\#include $<$json.hpp$>$

Inheritance diagram for detail::json_reverse_iterator$<$ Base $>$:

<figure>
<div class="center">
<img src="classdetail_1_1json__reverse__iterator" style="height:2cm" />
</div>
</figure>

<div class="DoxyCompactItemize">

<span id="classdetail_1_1json__reverse__iterator_a474e450284b0bb060b248d20f2b03f93"
label="classdetail_1_1json__reverse__iterator_a474e450284b0bb060b248d20f2b03f93"></span>
using **difference_type** = std::ptrdiff_t

<span id="classdetail_1_1json__reverse__iterator_ab306723c375c396a5ccd90e2d31ad651"
label="classdetail_1_1json__reverse__iterator_ab306723c375c396a5ccd90e2d31ad651"></span>
using **base_iterator** = std::reverse_iterator$<$Base$>$

<div class="DoxyCompactList">

*shortcut to the reverse iterator adapter*

</div>

<span id="classdetail_1_1json__reverse__iterator_a81a4d0a61246d4ece37fd14eacfadda0"
label="classdetail_1_1json__reverse__iterator_a81a4d0a61246d4ece37fd14eacfadda0"></span>
using **reference** = typename Base::reference

<div class="DoxyCompactList">

*the reference type for the pointed-to element*

</div>

</div>

<div class="DoxyCompactItemize">

<span id="classdetail_1_1json__reverse__iterator_ad0012dca9469c2d5669ca2e446c8957d"
label="classdetail_1_1json__reverse__iterator_ad0012dca9469c2d5669ca2e446c8957d"></span>
**json_reverse_iterator** (const typename base_iterator::iterator_type
&it) noexcept

<div class="DoxyCompactList">

*create reverse iterator from iterator*

</div>

<span id="classdetail_1_1json__reverse__iterator_a95ef832171f9aba019f284125bed75ca"
label="classdetail_1_1json__reverse__iterator_a95ef832171f9aba019f284125bed75ca"></span>
**json_reverse_iterator** (const
[base_iterator](#classdetail_1_1json__reverse__iterator_ab306723c375c396a5ccd90e2d31ad651)
&it) noexcept

<div class="DoxyCompactList">

*create reverse iterator from base class*

</div>

<span id="classdetail_1_1json__reverse__iterator_a000addec834a8db323312794737623da"
label="classdetail_1_1json__reverse__iterator_a000addec834a8db323312794737623da"></span>
[json_reverse_iterator](#classdetail_1_1json__reverse__iterator)
**operator++** (int) &

<div class="DoxyCompactList">

*post-increment (it++)*

</div>

<span id="classdetail_1_1json__reverse__iterator_a3e611d63a209fdfd1278c2a9d86c40e3"
label="classdetail_1_1json__reverse__iterator_a3e611d63a209fdfd1278c2a9d86c40e3"></span>
[json_reverse_iterator](#classdetail_1_1json__reverse__iterator) &
**operator++** ()

<div class="DoxyCompactList">

*pre-increment (++it)*

</div>

<span id="classdetail_1_1json__reverse__iterator_a1abdaf558ee194cdd44e9cee82fce77d"
label="classdetail_1_1json__reverse__iterator_a1abdaf558ee194cdd44e9cee82fce77d"></span>
[json_reverse_iterator](#classdetail_1_1json__reverse__iterator)
**operator--** (int) &

<div class="DoxyCompactList">

*post-decrement (it–)*

</div>

<span id="classdetail_1_1json__reverse__iterator_a9736216bab45871b1c62eb68df0613c3"
label="classdetail_1_1json__reverse__iterator_a9736216bab45871b1c62eb68df0613c3"></span>
[json_reverse_iterator](#classdetail_1_1json__reverse__iterator) &
**operator--** ()

<div class="DoxyCompactList">

*pre-decrement (–it)*

</div>

<span id="classdetail_1_1json__reverse__iterator_a4e433b66cce1a79c88bfe645de9794dc"
label="classdetail_1_1json__reverse__iterator_a4e433b66cce1a79c88bfe645de9794dc"></span>
[json_reverse_iterator](#classdetail_1_1json__reverse__iterator) &
**operator+=** (difference_type i)

<div class="DoxyCompactList">

*add to iterator*

</div>

<span id="classdetail_1_1json__reverse__iterator_adff7b1171a9a154b5a339b0a0e85404d"
label="classdetail_1_1json__reverse__iterator_adff7b1171a9a154b5a339b0a0e85404d"></span>
[json_reverse_iterator](#classdetail_1_1json__reverse__iterator)
**operator+** (difference_type i) const

<div class="DoxyCompactList">

*add to iterator*

</div>

<span id="classdetail_1_1json__reverse__iterator_abb64fbf5298d1bdc987496f57a288877"
label="classdetail_1_1json__reverse__iterator_abb64fbf5298d1bdc987496f57a288877"></span>
[json_reverse_iterator](#classdetail_1_1json__reverse__iterator)
**operator-** (difference_type i) const

<div class="DoxyCompactList">

*subtract from iterator*

</div>

<span id="classdetail_1_1json__reverse__iterator_a6eba395b9f3f0b2c470c5a240a041128"
label="classdetail_1_1json__reverse__iterator_a6eba395b9f3f0b2c470c5a240a041128"></span>
difference_type **operator-** (const
[json_reverse_iterator](#classdetail_1_1json__reverse__iterator) &other)
const

<div class="DoxyCompactList">

*return difference*

</div>

<span id="classdetail_1_1json__reverse__iterator_a50a57718a9d49039b7592bf34f5819a2"
label="classdetail_1_1json__reverse__iterator_a50a57718a9d49039b7592bf34f5819a2"></span>
[reference](#classdetail_1_1json__reverse__iterator_a81a4d0a61246d4ece37fd14eacfadda0)
**operator\[$\,$\]** (difference_type n) const

<div class="DoxyCompactList">

*access to successor*

</div>

<span id="classdetail_1_1json__reverse__iterator_a68d4f0c3e978afdc7509ee88e2f7b996"
label="classdetail_1_1json__reverse__iterator_a68d4f0c3e978afdc7509ee88e2f7b996"></span>
auto **key** () const -$>$ decltype(std::declval$<$ Base $>$().key())

<div class="DoxyCompactList">

*return the key of an object iterator*

</div>

<span id="classdetail_1_1json__reverse__iterator_a90132b4589e7b8c6cfdf4e25e1c311fe"
label="classdetail_1_1json__reverse__iterator_a90132b4589e7b8c6cfdf4e25e1c311fe"></span>
[reference](#classdetail_1_1json__reverse__iterator_a81a4d0a61246d4ece37fd14eacfadda0)
**value** () const

<div class="DoxyCompactList">

*return the value of an iterator*

</div>

</div>

### template$<$typename Base$>$ class detail::json_reverse_iterator$<$ Base $>$

a template for a reverse iterator class

<div class="DoxyTemplParams">

Template Parameters *Base* & the base iterator type to reverse. Valid
types are iterator (to create reverse_iterator) and const_iterator (to
create const_reverse_iterator).  

</div>

@requirement The class satisfies the following concept requirements:

<div class="DoxyItemize">

[` BidirectionalIterator`](https://en.cppreference.com/w/cpp/named_req/BidirectionalIterator):
The iterator that can be moved can be moved in both directions (i.e.
incremented and decremented).

[` OutputIterator`](https://en.cppreference.com/w/cpp/named_req/OutputIterator):
It is possible to write to the pointed-to element (only if *Base* is
iterator).

</div>

<div class="DoxySince">

Since version 1..

</div>

The documentation for this class was generated from the following file:

<div class="DoxyCompactItemize">

MacGyver/json.hpp

</div>
