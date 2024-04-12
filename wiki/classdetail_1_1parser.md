<div id="classdetail_1_1parser">

</div>

<span id="classdetail_1_1parser" label="classdetail_1_1parser"></span>

syntax analysis

\#include $<$json.hpp$>$

<div class="DoxyCompactItemize">

<span id="classdetail_1_1parser_a4bb9ea1b0fddb8f46ff987bbf9e54045"
label="classdetail_1_1parser_a4bb9ea1b0fddb8f46ff987bbf9e54045"></span>
**parser** (InputAdapterType &&adapter, const parser_callback_t$<$
BasicJsonType $>$ cb=nullptr, const bool allow_exceptions\_=true, const
bool skip_comments=false)

<div class="DoxyCompactList">

*a parser reading from an input adapter*

</div>

void [parse](#classdetail_1_1parser_a59f4b745d4aa146bf7a60a30060f592f)
(const bool
[strict](#namespacedetail_abe7cfa1fd8fa706ff4392bff9d1a8298a2133fd717402a7966ee88d06f9e0b792),
BasicJsonType &result)

<div class="DoxyCompactList">

*public parser interface*

</div>

bool [accept](#classdetail_1_1parser_ac46da3262cbe66ade670c5b4782451e6)
(const bool
[strict](#namespacedetail_abe7cfa1fd8fa706ff4392bff9d1a8298a2133fd717402a7966ee88d06f9e0b792)=true)

<div class="DoxyCompactList">

*public accept interface*

</div>

<span id="classdetail_1_1parser_ae9084759356689163fee9ae37e69b050"
label="classdetail_1_1parser_ae9084759356689163fee9ae37e69b050"></span>
template$<$typename SAX $>$   
bool **sax_parse** (SAX $\ast$sax, const bool
[strict](#namespacedetail_abe7cfa1fd8fa706ff4392bff9d1a8298a2133fd717402a7966ee88d06f9e0b792)=true)

</div>

### template$<$typename BasicJsonType, typename InputAdapterType$>$ class detail::parser$<$ BasicJsonType, InputAdapterType $>$

syntax analysis

This class implements a recursive descent parser.

<span id="classdetail_1_1parser_ac46da3262cbe66ade670c5b4782451e6"
label="classdetail_1_1parser_ac46da3262cbe66ade670c5b4782451e6"></span>

template$<$typename BasicJsonType , typename InputAdapterType $>$  
bool [detail::parser](#classdetail_1_1parser)$<$ BasicJsonType,
InputAdapterType $>$::accept (

<div class="DoxyParamCaption">

strict = true

</div>

)

public accept interface

<div class="DoxyParams">

Parameters ` in` & *strict* & whether to expect the last token to be
EOF  

</div>

<div class="DoxyReturn">

Returns whether the input is a proper JSON text

</div>

<span id="classdetail_1_1parser_a59f4b745d4aa146bf7a60a30060f592f"
label="classdetail_1_1parser_a59f4b745d4aa146bf7a60a30060f592f"></span>

template$<$typename BasicJsonType , typename InputAdapterType $>$  
void [detail::parser](#classdetail_1_1parser)$<$ BasicJsonType,
InputAdapterType $>$::parse (

<div class="DoxyParamCaption">

strict,

result

</div>

)

public parser interface

<div class="DoxyParams">

Parameters ` in` & *strict* & whether to expect the last token to be
EOF  
` in,out` & *result* & parsed JSON value  

</div>

<div class="DoxyExceptions">

Exceptions *parse_error.* & in case of an unexpected token  
*parse_error.* & if to_unicode fails or surrogate error  
*parse_error.* & if to_unicode fails  

</div>

The documentation for this class was generated from the following file:

<div class="DoxyCompactItemize">

MacGyver/json.hpp

</div>
