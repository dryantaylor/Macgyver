<div id="classdetail_1_1iter__impl">

</div>

<span id="classdetail_1_1iter__impl"
label="classdetail_1_1iter__impl"></span>

a template for a bidirectional iterator for the class This class
implements a both iterators (iterator and const_iterator) for the class.

\#include $<$json.hpp$>$

<div class="DoxyCompactItemize">

using
[iterator_category](#classdetail_1_1iter__impl_a8fa317aaddc3dc7c58264e52e295c43e)
= std::bidirectional_iterator_tag

<span id="classdetail_1_1iter__impl_ab6c453d3fea1df38fa45fd4f97ea42df"
label="classdetail_1_1iter__impl_ab6c453d3fea1df38fa45fd4f97ea42df"></span>
using **value_type** = typename BasicJsonType::value_type

<div class="DoxyCompactList">

*the type of the values when the iterator is dereferenced*

</div>

<span id="classdetail_1_1iter__impl_a6d51e1372282929d1c240223aa973c6e"
label="classdetail_1_1iter__impl_a6d51e1372282929d1c240223aa973c6e"></span>
using **difference_type** = typename BasicJsonType::difference_type

<div class="DoxyCompactList">

*a type to represent differences between iterators*

</div>

using
[pointer](#classdetail_1_1iter__impl_a5f32f4fdd48a9b92ecb156af6421b1b8)

<div class="DoxyCompactList">

*defines a pointer to the type iterated over (value_type)*

</div>

using
[reference](#classdetail_1_1iter__impl_ac0cfb3a9727e77580cb1beada093ee81)

<div class="DoxyCompactList">

*defines a reference to the type iterated over (value_type)*

</div>

</div>

<div class="DoxyCompactItemize">

<span id="classdetail_1_1iter__impl_a8b8e30542bd3aa542201448ea8fd7089"
label="classdetail_1_1iter__impl_a8b8e30542bd3aa542201448ea8fd7089"></span>
**iter_impl** ([iter_impl](#classdetail_1_1iter__impl) &&)
noexcept=default

<span id="classdetail_1_1iter__impl_a3e705d46278a4048c26f297b1b433393"
label="classdetail_1_1iter__impl_a3e705d46278a4048c26f297b1b433393"></span>
[iter_impl](#classdetail_1_1iter__impl) & **operator=**
([iter_impl](#classdetail_1_1iter__impl) &&) noexcept=default

[iter_impl](#classdetail_1_1iter__impl_a21ce449bdce08e15eaf8333322a81039)
([pointer](#classdetail_1_1iter__impl_a5f32f4fdd48a9b92ecb156af6421b1b8)
[object](#namespacedetail_a917c3efabea8a20dc72d9ae2c673d632aa8cfde6331bd59eb2ac96f8911c4b666))
noexcept

<div class="DoxyCompactList">

*constructor for a given JSON instance*

</div>

[iter_impl](#classdetail_1_1iter__impl_af8d8847a82d9dab28bd4650ed13a7c90)
(const [iter_impl](#classdetail_1_1iter__impl)$<$ const BasicJsonType
$>$ &other) noexcept

<div class="DoxyCompactList">

*const copy constructor*

</div>

[iter_impl](#classdetail_1_1iter__impl) &
[operator=](#classdetail_1_1iter__impl_ae347fdf39e75d13ce488335ef1529b27)
(const [iter_impl](#classdetail_1_1iter__impl)$<$ const BasicJsonType
$>$ &other) noexcept

<div class="DoxyCompactList">

*converting assignment*

</div>

[iter_impl](#classdetail_1_1iter__impl_a26079f33eb8a16683577cf3782558f26)
(const [iter_impl](#classdetail_1_1iter__impl)$<$ typename
std::remove_const$<$ BasicJsonType $>$::type $>$ &other) noexcept

<div class="DoxyCompactList">

*converting constructor*

</div>

[iter_impl](#classdetail_1_1iter__impl) &
[operator=](#classdetail_1_1iter__impl_a228140be2554afd5dfe54d4194780b7c)
(const [iter_impl](#classdetail_1_1iter__impl)$<$ typename
std::remove_const$<$ BasicJsonType $>$::type $>$ &other) noexcept

<div class="DoxyCompactList">

*converting assignment*

</div>

<span id="classdetail_1_1iter__impl_ab3a9cbf054745890847c27896f636ecc"
label="classdetail_1_1iter__impl_ab3a9cbf054745890847c27896f636ecc"></span>
**switch** (m_object-$>$m_data.m_type)

void
[set_end](#classdetail_1_1iter__impl_afc94db3b8f35616347c25fae68e09509)
() noexcept

<div class="DoxyCompactList">

*set the iterator past the last value*

</div>

[reference](#classdetail_1_1iter__impl_ac0cfb3a9727e77580cb1beada093ee81)
[operator$\ast$](#classdetail_1_1iter__impl_abbef7d5bdb2c45980a34e907610c32b2)
() const

<div class="DoxyCompactList">

*return a reference to the value pointed to by the iterator*

</div>

[pointer](#classdetail_1_1iter__impl_a5f32f4fdd48a9b92ecb156af6421b1b8)
[operator-$>$](#classdetail_1_1iter__impl_a72314a87e67ba523f1be2f014f4eab56)
() const

<div class="DoxyCompactList">

*dereference the iterator*

</div>

[iter_impl](#classdetail_1_1iter__impl)
[operator++](#classdetail_1_1iter__impl_a5a1af6b2cd3611778b697bb7d7107f0d)
(int) &

<div class="DoxyCompactList">

*post-increment (it++)*

</div>

[iter_impl](#classdetail_1_1iter__impl) &
[operator++](#classdetail_1_1iter__impl_ab0288ec335f563769a09fba1123c076c)
()

<div class="DoxyCompactList">

*pre-increment (++it)*

</div>

[iter_impl](#classdetail_1_1iter__impl)
[operator--](#classdetail_1_1iter__impl_ae8c229d46359424bf850f1ecb5587a70)
(int) &

<div class="DoxyCompactList">

*post-decrement (it–)*

</div>

[iter_impl](#classdetail_1_1iter__impl) &
[operator--](#classdetail_1_1iter__impl_a3b7d07348aaaaf3eda9bd98b7d80415f)
()

<div class="DoxyCompactList">

*pre-decrement (–it)*

</div>

template$<$typename IterImpl , detail::enable_if_t$<$(std::is_same$<$
IterImpl, [iter_impl](#classdetail_1_1iter__impl)
$>$[::value](#classdetail_1_1iter__impl_a96557c87bc9b3adf6aa0b1a6b6209525)$\vert$$\vert$std::is_same$<$
IterImpl, other_iter_impl
$>$[::value](#classdetail_1_1iter__impl_a96557c87bc9b3adf6aa0b1a6b6209525)),
std::nullptr_t $>$ = nullptr$>$   
bool
[operator==](#classdetail_1_1iter__impl_a57b4e1eee4a3cdb3c0683cf64979da8d)
(const IterImpl &other) const

<div class="DoxyCompactList">

*comparison: equal*

</div>

template$<$typename IterImpl , detail::enable_if_t$<$(std::is_same$<$
IterImpl, [iter_impl](#classdetail_1_1iter__impl)
$>$[::value](#classdetail_1_1iter__impl_a96557c87bc9b3adf6aa0b1a6b6209525)$\vert$$\vert$std::is_same$<$
IterImpl, other_iter_impl
$>$[::value](#classdetail_1_1iter__impl_a96557c87bc9b3adf6aa0b1a6b6209525)),
std::nullptr_t $>$ = nullptr$>$   
bool
[operator!=](#classdetail_1_1iter__impl_ae52db5f16f00edc13c848fe99e4c521b)
(const IterImpl &other) const

<div class="DoxyCompactList">

*comparison: not equal*

</div>

bool
[operator$<$](#classdetail_1_1iter__impl_a339df296df7f5d014d5c7cedf40497da)
(const [iter_impl](#classdetail_1_1iter__impl) &other) const

<div class="DoxyCompactList">

*comparison: smaller*

</div>

bool
[operator$<$=](#classdetail_1_1iter__impl_a343806ffb02d7ce5266492128dfd5f9b)
(const [iter_impl](#classdetail_1_1iter__impl) &other) const

<div class="DoxyCompactList">

*comparison: less than or equal*

</div>

bool
[operator$>$](#classdetail_1_1iter__impl_a9b066d888f2f0ad0cd601594661a8e8b)
(const [iter_impl](#classdetail_1_1iter__impl) &other) const

<div class="DoxyCompactList">

*comparison: greater than*

</div>

bool
[operator$>$=](#classdetail_1_1iter__impl_a25a3a8e85eb37727487f210f5304a48e)
(const [iter_impl](#classdetail_1_1iter__impl) &other) const

<div class="DoxyCompactList">

*comparison: greater than or equal*

</div>

[iter_impl](#classdetail_1_1iter__impl) &
[operator+=](#classdetail_1_1iter__impl_a5e2dd333526ae85044fe78f65aac9b52)
([difference_type](#classdetail_1_1iter__impl_a6d51e1372282929d1c240223aa973c6e)
i)

<div class="DoxyCompactList">

*add to iterator*

</div>

[iter_impl](#classdetail_1_1iter__impl) &
[operator-=](#classdetail_1_1iter__impl_a3b48ed5856ca2011e8463d868fda3d0b)
([difference_type](#classdetail_1_1iter__impl_a6d51e1372282929d1c240223aa973c6e)
i)

<div class="DoxyCompactList">

*subtract from iterator*

</div>

[iter_impl](#classdetail_1_1iter__impl)
[operator+](#classdetail_1_1iter__impl_a03abdffc86382e7c2a7c462c217d120e)
([difference_type](#classdetail_1_1iter__impl_a6d51e1372282929d1c240223aa973c6e)
i) const

<div class="DoxyCompactList">

*add to iterator*

</div>

[iter_impl](#classdetail_1_1iter__impl)
[operator-](#classdetail_1_1iter__impl_abfcadba7a9796c3f5a5e123efef349ec)
([difference_type](#classdetail_1_1iter__impl_a6d51e1372282929d1c240223aa973c6e)
i) const

<div class="DoxyCompactList">

*subtract from iterator*

</div>

[difference_type](#classdetail_1_1iter__impl_a6d51e1372282929d1c240223aa973c6e)
[operator-](#classdetail_1_1iter__impl_a848837b8db99998c90d7bd71492d0dee)
(const [iter_impl](#classdetail_1_1iter__impl) &other) const

<div class="DoxyCompactList">

*return difference*

</div>

[reference](#classdetail_1_1iter__impl_ac0cfb3a9727e77580cb1beada093ee81)
[operator\[$\,$\]](#classdetail_1_1iter__impl_a5e557e30103e2af36cd8173c88eb586c)
([difference_type](#classdetail_1_1iter__impl_a6d51e1372282929d1c240223aa973c6e)
n) const

<div class="DoxyCompactList">

*access to successor*

</div>

const object_t::key_type &
[key](#classdetail_1_1iter__impl_a4064b295014b32f3cabd86f94264fc74) ()
const

<div class="DoxyCompactList">

*return the key of an object iterator*

</div>

[reference](#classdetail_1_1iter__impl_ac0cfb3a9727e77580cb1beada093ee81)
[value](#classdetail_1_1iter__impl_a96557c87bc9b3adf6aa0b1a6b6209525) ()
const

<div class="DoxyCompactList">

*return the value of an iterator*

</div>

</div>

<div class="DoxyCompactItemize">

<span id="classdetail_1_1iter__impl_ae146c1c7a0b8a46e353b1bbe181f7743"
label="classdetail_1_1iter__impl_ae146c1c7a0b8a46e353b1bbe181f7743"></span>
JSON_PRIVATE_UNLESS_TESTED : void set_begin() noexcept {
JSON_ASSERT(m_object != nullptr)

<span id="classdetail_1_1iter__impl_a392b5af6ea3449fe31ab7aafa5db4774"
label="classdetail_1_1iter__impl_a392b5af6ea3449fe31ab7aafa5db4774"></span>
JSON_PRIVATE_UNLESS_TESTED :
[pointer](#classdetail_1_1iter__impl_a5f32f4fdd48a9b92ecb156af6421b1b8)
m_object = nullptr

<span id="classdetail_1_1iter__impl_a79b7b8c6b778d9f7e76b086b45d9ea2e"
label="classdetail_1_1iter__impl_a79b7b8c6b778d9f7e76b086b45d9ea2e"></span>
[internal_iterator](#structdetail_1_1internal__iterator)$<$ typename
std::remove_const$<$ BasicJsonType $>$::type $>$ **m_it** {}

<div class="DoxyCompactList">

*the actual iterator of the associated instance*

</div>

</div>

<div class="DoxyCompactItemize">

[iter_impl](#classdetail_1_1iter__impl)
[operator+](#classdetail_1_1iter__impl_a94108d1a7563e103534f23eb5c1ee175)
([difference_type](#classdetail_1_1iter__impl_a6d51e1372282929d1c240223aa973c6e)
i, const [iter_impl](#classdetail_1_1iter__impl) &it)

<div class="DoxyCompactList">

*addition of distance and iterator*

</div>

</div>

### template$<$typename BasicJsonType$>$ class detail::iter_impl$<$ BasicJsonType $>$

a template for a bidirectional iterator for the class This class
implements a both iterators (iterator and const_iterator) for the class.

<div class="DoxyNote">

Note An iterator is called *initialized* when a pointer to a JSON value
has been set (e.g., by a constructor or a copy assignment). If the
iterator is default-constructed, it is *uninitialized* and most methods
are undefined. The library uses assertions to detect calls on
uninitialized iterators.$\ast$$\ast$ @requirement The class satisfies
the following concept requirements:

<div class="DoxyItemize">

[` BidirectionalIterator`](https://en.cppreference.com/w/cpp/named_req/BidirectionalIterator):
The iterator that can be moved can be moved in both directions (i.e.
incremented and decremented).

</div>

</div>

<div class="DoxySince">

Since version 1.., simplified in version 2.., change to bidirectional
iterators in version 3.. (see
[` https://github.com/nlohmann/json/issues/593`](https://github.com/nlohmann/json/issues/593))

</div>

<span id="classdetail_1_1iter__impl_a8fa317aaddc3dc7c58264e52e295c43e"
label="classdetail_1_1iter__impl_a8fa317aaddc3dc7c58264e52e295c43e"></span>
template$<$typename BasicJsonType $>$  
using [detail::iter_impl](#classdetail_1_1iter__impl)$<$ BasicJsonType
$>$::iterator_category = std::bidirectional_iterator_tag

The std::iterator class template (used as a base class to provide
typedefs) is deprecated in C++17. The C++ Standard has never required
user-defined iterators to derive from std::iterator. A user-defined
iterator should provide publicly accessible typedefs named
iterator_category, value_type, difference_type, pointer, and reference.
Note that value_type is required to be non-const, even for constant
iterators.
<span id="classdetail_1_1iter__impl_a5f32f4fdd48a9b92ecb156af6421b1b8"
label="classdetail_1_1iter__impl_a5f32f4fdd48a9b92ecb156af6421b1b8"></span>
template$<$typename BasicJsonType $>$  
using [detail::iter_impl](#classdetail_1_1iter__impl)$<$ BasicJsonType
$>$::pointer

**Initial value:**

<div class="DoxyCode">

0

</div>

defines a pointer to the type iterated over (value_type)

<span id="classdetail_1_1iter__impl_ac0cfb3a9727e77580cb1beada093ee81"
label="classdetail_1_1iter__impl_ac0cfb3a9727e77580cb1beada093ee81"></span>
template$<$typename BasicJsonType $>$  
using [detail::iter_impl](#classdetail_1_1iter__impl)$<$ BasicJsonType
$>$::reference

**Initial value:**

<div class="DoxyCode">

0

</div>

defines a reference to the type iterated over (value_type)

<span id="classdetail_1_1iter__impl_a21ce449bdce08e15eaf8333322a81039"
label="classdetail_1_1iter__impl_a21ce449bdce08e15eaf8333322a81039"></span>

template$<$typename BasicJsonType $>$  
[detail::iter_impl](#classdetail_1_1iter__impl)$<$ BasicJsonType
$>$::iter_impl (

<div class="DoxyParamCaption">

object

</div>

), ,

constructor for a given JSON instance

<div class="DoxyParams">

Parameters ` in` & *object* & pointer to a JSON object for this
iterator  

</div>

<div class="DoxyPrecond">

Precondition object != nullptr

</div>

<div class="DoxyPostcond">

Postcondition The iterator is initialized; i.e. m_object != nullptr.

</div>

<span id="classdetail_1_1iter__impl_af8d8847a82d9dab28bd4650ed13a7c90"
label="classdetail_1_1iter__impl_af8d8847a82d9dab28bd4650ed13a7c90"></span>

template$<$typename BasicJsonType $>$  
[detail::iter_impl](#classdetail_1_1iter__impl)$<$ BasicJsonType
$>$::iter_impl (

<div class="DoxyParamCaption">

other

</div>

),

const copy constructor

<div class="DoxyNote">

Note The conventional copy constructor and copy assignment are
implicitly defined. Combined with the following converting constructor
and assignment, they support: (1) copy from iterator to iterator, (2)
copy from const iterator to const iterator, and (3) conversion from
iterator to const iterator. However conversion from const iterator to
iterator is not defined.

</div>

<div class="DoxyParams">

Parameters ` in` & *other* & const iterator to copy from  

</div>

<div class="DoxyNote">

Note This copy constructor had to be defined explicitly to circumvent a
bug occurring on msvc v19. compiler (VS 2015) debug build. For more
information refer to:
[` https://github.com/nlohmann/json/issues/1608`](https://github.com/nlohmann/json/issues/1608)

</div>

<span id="classdetail_1_1iter__impl_a26079f33eb8a16683577cf3782558f26"
label="classdetail_1_1iter__impl_a26079f33eb8a16683577cf3782558f26"></span>

template$<$typename BasicJsonType $>$  
[detail::iter_impl](#classdetail_1_1iter__impl)$<$ BasicJsonType
$>$::iter_impl (

<div class="DoxyParamCaption">

other

</div>

),

converting constructor

<div class="DoxyParams">

Parameters ` in` & *other* & non-const iterator to copy from  

</div>

<div class="DoxyNote">

Note It is not checked whether *other* is initialized.

</div>

<span id="classdetail_1_1iter__impl_a4064b295014b32f3cabd86f94264fc74"
label="classdetail_1_1iter__impl_a4064b295014b32f3cabd86f94264fc74"></span>

template$<$typename BasicJsonType $>$  
const object_t::key_type &
[detail::iter_impl](#classdetail_1_1iter__impl)$<$ BasicJsonType
$>$::key (

<div class="DoxyParamCaption">

</div>

) const

return the key of an object iterator

<div class="DoxyPrecond">

Precondition The iterator is initialized; i.e. m_object != nullptr.

</div>

<span id="classdetail_1_1iter__impl_ae52db5f16f00edc13c848fe99e4c521b"
label="classdetail_1_1iter__impl_ae52db5f16f00edc13c848fe99e4c521b"></span>

template$<$typename BasicJsonType $>$  
template$<$typename IterImpl , detail::enable_if_t$<$(std::is_same$<$
IterImpl, [iter_impl](#classdetail_1_1iter__impl)
$>$[::value](#classdetail_1_1iter__impl_a96557c87bc9b3adf6aa0b1a6b6209525)$\vert$$\vert$std::is_same$<$
IterImpl, other_iter_impl
$>$[::value](#classdetail_1_1iter__impl_a96557c87bc9b3adf6aa0b1a6b6209525)),
std::nullptr_t $>$ = nullptr$>$  
bool [detail::iter_impl](#classdetail_1_1iter__impl)$<$ BasicJsonType
$>$::operator!= (

<div class="DoxyParamCaption">

other

</div>

) const

comparison: not equal

<div class="DoxyPrecond">

Precondition The iterator is initialized; i.e. m_object != nullptr.

</div>

<span id="classdetail_1_1iter__impl_abbef7d5bdb2c45980a34e907610c32b2"
label="classdetail_1_1iter__impl_abbef7d5bdb2c45980a34e907610c32b2"></span>

template$<$typename BasicJsonType $>$  
[reference](#classdetail_1_1iter__impl_ac0cfb3a9727e77580cb1beada093ee81)
[detail::iter_impl](#classdetail_1_1iter__impl)$<$ BasicJsonType
$>$::operator$\ast$ (

<div class="DoxyParamCaption">

</div>

) const

return a reference to the value pointed to by the iterator

<div class="DoxyPrecond">

Precondition The iterator is initialized; i.e. m_object != nullptr.

</div>

<span id="classdetail_1_1iter__impl_a03abdffc86382e7c2a7c462c217d120e"
label="classdetail_1_1iter__impl_a03abdffc86382e7c2a7c462c217d120e"></span>

template$<$typename BasicJsonType $>$  
[iter_impl](#classdetail_1_1iter__impl)
[detail::iter_impl](#classdetail_1_1iter__impl)$<$ BasicJsonType
$>$::operator+ (

<div class="DoxyParamCaption">

i

</div>

) const

add to iterator

<div class="DoxyPrecond">

Precondition The iterator is initialized; i.e. m_object != nullptr.

</div>

<span id="classdetail_1_1iter__impl_ab0288ec335f563769a09fba1123c076c"
label="classdetail_1_1iter__impl_ab0288ec335f563769a09fba1123c076c"></span>

template$<$typename BasicJsonType $>$  
[iter_impl](#classdetail_1_1iter__impl) &
[detail::iter_impl](#classdetail_1_1iter__impl)$<$ BasicJsonType
$>$::operator++ (

<div class="DoxyParamCaption">

</div>

)

pre-increment (++it)

<div class="DoxyPrecond">

Precondition The iterator is initialized; i.e. m_object != nullptr.

</div>

<span id="classdetail_1_1iter__impl_a5a1af6b2cd3611778b697bb7d7107f0d"
label="classdetail_1_1iter__impl_a5a1af6b2cd3611778b697bb7d7107f0d"></span>

template$<$typename BasicJsonType $>$  
[iter_impl](#classdetail_1_1iter__impl)
[detail::iter_impl](#classdetail_1_1iter__impl)$<$ BasicJsonType
$>$::operator++ (

<div class="DoxyParamCaption">

</div>

) &

post-increment (it++)

<div class="DoxyPrecond">

Precondition The iterator is initialized; i.e. m_object != nullptr.

</div>

<span id="classdetail_1_1iter__impl_a5e2dd333526ae85044fe78f65aac9b52"
label="classdetail_1_1iter__impl_a5e2dd333526ae85044fe78f65aac9b52"></span>

template$<$typename BasicJsonType $>$  
[iter_impl](#classdetail_1_1iter__impl) &
[detail::iter_impl](#classdetail_1_1iter__impl)$<$ BasicJsonType
$>$::operator+= (

<div class="DoxyParamCaption">

i

</div>

)

add to iterator

<div class="DoxyPrecond">

Precondition The iterator is initialized; i.e. m_object != nullptr.

</div>

<span id="classdetail_1_1iter__impl_a848837b8db99998c90d7bd71492d0dee"
label="classdetail_1_1iter__impl_a848837b8db99998c90d7bd71492d0dee"></span>

template$<$typename BasicJsonType $>$  
[difference_type](#classdetail_1_1iter__impl_a6d51e1372282929d1c240223aa973c6e)
[detail::iter_impl](#classdetail_1_1iter__impl)$<$ BasicJsonType
$>$::operator- (

<div class="DoxyParamCaption">

other

</div>

) const

return difference

<div class="DoxyPrecond">

Precondition The iterator is initialized; i.e. m_object != nullptr.

</div>

<span id="classdetail_1_1iter__impl_abfcadba7a9796c3f5a5e123efef349ec"
label="classdetail_1_1iter__impl_abfcadba7a9796c3f5a5e123efef349ec"></span>

template$<$typename BasicJsonType $>$  
[iter_impl](#classdetail_1_1iter__impl)
[detail::iter_impl](#classdetail_1_1iter__impl)$<$ BasicJsonType
$>$::operator- (

<div class="DoxyParamCaption">

i

</div>

) const

subtract from iterator

<div class="DoxyPrecond">

Precondition The iterator is initialized; i.e. m_object != nullptr.

</div>

<span id="classdetail_1_1iter__impl_a3b7d07348aaaaf3eda9bd98b7d80415f"
label="classdetail_1_1iter__impl_a3b7d07348aaaaf3eda9bd98b7d80415f"></span>

template$<$typename BasicJsonType $>$  
[iter_impl](#classdetail_1_1iter__impl) &
[detail::iter_impl](#classdetail_1_1iter__impl)$<$ BasicJsonType
$>$::operator-- (

<div class="DoxyParamCaption">

</div>

)

pre-decrement (–it)

<div class="DoxyPrecond">

Precondition The iterator is initialized; i.e. m_object != nullptr.

</div>

<span id="classdetail_1_1iter__impl_ae8c229d46359424bf850f1ecb5587a70"
label="classdetail_1_1iter__impl_ae8c229d46359424bf850f1ecb5587a70"></span>

template$<$typename BasicJsonType $>$  
[iter_impl](#classdetail_1_1iter__impl)
[detail::iter_impl](#classdetail_1_1iter__impl)$<$ BasicJsonType
$>$::operator-- (

<div class="DoxyParamCaption">

</div>

) &

post-decrement (it–)

<div class="DoxyPrecond">

Precondition The iterator is initialized; i.e. m_object != nullptr.

</div>

<span id="classdetail_1_1iter__impl_a3b48ed5856ca2011e8463d868fda3d0b"
label="classdetail_1_1iter__impl_a3b48ed5856ca2011e8463d868fda3d0b"></span>

template$<$typename BasicJsonType $>$  
[iter_impl](#classdetail_1_1iter__impl) &
[detail::iter_impl](#classdetail_1_1iter__impl)$<$ BasicJsonType
$>$::operator-= (

<div class="DoxyParamCaption">

i

</div>

)

subtract from iterator

<div class="DoxyPrecond">

Precondition The iterator is initialized; i.e. m_object != nullptr.

</div>

<span id="classdetail_1_1iter__impl_a72314a87e67ba523f1be2f014f4eab56"
label="classdetail_1_1iter__impl_a72314a87e67ba523f1be2f014f4eab56"></span>

template$<$typename BasicJsonType $>$  
[pointer](#classdetail_1_1iter__impl_a5f32f4fdd48a9b92ecb156af6421b1b8)
[detail::iter_impl](#classdetail_1_1iter__impl)$<$ BasicJsonType
$>$::operator-$>$ (

<div class="DoxyParamCaption">

</div>

) const

dereference the iterator

<div class="DoxyPrecond">

Precondition The iterator is initialized; i.e. m_object != nullptr.

</div>

<span id="classdetail_1_1iter__impl_a339df296df7f5d014d5c7cedf40497da"
label="classdetail_1_1iter__impl_a339df296df7f5d014d5c7cedf40497da"></span>

template$<$typename BasicJsonType $>$  
bool [detail::iter_impl](#classdetail_1_1iter__impl)$<$ BasicJsonType
$>$::operator$<$ (

<div class="DoxyParamCaption">

other

</div>

) const

comparison: smaller

<div class="DoxyPrecond">

Precondition The iterator is initialized; i.e. m_object != nullptr.

</div>

<span id="classdetail_1_1iter__impl_a343806ffb02d7ce5266492128dfd5f9b"
label="classdetail_1_1iter__impl_a343806ffb02d7ce5266492128dfd5f9b"></span>

template$<$typename BasicJsonType $>$  
bool [detail::iter_impl](#classdetail_1_1iter__impl)$<$ BasicJsonType
$>$::operator$<$= (

<div class="DoxyParamCaption">

other

</div>

) const

comparison: less than or equal

<div class="DoxyPrecond">

Precondition The iterator is initialized; i.e. m_object != nullptr.

</div>

<span id="classdetail_1_1iter__impl_ae347fdf39e75d13ce488335ef1529b27"
label="classdetail_1_1iter__impl_ae347fdf39e75d13ce488335ef1529b27"></span>

template$<$typename BasicJsonType $>$  
[iter_impl](#classdetail_1_1iter__impl) &
[detail::iter_impl](#classdetail_1_1iter__impl)$<$ BasicJsonType
$>$::operator= (

<div class="DoxyParamCaption">

other

</div>

),

converting assignment

<div class="DoxyParams">

Parameters ` in` & *other* & const iterator to copy from  

</div>

<div class="DoxyReturn">

Returns const/non-const iterator

</div>

<div class="DoxyNote">

Note It is not checked whether *other* is initialized.

</div>

<span id="classdetail_1_1iter__impl_a228140be2554afd5dfe54d4194780b7c"
label="classdetail_1_1iter__impl_a228140be2554afd5dfe54d4194780b7c"></span>

template$<$typename BasicJsonType $>$  
[iter_impl](#classdetail_1_1iter__impl) &
[detail::iter_impl](#classdetail_1_1iter__impl)$<$ BasicJsonType
$>$::operator= (

<div class="DoxyParamCaption">

other

</div>

),

converting assignment

<div class="DoxyParams">

Parameters ` in` & *other* & non-const iterator to copy from  

</div>

<div class="DoxyReturn">

Returns const/non-const iterator

</div>

<div class="DoxyNote">

Note It is not checked whether *other* is initialized.

</div>

<span id="classdetail_1_1iter__impl_a57b4e1eee4a3cdb3c0683cf64979da8d"
label="classdetail_1_1iter__impl_a57b4e1eee4a3cdb3c0683cf64979da8d"></span>

template$<$typename BasicJsonType $>$  
template$<$typename IterImpl , detail::enable_if_t$<$(std::is_same$<$
IterImpl, [iter_impl](#classdetail_1_1iter__impl)
$>$[::value](#classdetail_1_1iter__impl_a96557c87bc9b3adf6aa0b1a6b6209525)$\vert$$\vert$std::is_same$<$
IterImpl, other_iter_impl
$>$[::value](#classdetail_1_1iter__impl_a96557c87bc9b3adf6aa0b1a6b6209525)),
std::nullptr_t $>$ = nullptr$>$  
bool [detail::iter_impl](#classdetail_1_1iter__impl)$<$ BasicJsonType
$>$::operator== (

<div class="DoxyParamCaption">

other

</div>

) const

comparison: equal

<div class="DoxyPrecond">

Precondition The iterator is initialized; i.e. m_object != nullptr.

</div>

<span id="classdetail_1_1iter__impl_a9b066d888f2f0ad0cd601594661a8e8b"
label="classdetail_1_1iter__impl_a9b066d888f2f0ad0cd601594661a8e8b"></span>

template$<$typename BasicJsonType $>$  
bool [detail::iter_impl](#classdetail_1_1iter__impl)$<$ BasicJsonType
$>$::operator$>$ (

<div class="DoxyParamCaption">

other

</div>

) const

comparison: greater than

<div class="DoxyPrecond">

Precondition The iterator is initialized; i.e. m_object != nullptr.

</div>

<span id="classdetail_1_1iter__impl_a25a3a8e85eb37727487f210f5304a48e"
label="classdetail_1_1iter__impl_a25a3a8e85eb37727487f210f5304a48e"></span>

template$<$typename BasicJsonType $>$  
bool [detail::iter_impl](#classdetail_1_1iter__impl)$<$ BasicJsonType
$>$::operator$>$= (

<div class="DoxyParamCaption">

other

</div>

) const

comparison: greater than or equal

<div class="DoxyPrecond">

Precondition The iterator is initialized; i.e. m_object != nullptr.

</div>

<span id="classdetail_1_1iter__impl_a5e557e30103e2af36cd8173c88eb586c"
label="classdetail_1_1iter__impl_a5e557e30103e2af36cd8173c88eb586c"></span>

template$<$typename BasicJsonType $>$  
[reference](#classdetail_1_1iter__impl_ac0cfb3a9727e77580cb1beada093ee81)
[detail::iter_impl](#classdetail_1_1iter__impl)$<$ BasicJsonType
$>$::operator\[$\,$\] (

<div class="DoxyParamCaption">

n

</div>

) const

access to successor

<div class="DoxyPrecond">

Precondition The iterator is initialized; i.e. m_object != nullptr.

</div>

<span id="classdetail_1_1iter__impl_afc94db3b8f35616347c25fae68e09509"
label="classdetail_1_1iter__impl_afc94db3b8f35616347c25fae68e09509"></span>

template$<$typename BasicJsonType $>$  
void [detail::iter_impl](#classdetail_1_1iter__impl)$<$ BasicJsonType
$>$::set_end (

<div class="DoxyParamCaption">

</div>

),

set the iterator past the last value

<div class="DoxyPrecond">

Precondition The iterator is initialized; i.e. m_object != nullptr.

</div>

<span id="classdetail_1_1iter__impl_a96557c87bc9b3adf6aa0b1a6b6209525"
label="classdetail_1_1iter__impl_a96557c87bc9b3adf6aa0b1a6b6209525"></span>

template$<$typename BasicJsonType $>$  
[reference](#classdetail_1_1iter__impl_ac0cfb3a9727e77580cb1beada093ee81)
[detail::iter_impl](#classdetail_1_1iter__impl)$<$ BasicJsonType
$>$::value (

<div class="DoxyParamCaption">

</div>

) const

return the value of an iterator

<div class="DoxyPrecond">

Precondition The iterator is initialized; i.e. m_object != nullptr.

</div>

<span id="classdetail_1_1iter__impl_a94108d1a7563e103534f23eb5c1ee175"
label="classdetail_1_1iter__impl_a94108d1a7563e103534f23eb5c1ee175"></span>

template$<$typename BasicJsonType $>$  
[iter_impl](#classdetail_1_1iter__impl) operator+ (

<div class="DoxyParamCaption">

i,

it

</div>

)

addition of distance and iterator

<div class="DoxyPrecond">

Precondition The iterator is initialized; i.e. m_object != nullptr.

</div>

The documentation for this class was generated from the following file:

<div class="DoxyCompactItemize">

MacGyver/json.hpp

</div>
