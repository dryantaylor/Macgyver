<div id="classdetail_1_1json__ref">

</div>

<span id="classdetail_1_1json__ref"
label="classdetail_1_1json__ref"></span>

<div class="DoxyCompactItemize">

<span id="classdetail_1_1json__ref_ad547f2d92f71b8c6532031c7d75c61d4"
label="classdetail_1_1json__ref_ad547f2d92f71b8c6532031c7d75c61d4"></span>
using **value_type** = BasicJsonType

</div>

<div class="DoxyCompactItemize">

<span id="classdetail_1_1json__ref_a75203c86bb04e3e402bf2ac68c570292"
label="classdetail_1_1json__ref_a75203c86bb04e3e402bf2ac68c570292"></span>
**json_ref** (value_type
&&[value](#namespacedetail_a47b1bb0bbd3596589ed9187059c312efa2063c1608d6e0baf80249c42e2be5804))

<span id="classdetail_1_1json__ref_a74412b9ccfc62eb7503991dcf9702c8d"
label="classdetail_1_1json__ref_a74412b9ccfc62eb7503991dcf9702c8d"></span>
**json_ref** (const value_type
&[value](#namespacedetail_a47b1bb0bbd3596589ed9187059c312efa2063c1608d6e0baf80249c42e2be5804))

<span id="classdetail_1_1json__ref_a9b79cd7e60791a5ffafa7ea2a1a39057"
label="classdetail_1_1json__ref_a9b79cd7e60791a5ffafa7ea2a1a39057"></span>
**json_ref** (std::initializer_list$<$
[json_ref](#classdetail_1_1json__ref) $>$ init)

<span id="classdetail_1_1json__ref_aa95181b6f18d1c5fc624ff1b6253a189"
label="classdetail_1_1json__ref_aa95181b6f18d1c5fc624ff1b6253a189"></span>
template$<$class... Args, enable_if_t$<$ std::is_constructible$<$
value_type, Args...
$>$[::value](#namespacedetail_a47b1bb0bbd3596589ed9187059c312efa2063c1608d6e0baf80249c42e2be5804),
int $>$ = 0$>$   
**json_ref** (Args &&... args)

<span id="classdetail_1_1json__ref_a5ddfd0d79d70a37b98867f14000435c7"
label="classdetail_1_1json__ref_a5ddfd0d79d70a37b98867f14000435c7"></span>
**json_ref** ([json_ref](#classdetail_1_1json__ref) &&) noexcept=default

<span id="classdetail_1_1json__ref_a2f61ad441afb494e31378b11eae0dfb0"
label="classdetail_1_1json__ref_a2f61ad441afb494e31378b11eae0dfb0"></span>
**json_ref** (const [json_ref](#classdetail_1_1json__ref) &)=delete

<span id="classdetail_1_1json__ref_ae73600db354e0073858f2b2b10298908"
label="classdetail_1_1json__ref_ae73600db354e0073858f2b2b10298908"></span>
[json_ref](#classdetail_1_1json__ref) & **operator=** (const
[json_ref](#classdetail_1_1json__ref) &)=delete

<span id="classdetail_1_1json__ref_a667d02a68a829f346d120d94bbf5982e"
label="classdetail_1_1json__ref_a667d02a68a829f346d120d94bbf5982e"></span>
[json_ref](#classdetail_1_1json__ref) & **operator=**
([json_ref](#classdetail_1_1json__ref) &&)=delete

<span id="classdetail_1_1json__ref_ad37b535229db57173a6cd57aadba9662"
label="classdetail_1_1json__ref_ad37b535229db57173a6cd57aadba9662"></span>
value_type **moved_or_copied** () const

<span id="classdetail_1_1json__ref_a79ae1f17fef3676887f649b92c828125"
label="classdetail_1_1json__ref_a79ae1f17fef3676887f649b92c828125"></span>
value_type const & **operator$\ast$** () const

<span id="classdetail_1_1json__ref_a86b5e6b29c3f87f52498e5e07377e618"
label="classdetail_1_1json__ref_a86b5e6b29c3f87f52498e5e07377e618"></span>
value_type const $\ast$ **operator-$>$** () const

</div>

The documentation for this class was generated from the following file:

<div class="DoxyCompactItemize">

MacGyver/json.hpp

</div>
