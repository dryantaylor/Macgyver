<div id="structordered__map">

</div>

<span id="structordered__map" label="structordered__map"></span>

a minimal map-like container that preserves insertion order

\#include $<$json.hpp$>$

Inheritance diagram for ordered_map$<$ Key, T, IgnoredLess, Allocator
$>$:

<figure>
<div class="center">
<img src="structordered__map" style="height:2cm" />
</div>
</figure>

<div class="DoxyCompactItemize">

<span id="structordered__map_abe63d891859a3d0b156933d5b44ac85f"
label="structordered__map_abe63d891859a3d0b156933d5b44ac85f"></span>
using **key_type** = Key

<span id="structordered__map_a50a68289ec9c8554e5bbb7d0a2128c33"
label="structordered__map_a50a68289ec9c8554e5bbb7d0a2128c33"></span>
using **mapped_type** = T

<span id="structordered__map_a18acd5b0134d2e378160031996ed3ddc"
label="structordered__map_a18acd5b0134d2e378160031996ed3ddc"></span>
using **Container** = std::vector$<$std::pair$<$const Key, T$>$,
Allocator$>$

<span id="structordered__map_a57c27034b40422a4b37ab8f4f60b9f14"
label="structordered__map_a57c27034b40422a4b37ab8f4f60b9f14"></span>
using **iterator** = typename Container::iterator

<span id="structordered__map_aeb48abad4ceb24e60002c6220d8b18b4"
label="structordered__map_aeb48abad4ceb24e60002c6220d8b18b4"></span>
using **const_iterator** = typename Container::const_iterator

<span id="structordered__map_a832acce07db0bec6c73675b35ad399c2"
label="structordered__map_a832acce07db0bec6c73675b35ad399c2"></span>
using **size_type** = typename Container::size_type

<span id="structordered__map_a49a3a4f4eb960dcbcc15fd2692f18a91"
label="structordered__map_a49a3a4f4eb960dcbcc15fd2692f18a91"></span>
using **value_type** = typename Container::value_type

<span id="structordered__map_a4bbf207217197f997a9f3da8f149368b"
label="structordered__map_a4bbf207217197f997a9f3da8f149368b"></span>
using **key_compare** = std::equal_to$<$Key$>$

