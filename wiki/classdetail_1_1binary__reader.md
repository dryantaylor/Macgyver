<div id="classdetail_1_1binary__reader">

</div>

<span id="classdetail_1_1binary__reader"
label="classdetail_1_1binary__reader"></span>

deserialization of CBOR, MessagePack, and UBJSON values

\#include $<$json.hpp$>$

<div class="DoxyCompactItemize">

[binary_reader](#classdetail_1_1binary__reader_a5dc3e9216177efe30686876d3faccf52)
(InputAdapterType &&adapter, const
[input_format_t](#namespacedetail_a0ab3b338d0eadc6890b72cccef0ea04f)
format=input_format_t::json) noexcept

<div class="DoxyCompactList">

*create a binary reader*

</div>

<span id="classdetail_1_1binary__reader_a03d3ad5fd319550b8ca4e54ddcf46ba0"
label="classdetail_1_1binary__reader_a03d3ad5fd319550b8ca4e54ddcf46ba0"></span>
**binary_reader** (const [binary_reader](#classdetail_1_1binary__reader)
&)=delete

<span id="classdetail_1_1binary__reader_a4197fcaec6f876fd9019c0f6a48c7f0d"
label="classdetail_1_1binary__reader_a4197fcaec6f876fd9019c0f6a48c7f0d"></span>
**binary_reader** ([binary_reader](#classdetail_1_1binary__reader)
&&)=default

<span id="classdetail_1_1binary__reader_a66cae2a279b02a0f575866d7c26445bc"
label="classdetail_1_1binary__reader_a66cae2a279b02a0f575866d7c26445bc"></span>
[binary_reader](#classdetail_1_1binary__reader) & **operator=** (const
[binary_reader](#classdetail_1_1binary__reader) &)=delete

<span id="classdetail_1_1binary__reader_afe5457eb25503d02f42d4e558dbbf554"
label="classdetail_1_1binary__reader_afe5457eb25503d02f42d4e558dbbf554"></span>
[binary_reader](#classdetail_1_1binary__reader) & **operator=**
([binary_reader](#classdetail_1_1binary__reader) &&)=default

bool
[sax_parse](#classdetail_1_1binary__reader_a8e1b5452ae426e1d7b48761859e7f52d)
(const
[input_format_t](#namespacedetail_a0ab3b338d0eadc6890b72cccef0ea04f)
format, json_sax_t $\ast$sax\_, const bool
[strict](#namespacedetail_abe7cfa1fd8fa706ff4392bff9d1a8298a2133fd717402a7966ee88d06f9e0b792)=true,
const
[cbor_tag_handler_t](#namespacedetail_a7c070b2bf3d61e3d8b8013f6fb18d592)
tag_handler=[cbor_tag_handler_t::error](#namespacedetail_a7c070b2bf3d61e3d8b8013f6fb18d592acb5e100e5a9a3e7f6d1fd97512215282))

</div>

### template$<$typename BasicJsonType, typename InputAdapterType, typename SAX = json_sax_dom_parser$<$BasicJsonType$>$$>$ class detail::binary_reader$<$ BasicJsonType, InputAdapterType, SAX $>$

deserialization of CBOR, MessagePack, and UBJSON values

<span id="classdetail_1_1binary__reader_a5dc3e9216177efe30686876d3faccf52"
label="classdetail_1_1binary__reader_a5dc3e9216177efe30686876d3faccf52"></span>

template$<$typename BasicJsonType , typename InputAdapterType , typename
SAX = json_sax_dom_parser$<$BasicJsonType$>$$>$  
[detail::binary_reader](#classdetail_1_1binary__reader)$<$
BasicJsonType, InputAdapterType, SAX $>$::binary_reader (

<div class="DoxyParamCaption">

adapter,

format = input_format_t::json

</div>

), ,

create a binary reader

<div class="DoxyParams">

Parameters ` in` & *adapter* & input adapter to read from  

</div>

<span id="classdetail_1_1binary__reader_a8e1b5452ae426e1d7b48761859e7f52d"
label="classdetail_1_1binary__reader_a8e1b5452ae426e1d7b48761859e7f52d"></span>

template$<$typename BasicJsonType , typename InputAdapterType , typename
SAX = json_sax_dom_parser$<$BasicJsonType$>$$>$  
bool [detail::binary_reader](#classdetail_1_1binary__reader)$<$
BasicJsonType, InputAdapterType, SAX $>$::sax_parse (

<div class="DoxyParamCaption">

format,

sax\_,

strict = true,

tag_handler =
[cbor_tag_handler_t::error](#namespacedetail_a7c070b2bf3d61e3d8b8013f6fb18d592acb5e100e5a9a3e7f6d1fd97512215282)

</div>

)

<div class="DoxyParams">

Parameters ` in` & *format* & the binary format to parse  
` in` & *sax\_* & a SAX event processor  
` in` & *strict* & whether to expect the input to be consumed
completed  
` in` & *tag_handler* & how to treat CBOR tags  

</div>

<div class="DoxyReturn">

Returns whether parsing was successful

</div>

The documentation for this class was generated from the following file:

<div class="DoxyCompactItemize">

MacGyver/json.hpp

</div>
