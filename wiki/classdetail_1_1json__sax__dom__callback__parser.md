<div id="classdetail_1_1json__sax__dom__callback__parser">

</div>

<span id="classdetail_1_1json__sax__dom__callback__parser"
label="classdetail_1_1json__sax__dom__callback__parser"></span>

<div class="DoxyCompactItemize">

<span id="classdetail_1_1json__sax__dom__callback__parser_a805d2376a8be006729228e507657f857"
label="classdetail_1_1json__sax__dom__callback__parser_a805d2376a8be006729228e507657f857"></span>
using **number_integer_t** = typename BasicJsonType::number_integer_t

<span id="classdetail_1_1json__sax__dom__callback__parser_a527423f339957cf7eec7cd05f9d6f106"
label="classdetail_1_1json__sax__dom__callback__parser_a527423f339957cf7eec7cd05f9d6f106"></span>
using **number_unsigned_t** = typename BasicJsonType::number_unsigned_t

<span id="classdetail_1_1json__sax__dom__callback__parser_ae41f77bc4357c69865f5cb75f1498dd6"
label="classdetail_1_1json__sax__dom__callback__parser_ae41f77bc4357c69865f5cb75f1498dd6"></span>
using **number_float_t** = typename BasicJsonType::number_float_t

<span id="classdetail_1_1json__sax__dom__callback__parser_a248c21d36a4595aeaa3c5cab612731ca"
label="classdetail_1_1json__sax__dom__callback__parser_a248c21d36a4595aeaa3c5cab612731ca"></span>
using **string_t** = typename BasicJsonType::string_t

<span id="classdetail_1_1json__sax__dom__callback__parser_a5cecb50b0919af3bcdf75e229460591f"
label="classdetail_1_1json__sax__dom__callback__parser_a5cecb50b0919af3bcdf75e229460591f"></span>
using **binary_t** = typename BasicJsonType::binary_t

<span id="classdetail_1_1json__sax__dom__callback__parser_ac11c03b17ae0e0919396e1eae5a6bc5a"
label="classdetail_1_1json__sax__dom__callback__parser_ac11c03b17ae0e0919396e1eae5a6bc5a"></span>
using **parser_callback_t** = typename BasicJsonType::parser_callback_t

<span id="classdetail_1_1json__sax__dom__callback__parser_aae0cf395c653f7118d0df402d8be865d"
label="classdetail_1_1json__sax__dom__callback__parser_aae0cf395c653f7118d0df402d8be865d"></span>
using **parse_event_t** = typename BasicJsonType::parse_event_t

</div>

<div class="DoxyCompactItemize">

<span id="classdetail_1_1json__sax__dom__callback__parser_ade1410ff5219a967e76ea507023055cc"
label="classdetail_1_1json__sax__dom__callback__parser_ade1410ff5219a967e76ea507023055cc"></span>
**json_sax_dom_callback_parser** (BasicJsonType &r, const
parser_callback_t cb, const bool allow_exceptions\_=true)

