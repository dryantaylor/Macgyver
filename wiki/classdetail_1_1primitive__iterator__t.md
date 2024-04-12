<div id="classdetail_1_1primitive__iterator__t">

</div>

<span id="classdetail_1_1primitive__iterator__t"
label="classdetail_1_1primitive__iterator__t"></span>

<div class="DoxyCompactItemize">

<span id="classdetail_1_1primitive__iterator__t_abc361e982ed6a4545dde3a30f9212d9b"
label="classdetail_1_1primitive__iterator__t_abc361e982ed6a4545dde3a30f9212d9b"></span>
constexpr difference_type **get_value** () const noexcept

<span id="classdetail_1_1primitive__iterator__t_ae05402e355829cd46a9b31365a7b1a49"
label="classdetail_1_1primitive__iterator__t_ae05402e355829cd46a9b31365a7b1a49"></span>
void **set_begin** () noexcept

<div class="DoxyCompactList">

*set iterator to a defined beginning*

</div>

<span id="classdetail_1_1primitive__iterator__t_a761383c368d1c32f11bbeb31a04e6488"
label="classdetail_1_1primitive__iterator__t_a761383c368d1c32f11bbeb31a04e6488"></span>
void **set_end** () noexcept

<div class="DoxyCompactList">

*set iterator to a defined past the end*

</div>

<span id="classdetail_1_1primitive__iterator__t_a46f7197f0ba0ef7c1f24caf3f7f52d6b"
label="classdetail_1_1primitive__iterator__t_a46f7197f0ba0ef7c1f24caf3f7f52d6b"></span>
constexpr bool **is_begin** () const noexcept

<div class="DoxyCompactList">

*return whether the iterator can be dereferenced*

</div>

<span id="classdetail_1_1primitive__iterator__t_a9b8509ec7a7cbd4b1da3726be658f5a0"
label="classdetail_1_1primitive__iterator__t_a9b8509ec7a7cbd4b1da3726be658f5a0"></span>
constexpr bool **is_end** () const noexcept

<div class="DoxyCompactList">

*return whether the iterator is at end*

</div>

<span id="classdetail_1_1primitive__iterator__t_acc22136675807ea8caccb944264ea918"
label="classdetail_1_1primitive__iterator__t_acc22136675807ea8caccb944264ea918"></span>
[primitive_iterator_t](#classdetail_1_1primitive__iterator__t)
**operator+** (difference_type n) noexcept

<span id="classdetail_1_1primitive__iterator__t_a056779169e97913504f95584a37d1c8c"
label="classdetail_1_1primitive__iterator__t_a056779169e97913504f95584a37d1c8c"></span>
[primitive_iterator_t](#classdetail_1_1primitive__iterator__t) &
**operator++** () noexcept

<span id="classdetail_1_1primitive__iterator__t_aa2898a585da8dc77207b15ac9e703863"
label="classdetail_1_1primitive__iterator__t_aa2898a585da8dc77207b15ac9e703863"></span>
[primitive_iterator_t](#classdetail_1_1primitive__iterator__t)
**operator++** (int) &noexcept

<span id="classdetail_1_1primitive__iterator__t_a67803e850acd1c96c79ba45da33faf35"
label="classdetail_1_1primitive__iterator__t_a67803e850acd1c96c79ba45da33faf35"></span>
[primitive_iterator_t](#classdetail_1_1primitive__iterator__t) &
**operator--** () noexcept

<span id="classdetail_1_1primitive__iterator__t_ae0c3dbc516ad0ac75e7d14556e8c80b7"
label="classdetail_1_1primitive__iterator__t_ae0c3dbc516ad0ac75e7d14556e8c80b7"></span>
[primitive_iterator_t](#classdetail_1_1primitive__iterator__t)
**operator--** (int) &noexcept

<span id="classdetail_1_1primitive__iterator__t_aa8b891476428688c867b2c9c9da96f23"
label="classdetail_1_1primitive__iterator__t_aa8b891476428688c867b2c9c9da96f23"></span>
[primitive_iterator_t](#classdetail_1_1primitive__iterator__t) &
**operator+=** (difference_type n) noexcept

<span id="classdetail_1_1primitive__iterator__t_a06a467805e83af63b4428325889cf5c4"
label="classdetail_1_1primitive__iterator__t_a06a467805e83af63b4428325889cf5c4"></span>
[primitive_iterator_t](#classdetail_1_1primitive__iterator__t) &
**operator-=** (difference_type n) noexcept

</div>

<div class="DoxyCompactItemize">

<span id="classdetail_1_1primitive__iterator__t_aae1e1e2ec0e229d1291d69de57d76bbe"
label="classdetail_1_1primitive__iterator__t_aae1e1e2ec0e229d1291d69de57d76bbe"></span>
constexpr bool **operator==**
([primitive_iterator_t](#classdetail_1_1primitive__iterator__t) lhs,
[primitive_iterator_t](#classdetail_1_1primitive__iterator__t) rhs)
noexcept

<span id="classdetail_1_1primitive__iterator__t_a901a95e6d73c9509d3dcde914f6c8a9d"
label="classdetail_1_1primitive__iterator__t_a901a95e6d73c9509d3dcde914f6c8a9d"></span>
constexpr bool **operator$<$**
([primitive_iterator_t](#classdetail_1_1primitive__iterator__t) lhs,
[primitive_iterator_t](#classdetail_1_1primitive__iterator__t) rhs)
noexcept

<span id="classdetail_1_1primitive__iterator__t_ac6d902d6ec9a02dabed5452d3ae78f7e"
label="classdetail_1_1primitive__iterator__t_ac6d902d6ec9a02dabed5452d3ae78f7e"></span>
constexpr difference_type **operator-**
([primitive_iterator_t](#classdetail_1_1primitive__iterator__t) lhs,
[primitive_iterator_t](#classdetail_1_1primitive__iterator__t) rhs)
noexcept

</div>

The documentation for this class was generated from the following file:

<div class="DoxyCompactItemize">

MacGyver/json.hpp

</div>
