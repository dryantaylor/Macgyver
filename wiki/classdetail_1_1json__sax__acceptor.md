<div id="classdetail_1_1json__sax__acceptor">

</div>

<span id="classdetail_1_1json__sax__acceptor"
label="classdetail_1_1json__sax__acceptor"></span>

<div class="DoxyCompactItemize">

<span id="classdetail_1_1json__sax__acceptor_ad77c7f938c8af42cbac8019e9ff9d873"
label="classdetail_1_1json__sax__acceptor_ad77c7f938c8af42cbac8019e9ff9d873"></span>
using **number_integer_t** = typename BasicJsonType::number_integer_t

<span id="classdetail_1_1json__sax__acceptor_a084d8f020af38f026f4c54717a7c9a31"
label="classdetail_1_1json__sax__acceptor_a084d8f020af38f026f4c54717a7c9a31"></span>
using **number_unsigned_t** = typename BasicJsonType::number_unsigned_t

<span id="classdetail_1_1json__sax__acceptor_ade833f85ba121e88b2db31e9ac12f307"
label="classdetail_1_1json__sax__acceptor_ade833f85ba121e88b2db31e9ac12f307"></span>
using **number_float_t** = typename BasicJsonType::number_float_t

<span id="classdetail_1_1json__sax__acceptor_ae8c1db85a3deecd8aa43474ae07cf136"
label="classdetail_1_1json__sax__acceptor_ae8c1db85a3deecd8aa43474ae07cf136"></span>
using **string_t** = typename BasicJsonType::string_t

<span id="classdetail_1_1json__sax__acceptor_aab5e83f6e2512b51b0c8f65364af63d9"
label="classdetail_1_1json__sax__acceptor_aab5e83f6e2512b51b0c8f65364af63d9"></span>
using **binary_t** = typename BasicJsonType::binary_t

</div>

<div class="DoxyCompactItemize">

<span id="classdetail_1_1json__sax__acceptor_a4ed18878e3967f3512eb4e8d4e1e9396"
label="classdetail_1_1json__sax__acceptor_a4ed18878e3967f3512eb4e8d4e1e9396"></span>
bool **null** ()

<span id="classdetail_1_1json__sax__acceptor_a356a53a3cdc5816f794597112756ce01"
label="classdetail_1_1json__sax__acceptor_a356a53a3cdc5816f794597112756ce01"></span>
bool **boolean** (bool)

<span id="classdetail_1_1json__sax__acceptor_a1ac59d95160475c9761c35a686ad7016"
label="classdetail_1_1json__sax__acceptor_a1ac59d95160475c9761c35a686ad7016"></span>
bool **number_integer** (number_integer_t)

<span id="classdetail_1_1json__sax__acceptor_a812597db7d13d68d3fc0cc0451156d7b"
label="classdetail_1_1json__sax__acceptor_a812597db7d13d68d3fc0cc0451156d7b"></span>
bool **number_unsigned** (number_unsigned_t)

<span id="classdetail_1_1json__sax__acceptor_abaf24f1336b5a204cfad9132967a9aab"
label="classdetail_1_1json__sax__acceptor_abaf24f1336b5a204cfad9132967a9aab"></span>
bool **number_float** (number_float_t, const string_t &)

<span id="classdetail_1_1json__sax__acceptor_aa8ecef0d8f7096cd72acc95d0c349013"
label="classdetail_1_1json__sax__acceptor_aa8ecef0d8f7096cd72acc95d0c349013"></span>
bool **string** (string_t &)

<span id="classdetail_1_1json__sax__acceptor_a1641a2fd047419e91253b1635970f2de"
label="classdetail_1_1json__sax__acceptor_a1641a2fd047419e91253b1635970f2de"></span>
bool **binary** (binary_t &)

<span id="classdetail_1_1json__sax__acceptor_a13a84661a9c697058a50741567751336"
label="classdetail_1_1json__sax__acceptor_a13a84661a9c697058a50741567751336"></span>
bool **start_object** (std::size_t=static_cast$<$ std::size_t $>$(-1))

<span id="classdetail_1_1json__sax__acceptor_ac5bd1fdedf4292062a554c96b0a857bd"
label="classdetail_1_1json__sax__acceptor_ac5bd1fdedf4292062a554c96b0a857bd"></span>
bool **key** (string_t &)

<span id="classdetail_1_1json__sax__acceptor_a0f6fdb3c1d975b49dfc92f5a41096855"
label="classdetail_1_1json__sax__acceptor_a0f6fdb3c1d975b49dfc92f5a41096855"></span>
bool **end_object** ()

<span id="classdetail_1_1json__sax__acceptor_a23fbef6b0be5b4d8e38b207909a5ad7e"
label="classdetail_1_1json__sax__acceptor_a23fbef6b0be5b4d8e38b207909a5ad7e"></span>
bool **start_array** (std::size_t=static_cast$<$ std::size_t $>$(-1))

<span id="classdetail_1_1json__sax__acceptor_a78ce28c97dd3cb30e6c16a359eb4f9cc"
label="classdetail_1_1json__sax__acceptor_a78ce28c97dd3cb30e6c16a359eb4f9cc"></span>
bool **end_array** ()

<span id="classdetail_1_1json__sax__acceptor_ac46fea955b1e307c7b3eb755051e52ef"
label="classdetail_1_1json__sax__acceptor_ac46fea955b1e307c7b3eb755051e52ef"></span>
bool **parse_error** (std::size_t, const std::string &, const
[detail::exception](#classdetail_1_1exception) &)

</div>

The documentation for this class was generated from the following file:

<div class="DoxyCompactItemize">

MacGyver/json.hpp

</div>
