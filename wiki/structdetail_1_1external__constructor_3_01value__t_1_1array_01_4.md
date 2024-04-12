<div id="structdetail_1_1external__constructor_3_01value__t_1_1array_01_4">

</div>

<span id="structdetail_1_1external__constructor_3_01value__t_1_1array_01_4"
label="structdetail_1_1external__constructor_3_01value__t_1_1array_01_4"></span>

<div class="DoxyCompactItemize">

<span id="structdetail_1_1external__constructor_3_01value__t_1_1array_01_4_ab4ee01b86545c25823e95f06bfb8cec3"
label="structdetail_1_1external__constructor_3_01value__t_1_1array_01_4_ab4ee01b86545c25823e95f06bfb8cec3"></span>
template$<$typename BasicJsonType $>$   
static void **construct** (BasicJsonType &j, const typename
BasicJsonType::array_t &arr)

<span id="structdetail_1_1external__constructor_3_01value__t_1_1array_01_4_aa1344db7d6793021693563dca416e5b4"
label="structdetail_1_1external__constructor_3_01value__t_1_1array_01_4_aa1344db7d6793021693563dca416e5b4"></span>
template$<$typename BasicJsonType $>$   
static void **construct** (BasicJsonType &j, typename
BasicJsonType::array_t &&arr)

<span id="structdetail_1_1external__constructor_3_01value__t_1_1array_01_4_ae399adc0d10013a567e8646807d650b5"
label="structdetail_1_1external__constructor_3_01value__t_1_1array_01_4_ae399adc0d10013a567e8646807d650b5"></span>
template$<$typename BasicJsonType , typename CompatibleArrayType ,
enable_if_t$<$ !std::is_same$<$ CompatibleArrayType, typename
BasicJsonType::array_t
$>$[::value](#namespacedetail_a47b1bb0bbd3596589ed9187059c312efa2063c1608d6e0baf80249c42e2be5804),
int $>$ = 0$>$   
static void **construct** (BasicJsonType &j, const CompatibleArrayType
&arr)

<span id="structdetail_1_1external__constructor_3_01value__t_1_1array_01_4_a8d6adedb6b308d21cd8a02b68f6cb3c3"
label="structdetail_1_1external__constructor_3_01value__t_1_1array_01_4_a8d6adedb6b308d21cd8a02b68f6cb3c3"></span>
template$<$typename BasicJsonType $>$   
static void **construct** (BasicJsonType &j, const std::vector$<$ bool
$>$ &arr)

<span id="structdetail_1_1external__constructor_3_01value__t_1_1array_01_4_afe050b2957d0a1f416107909d919a772"
label="structdetail_1_1external__constructor_3_01value__t_1_1array_01_4_afe050b2957d0a1f416107909d919a772"></span>
template$<$typename BasicJsonType , typename T , enable_if_t$<$
std::is_convertible$<$ T, BasicJsonType
$>$[::value](#namespacedetail_a47b1bb0bbd3596589ed9187059c312efa2063c1608d6e0baf80249c42e2be5804),
int $>$ = 0$>$   
static void **construct** (BasicJsonType &j, const std::valarray$<$ T
$>$ &arr)

</div>

The documentation for this struct was generated from the following file:

<div class="DoxyCompactItemize">

MacGyver/json.hpp

</div>