template$<$typename InputIt $>$   
using
[require_input_iter](#structordered__map_a5d64ca358ee69b09b53645baefe317cf)

</div>

<div class="DoxyCompactItemize">

<span id="structordered__map_a50b6eea717a66fb6241bbd2e0246849f"
label="structordered__map_a50b6eea717a66fb6241bbd2e0246849f"></span>
**ordered_map** (const Allocator &alloc)
noexcept(noexcept(Container(alloc)))

<span id="structordered__map_ac0fa192a94f9d4bba7ae4fc3eedd583f"
label="structordered__map_ac0fa192a94f9d4bba7ae4fc3eedd583f"></span>
template$<$class It $>$   
**ordered_map** (It first, It last, const Allocator &alloc=Allocator())

<span id="structordered__map_ab57d658b6e341a80a7a882c0d5cf38e0"
label="structordered__map_ab57d658b6e341a80a7a882c0d5cf38e0"></span>
**ordered_map** (std::initializer_list$<$ value_type $>$ init, const
Allocator &alloc=Allocator())

<span id="structordered__map_af10e949a24c4732fd00cb562f2100bf2"
label="structordered__map_af10e949a24c4732fd00cb562f2100bf2"></span>
std::pair$<$ iterator, bool $>$ **emplace** (const key_type &key, T &&t)

<span id="structordered__map_a96f82e84243f3d17fb9d584262df183e"
label="structordered__map_a96f82e84243f3d17fb9d584262df183e"></span>
template$<$class KeyType , detail::enable_if_t$<$
detail::is_usable_as_key_type$<$ key_compare, key_type, KeyType
$>$::value, int $>$ = 0$>$   
std::pair$<$ iterator, bool $>$ **emplace** (KeyType &&key, T &&t)

<span id="structordered__map_a77e420320702cc341ea1a3be4389c321"
label="structordered__map_a77e420320702cc341ea1a3be4389c321"></span> T &
**operator\[$\,$\]** (const key_type &key)

<span id="structordered__map_a51784a0c6bb5f61d123d729d8380448b"
label="structordered__map_a51784a0c6bb5f61d123d729d8380448b"></span>
template$<$class KeyType , detail::enable_if_t$<$
detail::is_usable_as_key_type$<$ key_compare, key_type, KeyType
$>$::value, int $>$ = 0$>$   
T & **operator\[$\,$\]** (KeyType &&key)

<span id="structordered__map_ac6c0136296a6ad89948fc23e057f14e0"
label="structordered__map_ac6c0136296a6ad89948fc23e057f14e0"></span>
const T & **operator\[$\,$\]** (const key_type &key) const

<span id="structordered__map_a5ff84bb2df6faf249535aa196373155a"
label="structordered__map_a5ff84bb2df6faf249535aa196373155a"></span>
template$<$class KeyType , detail::enable_if_t$<$
detail::is_usable_as_key_type$<$ key_compare, key_type, KeyType
$>$::value, int $>$ = 0$>$   
const T & **operator\[$\,$\]** (KeyType &&key) const

<span id="structordered__map_ad76186edef70d3249c26efe3c2efcd4b"
label="structordered__map_ad76186edef70d3249c26efe3c2efcd4b"></span> T &
**at** (const key_type &key)

<span id="structordered__map_a5f4b6b084c11eafdad36171487c4b724"
label="structordered__map_a5f4b6b084c11eafdad36171487c4b724"></span>
template$<$class KeyType , detail::enable_if_t$<$
detail::is_usable_as_key_type$<$ key_compare, key_type, KeyType
$>$::value, int $>$ = 0$>$   
T & **at** (KeyType &&key)

<span id="structordered__map_a6c80b0a9084177596ec87759d683dc7f"
label="structordered__map_a6c80b0a9084177596ec87759d683dc7f"></span>
const T & **at** (const key_type &key) const

<span id="structordered__map_a57d4781cdf5ce839172d3537bb8c67da"
label="structordered__map_a57d4781cdf5ce839172d3537bb8c67da"></span>
template$<$class KeyType , detail::enable_if_t$<$
detail::is_usable_as_key_type$<$ key_compare, key_type, KeyType
$>$::value, int $>$ = 0$>$   
const T & **at** (KeyType &&key) const

<span id="structordered__map_aaa50926fc8df543dbe294859db97514e"
label="structordered__map_aaa50926fc8df543dbe294859db97514e"></span>
size_type **erase** (const key_type &key)

<span id="structordered__map_a7d72919fabb5f477e69add51877e415f"
label="structordered__map_a7d72919fabb5f477e69add51877e415f"></span>
template$<$class KeyType , detail::enable_if_t$<$
detail::is_usable_as_key_type$<$ key_compare, key_type, KeyType
$>$::value, int $>$ = 0$>$   
size_type **erase** (KeyType &&key)

<span id="structordered__map_a4c3baa0920e81bd651ea01b9d735951b"
label="structordered__map_a4c3baa0920e81bd651ea01b9d735951b"></span>
iterator **erase** (iterator pos)

<span id="structordered__map_a6945910b941f51c9a81250d99ae34441"
label="structordered__map_a6945910b941f51c9a81250d99ae34441"></span>
iterator **erase** (iterator first, iterator last)

<span id="structordered__map_a94ced73a996cf385aa68b6aae1f85dfe"
label="structordered__map_a94ced73a996cf385aa68b6aae1f85dfe"></span>
size_type **count** (const key_type &key) const

<span id="structordered__map_abd35ff8bb3cfe4b8951f382fdfb617e5"
label="structordered__map_abd35ff8bb3cfe4b8951f382fdfb617e5"></span>
template$<$class KeyType , detail::enable_if_t$<$
detail::is_usable_as_key_type$<$ key_compare, key_type, KeyType
$>$::value, int $>$ = 0$>$   
size_type **count** (KeyType &&key) const

<span id="structordered__map_a67c6dfc6bc7817980067b40db5c252a4"
label="structordered__map_a67c6dfc6bc7817980067b40db5c252a4"></span>
iterator **find** (const key_type &key)

<span id="structordered__map_ad3072ca1fdc7dd9f88d5d043deab9639"
label="structordered__map_ad3072ca1fdc7dd9f88d5d043deab9639"></span>
template$<$class KeyType , detail::enable_if_t$<$
detail::is_usable_as_key_type$<$ key_compare, key_type, KeyType
$>$::value, int $>$ = 0$>$   
iterator **find** (KeyType &&key)

<span id="structordered__map_a73a21fcebe6f068cd2226c5586ac93d7"
label="structordered__map_a73a21fcebe6f068cd2226c5586ac93d7"></span>
const_iterator **find** (const key_type &key) const

<span id="structordered__map_a1df7da27bb3596044089f9a074a8f6d2"
label="structordered__map_a1df7da27bb3596044089f9a074a8f6d2"></span>
std::pair$<$ iterator, bool $>$ **insert** (value_type &&value)

<span id="structordered__map_ab78e859d8a867e7673bfb7f27c447ed8"
label="structordered__map_ab78e859d8a867e7673bfb7f27c447ed8"></span>
std::pair$<$ iterator, bool $>$ **insert** (const value_type &value)

<span id="structordered__map_a8e19c1dfa836a39b16b0ce259447a61a"
label="structordered__map_a8e19c1dfa836a39b16b0ce259447a61a"></span>
template$<$typename InputIt , typename =
require_input_iter$<$InputIt$>$$>$   
void **insert** (InputIt first, InputIt last)

</div>

### template$<$class Key, class T, class IgnoredLess = std::less$<$Key$>$, class Allocator = std::allocator$<$std::pair$<$const Key, T$>$$>$$>$ struct ordered_map$<$ Key, T, IgnoredLess, Allocator $>$

a minimal map-like container that preserves insertion order

<div class="DoxySeeAlso">

See also
[` https://json.nlohmann.me/api/ordered_map/`](https://json.nlohmann.me/api/ordered_map/)

</div>

: a minimal map-like container that preserves insertion order for use
within nlohmann::basic_json$<$ordered_map$>$

<span id="structordered__map_a5d64ca358ee69b09b53645baefe317cf"
label="structordered__map_a5d64ca358ee69b09b53645baefe317cf"></span>
template$<$class Key , class T , class IgnoredLess = std::less$<$Key$>$,
class Allocator = std::allocator$<$std::pair$<$const Key, T$>$$>$$>$  
template$<$typename InputIt $>$  
using [ordered_map](#structordered__map)$<$ Key, T, IgnoredLess,
Allocator $>$::require_input_iter

**Initial value:**

<div class="DoxyCode">

0

</div>

The documentation for this struct was generated from the following file:

<div class="DoxyCompactItemize">

MacGyver/json.hpp

</div>
