<div id="classdetail_1_1span__input__adapter">

</div>

<span id="classdetail_1_1span__input__adapter"
label="classdetail_1_1span__input__adapter"></span>

<div class="DoxyCompactItemize">

<span id="classdetail_1_1span__input__adapter_a100cb2415f6ad4fb60e3848569ed20dc"
label="classdetail_1_1span__input__adapter_a100cb2415f6ad4fb60e3848569ed20dc"></span>
template$<$typename CharT , typename std::enable_if$<$
std::is_pointer$<$ CharT
$>$[::value](#namespacedetail_a47b1bb0bbd3596589ed9187059c312efa2063c1608d6e0baf80249c42e2be5804)
&&std::is_integral$<$ typename std::remove_pointer$<$ CharT $>$::type
$>$[::value](#namespacedetail_a47b1bb0bbd3596589ed9187059c312efa2063c1608d6e0baf80249c42e2be5804)
&&sizeof(typename std::remove_pointer$<$ CharT $>$::type)==1, int
$>$::type = 0$>$   
**span_input_adapter** (CharT b, std::size_t l)

<span id="classdetail_1_1span__input__adapter_a8f3a694242ffd71722d292ffa9156e79"
label="classdetail_1_1span__input__adapter_a8f3a694242ffd71722d292ffa9156e79"></span>
template$<$class IteratorType , typename std::enable_if$<$
std::is_same$<$ typename
[iterator_traits](#structdetail_1_1iterator__traits)$<$ IteratorType
$>$::iterator_category, std::random_access_iterator_tag
$>$[::value](#namespacedetail_a47b1bb0bbd3596589ed9187059c312efa2063c1608d6e0baf80249c42e2be5804),
int $>$::type = 0$>$   
**span_input_adapter** (IteratorType first, IteratorType last)

<span id="classdetail_1_1span__input__adapter_adaf5823194cdd254da0ba4f550e77904"
label="classdetail_1_1span__input__adapter_adaf5823194cdd254da0ba4f550e77904"></span>
contiguous_bytes_input_adapter && **get** ()

</div>

The documentation for this class was generated from the following file:

<div class="DoxyCompactItemize">

MacGyver/json.hpp

</div>
