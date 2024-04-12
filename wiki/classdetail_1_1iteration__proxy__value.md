<div id="classdetail_1_1iteration__proxy__value">

</div>

<span id="classdetail_1_1iteration__proxy__value"
label="classdetail_1_1iteration__proxy__value"></span>

<div class="DoxyCompactItemize">

<span id="classdetail_1_1iteration__proxy__value_a3365781ff806e15a1cd99e6d0987c68d"
label="classdetail_1_1iteration__proxy__value_a3365781ff806e15a1cd99e6d0987c68d"></span>
using **difference_type** = std::ptrdiff_t

<span id="classdetail_1_1iteration__proxy__value_a6d72d5deb611fb7c5c909328b37cd04e"
label="classdetail_1_1iteration__proxy__value_a6d72d5deb611fb7c5c909328b37cd04e"></span>
using **value_type** =
[iteration_proxy_value](#classdetail_1_1iteration__proxy__value)

<span id="classdetail_1_1iteration__proxy__value_ac19cd4b8224e83f1c72f48bde9f069be"
label="classdetail_1_1iteration__proxy__value_ac19cd4b8224e83f1c72f48bde9f069be"></span>
using **pointer** =
[value_type](#classdetail_1_1iteration__proxy__value) $\ast$

<span id="classdetail_1_1iteration__proxy__value_a42589c936453407a85968f970556e7cd"
label="classdetail_1_1iteration__proxy__value_a42589c936453407a85968f970556e7cd"></span>
using **reference** =
[value_type](#classdetail_1_1iteration__proxy__value) &

<span id="classdetail_1_1iteration__proxy__value_ada4177e3926d326dd4f6a3e0b5ae9bfb"
label="classdetail_1_1iteration__proxy__value_ada4177e3926d326dd4f6a3e0b5ae9bfb"></span>
using **iterator_category** = std::input_iterator_tag

<span id="classdetail_1_1iteration__proxy__value_ae24efb92078513900c5576c780f67438"
label="classdetail_1_1iteration__proxy__value_ae24efb92078513900c5576c780f67438"></span>
using **string_type** = typename std::remove_cv$<$ typename
std::remove_reference$<$decltype(
std::declval$<$IteratorType$>$().[key](#classdetail_1_1iteration__proxy__value_ad12633bc0d3ac7a651381b174a7914ee)()
) $>$::type $>$::type

</div>

<div class="DoxyCompactItemize">

<span id="classdetail_1_1iteration__proxy__value_a527328f3b7fd0335c7bb16fb1b3ec12b"
label="classdetail_1_1iteration__proxy__value_a527328f3b7fd0335c7bb16fb1b3ec12b"></span>
**iteration_proxy_value** (IteratorType it, std::size_t array_index\_)
noexcept(std::is_nothrow_move_constructible$<$ IteratorType
$>$[::value](#classdetail_1_1iteration__proxy__value_aac08993af9f4f0bf3d058b4beae36a45)
&&std::is_nothrow_default_constructible$<$ string_type
$>$[::value](#classdetail_1_1iteration__proxy__value_aac08993af9f4f0bf3d058b4beae36a45))

<span id="classdetail_1_1iteration__proxy__value_a0c41d6f7810d152718a9a3e316f74d1f"
label="classdetail_1_1iteration__proxy__value_a0c41d6f7810d152718a9a3e316f74d1f"></span>
**iteration_proxy_value**
([iteration_proxy_value](#classdetail_1_1iteration__proxy__value) const
&)=default

<span id="classdetail_1_1iteration__proxy__value_ad68cadcbba3dc7144f4a5071e1cae3f9"
label="classdetail_1_1iteration__proxy__value_ad68cadcbba3dc7144f4a5071e1cae3f9"></span>
[iteration_proxy_value](#classdetail_1_1iteration__proxy__value) &
**operator=**
([iteration_proxy_value](#classdetail_1_1iteration__proxy__value) const
&)=default

<span id="classdetail_1_1iteration__proxy__value_a9d77923fa65e59bd4934d1990a4cc6eb"
label="classdetail_1_1iteration__proxy__value_a9d77923fa65e59bd4934d1990a4cc6eb"></span>
**iteration_proxy_value**
([iteration_proxy_value](#classdetail_1_1iteration__proxy__value) &&)
noexcept(std::is_nothrow_move_constructible$<$ IteratorType
$>$[::value](#classdetail_1_1iteration__proxy__value_aac08993af9f4f0bf3d058b4beae36a45)
&&std::is_nothrow_move_constructible$<$ string_type
$>$[::value](#classdetail_1_1iteration__proxy__value_aac08993af9f4f0bf3d058b4beae36a45))=default

<span id="classdetail_1_1iteration__proxy__value_adff567f158dbae5ef4d7f8c7e57ef4cc"
label="classdetail_1_1iteration__proxy__value_adff567f158dbae5ef4d7f8c7e57ef4cc"></span>
[iteration_proxy_value](#classdetail_1_1iteration__proxy__value) &
**operator=**
([iteration_proxy_value](#classdetail_1_1iteration__proxy__value) &&)
noexcept(std::is_nothrow_move_assignable$<$ IteratorType
$>$[::value](#classdetail_1_1iteration__proxy__value_aac08993af9f4f0bf3d058b4beae36a45)
&&std::is_nothrow_move_assignable$<$ string_type
$>$[::value](#classdetail_1_1iteration__proxy__value_aac08993af9f4f0bf3d058b4beae36a45))=default

<span id="classdetail_1_1iteration__proxy__value_a54d22aec1f615a38697466817d7cc819"
label="classdetail_1_1iteration__proxy__value_a54d22aec1f615a38697466817d7cc819"></span>
const [iteration_proxy_value](#classdetail_1_1iteration__proxy__value) &
**operator$\ast$** () const

<div class="DoxyCompactList">

*dereference operator (needed for range-based for)*

</div>

<span id="classdetail_1_1iteration__proxy__value_a52dffef3e0c58a6bcd5b8b9e6fcf4552"
label="classdetail_1_1iteration__proxy__value_a52dffef3e0c58a6bcd5b8b9e6fcf4552"></span>
[iteration_proxy_value](#classdetail_1_1iteration__proxy__value) &
**operator++** ()

<div class="DoxyCompactList">

*increment operator (needed for range-based for)*

</div>

<span id="classdetail_1_1iteration__proxy__value_a060a2100b3803588aa8693140d507fd8"
label="classdetail_1_1iteration__proxy__value_a060a2100b3803588aa8693140d507fd8"></span>
[iteration_proxy_value](#classdetail_1_1iteration__proxy__value)
**operator++** (int) &

<span id="classdetail_1_1iteration__proxy__value_a139d22be442a277268cfb78bb4eef95d"
label="classdetail_1_1iteration__proxy__value_a139d22be442a277268cfb78bb4eef95d"></span>
bool **operator==** (const
[iteration_proxy_value](#classdetail_1_1iteration__proxy__value) &o)
const

<div class="DoxyCompactList">

*equality operator (needed for InputIterator)*

</div>

<span id="classdetail_1_1iteration__proxy__value_a23745b98de19578adc4efb509e59be28"
label="classdetail_1_1iteration__proxy__value_a23745b98de19578adc4efb509e59be28"></span>
bool **operator!=** (const
[iteration_proxy_value](#classdetail_1_1iteration__proxy__value) &o)
const

<div class="DoxyCompactList">

*inequality operator (needed for range-based for)*

</div>

<span id="classdetail_1_1iteration__proxy__value_ad12633bc0d3ac7a651381b174a7914ee"
label="classdetail_1_1iteration__proxy__value_ad12633bc0d3ac7a651381b174a7914ee"></span>
const string_type & **key** () const

<div class="DoxyCompactList">

*return key of the iterator*

</div>

<span id="classdetail_1_1iteration__proxy__value_aac08993af9f4f0bf3d058b4beae36a45"
label="classdetail_1_1iteration__proxy__value_aac08993af9f4f0bf3d058b4beae36a45"></span>
IteratorType::reference **value** () const

<div class="DoxyCompactList">

*return value of the iterator*

</div>

</div>

The documentation for this class was generated from the following file:

<div class="DoxyCompactItemize">

MacGyver/json.hpp

</div>
