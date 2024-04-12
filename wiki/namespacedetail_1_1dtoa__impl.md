<div id="namespacedetail_1_1dtoa__impl">

</div>

<span id="namespacedetail_1_1dtoa__impl"
label="namespacedetail_1_1dtoa__impl"></span>

implements the Grisu2 algorithm for binary to decimal floating-point
conversion.

<div class="DoxyCompactItemize">

struct [boundaries](#structdetail_1_1dtoa__impl_1_1boundaries)

struct [cached_power](#structdetail_1_1dtoa__impl_1_1cached__power)

struct [diyfp](#structdetail_1_1dtoa__impl_1_1diyfp)

</div>

<div class="DoxyCompactItemize">

<span id="namespacedetail_1_1dtoa__impl_a3c879bf97b806cacbcbb2da07a5ff5c8"
label="namespacedetail_1_1dtoa__impl_a3c879bf97b806cacbcbb2da07a5ff5c8"></span>
template$<$typename Target , typename Source $>$   
Target **reinterpret_bits** (const Source source)

template$<$typename FloatType $>$   
[boundaries](#structdetail_1_1dtoa__impl_1_1boundaries)
[compute_boundaries](#namespacedetail_1_1dtoa__impl_a6a5ccf11847aab7a0f42f587b33935df)
(FloatType
[value](#namespacedetail_a47b1bb0bbd3596589ed9187059c312efa2063c1608d6e0baf80249c42e2be5804))

[cached_power](#structdetail_1_1dtoa__impl_1_1cached__power)
[get_cached_power_for_binary_exponent](#namespacedetail_1_1dtoa__impl_a29ae6574f6be09a5c8ab08da9a3f71b4)
(int e)

int
[find_largest_pow10](#namespacedetail_1_1dtoa__impl_a04eb234a28617519974fc962cd4da666)
(const std::uint32_t n, std::uint32_t &pow10)

<span id="namespacedetail_1_1dtoa__impl_a73a15efcb5c2157ea0e1375b98ef0e83"
label="namespacedetail_1_1dtoa__impl_a73a15efcb5c2157ea0e1375b98ef0e83"></span>
void **grisu2_round** (char $\ast$buf, int len, std::uint64_t dist,
std::uint64_t delta, std::uint64_t rest, std::uint64_t ten_k)

void
[grisu2_digit_gen](#namespacedetail_1_1dtoa__impl_ae877aa13ab872c99a1c614e5e1524807)
(char $\ast$buffer, int &length, int &decimal_exponent,
[diyfp](#structdetail_1_1dtoa__impl_1_1diyfp) M_minus,
[diyfp](#structdetail_1_1dtoa__impl_1_1diyfp) w,
[diyfp](#structdetail_1_1dtoa__impl_1_1diyfp) M_plus)

void
[grisu2](#namespacedetail_1_1dtoa__impl_ad549352ed1a9676a092d143a2daa3dee)
(char $\ast$buf, int &len, int &decimal_exponent,
[diyfp](#structdetail_1_1dtoa__impl_1_1diyfp) m_minus,
[diyfp](#structdetail_1_1dtoa__impl_1_1diyfp) v,
[diyfp](#structdetail_1_1dtoa__impl_1_1diyfp) m_plus)

template$<$typename FloatType $>$   
void
[grisu2](#namespacedetail_1_1dtoa__impl_abdf6bc05c54068a5930f66c2e803e8b8)
(char $\ast$buf, int &len, int &decimal_exponent, FloatType
[value](#namespacedetail_a47b1bb0bbd3596589ed9187059c312efa2063c1608d6e0baf80249c42e2be5804))

JSON_HEDLEY_RETURNS_NON_NULL char $\ast$
[append_exponent](#namespacedetail_1_1dtoa__impl_aec9f6655c3b629aeb0e8c887aea5da87)
(char $\ast$buf, int e)

<div class="DoxyCompactList">

*appends a decimal representation of e to buf*

</div>

JSON_HEDLEY_RETURNS_NON_NULL char $\ast$
[format_buffer](#namespacedetail_1_1dtoa__impl_afab91abfdd1cdf43cc2fcd5b9c4a7456)
(char $\ast$buf, int len, int decimal_exponent, int min_exp, int
max_exp)

<div class="DoxyCompactList">

*prettify v = buf $\ast$ 10$^\wedge$decimal_exponent*

</div>

</div>

<div class="DoxyCompactItemize">

<span id="namespacedetail_1_1dtoa__impl_a95c569b7627a9372686f1f77d73e8660"
label="namespacedetail_1_1dtoa__impl_a95c569b7627a9372686f1f77d73e8660"></span>
constexpr int **kAlpha** = -60

<span id="namespacedetail_1_1dtoa__impl_ae152a095d2dd1a6dd41ef8ad39c26e19"
label="namespacedetail_1_1dtoa__impl_ae152a095d2dd1a6dd41ef8ad39c26e19"></span>
constexpr int **kGamma** = -32

</div>

implements the Grisu2 algorithm for binary to decimal floating-point
conversion.

This implementation is a slightly modified version of the reference
implementation which may be obtained from
[` http://florian.loitsch.com/publications`](http://florian.loitsch.com/publications)
(bench.tar.gz).

The code is distributed under the MIT license, Copyright (c) 2009
Florian Loitsch.

For a detailed description of the algorithm see:

\[1\] Loitsch, "Printing Floating-Point Numbers Quickly and Accurately
with Integers", Proceedings of the ACM SIGPLAN 2010 Conference on
Programming Language Design and Implementation, PLDI 2010 \[2\] Burger,
Dybvig, "Printing Floating-Point Numbers Quickly and Accurately",
Proceedings of the ACM SIGPLAN 1996 Conference on Programming Language
Design and Implementation, PLDI 1996

<span id="namespacedetail_1_1dtoa__impl_aec9f6655c3b629aeb0e8c887aea5da87"
label="namespacedetail_1_1dtoa__impl_aec9f6655c3b629aeb0e8c887aea5da87"></span>

JSON_HEDLEY_RETURNS_NON_NULL char $\ast$
detail::dtoa_impl::append_exponent (

<div class="DoxyParamCaption">

buf,

e

</div>

)

appends a decimal representation of e to buf

<div class="DoxyReturn">

Returns a pointer to the element following the exponent.

</div>

<div class="DoxyPrecond">

Precondition -1000 $<$ e $<$ 1000

</div>

<span id="namespacedetail_1_1dtoa__impl_a6a5ccf11847aab7a0f42f587b33935df"
label="namespacedetail_1_1dtoa__impl_a6a5ccf11847aab7a0f42f587b33935df"></span>

template$<$typename FloatType $>$  
[boundaries](#structdetail_1_1dtoa__impl_1_1boundaries)
detail::dtoa_impl::compute_boundaries (

<div class="DoxyParamCaption">

value

</div>

)

Compute the (normalized) diyfp representing the input number value and
its boundaries.

<div class="DoxyPrecond">

Precondition value must be finite and positive

</div>

<span id="namespacedetail_1_1dtoa__impl_a04eb234a28617519974fc962cd4da666"
label="namespacedetail_1_1dtoa__impl_a04eb234a28617519974fc962cd4da666"></span>

int detail::dtoa_impl::find_largest_pow10 (

<div class="DoxyParamCaption">

n,

pow10

</div>

)

For n != 0, returns k, such that pow10 := 10$^\wedge$(k-1) $<$= n $<$
10$^\wedge$k. For n == 0, returns 1 and sets pow10 := 1.
<span id="namespacedetail_1_1dtoa__impl_afab91abfdd1cdf43cc2fcd5b9c4a7456"
label="namespacedetail_1_1dtoa__impl_afab91abfdd1cdf43cc2fcd5b9c4a7456"></span>

JSON_HEDLEY_RETURNS_NON_NULL char $\ast$
detail::dtoa_impl::format_buffer (

<div class="DoxyParamCaption">

buf,

len,

decimal_exponent,

min_exp,

max_exp

</div>

)

prettify v = buf $\ast$ 10$^\wedge$decimal_exponent

If v is in the range \[10$^\wedge$min_exp, 10$^\wedge$max_exp) it will
be printed in fixed-point notation. Otherwise it will be printed in
exponential notation.

<div class="DoxyPrecond">

Precondition min_exp $<$ 0

max_exp $>$ 0

</div>

<span id="namespacedetail_1_1dtoa__impl_a29ae6574f6be09a5c8ab08da9a3f71b4"
label="namespacedetail_1_1dtoa__impl_a29ae6574f6be09a5c8ab08da9a3f71b4"></span>

[cached_power](#structdetail_1_1dtoa__impl_1_1cached__power)
detail::dtoa_impl::get_cached_power_for_binary_exponent (

<div class="DoxyParamCaption">

e

</div>

)

For a normalized diyfp w = f $\ast$ 2$^\wedge$e, this function returns a
(normalized) cached power-of-ten c = f_c $\ast$ 2$^\wedge$e_c, such that
the exponent of the product w $\ast$ c satisfies (Definition 3. from
\[1\])

<div class="DoxyVerb">

alpha \<= e_c + e + q \<= gamma.

</div>

<span id="namespacedetail_1_1dtoa__impl_ad549352ed1a9676a092d143a2daa3dee"
label="namespacedetail_1_1dtoa__impl_ad549352ed1a9676a092d143a2daa3dee"></span>

void detail::dtoa_impl::grisu2 (

<div class="DoxyParamCaption">

buf,

len,

decimal_exponent,

m_minus,

v,

m_plus

</div>

)

v = buf $\ast$ 10$^\wedge$decimal_exponent len is the length of the
buffer (number of decimal digits) The buffer must be large enough, i.e.
$>$= max_digits10.
<span id="namespacedetail_1_1dtoa__impl_abdf6bc05c54068a5930f66c2e803e8b8"
label="namespacedetail_1_1dtoa__impl_abdf6bc05c54068a5930f66c2e803e8b8"></span>

template$<$typename FloatType $>$  
void detail::dtoa_impl::grisu2 (

<div class="DoxyParamCaption">

buf,

len,

decimal_exponent,

value

</div>

)

v = buf $\ast$ 10$^\wedge$decimal_exponent len is the length of the
buffer (number of decimal digits) The buffer must be large enough, i.e.
$>$= max_digits10.
<span id="namespacedetail_1_1dtoa__impl_ae877aa13ab872c99a1c614e5e1524807"
label="namespacedetail_1_1dtoa__impl_ae877aa13ab872c99a1c614e5e1524807"></span>

void detail::dtoa_impl::grisu2_digit_gen (

<div class="DoxyParamCaption">

buffer,

length,

decimal_exponent,

M_minus,

w,

M_plus

</div>

)

Generates V = buffer $\ast$ 10$^\wedge$decimal_exponent, such that M-
$<$= V $<$= M+. M- and M+ must be normalized and share the same exponent
-60 $<$= e $<$= -32.