<span id="classdetail_1_1json__sax__dom__callback__parser_a403e14b01bdb6b5b31dd6ccf3598a6d8"
label="classdetail_1_1json__sax__dom__callback__parser_a403e14b01bdb6b5b31dd6ccf3598a6d8"></span>
**json_sax_dom_callback_parser** (const
[json_sax_dom_callback_parser](#classdetail_1_1json__sax__dom__callback__parser)
&)=delete

<span id="classdetail_1_1json__sax__dom__callback__parser_a825fdcbc245eab8b8401e1a59218dead"
label="classdetail_1_1json__sax__dom__callback__parser_a825fdcbc245eab8b8401e1a59218dead"></span>
**json_sax_dom_callback_parser**
([json_sax_dom_callback_parser](#classdetail_1_1json__sax__dom__callback__parser)
&&)=default

<span id="classdetail_1_1json__sax__dom__callback__parser_a3a155e6b5ebf8479c8deee5e32985c21"
label="classdetail_1_1json__sax__dom__callback__parser_a3a155e6b5ebf8479c8deee5e32985c21"></span>
[json_sax_dom_callback_parser](#classdetail_1_1json__sax__dom__callback__parser)
& **operator=** (const
[json_sax_dom_callback_parser](#classdetail_1_1json__sax__dom__callback__parser)
&)=delete

<span id="classdetail_1_1json__sax__dom__callback__parser_ad63862a3f61b9291d118fcdbfab8f9d2"
label="classdetail_1_1json__sax__dom__callback__parser_ad63862a3f61b9291d118fcdbfab8f9d2"></span>
[json_sax_dom_callback_parser](#classdetail_1_1json__sax__dom__callback__parser)
& **operator=**
([json_sax_dom_callback_parser](#classdetail_1_1json__sax__dom__callback__parser)
&&)=default

<span id="classdetail_1_1json__sax__dom__callback__parser_ac9a48bfa59d8d5e9a06eb0eca3323b40"
label="classdetail_1_1json__sax__dom__callback__parser_ac9a48bfa59d8d5e9a06eb0eca3323b40"></span>
bool **null** ()

<span id="classdetail_1_1json__sax__dom__callback__parser_a0271644d2fff14bd481b687feca8308f"
label="classdetail_1_1json__sax__dom__callback__parser_a0271644d2fff14bd481b687feca8308f"></span>
bool **boolean** (bool val)

<span id="classdetail_1_1json__sax__dom__callback__parser_ae4a683e50f719dec769f2a2b8d93f1a4"
label="classdetail_1_1json__sax__dom__callback__parser_ae4a683e50f719dec769f2a2b8d93f1a4"></span>
bool **number_integer** (number_integer_t val)

<span id="classdetail_1_1json__sax__dom__callback__parser_accd35b1b70cf5a9216d497c70e8b07e9"
label="classdetail_1_1json__sax__dom__callback__parser_accd35b1b70cf5a9216d497c70e8b07e9"></span>
bool **number_unsigned** (number_unsigned_t val)

<span id="classdetail_1_1json__sax__dom__callback__parser_a264a55fe4970110efb57853dab984f6a"
label="classdetail_1_1json__sax__dom__callback__parser_a264a55fe4970110efb57853dab984f6a"></span>
bool **number_float** (number_float_t val, const string_t &)

<span id="classdetail_1_1json__sax__dom__callback__parser_a39d9c56b0e55e805fb5c3e881680f376"
label="classdetail_1_1json__sax__dom__callback__parser_a39d9c56b0e55e805fb5c3e881680f376"></span>
bool **string** (string_t &val)

<span id="classdetail_1_1json__sax__dom__callback__parser_aed38754f5043a49644b133fdaebf749e"
label="classdetail_1_1json__sax__dom__callback__parser_aed38754f5043a49644b133fdaebf749e"></span>
bool **binary** (binary_t &val)

<span id="classdetail_1_1json__sax__dom__callback__parser_a5e78ec63eed401c3c56689d32472376a"
label="classdetail_1_1json__sax__dom__callback__parser_a5e78ec63eed401c3c56689d32472376a"></span>
bool **start_object** (std::size_t len)

<span id="classdetail_1_1json__sax__dom__callback__parser_a82a83c66ef7f2754d9374bda95535958"
label="classdetail_1_1json__sax__dom__callback__parser_a82a83c66ef7f2754d9374bda95535958"></span>
bool **key** (string_t &val)

<span id="classdetail_1_1json__sax__dom__callback__parser_a8598580c5e72641d3d5b7a471c727fd7"
label="classdetail_1_1json__sax__dom__callback__parser_a8598580c5e72641d3d5b7a471c727fd7"></span>
bool **end_object** ()

<span id="classdetail_1_1json__sax__dom__callback__parser_a6e6c97a9d73f4e98ed881b3833b570a9"
label="classdetail_1_1json__sax__dom__callback__parser_a6e6c97a9d73f4e98ed881b3833b570a9"></span>
bool **start_array** (std::size_t len)

<span id="classdetail_1_1json__sax__dom__callback__parser_a815c791c31c4dc3e6f4662e3216424cd"
label="classdetail_1_1json__sax__dom__callback__parser_a815c791c31c4dc3e6f4662e3216424cd"></span>
bool **end_array** ()

<span id="classdetail_1_1json__sax__dom__callback__parser_a0b517399e4b41d27449baea9fcfddbac"
label="classdetail_1_1json__sax__dom__callback__parser_a0b517399e4b41d27449baea9fcfddbac"></span>
template$<$class Exception $>$   
bool **parse_error** (std::size_t, const std::string &, const Exception
&ex)

<span id="classdetail_1_1json__sax__dom__callback__parser_a2751d9c6f137a594ced3fccb06f10a34"
label="classdetail_1_1json__sax__dom__callback__parser_a2751d9c6f137a594ced3fccb06f10a34"></span>
constexpr bool **is_errored** () const

</div>

The documentation for this class was generated from the following file:

<div class="DoxyCompactItemize">

MacGyver/json.hpp

</div>
