<div id="structdetail_1_1external__constructor_3_01value__t_1_1object_01_4">

</div>

<span id="structdetail_1_1external__constructor_3_01value__t_1_1object_01_4"
label="structdetail_1_1external__constructor_3_01value__t_1_1object_01_4"></span>

<div class="DoxyCompactItemize">

<span id="structdetail_1_1external__constructor_3_01value__t_1_1object_01_4_a771012da86c322e238b83baf11689f8e"
label="structdetail_1_1external__constructor_3_01value__t_1_1object_01_4_a771012da86c322e238b83baf11689f8e"></span>
template$<$typename BasicJsonType $>$   
static void **construct** (BasicJsonType &j, const typename
BasicJsonType::object_t &obj)

<span id="structdetail_1_1external__constructor_3_01value__t_1_1object_01_4_af767c889982008eb5f08b47b558dfa08"
label="structdetail_1_1external__constructor_3_01value__t_1_1object_01_4_af767c889982008eb5f08b47b558dfa08"></span>
template$<$typename BasicJsonType $>$   
static void **construct** (BasicJsonType &j, typename
BasicJsonType::object_t &&obj)

<span id="structdetail_1_1external__constructor_3_01value__t_1_1object_01_4_a96a727d374af438440e4f9fe6f273e3f"
label="structdetail_1_1external__constructor_3_01value__t_1_1object_01_4_a96a727d374af438440e4f9fe6f273e3f"></span>
template$<$typename BasicJsonType , typename CompatibleObjectType ,
enable_if_t$<$ !std::is_same$<$ CompatibleObjectType, typename
BasicJsonType::object_t
$>$[::value](#namespacedetail_a47b1bb0bbd3596589ed9187059c312efa2063c1608d6e0baf80249c42e2be5804),
int $>$ = 0$>$   
static void **construct** (BasicJsonType &j, const CompatibleObjectType
&obj)

</div>

The documentation for this struct was generated from the following file:

<div class="DoxyCompactItemize">

MacGyver/json.hpp

</div>
