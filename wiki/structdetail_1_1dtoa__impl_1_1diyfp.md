<div id="structdetail_1_1dtoa__impl_1_1diyfp">

</div>

<span id="structdetail_1_1dtoa__impl_1_1diyfp"
label="structdetail_1_1dtoa__impl_1_1diyfp"></span>

<div class="DoxyCompactItemize">

<span id="structdetail_1_1dtoa__impl_1_1diyfp_a7c8377d2b931fcb3088d54c41b99c53b"
label="structdetail_1_1dtoa__impl_1_1diyfp_a7c8377d2b931fcb3088d54c41b99c53b"></span>
constexpr **diyfp** (std::uint64_t f\_, int e\_) noexcept

</div>

<div class="DoxyCompactItemize">

static [diyfp](#structdetail_1_1dtoa__impl_1_1diyfp)
[sub](#structdetail_1_1dtoa__impl_1_1diyfp_a75142bace0b78b1e1433b1d35a7ff252)
(const [diyfp](#structdetail_1_1dtoa__impl_1_1diyfp) &x, const
[diyfp](#structdetail_1_1dtoa__impl_1_1diyfp) &y) noexcept

<div class="DoxyCompactList">

*returns x - y*

</div>

static [diyfp](#structdetail_1_1dtoa__impl_1_1diyfp)
[mul](#structdetail_1_1dtoa__impl_1_1diyfp_a046c61f2c13411677eedfb5b9b7a8226)
(const [diyfp](#structdetail_1_1dtoa__impl_1_1diyfp) &x, const
[diyfp](#structdetail_1_1dtoa__impl_1_1diyfp) &y) noexcept

<div class="DoxyCompactList">

*returns x $\ast$ y*

</div>

static [diyfp](#structdetail_1_1dtoa__impl_1_1diyfp)
[normalize](#structdetail_1_1dtoa__impl_1_1diyfp_a5bad735c2cb50b194938a8a89b82f6ed)
([diyfp](#structdetail_1_1dtoa__impl_1_1diyfp) x) noexcept

<div class="DoxyCompactList">

*normalize x such that the significand is $>$= 2$^\wedge$(q-1)*

</div>

static [diyfp](#structdetail_1_1dtoa__impl_1_1diyfp)
[normalize_to](#structdetail_1_1dtoa__impl_1_1diyfp_a5a9ce83c6c1663c9aaac7ffd9009b971)
(const [diyfp](#structdetail_1_1dtoa__impl_1_1diyfp) &x, const int
target_exponent) noexcept

<div class="DoxyCompactList">

*normalize x such that the result has the exponent E*

</div>

</div>

<div class="DoxyCompactItemize">

<span id="structdetail_1_1dtoa__impl_1_1diyfp_ae1518119517cb69d79aa64ffb93c8375"
label="structdetail_1_1dtoa__impl_1_1diyfp_ae1518119517cb69d79aa64ffb93c8375"></span>
std::uint64_t **f** = 0

<span id="structdetail_1_1dtoa__impl_1_1diyfp_ae2b59fab8dee9ef0192eb6b568fa7314"
label="structdetail_1_1dtoa__impl_1_1diyfp_ae2b59fab8dee9ef0192eb6b568fa7314"></span>
int **e** = 0

</div>

<div class="DoxyCompactItemize">

<span id="structdetail_1_1dtoa__impl_1_1diyfp_a80cf8cc846a7bf96362d3b11886994e3"
label="structdetail_1_1dtoa__impl_1_1diyfp_a80cf8cc846a7bf96362d3b11886994e3"></span>
static constexpr int **kPrecision** = 64

</div>

<span id="structdetail_1_1dtoa__impl_1_1diyfp_a046c61f2c13411677eedfb5b9b7a8226"
label="structdetail_1_1dtoa__impl_1_1diyfp_a046c61f2c13411677eedfb5b9b7a8226"></span>

static [diyfp](#structdetail_1_1dtoa__impl_1_1diyfp)
detail::dtoa_impl::diyfp::mul (

<div class="DoxyParamCaption">

x,

y

</div>

), ,

returns x $\ast$ y

<div class="DoxyNote">

Note The result is rounded. (Only the upper q bits are returned.)

</div>

<span id="structdetail_1_1dtoa__impl_1_1diyfp_a5bad735c2cb50b194938a8a89b82f6ed"
label="structdetail_1_1dtoa__impl_1_1diyfp_a5bad735c2cb50b194938a8a89b82f6ed"></span>

static [diyfp](#structdetail_1_1dtoa__impl_1_1diyfp)
detail::dtoa_impl::diyfp::normalize (

<div class="DoxyParamCaption">

x

</div>

), ,

normalize x such that the significand is $>$= 2$^\wedge$(q-1)

<div class="DoxyPrecond">

Precondition x.f != 0

</div>

<span id="structdetail_1_1dtoa__impl_1_1diyfp_a5a9ce83c6c1663c9aaac7ffd9009b971"
label="structdetail_1_1dtoa__impl_1_1diyfp_a5a9ce83c6c1663c9aaac7ffd9009b971"></span>

static [diyfp](#structdetail_1_1dtoa__impl_1_1diyfp)
detail::dtoa_impl::diyfp::normalize_to (

<div class="DoxyParamCaption">

x,

target_exponent

</div>

), ,

normalize x such that the result has the exponent E

<div class="DoxyPrecond">

Precondition e $>$= x.e and the upper e - x.e bits of x.f must be zero.

</div>

<span id="structdetail_1_1dtoa__impl_1_1diyfp_a75142bace0b78b1e1433b1d35a7ff252"
label="structdetail_1_1dtoa__impl_1_1diyfp_a75142bace0b78b1e1433b1d35a7ff252"></span>

static [diyfp](#structdetail_1_1dtoa__impl_1_1diyfp)
detail::dtoa_impl::diyfp::sub (

<div class="DoxyParamCaption">

x,

y

</div>

), ,

returns x - y

<div class="DoxyPrecond">

Precondition x.e == y.e and x.f $>$= y.f

</div>

The documentation for this struct was generated from the following file:

<div class="DoxyCompactItemize">

MacGyver/json.hpp

</div>
