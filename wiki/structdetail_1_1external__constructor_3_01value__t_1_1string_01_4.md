<div id="structdetail_1_1external__constructor_3_01value__t_1_1string_01_4">

</div>

<span id="structdetail_1_1external__constructor_3_01value__t_1_1string_01_4"
label="structdetail_1_1external__constructor_3_01value__t_1_1string_01_4"></span>

<div class="DoxyCompactItemize">

<span id="structdetail_1_1external__constructor_3_01value__t_1_1string_01_4_a8d954a764f22f01af48a8ddd08c64383"
label="structdetail_1_1external__constructor_3_01value__t_1_1string_01_4_a8d954a764f22f01af48a8ddd08c64383"></span>
template$<$typename BasicJsonType $>$   
static void **construct** (BasicJsonType &j, const typename
BasicJsonType::string_t &s)

<span id="structdetail_1_1external__constructor_3_01value__t_1_1string_01_4_a317d01f7a4dd1dc217ae99e819df5f63"
label="structdetail_1_1external__constructor_3_01value__t_1_1string_01_4_a317d01f7a4dd1dc217ae99e819df5f63"></span>
template$<$typename BasicJsonType $>$   
static void **construct** (BasicJsonType &j, typename
BasicJsonType::string_t &&s)

<span id="structdetail_1_1external__constructor_3_01value__t_1_1string_01_4_a3615c845f5350b39610d487817788130"
label="structdetail_1_1external__constructor_3_01value__t_1_1string_01_4_a3615c845f5350b39610d487817788130"></span>
template$<$typename BasicJsonType , typename CompatibleStringType ,
enable_if_t$<$ !std::is_same$<$ CompatibleStringType, typename
BasicJsonType::string_t
$>$[::value](#namespacedetail_a47b1bb0bbd3596589ed9187059c312efa2063c1608d6e0baf80249c42e2be5804),
int $>$ = 0$>$   
static void **construct** (BasicJsonType &j, const CompatibleStringType
&str)

</div>

The documentation for this struct was generated from the following file:

<div class="DoxyCompactItemize">

MacGyver/json.hpp

</div>
