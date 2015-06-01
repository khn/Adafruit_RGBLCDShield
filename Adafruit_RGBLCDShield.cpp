  


<!DOCTYPE html>
<html>
  <head prefix="og: http://ogp.me/ns# fb: http://ogp.me/ns/fb# githubog: http://ogp.me/ns/fb/githubog#">
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
        <title>Adafruit-RGB-LCD-Shield-Library/Adafruit_RGBLCDShield.cpp at master · adafruit/Adafruit-RGB-LCD-Shield-Library · GitHub</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub" />
    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub" />
    <link rel="apple-touch-icon-precomposed" sizes="57x57" href="apple-touch-icon-114.png" />
    <link rel="apple-touch-icon-precomposed" sizes="114x114" href="apple-touch-icon-114.png" />
    <link rel="apple-touch-icon-precomposed" sizes="72x72" href="apple-touch-icon-144.png" />
    <link rel="apple-touch-icon-precomposed" sizes="144x144" href="apple-touch-icon-144.png" />
    <meta name="msapplication-TileImage" content="/windows-tile.png">
    <meta name="msapplication-TileColor" content="#ffffff">

    
    
    <link rel="icon" type="image/x-icon" href="/favicon.ico" />

    <meta content="authenticity_token" name="csrf-param" />
<meta content="c8Yu9rHsnS5h/3gMBEzBOwYr652kLH0Ap0BiVfsT6Ik=" name="csrf-token" />

    <link href="https://a248.e.akamai.net/assets.github.com/assets/github-7ef703df15129d3b898830277d50fc760ca91cbc.css" media="screen" rel="stylesheet" type="text/css" />
    <link href="https://a248.e.akamai.net/assets.github.com/assets/github2-204e28c07493b8ba6089c49791ed7ab61ecb6581.css" media="screen" rel="stylesheet" type="text/css" />
    


      <script src="https://a248.e.akamai.net/assets.github.com/assets/frameworks-cc4895cbb610429d2ce48e7c2392822c33db2dfe.js" type="text/javascript"></script>
      <script src="https://a248.e.akamai.net/assets.github.com/assets/github-e539dcf1e3c93f4acda64d064d3f30a39afabae0.js" type="text/javascript"></script>
      

        <link rel='permalink' href='/adafruit/Adafruit-RGB-LCD-Shield-Library/blob/13328dc8c517c20bf5696321464179e04bb636b4/Adafruit_RGBLCDShield.cpp'>
    <meta property="og:title" content="Adafruit-RGB-LCD-Shield-Library"/>
    <meta property="og:type" content="githubog:gitrepository"/>
    <meta property="og:url" content="https://github.com/adafruit/Adafruit-RGB-LCD-Shield-Library"/>
    <meta property="og:image" content="https://secure.gravatar.com/avatar/4bc2305bba6e4c82a64a8706ae8b3d40?s=420&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png"/>
    <meta property="og:site_name" content="GitHub"/>
    <meta property="og:description" content="Contribute to Adafruit-RGB-LCD-Shield-Library development by creating an account on GitHub."/>

    <meta name="description" content="Contribute to Adafruit-RGB-LCD-Shield-Library development by creating an account on GitHub." />

  <link href="https://github.com/adafruit/Adafruit-RGB-LCD-Shield-Library/commits/master.atom" rel="alternate" title="Recent Commits to Adafruit-RGB-LCD-Shield-Library:master" type="application/atom+xml" />

  </head>


  <body class="logged_out page-blob windows vis-public env-production ">
    <div id="wrapper">

      

      

      


        <div class="header header-logged-out">
          <div class="container clearfix">

            <a class="header-logo-wordmark" href="https://github.com/">
              <img alt="GitHub" class="github-logo-4x" height="30" src="https://a248.e.akamai.net/assets.github.com/images/modules/header/logov7@4x.png?1340659530" />
              <img alt="GitHub" class="github-logo-4x-hover" height="30" src="https://a248.e.akamai.net/assets.github.com/images/modules/header/logov7@4x-hover.png?1340659530" />
            </a>

              
<ul class="top-nav">
    <li class="explore"><a href="https://github.com/explore">Explore GitHub</a></li>
  <li class="search"><a href="https://github.com/search">Search</a></li>
  <li class="features"><a href="https://github.com/features">Features</a></li>
    <li class="blog"><a href="https://github.com/blog">Blog</a></li>
</ul>


            <div class="header-actions">
                <a class="button primary" href="https://github.com/signup">Sign up for free</a>
              <a class="button" href="https://github.com/login?return_to=%2Fadafruit%2FAdafruit-RGB-LCD-Shield-Library%2Fblob%2Fmaster%2FAdafruit_RGBLCDShield.cpp">Sign in</a>
            </div>

          </div>
        </div>


      

      


            <div class="site hfeed" itemscope itemtype="http://schema.org/WebPage">
      <div class="hentry">
        
        <div class="pagehead repohead instapaper_ignore readability-menu">
          <div class="container">
            <div class="title-actions-bar">
              


                  <ul class="pagehead-actions">


          <li>
            <span class="star-button"><a href="/login?return_to=%2Fadafruit%2FAdafruit-RGB-LCD-Shield-Library" class="minibutton js-toggler-target entice tooltipped leftwards" title="You must be signed in to use this feature" rel="nofollow"><span class="mini-icon mini-icon-star"></span>Star</a><a class="social-count js-social-count" href="/adafruit/Adafruit-RGB-LCD-Shield-Library/stargazers">18</a></span>
          </li>
          <li>
            <a href="/login?return_to=%2Fadafruit%2FAdafruit-RGB-LCD-Shield-Library" class="minibutton js-toggler-target fork-button entice tooltipped leftwards"  title="You must be signed in to fork a repository" rel="nofollow"><span class="mini-icon mini-icon-fork"></span>Fork</a><a href="/adafruit/Adafruit-RGB-LCD-Shield-Library/network" class="social-count">14</a>
          </li>
    </ul>

              <h1 itemscope itemtype="http://data-vocabulary.org/Breadcrumb" class="entry-title public">
                <span class="repo-label"><span>public</span></span>
                <span class="mega-icon mega-icon-public-repo"></span>
                <span class="author vcard">
                  <a href="/adafruit" class="url fn" itemprop="url" rel="author">
                  <span itemprop="title">adafruit</span>
                  </a></span> /
                <strong><a href="/adafruit/Adafruit-RGB-LCD-Shield-Library" class="js-current-repository">Adafruit-RGB-LCD-Shield-Library</a></strong>
              </h1>
            </div>

            

  <ul class="tabs">
    <li><a href="/adafruit/Adafruit-RGB-LCD-Shield-Library" class="selected" highlight="repo_sourcerepo_downloadsrepo_commitsrepo_tagsrepo_branches">Code</a></li>
    <li><a href="/adafruit/Adafruit-RGB-LCD-Shield-Library/network" highlight="repo_network">Network</a></li>
    <li><a href="/adafruit/Adafruit-RGB-LCD-Shield-Library/pulls" highlight="repo_pulls">Pull Requests <span class='counter'>0</span></a></li>

      <li><a href="/adafruit/Adafruit-RGB-LCD-Shield-Library/issues" highlight="repo_issues">Issues <span class='counter'>0</span></a></li>



    <li><a href="/adafruit/Adafruit-RGB-LCD-Shield-Library/graphs" highlight="repo_graphsrepo_contributors">Graphs</a></li>


  </ul>
  
<div class="tabnav">

  <span class="tabnav-right">
    <ul class="tabnav-tabs">
          <li><a href="/adafruit/Adafruit-RGB-LCD-Shield-Library/tags" class="tabnav-tab" highlight="repo_tags">Tags <span class="counter blank">0</span></a></li>
    </ul>
    
  </span>

  <div class="tabnav-widget scope">


    <div class="select-menu js-menu-container js-select-menu js-branch-menu">
      <a class="minibutton select-menu-button js-menu-target" data-hotkey="w" data-ref="master">
        <span class="mini-icon mini-icon-branch"></span>
        <i>branch:</i>
        <span class="js-select-button">master</span>
      </a>

      <div class="select-menu-modal-holder js-menu-content js-navigation-container js-select-menu-pane">

        <div class="select-menu-modal js-select-menu-pane">
          <div class="select-menu-header">
            <span class="select-menu-title">Switch branches/tags</span>
            <span class="mini-icon mini-icon-remove-close js-menu-close"></span>
          </div> <!-- /.select-menu-header -->

          <div class="select-menu-filters">
            <div class="select-menu-text-filter">
              <input type="text" id="commitish-filter-field" class="js-select-menu-text-filter js-filterable-field js-navigation-enable" placeholder="Filter branches/tags">
            </div> <!-- /.select-menu-text-filter -->
            <div class="select-menu-tabs">
              <ul>
                <li class="select-menu-tab">
                  <a href="#" data-filter="branches" class="js-select-menu-tab selected">Branches</a>
                </li>
                <li class="select-menu-tab">
                  <a href="#" data-filter="tags" class="js-select-menu-tab">Tags</a>
                </li>
              </ul>
            </div><!-- /.select-menu-tabs -->
          </div><!-- /.select-menu-filters -->

          <div class="select-menu-list js-filter-tab js-filter-branches" data-filterable-for="commitish-filter-field" data-filterable-type="substring">



              <div class="select-menu-item js-navigation-item js-navigation-target selected">
                <span class="select-menu-checkmark mini-icon mini-icon-confirm"></span>

                    <a href="/adafruit/Adafruit-RGB-LCD-Shield-Library/blob/master/Adafruit_RGBLCDShield.cpp" class="js-navigation-open select-menu-item-text js-select-button-text" data-name="master" rel="nofollow">master</a>

              </div> <!-- /.select-menu-item -->


              <div class="select-menu-no-results js-not-filterable">Nothing to show</div>
          </div> <!-- /.select-menu-list -->


          <div class="select-menu-list js-filter-tab js-filter-tags" data-filterable-for="commitish-filter-field" data-filterable-type="substring" style="display:none;">


            <div class="select-menu-no-results js-not-filterable">Nothing to show</div>

          </div> <!-- /.select-menu-list -->

        </div> <!-- /.select-menu-modal -->
      </div> <!-- /.select-menu-modal-holder -->
    </div> <!-- /.select-menu -->

  </div> <!-- /.scope -->

  <ul class="tabnav-tabs">
    <li><a href="/adafruit/Adafruit-RGB-LCD-Shield-Library" class="selected tabnav-tab" highlight="repo_source">Files</a></li>
    <li><a href="/adafruit/Adafruit-RGB-LCD-Shield-Library/commits/master" class="tabnav-tab" highlight="repo_commits">Commits</a></li>
    <li><a href="/adafruit/Adafruit-RGB-LCD-Shield-Library/branches" class="tabnav-tab" highlight="repo_branches" rel="nofollow">Branches <span class="counter ">1</span></a></li>
  </ul>

</div>

  
  
  


            
          </div>
        </div><!-- /.repohead -->

        <div id="js-repo-pjax-container" class="container context-loader-container" data-pjax-container>
          


<!-- blob contrib key: blob_contributors:v21:be5ee2e2d22fd44528a25da9261ef66c -->
<!-- blob contrib frag key: views10/v8/blob_contributors:v21:be5ee2e2d22fd44528a25da9261ef66c -->

<div id="slider">


    <div class="frame-meta">

      <p title="This is a placeholder element" class="js-history-link-replace hidden"></p>
      <div class="breadcrumb">
        <span class='bold'><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/adafruit/Adafruit-RGB-LCD-Shield-Library" class="js-slide-to" data-direction="back" itemscope="url"><span itemprop="title">Adafruit-RGB-LCD-Shield-Library</span></a></span></span> / <strong class="final-path">Adafruit_RGBLCDShield.cpp</strong> <span class="js-zeroclipboard zeroclipboard-button" data-clipboard-text="Adafruit_RGBLCDShield.cpp" data-copied-hint="copied!" title="copy to clipboard"><span class="mini-icon mini-icon-clipboard"></span></span>
      </div>

      <a href="/adafruit/Adafruit-RGB-LCD-Shield-Library/find/master" class="js-slide-to" data-hotkey="t" style="display:none">Show File Finder</a>

        
  <div class="commit file-history-tease">
    <img class="main-avatar" height="24" src="https://secure.gravatar.com/avatar/3f7ca151e1f7f7dead8b2db60aa744c1?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png" width="24" />
    <span class="author"><a href="/ladyada" rel="author">ladyada</a></span>
    <time class="js-relative-date" datetime="2012-02-14T10:18:57-08:00" title="2012-02-14 10:18:57">February 14, 2012</time>
    <div class="commit-title">
        <a href="/adafruit/Adafruit-RGB-LCD-Shield-Library/commit/3c2439bde58988f1f817c017ee9fdf3eaf782e5e" class="message">Working code</a>
    </div>

    <div class="participation">
      <p class="quickstat"><a href="#blob_contributors_box" rel="facebox"><strong>1</strong> contributor</a></p>
      
    </div>
    <div id="blob_contributors_box" style="display:none">
      <h2>Users on GitHub who have contributed to this file</h2>
      <ul class="facebox-user-list">
        <li>
          <img height="24" src="https://secure.gravatar.com/avatar/3f7ca151e1f7f7dead8b2db60aa744c1?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png" width="24" />
          <a href="/ladyada">ladyada</a>
        </li>
      </ul>
    </div>
  </div>


    </div><!-- ./.frame-meta -->

    <div class="frames">
      <div class="frame" data-permalink-url="/adafruit/Adafruit-RGB-LCD-Shield-Library/blob/13328dc8c517c20bf5696321464179e04bb636b4/Adafruit_RGBLCDShield.cpp" data-title="Adafruit-RGB-LCD-Shield-Library/Adafruit_RGBLCDShield.cpp at master · adafruit/Adafruit-RGB-LCD-Shield-Library · GitHub" data-type="blob">

        <div id="files" class="bubble">
          <div class="file">
            <div class="meta">
              <div class="info">
                <span class="icon"><b class="mini-icon mini-icon-text-file"></b></span>
                <span class="mode" title="File Mode">file</span>
                  <span>432 lines (354 sloc)</span>
                <span>11.438 kb</span>
              </div>
              <ul class="button-group actions">
                  <li>
                      <a class="grouped-button minibutton bigger lighter js-entice" href=""
                         data-entice="You must be signed in and on a branch to make or propose changes">Edit</a>
                  </li>
                <li><a href="/adafruit/Adafruit-RGB-LCD-Shield-Library/raw/master/Adafruit_RGBLCDShield.cpp" class="button minibutton grouped-button bigger lighter" id="raw-url">Raw</a></li>
                  <li><a href="/adafruit/Adafruit-RGB-LCD-Shield-Library/blame/master/Adafruit_RGBLCDShield.cpp" class="button minibutton grouped-button bigger lighter">Blame</a></li>
                <li><a href="/adafruit/Adafruit-RGB-LCD-Shield-Library/commits/master/Adafruit_RGBLCDShield.cpp" class="button minibutton grouped-button bigger lighter" rel="nofollow">History</a></li>
              </ul>

            </div>
                <div class="data type-c">
      <table cellpadding="0" cellspacing="0" class="lines">
        <tr>
          <td>
            <pre class="line_numbers"><span id="L1" rel="#L1">1</span>
<span id="L2" rel="#L2">2</span>
<span id="L3" rel="#L3">3</span>
<span id="L4" rel="#L4">4</span>
<span id="L5" rel="#L5">5</span>
<span id="L6" rel="#L6">6</span>
<span id="L7" rel="#L7">7</span>
<span id="L8" rel="#L8">8</span>
<span id="L9" rel="#L9">9</span>
<span id="L10" rel="#L10">10</span>
<span id="L11" rel="#L11">11</span>
<span id="L12" rel="#L12">12</span>
<span id="L13" rel="#L13">13</span>
<span id="L14" rel="#L14">14</span>
<span id="L15" rel="#L15">15</span>
<span id="L16" rel="#L16">16</span>
<span id="L17" rel="#L17">17</span>
<span id="L18" rel="#L18">18</span>
<span id="L19" rel="#L19">19</span>
<span id="L20" rel="#L20">20</span>
<span id="L21" rel="#L21">21</span>
<span id="L22" rel="#L22">22</span>
<span id="L23" rel="#L23">23</span>
<span id="L24" rel="#L24">24</span>
<span id="L25" rel="#L25">25</span>
<span id="L26" rel="#L26">26</span>
<span id="L27" rel="#L27">27</span>
<span id="L28" rel="#L28">28</span>
<span id="L29" rel="#L29">29</span>
<span id="L30" rel="#L30">30</span>
<span id="L31" rel="#L31">31</span>
<span id="L32" rel="#L32">32</span>
<span id="L33" rel="#L33">33</span>
<span id="L34" rel="#L34">34</span>
<span id="L35" rel="#L35">35</span>
<span id="L36" rel="#L36">36</span>
<span id="L37" rel="#L37">37</span>
<span id="L38" rel="#L38">38</span>
<span id="L39" rel="#L39">39</span>
<span id="L40" rel="#L40">40</span>
<span id="L41" rel="#L41">41</span>
<span id="L42" rel="#L42">42</span>
<span id="L43" rel="#L43">43</span>
<span id="L44" rel="#L44">44</span>
<span id="L45" rel="#L45">45</span>
<span id="L46" rel="#L46">46</span>
<span id="L47" rel="#L47">47</span>
<span id="L48" rel="#L48">48</span>
<span id="L49" rel="#L49">49</span>
<span id="L50" rel="#L50">50</span>
<span id="L51" rel="#L51">51</span>
<span id="L52" rel="#L52">52</span>
<span id="L53" rel="#L53">53</span>
<span id="L54" rel="#L54">54</span>
<span id="L55" rel="#L55">55</span>
<span id="L56" rel="#L56">56</span>
<span id="L57" rel="#L57">57</span>
<span id="L58" rel="#L58">58</span>
<span id="L59" rel="#L59">59</span>
<span id="L60" rel="#L60">60</span>
<span id="L61" rel="#L61">61</span>
<span id="L62" rel="#L62">62</span>
<span id="L63" rel="#L63">63</span>
<span id="L64" rel="#L64">64</span>
<span id="L65" rel="#L65">65</span>
<span id="L66" rel="#L66">66</span>
<span id="L67" rel="#L67">67</span>
<span id="L68" rel="#L68">68</span>
<span id="L69" rel="#L69">69</span>
<span id="L70" rel="#L70">70</span>
<span id="L71" rel="#L71">71</span>
<span id="L72" rel="#L72">72</span>
<span id="L73" rel="#L73">73</span>
<span id="L74" rel="#L74">74</span>
<span id="L75" rel="#L75">75</span>
<span id="L76" rel="#L76">76</span>
<span id="L77" rel="#L77">77</span>
<span id="L78" rel="#L78">78</span>
<span id="L79" rel="#L79">79</span>
<span id="L80" rel="#L80">80</span>
<span id="L81" rel="#L81">81</span>
<span id="L82" rel="#L82">82</span>
<span id="L83" rel="#L83">83</span>
<span id="L84" rel="#L84">84</span>
<span id="L85" rel="#L85">85</span>
<span id="L86" rel="#L86">86</span>
<span id="L87" rel="#L87">87</span>
<span id="L88" rel="#L88">88</span>
<span id="L89" rel="#L89">89</span>
<span id="L90" rel="#L90">90</span>
<span id="L91" rel="#L91">91</span>
<span id="L92" rel="#L92">92</span>
<span id="L93" rel="#L93">93</span>
<span id="L94" rel="#L94">94</span>
<span id="L95" rel="#L95">95</span>
<span id="L96" rel="#L96">96</span>
<span id="L97" rel="#L97">97</span>
<span id="L98" rel="#L98">98</span>
<span id="L99" rel="#L99">99</span>
<span id="L100" rel="#L100">100</span>
<span id="L101" rel="#L101">101</span>
<span id="L102" rel="#L102">102</span>
<span id="L103" rel="#L103">103</span>
<span id="L104" rel="#L104">104</span>
<span id="L105" rel="#L105">105</span>
<span id="L106" rel="#L106">106</span>
<span id="L107" rel="#L107">107</span>
<span id="L108" rel="#L108">108</span>
<span id="L109" rel="#L109">109</span>
<span id="L110" rel="#L110">110</span>
<span id="L111" rel="#L111">111</span>
<span id="L112" rel="#L112">112</span>
<span id="L113" rel="#L113">113</span>
<span id="L114" rel="#L114">114</span>
<span id="L115" rel="#L115">115</span>
<span id="L116" rel="#L116">116</span>
<span id="L117" rel="#L117">117</span>
<span id="L118" rel="#L118">118</span>
<span id="L119" rel="#L119">119</span>
<span id="L120" rel="#L120">120</span>
<span id="L121" rel="#L121">121</span>
<span id="L122" rel="#L122">122</span>
<span id="L123" rel="#L123">123</span>
<span id="L124" rel="#L124">124</span>
<span id="L125" rel="#L125">125</span>
<span id="L126" rel="#L126">126</span>
<span id="L127" rel="#L127">127</span>
<span id="L128" rel="#L128">128</span>
<span id="L129" rel="#L129">129</span>
<span id="L130" rel="#L130">130</span>
<span id="L131" rel="#L131">131</span>
<span id="L132" rel="#L132">132</span>
<span id="L133" rel="#L133">133</span>
<span id="L134" rel="#L134">134</span>
<span id="L135" rel="#L135">135</span>
<span id="L136" rel="#L136">136</span>
<span id="L137" rel="#L137">137</span>
<span id="L138" rel="#L138">138</span>
<span id="L139" rel="#L139">139</span>
<span id="L140" rel="#L140">140</span>
<span id="L141" rel="#L141">141</span>
<span id="L142" rel="#L142">142</span>
<span id="L143" rel="#L143">143</span>
<span id="L144" rel="#L144">144</span>
<span id="L145" rel="#L145">145</span>
<span id="L146" rel="#L146">146</span>
<span id="L147" rel="#L147">147</span>
<span id="L148" rel="#L148">148</span>
<span id="L149" rel="#L149">149</span>
<span id="L150" rel="#L150">150</span>
<span id="L151" rel="#L151">151</span>
<span id="L152" rel="#L152">152</span>
<span id="L153" rel="#L153">153</span>
<span id="L154" rel="#L154">154</span>
<span id="L155" rel="#L155">155</span>
<span id="L156" rel="#L156">156</span>
<span id="L157" rel="#L157">157</span>
<span id="L158" rel="#L158">158</span>
<span id="L159" rel="#L159">159</span>
<span id="L160" rel="#L160">160</span>
<span id="L161" rel="#L161">161</span>
<span id="L162" rel="#L162">162</span>
<span id="L163" rel="#L163">163</span>
<span id="L164" rel="#L164">164</span>
<span id="L165" rel="#L165">165</span>
<span id="L166" rel="#L166">166</span>
<span id="L167" rel="#L167">167</span>
<span id="L168" rel="#L168">168</span>
<span id="L169" rel="#L169">169</span>
<span id="L170" rel="#L170">170</span>
<span id="L171" rel="#L171">171</span>
<span id="L172" rel="#L172">172</span>
<span id="L173" rel="#L173">173</span>
<span id="L174" rel="#L174">174</span>
<span id="L175" rel="#L175">175</span>
<span id="L176" rel="#L176">176</span>
<span id="L177" rel="#L177">177</span>
<span id="L178" rel="#L178">178</span>
<span id="L179" rel="#L179">179</span>
<span id="L180" rel="#L180">180</span>
<span id="L181" rel="#L181">181</span>
<span id="L182" rel="#L182">182</span>
<span id="L183" rel="#L183">183</span>
<span id="L184" rel="#L184">184</span>
<span id="L185" rel="#L185">185</span>
<span id="L186" rel="#L186">186</span>
<span id="L187" rel="#L187">187</span>
<span id="L188" rel="#L188">188</span>
<span id="L189" rel="#L189">189</span>
<span id="L190" rel="#L190">190</span>
<span id="L191" rel="#L191">191</span>
<span id="L192" rel="#L192">192</span>
<span id="L193" rel="#L193">193</span>
<span id="L194" rel="#L194">194</span>
<span id="L195" rel="#L195">195</span>
<span id="L196" rel="#L196">196</span>
<span id="L197" rel="#L197">197</span>
<span id="L198" rel="#L198">198</span>
<span id="L199" rel="#L199">199</span>
<span id="L200" rel="#L200">200</span>
<span id="L201" rel="#L201">201</span>
<span id="L202" rel="#L202">202</span>
<span id="L203" rel="#L203">203</span>
<span id="L204" rel="#L204">204</span>
<span id="L205" rel="#L205">205</span>
<span id="L206" rel="#L206">206</span>
<span id="L207" rel="#L207">207</span>
<span id="L208" rel="#L208">208</span>
<span id="L209" rel="#L209">209</span>
<span id="L210" rel="#L210">210</span>
<span id="L211" rel="#L211">211</span>
<span id="L212" rel="#L212">212</span>
<span id="L213" rel="#L213">213</span>
<span id="L214" rel="#L214">214</span>
<span id="L215" rel="#L215">215</span>
<span id="L216" rel="#L216">216</span>
<span id="L217" rel="#L217">217</span>
<span id="L218" rel="#L218">218</span>
<span id="L219" rel="#L219">219</span>
<span id="L220" rel="#L220">220</span>
<span id="L221" rel="#L221">221</span>
<span id="L222" rel="#L222">222</span>
<span id="L223" rel="#L223">223</span>
<span id="L224" rel="#L224">224</span>
<span id="L225" rel="#L225">225</span>
<span id="L226" rel="#L226">226</span>
<span id="L227" rel="#L227">227</span>
<span id="L228" rel="#L228">228</span>
<span id="L229" rel="#L229">229</span>
<span id="L230" rel="#L230">230</span>
<span id="L231" rel="#L231">231</span>
<span id="L232" rel="#L232">232</span>
<span id="L233" rel="#L233">233</span>
<span id="L234" rel="#L234">234</span>
<span id="L235" rel="#L235">235</span>
<span id="L236" rel="#L236">236</span>
<span id="L237" rel="#L237">237</span>
<span id="L238" rel="#L238">238</span>
<span id="L239" rel="#L239">239</span>
<span id="L240" rel="#L240">240</span>
<span id="L241" rel="#L241">241</span>
<span id="L242" rel="#L242">242</span>
<span id="L243" rel="#L243">243</span>
<span id="L244" rel="#L244">244</span>
<span id="L245" rel="#L245">245</span>
<span id="L246" rel="#L246">246</span>
<span id="L247" rel="#L247">247</span>
<span id="L248" rel="#L248">248</span>
<span id="L249" rel="#L249">249</span>
<span id="L250" rel="#L250">250</span>
<span id="L251" rel="#L251">251</span>
<span id="L252" rel="#L252">252</span>
<span id="L253" rel="#L253">253</span>
<span id="L254" rel="#L254">254</span>
<span id="L255" rel="#L255">255</span>
<span id="L256" rel="#L256">256</span>
<span id="L257" rel="#L257">257</span>
<span id="L258" rel="#L258">258</span>
<span id="L259" rel="#L259">259</span>
<span id="L260" rel="#L260">260</span>
<span id="L261" rel="#L261">261</span>
<span id="L262" rel="#L262">262</span>
<span id="L263" rel="#L263">263</span>
<span id="L264" rel="#L264">264</span>
<span id="L265" rel="#L265">265</span>
<span id="L266" rel="#L266">266</span>
<span id="L267" rel="#L267">267</span>
<span id="L268" rel="#L268">268</span>
<span id="L269" rel="#L269">269</span>
<span id="L270" rel="#L270">270</span>
<span id="L271" rel="#L271">271</span>
<span id="L272" rel="#L272">272</span>
<span id="L273" rel="#L273">273</span>
<span id="L274" rel="#L274">274</span>
<span id="L275" rel="#L275">275</span>
<span id="L276" rel="#L276">276</span>
<span id="L277" rel="#L277">277</span>
<span id="L278" rel="#L278">278</span>
<span id="L279" rel="#L279">279</span>
<span id="L280" rel="#L280">280</span>
<span id="L281" rel="#L281">281</span>
<span id="L282" rel="#L282">282</span>
<span id="L283" rel="#L283">283</span>
<span id="L284" rel="#L284">284</span>
<span id="L285" rel="#L285">285</span>
<span id="L286" rel="#L286">286</span>
<span id="L287" rel="#L287">287</span>
<span id="L288" rel="#L288">288</span>
<span id="L289" rel="#L289">289</span>
<span id="L290" rel="#L290">290</span>
<span id="L291" rel="#L291">291</span>
<span id="L292" rel="#L292">292</span>
<span id="L293" rel="#L293">293</span>
<span id="L294" rel="#L294">294</span>
<span id="L295" rel="#L295">295</span>
<span id="L296" rel="#L296">296</span>
<span id="L297" rel="#L297">297</span>
<span id="L298" rel="#L298">298</span>
<span id="L299" rel="#L299">299</span>
<span id="L300" rel="#L300">300</span>
<span id="L301" rel="#L301">301</span>
<span id="L302" rel="#L302">302</span>
<span id="L303" rel="#L303">303</span>
<span id="L304" rel="#L304">304</span>
<span id="L305" rel="#L305">305</span>
<span id="L306" rel="#L306">306</span>
<span id="L307" rel="#L307">307</span>
<span id="L308" rel="#L308">308</span>
<span id="L309" rel="#L309">309</span>
<span id="L310" rel="#L310">310</span>
<span id="L311" rel="#L311">311</span>
<span id="L312" rel="#L312">312</span>
<span id="L313" rel="#L313">313</span>
<span id="L314" rel="#L314">314</span>
<span id="L315" rel="#L315">315</span>
<span id="L316" rel="#L316">316</span>
<span id="L317" rel="#L317">317</span>
<span id="L318" rel="#L318">318</span>
<span id="L319" rel="#L319">319</span>
<span id="L320" rel="#L320">320</span>
<span id="L321" rel="#L321">321</span>
<span id="L322" rel="#L322">322</span>
<span id="L323" rel="#L323">323</span>
<span id="L324" rel="#L324">324</span>
<span id="L325" rel="#L325">325</span>
<span id="L326" rel="#L326">326</span>
<span id="L327" rel="#L327">327</span>
<span id="L328" rel="#L328">328</span>
<span id="L329" rel="#L329">329</span>
<span id="L330" rel="#L330">330</span>
<span id="L331" rel="#L331">331</span>
<span id="L332" rel="#L332">332</span>
<span id="L333" rel="#L333">333</span>
<span id="L334" rel="#L334">334</span>
<span id="L335" rel="#L335">335</span>
<span id="L336" rel="#L336">336</span>
<span id="L337" rel="#L337">337</span>
<span id="L338" rel="#L338">338</span>
<span id="L339" rel="#L339">339</span>
<span id="L340" rel="#L340">340</span>
<span id="L341" rel="#L341">341</span>
<span id="L342" rel="#L342">342</span>
<span id="L343" rel="#L343">343</span>
<span id="L344" rel="#L344">344</span>
<span id="L345" rel="#L345">345</span>
<span id="L346" rel="#L346">346</span>
<span id="L347" rel="#L347">347</span>
<span id="L348" rel="#L348">348</span>
<span id="L349" rel="#L349">349</span>
<span id="L350" rel="#L350">350</span>
<span id="L351" rel="#L351">351</span>
<span id="L352" rel="#L352">352</span>
<span id="L353" rel="#L353">353</span>
<span id="L354" rel="#L354">354</span>
<span id="L355" rel="#L355">355</span>
<span id="L356" rel="#L356">356</span>
<span id="L357" rel="#L357">357</span>
<span id="L358" rel="#L358">358</span>
<span id="L359" rel="#L359">359</span>
<span id="L360" rel="#L360">360</span>
<span id="L361" rel="#L361">361</span>
<span id="L362" rel="#L362">362</span>
<span id="L363" rel="#L363">363</span>
<span id="L364" rel="#L364">364</span>
<span id="L365" rel="#L365">365</span>
<span id="L366" rel="#L366">366</span>
<span id="L367" rel="#L367">367</span>
<span id="L368" rel="#L368">368</span>
<span id="L369" rel="#L369">369</span>
<span id="L370" rel="#L370">370</span>
<span id="L371" rel="#L371">371</span>
<span id="L372" rel="#L372">372</span>
<span id="L373" rel="#L373">373</span>
<span id="L374" rel="#L374">374</span>
<span id="L375" rel="#L375">375</span>
<span id="L376" rel="#L376">376</span>
<span id="L377" rel="#L377">377</span>
<span id="L378" rel="#L378">378</span>
<span id="L379" rel="#L379">379</span>
<span id="L380" rel="#L380">380</span>
<span id="L381" rel="#L381">381</span>
<span id="L382" rel="#L382">382</span>
<span id="L383" rel="#L383">383</span>
<span id="L384" rel="#L384">384</span>
<span id="L385" rel="#L385">385</span>
<span id="L386" rel="#L386">386</span>
<span id="L387" rel="#L387">387</span>
<span id="L388" rel="#L388">388</span>
<span id="L389" rel="#L389">389</span>
<span id="L390" rel="#L390">390</span>
<span id="L391" rel="#L391">391</span>
<span id="L392" rel="#L392">392</span>
<span id="L393" rel="#L393">393</span>
<span id="L394" rel="#L394">394</span>
<span id="L395" rel="#L395">395</span>
<span id="L396" rel="#L396">396</span>
<span id="L397" rel="#L397">397</span>
<span id="L398" rel="#L398">398</span>
<span id="L399" rel="#L399">399</span>
<span id="L400" rel="#L400">400</span>
<span id="L401" rel="#L401">401</span>
<span id="L402" rel="#L402">402</span>
<span id="L403" rel="#L403">403</span>
<span id="L404" rel="#L404">404</span>
<span id="L405" rel="#L405">405</span>
<span id="L406" rel="#L406">406</span>
<span id="L407" rel="#L407">407</span>
<span id="L408" rel="#L408">408</span>
<span id="L409" rel="#L409">409</span>
<span id="L410" rel="#L410">410</span>
<span id="L411" rel="#L411">411</span>
<span id="L412" rel="#L412">412</span>
<span id="L413" rel="#L413">413</span>
<span id="L414" rel="#L414">414</span>
<span id="L415" rel="#L415">415</span>
<span id="L416" rel="#L416">416</span>
<span id="L417" rel="#L417">417</span>
<span id="L418" rel="#L418">418</span>
<span id="L419" rel="#L419">419</span>
<span id="L420" rel="#L420">420</span>
<span id="L421" rel="#L421">421</span>
<span id="L422" rel="#L422">422</span>
<span id="L423" rel="#L423">423</span>
<span id="L424" rel="#L424">424</span>
<span id="L425" rel="#L425">425</span>
<span id="L426" rel="#L426">426</span>
<span id="L427" rel="#L427">427</span>
<span id="L428" rel="#L428">428</span>
<span id="L429" rel="#L429">429</span>
<span id="L430" rel="#L430">430</span>
<span id="L431" rel="#L431">431</span>
</pre>
          </td>
          <td width="100%">
                <div class="highlight"><pre><div class='line' id='LC1'><span class="cm">/*************************************************** </span></div><div class='line' id='LC2'><span class="cm">  This is a library for the Adafruit RGB 16x2 LCD Shield </span></div><div class='line' id='LC3'><span class="cm">  Pick one up at the Adafruit shop!</span></div><div class='line' id='LC4'><span class="cm">  ---------&gt; http://http://www.adafruit.com/products/714</span></div><div class='line' id='LC5'><br/></div><div class='line' id='LC6'><span class="cm">  The shield uses I2C to communicate, 2 pins are required to  </span></div><div class='line' id='LC7'><span class="cm">  interface</span></div><div class='line' id='LC8'><span class="cm">  Adafruit invests time and resources providing this open source code, </span></div><div class='line' id='LC9'><span class="cm">  please support Adafruit and open-source hardware by purchasing </span></div><div class='line' id='LC10'><span class="cm">  products from Adafruit!</span></div><div class='line' id='LC11'><br/></div><div class='line' id='LC12'><span class="cm">  Written by Limor Fried/Ladyada for Adafruit Industries.  </span></div><div class='line' id='LC13'><span class="cm">  BSD license, all text above must be included in any redistribution</span></div><div class='line' id='LC14'><span class="cm"> ****************************************************/</span></div><div class='line' id='LC15'><br/></div><div class='line' id='LC16'><br/></div><div class='line' id='LC17'><span class="cp">#include &quot;Adafruit_RGBLCDShield.h&quot;</span></div><div class='line' id='LC18'><br/></div><div class='line' id='LC19'><span class="cp">#include &lt;stdio.h&gt;</span></div><div class='line' id='LC20'><span class="cp">#include &lt;string.h&gt;</span></div><div class='line' id='LC21'><span class="cp">#include &lt;inttypes.h&gt;</span></div><div class='line' id='LC22'><span class="cp">#include &lt;Wire.h&gt;</span></div><div class='line' id='LC23'><br/></div><div class='line' id='LC24'><span class="cp">#if ARDUINO &gt;= 100</span></div><div class='line' id='LC25'>&nbsp;<span class="cp">#include &quot;Arduino.h&quot;</span></div><div class='line' id='LC26'><span class="cp">#else</span></div><div class='line' id='LC27'>&nbsp;<span class="cp">#include &quot;WProgram.h&quot;</span></div><div class='line' id='LC28'><span class="cp">#endif</span></div><div class='line' id='LC29'><br/></div><div class='line' id='LC30'><span class="c1">// When the display powers up, it is configured as follows:</span></div><div class='line' id='LC31'><span class="c1">//</span></div><div class='line' id='LC32'><span class="c1">// 1. Display clear</span></div><div class='line' id='LC33'><span class="c1">// 2. Function set: </span></div><div class='line' id='LC34'><span class="c1">//    DL = 1; 8-bit interface data </span></div><div class='line' id='LC35'><span class="c1">//    N = 0; 1-line display </span></div><div class='line' id='LC36'><span class="c1">//    F = 0; 5x8 dot character font </span></div><div class='line' id='LC37'><span class="c1">// 3. Display on/off control: </span></div><div class='line' id='LC38'><span class="c1">//    D = 0; Display off </span></div><div class='line' id='LC39'><span class="c1">//    C = 0; Cursor off </span></div><div class='line' id='LC40'><span class="c1">//    B = 0; Blinking off </span></div><div class='line' id='LC41'><span class="c1">// 4. Entry mode set: </span></div><div class='line' id='LC42'><span class="c1">//    I/D = 1; Increment by 1 </span></div><div class='line' id='LC43'><span class="c1">//    S = 0; No shift </span></div><div class='line' id='LC44'><span class="c1">//</span></div><div class='line' id='LC45'><span class="c1">// Note, however, that resetting the Arduino doesn&#39;t reset the LCD, so we</span></div><div class='line' id='LC46'><span class="c1">// can&#39;t assume that its in that state when a sketch starts (and the</span></div><div class='line' id='LC47'><span class="c1">// RGBLCDShield constructor is called).</span></div><div class='line' id='LC48'><br/></div><div class='line' id='LC49'><span class="n">Adafruit_RGBLCDShield</span><span class="o">::</span><span class="n">Adafruit_RGBLCDShield</span><span class="p">()</span> <span class="p">{</span></div><div class='line' id='LC50'>&nbsp;&nbsp;<span class="n">_i2cAddr</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC51'><br/></div><div class='line' id='LC52'>&nbsp;&nbsp;<span class="n">_displayfunction</span> <span class="o">=</span> <span class="n">LCD_4BITMODE</span> <span class="o">|</span> <span class="n">LCD_1LINE</span> <span class="o">|</span> <span class="n">LCD_5x8DOTS</span><span class="p">;</span></div><div class='line' id='LC53'>&nbsp;&nbsp;</div><div class='line' id='LC54'>&nbsp;&nbsp;<span class="c1">// the I/O expander pinout</span></div><div class='line' id='LC55'>&nbsp;&nbsp;<span class="n">_rs_pin</span> <span class="o">=</span> <span class="mi">15</span><span class="p">;</span></div><div class='line' id='LC56'>&nbsp;&nbsp;<span class="n">_rw_pin</span> <span class="o">=</span> <span class="mi">14</span><span class="p">;</span></div><div class='line' id='LC57'>&nbsp;&nbsp;<span class="n">_enable_pin</span> <span class="o">=</span> <span class="mi">13</span><span class="p">;</span></div><div class='line' id='LC58'>&nbsp;&nbsp;<span class="n">_data_pins</span><span class="p">[</span><span class="mi">0</span><span class="p">]</span> <span class="o">=</span> <span class="mi">12</span><span class="p">;</span>  <span class="c1">// really d4</span></div><div class='line' id='LC59'>&nbsp;&nbsp;<span class="n">_data_pins</span><span class="p">[</span><span class="mi">1</span><span class="p">]</span> <span class="o">=</span> <span class="mi">11</span><span class="p">;</span>  <span class="c1">// really d5</span></div><div class='line' id='LC60'>&nbsp;&nbsp;<span class="n">_data_pins</span><span class="p">[</span><span class="mi">2</span><span class="p">]</span> <span class="o">=</span> <span class="mi">10</span><span class="p">;</span>  <span class="c1">// really d6</span></div><div class='line' id='LC61'>&nbsp;&nbsp;<span class="n">_data_pins</span><span class="p">[</span><span class="mi">3</span><span class="p">]</span> <span class="o">=</span> <span class="mi">9</span><span class="p">;</span>  <span class="c1">// really d7</span></div><div class='line' id='LC62'>&nbsp;&nbsp;</div><div class='line' id='LC63'>&nbsp;&nbsp;<span class="n">_button_pins</span><span class="p">[</span><span class="mi">0</span><span class="p">]</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC64'>&nbsp;&nbsp;<span class="n">_button_pins</span><span class="p">[</span><span class="mi">1</span><span class="p">]</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC65'>&nbsp;&nbsp;<span class="n">_button_pins</span><span class="p">[</span><span class="mi">2</span><span class="p">]</span> <span class="o">=</span> <span class="mi">2</span><span class="p">;</span></div><div class='line' id='LC66'>&nbsp;&nbsp;<span class="n">_button_pins</span><span class="p">[</span><span class="mi">3</span><span class="p">]</span> <span class="o">=</span> <span class="mi">3</span><span class="p">;</span></div><div class='line' id='LC67'>&nbsp;&nbsp;<span class="n">_button_pins</span><span class="p">[</span><span class="mi">4</span><span class="p">]</span> <span class="o">=</span> <span class="mi">4</span><span class="p">;</span></div><div class='line' id='LC68'>&nbsp;&nbsp;<span class="c1">// we can&#39;t begin() yet :(</span></div><div class='line' id='LC69'><span class="p">}</span></div><div class='line' id='LC70'><br/></div><div class='line' id='LC71'><br/></div><div class='line' id='LC72'><br/></div><div class='line' id='LC73'><br/></div><div class='line' id='LC74'><span class="kt">void</span> <span class="n">Adafruit_RGBLCDShield</span><span class="o">::</span><span class="n">init</span><span class="p">(</span><span class="n">uint8_t</span> <span class="n">fourbitmode</span><span class="p">,</span> <span class="n">uint8_t</span> <span class="n">rs</span><span class="p">,</span> <span class="n">uint8_t</span> <span class="n">rw</span><span class="p">,</span> <span class="n">uint8_t</span> <span class="n">enable</span><span class="p">,</span></div><div class='line' id='LC75'>			 <span class="n">uint8_t</span> <span class="n">d0</span><span class="p">,</span> <span class="n">uint8_t</span> <span class="n">d1</span><span class="p">,</span> <span class="n">uint8_t</span> <span class="n">d2</span><span class="p">,</span> <span class="n">uint8_t</span> <span class="n">d3</span><span class="p">,</span></div><div class='line' id='LC76'>			 <span class="n">uint8_t</span> <span class="n">d4</span><span class="p">,</span> <span class="n">uint8_t</span> <span class="n">d5</span><span class="p">,</span> <span class="n">uint8_t</span> <span class="n">d6</span><span class="p">,</span> <span class="n">uint8_t</span> <span class="n">d7</span><span class="p">)</span></div><div class='line' id='LC77'><span class="p">{</span></div><div class='line' id='LC78'>&nbsp;&nbsp;<span class="n">_rs_pin</span> <span class="o">=</span> <span class="n">rs</span><span class="p">;</span></div><div class='line' id='LC79'>&nbsp;&nbsp;<span class="n">_rw_pin</span> <span class="o">=</span> <span class="n">rw</span><span class="p">;</span></div><div class='line' id='LC80'>&nbsp;&nbsp;<span class="n">_enable_pin</span> <span class="o">=</span> <span class="n">enable</span><span class="p">;</span></div><div class='line' id='LC81'>&nbsp;&nbsp;</div><div class='line' id='LC82'>&nbsp;&nbsp;<span class="n">_data_pins</span><span class="p">[</span><span class="mi">0</span><span class="p">]</span> <span class="o">=</span> <span class="n">d0</span><span class="p">;</span></div><div class='line' id='LC83'>&nbsp;&nbsp;<span class="n">_data_pins</span><span class="p">[</span><span class="mi">1</span><span class="p">]</span> <span class="o">=</span> <span class="n">d1</span><span class="p">;</span></div><div class='line' id='LC84'>&nbsp;&nbsp;<span class="n">_data_pins</span><span class="p">[</span><span class="mi">2</span><span class="p">]</span> <span class="o">=</span> <span class="n">d2</span><span class="p">;</span></div><div class='line' id='LC85'>&nbsp;&nbsp;<span class="n">_data_pins</span><span class="p">[</span><span class="mi">3</span><span class="p">]</span> <span class="o">=</span> <span class="n">d3</span><span class="p">;</span> </div><div class='line' id='LC86'>&nbsp;&nbsp;<span class="n">_data_pins</span><span class="p">[</span><span class="mi">4</span><span class="p">]</span> <span class="o">=</span> <span class="n">d4</span><span class="p">;</span></div><div class='line' id='LC87'>&nbsp;&nbsp;<span class="n">_data_pins</span><span class="p">[</span><span class="mi">5</span><span class="p">]</span> <span class="o">=</span> <span class="n">d5</span><span class="p">;</span></div><div class='line' id='LC88'>&nbsp;&nbsp;<span class="n">_data_pins</span><span class="p">[</span><span class="mi">6</span><span class="p">]</span> <span class="o">=</span> <span class="n">d6</span><span class="p">;</span></div><div class='line' id='LC89'>&nbsp;&nbsp;<span class="n">_data_pins</span><span class="p">[</span><span class="mi">7</span><span class="p">]</span> <span class="o">=</span> <span class="n">d7</span><span class="p">;</span> </div><div class='line' id='LC90'><br/></div><div class='line' id='LC91'>&nbsp;&nbsp;<span class="n">_i2cAddr</span> <span class="o">=</span> <span class="mi">255</span><span class="p">;</span></div><div class='line' id='LC92'><br/></div><div class='line' id='LC93'>&nbsp;&nbsp;<span class="n">_pinMode</span><span class="p">(</span><span class="n">_rs_pin</span><span class="p">,</span> <span class="n">OUTPUT</span><span class="p">);</span></div><div class='line' id='LC94'>&nbsp;&nbsp;<span class="c1">// we can save 1 pin by not using RW. Indicate by passing 255 instead of pin#</span></div><div class='line' id='LC95'>&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">_rw_pin</span> <span class="o">!=</span> <span class="mi">255</span><span class="p">)</span> <span class="p">{</span> </div><div class='line' id='LC96'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_pinMode</span><span class="p">(</span><span class="n">_rw_pin</span><span class="p">,</span> <span class="n">OUTPUT</span><span class="p">);</span></div><div class='line' id='LC97'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC98'>&nbsp;&nbsp;<span class="n">_pinMode</span><span class="p">(</span><span class="n">_enable_pin</span><span class="p">,</span> <span class="n">OUTPUT</span><span class="p">);</span></div><div class='line' id='LC99'>&nbsp;&nbsp;</div><div class='line' id='LC100'><br/></div><div class='line' id='LC101'>&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">fourbitmode</span><span class="p">)</span></div><div class='line' id='LC102'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_displayfunction</span> <span class="o">=</span> <span class="n">LCD_4BITMODE</span> <span class="o">|</span> <span class="n">LCD_1LINE</span> <span class="o">|</span> <span class="n">LCD_5x8DOTS</span><span class="p">;</span></div><div class='line' id='LC103'>&nbsp;&nbsp;<span class="k">else</span> </div><div class='line' id='LC104'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_displayfunction</span> <span class="o">=</span> <span class="n">LCD_8BITMODE</span> <span class="o">|</span> <span class="n">LCD_1LINE</span> <span class="o">|</span> <span class="n">LCD_5x8DOTS</span><span class="p">;</span></div><div class='line' id='LC105'>&nbsp;&nbsp;</div><div class='line' id='LC106'>&nbsp;&nbsp;<span class="n">begin</span><span class="p">(</span><span class="mi">16</span><span class="p">,</span> <span class="mi">1</span><span class="p">);</span>  </div><div class='line' id='LC107'><span class="p">}</span></div><div class='line' id='LC108'><br/></div><div class='line' id='LC109'><span class="kt">void</span> <span class="n">Adafruit_RGBLCDShield</span><span class="o">::</span><span class="n">begin</span><span class="p">(</span><span class="n">uint8_t</span> <span class="n">cols</span><span class="p">,</span> <span class="n">uint8_t</span> <span class="n">lines</span><span class="p">,</span> <span class="n">uint8_t</span> <span class="n">dotsize</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC110'>&nbsp;&nbsp;<span class="c1">// check if i2c</span></div><div class='line' id='LC111'>&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">_i2cAddr</span> <span class="o">!=</span> <span class="mi">255</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC112'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">//_i2c.begin(_i2cAddr);</span></div><div class='line' id='LC113'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">Wire</span><span class="p">.</span><span class="n">begin</span><span class="p">();</span></div><div class='line' id='LC114'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_i2c</span><span class="p">.</span><span class="n">begin</span><span class="p">();</span></div><div class='line' id='LC115'><br/></div><div class='line' id='LC116'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_i2c</span><span class="p">.</span><span class="n">pinMode</span><span class="p">(</span><span class="mi">8</span><span class="p">,</span> <span class="n">OUTPUT</span><span class="p">);</span></div><div class='line' id='LC117'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_i2c</span><span class="p">.</span><span class="n">pinMode</span><span class="p">(</span><span class="mi">6</span><span class="p">,</span> <span class="n">OUTPUT</span><span class="p">);</span></div><div class='line' id='LC118'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_i2c</span><span class="p">.</span><span class="n">pinMode</span><span class="p">(</span><span class="mi">7</span><span class="p">,</span> <span class="n">OUTPUT</span><span class="p">);</span></div><div class='line' id='LC119'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">setBacklight</span><span class="p">(</span><span class="mh">0x7</span><span class="p">);</span></div><div class='line' id='LC120'><br/></div><div class='line' id='LC121'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">_rw_pin</span><span class="p">)</span></div><div class='line' id='LC122'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_i2c</span><span class="p">.</span><span class="n">pinMode</span><span class="p">(</span><span class="n">_rw_pin</span><span class="p">,</span> <span class="n">OUTPUT</span><span class="p">);</span></div><div class='line' id='LC123'><br/></div><div class='line' id='LC124'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_i2c</span><span class="p">.</span><span class="n">pinMode</span><span class="p">(</span><span class="n">_rs_pin</span><span class="p">,</span> <span class="n">OUTPUT</span><span class="p">);</span></div><div class='line' id='LC125'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_i2c</span><span class="p">.</span><span class="n">pinMode</span><span class="p">(</span><span class="n">_enable_pin</span><span class="p">,</span> <span class="n">OUTPUT</span><span class="p">);</span></div><div class='line' id='LC126'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">for</span> <span class="p">(</span><span class="n">uint8_t</span> <span class="n">i</span><span class="o">=</span><span class="mi">0</span><span class="p">;</span> <span class="n">i</span><span class="o">&lt;</span><span class="mi">4</span><span class="p">;</span> <span class="n">i</span><span class="o">++</span><span class="p">)</span> </div><div class='line' id='LC127'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_i2c</span><span class="p">.</span><span class="n">pinMode</span><span class="p">(</span><span class="n">_data_pins</span><span class="p">[</span><span class="n">i</span><span class="p">],</span> <span class="n">OUTPUT</span><span class="p">);</span></div><div class='line' id='LC128'><br/></div><div class='line' id='LC129'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">for</span> <span class="p">(</span><span class="n">uint8_t</span> <span class="n">i</span><span class="o">=</span><span class="mi">0</span><span class="p">;</span> <span class="n">i</span><span class="o">&lt;</span><span class="mi">5</span><span class="p">;</span> <span class="n">i</span><span class="o">++</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC130'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_i2c</span><span class="p">.</span><span class="n">pinMode</span><span class="p">(</span><span class="n">_button_pins</span><span class="p">[</span><span class="n">i</span><span class="p">],</span> <span class="n">INPUT</span><span class="p">);</span></div><div class='line' id='LC131'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_i2c</span><span class="p">.</span><span class="n">pullUp</span><span class="p">(</span><span class="n">_button_pins</span><span class="p">[</span><span class="n">i</span><span class="p">],</span> <span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC132'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC133'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC134'><br/></div><div class='line' id='LC135'>&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">lines</span> <span class="o">&gt;</span> <span class="mi">1</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC136'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_displayfunction</span> <span class="o">|=</span> <span class="n">LCD_2LINE</span><span class="p">;</span></div><div class='line' id='LC137'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC138'>&nbsp;&nbsp;<span class="n">_numlines</span> <span class="o">=</span> <span class="n">lines</span><span class="p">;</span></div><div class='line' id='LC139'>&nbsp;&nbsp;<span class="n">_currline</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC140'><br/></div><div class='line' id='LC141'>&nbsp;&nbsp;<span class="c1">// for some 1 line displays you can select a 10 pixel high font</span></div><div class='line' id='LC142'>&nbsp;&nbsp;<span class="k">if</span> <span class="p">((</span><span class="n">dotsize</span> <span class="o">!=</span> <span class="mi">0</span><span class="p">)</span> <span class="o">&amp;&amp;</span> <span class="p">(</span><span class="n">lines</span> <span class="o">==</span> <span class="mi">1</span><span class="p">))</span> <span class="p">{</span></div><div class='line' id='LC143'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_displayfunction</span> <span class="o">|=</span> <span class="n">LCD_5x10DOTS</span><span class="p">;</span></div><div class='line' id='LC144'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC145'><br/></div><div class='line' id='LC146'>&nbsp;&nbsp;<span class="c1">// SEE PAGE 45/46 FOR INITIALIZATION SPECIFICATION!</span></div><div class='line' id='LC147'>&nbsp;&nbsp;<span class="c1">// according to datasheet, we need at least 40ms after power rises above 2.7V</span></div><div class='line' id='LC148'>&nbsp;&nbsp;<span class="c1">// before sending commands. Arduino can turn on way befer 4.5V so we&#39;ll wait 50</span></div><div class='line' id='LC149'>&nbsp;&nbsp;<span class="n">delayMicroseconds</span><span class="p">(</span><span class="mi">50000</span><span class="p">);</span> </div><div class='line' id='LC150'>&nbsp;&nbsp;<span class="c1">// Now we pull both RS and R/W low to begin commands</span></div><div class='line' id='LC151'>&nbsp;&nbsp;<span class="n">_digitalWrite</span><span class="p">(</span><span class="n">_rs_pin</span><span class="p">,</span> <span class="n">LOW</span><span class="p">);</span></div><div class='line' id='LC152'>&nbsp;&nbsp;<span class="n">_digitalWrite</span><span class="p">(</span><span class="n">_enable_pin</span><span class="p">,</span> <span class="n">LOW</span><span class="p">);</span></div><div class='line' id='LC153'>&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">_rw_pin</span> <span class="o">!=</span> <span class="mi">255</span><span class="p">)</span> <span class="p">{</span> </div><div class='line' id='LC154'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_digitalWrite</span><span class="p">(</span><span class="n">_rw_pin</span><span class="p">,</span> <span class="n">LOW</span><span class="p">);</span></div><div class='line' id='LC155'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC156'>&nbsp;&nbsp;</div><div class='line' id='LC157'>&nbsp;&nbsp;<span class="c1">//put the LCD into 4 bit or 8 bit mode</span></div><div class='line' id='LC158'>&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="o">!</span> <span class="p">(</span><span class="n">_displayfunction</span> <span class="o">&amp;</span> <span class="n">LCD_8BITMODE</span><span class="p">))</span> <span class="p">{</span></div><div class='line' id='LC159'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// this is according to the hitachi HD44780 datasheet</span></div><div class='line' id='LC160'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// figure 24, pg 46</span></div><div class='line' id='LC161'><br/></div><div class='line' id='LC162'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// we start in 8bit mode, try to set 4 bit mode</span></div><div class='line' id='LC163'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">write4bits</span><span class="p">(</span><span class="mh">0x03</span><span class="p">);</span></div><div class='line' id='LC164'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">delayMicroseconds</span><span class="p">(</span><span class="mi">4500</span><span class="p">);</span> <span class="c1">// wait min 4.1ms</span></div><div class='line' id='LC165'><br/></div><div class='line' id='LC166'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// second try</span></div><div class='line' id='LC167'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">write4bits</span><span class="p">(</span><span class="mh">0x03</span><span class="p">);</span></div><div class='line' id='LC168'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">delayMicroseconds</span><span class="p">(</span><span class="mi">4500</span><span class="p">);</span> <span class="c1">// wait min 4.1ms</span></div><div class='line' id='LC169'>&nbsp;&nbsp;&nbsp;&nbsp;</div><div class='line' id='LC170'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// third go!</span></div><div class='line' id='LC171'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">write4bits</span><span class="p">(</span><span class="mh">0x03</span><span class="p">);</span> </div><div class='line' id='LC172'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">delayMicroseconds</span><span class="p">(</span><span class="mi">150</span><span class="p">);</span></div><div class='line' id='LC173'><br/></div><div class='line' id='LC174'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// finally, set to 8-bit interface</span></div><div class='line' id='LC175'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">write4bits</span><span class="p">(</span><span class="mh">0x02</span><span class="p">);</span> </div><div class='line' id='LC176'>&nbsp;&nbsp;<span class="p">}</span> <span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC177'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// this is according to the hitachi HD44780 datasheet</span></div><div class='line' id='LC178'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// page 45 figure 23</span></div><div class='line' id='LC179'><br/></div><div class='line' id='LC180'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// Send function set command sequence</span></div><div class='line' id='LC181'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">command</span><span class="p">(</span><span class="n">LCD_FUNCTIONSET</span> <span class="o">|</span> <span class="n">_displayfunction</span><span class="p">);</span></div><div class='line' id='LC182'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">delayMicroseconds</span><span class="p">(</span><span class="mi">4500</span><span class="p">);</span>  <span class="c1">// wait more than 4.1ms</span></div><div class='line' id='LC183'><br/></div><div class='line' id='LC184'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// second try</span></div><div class='line' id='LC185'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">command</span><span class="p">(</span><span class="n">LCD_FUNCTIONSET</span> <span class="o">|</span> <span class="n">_displayfunction</span><span class="p">);</span></div><div class='line' id='LC186'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">delayMicroseconds</span><span class="p">(</span><span class="mi">150</span><span class="p">);</span></div><div class='line' id='LC187'><br/></div><div class='line' id='LC188'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// third go</span></div><div class='line' id='LC189'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">command</span><span class="p">(</span><span class="n">LCD_FUNCTIONSET</span> <span class="o">|</span> <span class="n">_displayfunction</span><span class="p">);</span></div><div class='line' id='LC190'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC191'><br/></div><div class='line' id='LC192'>&nbsp;&nbsp;<span class="c1">// finally, set # lines, font size, etc.</span></div><div class='line' id='LC193'>&nbsp;&nbsp;<span class="n">command</span><span class="p">(</span><span class="n">LCD_FUNCTIONSET</span> <span class="o">|</span> <span class="n">_displayfunction</span><span class="p">);</span>  </div><div class='line' id='LC194'><br/></div><div class='line' id='LC195'>&nbsp;&nbsp;<span class="c1">// turn the display on with no cursor or blinking default</span></div><div class='line' id='LC196'>&nbsp;&nbsp;<span class="n">_displaycontrol</span> <span class="o">=</span> <span class="n">LCD_DISPLAYON</span> <span class="o">|</span> <span class="n">LCD_CURSOROFF</span> <span class="o">|</span> <span class="n">LCD_BLINKOFF</span><span class="p">;</span>  </div><div class='line' id='LC197'>&nbsp;&nbsp;<span class="n">display</span><span class="p">();</span></div><div class='line' id='LC198'><br/></div><div class='line' id='LC199'>&nbsp;&nbsp;<span class="c1">// clear it off</span></div><div class='line' id='LC200'>&nbsp;&nbsp;<span class="n">clear</span><span class="p">();</span></div><div class='line' id='LC201'><br/></div><div class='line' id='LC202'>&nbsp;&nbsp;<span class="c1">// Initialize to default text direction (for romance languages)</span></div><div class='line' id='LC203'>&nbsp;&nbsp;<span class="n">_displaymode</span> <span class="o">=</span> <span class="n">LCD_ENTRYLEFT</span> <span class="o">|</span> <span class="n">LCD_ENTRYSHIFTDECREMENT</span><span class="p">;</span></div><div class='line' id='LC204'>&nbsp;&nbsp;<span class="c1">// set the entry mode</span></div><div class='line' id='LC205'>&nbsp;&nbsp;<span class="n">command</span><span class="p">(</span><span class="n">LCD_ENTRYMODESET</span> <span class="o">|</span> <span class="n">_displaymode</span><span class="p">);</span></div><div class='line' id='LC206'><br/></div><div class='line' id='LC207'><span class="p">}</span></div><div class='line' id='LC208'><br/></div><div class='line' id='LC209'><span class="cm">/********** high level commands, for the user! */</span></div><div class='line' id='LC210'><span class="kt">void</span> <span class="n">Adafruit_RGBLCDShield</span><span class="o">::</span><span class="n">clear</span><span class="p">()</span></div><div class='line' id='LC211'><span class="p">{</span></div><div class='line' id='LC212'>&nbsp;&nbsp;<span class="n">command</span><span class="p">(</span><span class="n">LCD_CLEARDISPLAY</span><span class="p">);</span>  <span class="c1">// clear display, set cursor position to zero</span></div><div class='line' id='LC213'>&nbsp;&nbsp;<span class="n">delayMicroseconds</span><span class="p">(</span><span class="mi">2000</span><span class="p">);</span>  <span class="c1">// this command takes a long time!</span></div><div class='line' id='LC214'><span class="p">}</span></div><div class='line' id='LC215'><br/></div><div class='line' id='LC216'><span class="kt">void</span> <span class="n">Adafruit_RGBLCDShield</span><span class="o">::</span><span class="n">home</span><span class="p">()</span></div><div class='line' id='LC217'><span class="p">{</span></div><div class='line' id='LC218'>&nbsp;&nbsp;<span class="n">command</span><span class="p">(</span><span class="n">LCD_RETURNHOME</span><span class="p">);</span>  <span class="c1">// set cursor position to zero</span></div><div class='line' id='LC219'>&nbsp;&nbsp;<span class="n">delayMicroseconds</span><span class="p">(</span><span class="mi">2000</span><span class="p">);</span>  <span class="c1">// this command takes a long time!</span></div><div class='line' id='LC220'><span class="p">}</span></div><div class='line' id='LC221'><br/></div><div class='line' id='LC222'><span class="kt">void</span> <span class="n">Adafruit_RGBLCDShield</span><span class="o">::</span><span class="n">setCursor</span><span class="p">(</span><span class="n">uint8_t</span> <span class="n">col</span><span class="p">,</span> <span class="n">uint8_t</span> <span class="n">row</span><span class="p">)</span></div><div class='line' id='LC223'><span class="p">{</span></div><div class='line' id='LC224'>&nbsp;&nbsp;<span class="kt">int</span> <span class="n">row_offsets</span><span class="p">[]</span> <span class="o">=</span> <span class="p">{</span> <span class="mh">0x00</span><span class="p">,</span> <span class="mh">0x40</span><span class="p">,</span> <span class="mh">0x14</span><span class="p">,</span> <span class="mh">0x54</span> <span class="p">};</span></div><div class='line' id='LC225'>&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span> <span class="n">row</span> <span class="o">&gt;</span> <span class="n">_numlines</span> <span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC226'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">row</span> <span class="o">=</span> <span class="n">_numlines</span><span class="o">-</span><span class="mi">1</span><span class="p">;</span>    <span class="c1">// we count rows starting w/0</span></div><div class='line' id='LC227'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC228'>&nbsp;&nbsp;</div><div class='line' id='LC229'>&nbsp;&nbsp;<span class="n">command</span><span class="p">(</span><span class="n">LCD_SETDDRAMADDR</span> <span class="o">|</span> <span class="p">(</span><span class="n">col</span> <span class="o">+</span> <span class="n">row_offsets</span><span class="p">[</span><span class="n">row</span><span class="p">]));</span></div><div class='line' id='LC230'><span class="p">}</span></div><div class='line' id='LC231'><br/></div><div class='line' id='LC232'><span class="c1">// Turn the display on/off (quickly)</span></div><div class='line' id='LC233'><span class="kt">void</span> <span class="n">Adafruit_RGBLCDShield</span><span class="o">::</span><span class="n">noDisplay</span><span class="p">()</span> <span class="p">{</span></div><div class='line' id='LC234'>&nbsp;&nbsp;<span class="n">_displaycontrol</span> <span class="o">&amp;=</span> <span class="o">~</span><span class="n">LCD_DISPLAYON</span><span class="p">;</span></div><div class='line' id='LC235'>&nbsp;&nbsp;<span class="n">command</span><span class="p">(</span><span class="n">LCD_DISPLAYCONTROL</span> <span class="o">|</span> <span class="n">_displaycontrol</span><span class="p">);</span></div><div class='line' id='LC236'><span class="p">}</span></div><div class='line' id='LC237'><span class="kt">void</span> <span class="n">Adafruit_RGBLCDShield</span><span class="o">::</span><span class="n">display</span><span class="p">()</span> <span class="p">{</span></div><div class='line' id='LC238'>&nbsp;&nbsp;<span class="n">_displaycontrol</span> <span class="o">|=</span> <span class="n">LCD_DISPLAYON</span><span class="p">;</span></div><div class='line' id='LC239'>&nbsp;&nbsp;<span class="n">command</span><span class="p">(</span><span class="n">LCD_DISPLAYCONTROL</span> <span class="o">|</span> <span class="n">_displaycontrol</span><span class="p">);</span></div><div class='line' id='LC240'><span class="p">}</span></div><div class='line' id='LC241'><br/></div><div class='line' id='LC242'><span class="c1">// Turns the underline cursor on/off</span></div><div class='line' id='LC243'><span class="kt">void</span> <span class="n">Adafruit_RGBLCDShield</span><span class="o">::</span><span class="n">noCursor</span><span class="p">()</span> <span class="p">{</span></div><div class='line' id='LC244'>&nbsp;&nbsp;<span class="n">_displaycontrol</span> <span class="o">&amp;=</span> <span class="o">~</span><span class="n">LCD_CURSORON</span><span class="p">;</span></div><div class='line' id='LC245'>&nbsp;&nbsp;<span class="n">command</span><span class="p">(</span><span class="n">LCD_DISPLAYCONTROL</span> <span class="o">|</span> <span class="n">_displaycontrol</span><span class="p">);</span></div><div class='line' id='LC246'><span class="p">}</span></div><div class='line' id='LC247'><span class="kt">void</span> <span class="n">Adafruit_RGBLCDShield</span><span class="o">::</span><span class="n">cursor</span><span class="p">()</span> <span class="p">{</span></div><div class='line' id='LC248'>&nbsp;&nbsp;<span class="n">_displaycontrol</span> <span class="o">|=</span> <span class="n">LCD_CURSORON</span><span class="p">;</span></div><div class='line' id='LC249'>&nbsp;&nbsp;<span class="n">command</span><span class="p">(</span><span class="n">LCD_DISPLAYCONTROL</span> <span class="o">|</span> <span class="n">_displaycontrol</span><span class="p">);</span></div><div class='line' id='LC250'><span class="p">}</span></div><div class='line' id='LC251'><br/></div><div class='line' id='LC252'><span class="c1">// Turn on and off the blinking cursor</span></div><div class='line' id='LC253'><span class="kt">void</span> <span class="n">Adafruit_RGBLCDShield</span><span class="o">::</span><span class="n">noBlink</span><span class="p">()</span> <span class="p">{</span></div><div class='line' id='LC254'>&nbsp;&nbsp;<span class="n">_displaycontrol</span> <span class="o">&amp;=</span> <span class="o">~</span><span class="n">LCD_BLINKON</span><span class="p">;</span></div><div class='line' id='LC255'>&nbsp;&nbsp;<span class="n">command</span><span class="p">(</span><span class="n">LCD_DISPLAYCONTROL</span> <span class="o">|</span> <span class="n">_displaycontrol</span><span class="p">);</span></div><div class='line' id='LC256'><span class="p">}</span></div><div class='line' id='LC257'><span class="kt">void</span> <span class="n">Adafruit_RGBLCDShield</span><span class="o">::</span><span class="n">blink</span><span class="p">()</span> <span class="p">{</span></div><div class='line' id='LC258'>&nbsp;&nbsp;<span class="n">_displaycontrol</span> <span class="o">|=</span> <span class="n">LCD_BLINKON</span><span class="p">;</span></div><div class='line' id='LC259'>&nbsp;&nbsp;<span class="n">command</span><span class="p">(</span><span class="n">LCD_DISPLAYCONTROL</span> <span class="o">|</span> <span class="n">_displaycontrol</span><span class="p">);</span></div><div class='line' id='LC260'><span class="p">}</span></div><div class='line' id='LC261'><br/></div><div class='line' id='LC262'><span class="c1">// These commands scroll the display without changing the RAM</span></div><div class='line' id='LC263'><span class="kt">void</span> <span class="n">Adafruit_RGBLCDShield</span><span class="o">::</span><span class="n">scrollDisplayLeft</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC264'>&nbsp;&nbsp;<span class="n">command</span><span class="p">(</span><span class="n">LCD_CURSORSHIFT</span> <span class="o">|</span> <span class="n">LCD_DISPLAYMOVE</span> <span class="o">|</span> <span class="n">LCD_MOVELEFT</span><span class="p">);</span></div><div class='line' id='LC265'><span class="p">}</span></div><div class='line' id='LC266'><span class="kt">void</span> <span class="n">Adafruit_RGBLCDShield</span><span class="o">::</span><span class="n">scrollDisplayRight</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC267'>&nbsp;&nbsp;<span class="n">command</span><span class="p">(</span><span class="n">LCD_CURSORSHIFT</span> <span class="o">|</span> <span class="n">LCD_DISPLAYMOVE</span> <span class="o">|</span> <span class="n">LCD_MOVERIGHT</span><span class="p">);</span></div><div class='line' id='LC268'><span class="p">}</span></div><div class='line' id='LC269'><br/></div><div class='line' id='LC270'><span class="c1">// This is for text that flows Left to Right</span></div><div class='line' id='LC271'><span class="kt">void</span> <span class="n">Adafruit_RGBLCDShield</span><span class="o">::</span><span class="n">leftToRight</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC272'>&nbsp;&nbsp;<span class="n">_displaymode</span> <span class="o">|=</span> <span class="n">LCD_ENTRYLEFT</span><span class="p">;</span></div><div class='line' id='LC273'>&nbsp;&nbsp;<span class="n">command</span><span class="p">(</span><span class="n">LCD_ENTRYMODESET</span> <span class="o">|</span> <span class="n">_displaymode</span><span class="p">);</span></div><div class='line' id='LC274'><span class="p">}</span></div><div class='line' id='LC275'><br/></div><div class='line' id='LC276'><span class="c1">// This is for text that flows Right to Left</span></div><div class='line' id='LC277'><span class="kt">void</span> <span class="n">Adafruit_RGBLCDShield</span><span class="o">::</span><span class="n">rightToLeft</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC278'>&nbsp;&nbsp;<span class="n">_displaymode</span> <span class="o">&amp;=</span> <span class="o">~</span><span class="n">LCD_ENTRYLEFT</span><span class="p">;</span></div><div class='line' id='LC279'>&nbsp;&nbsp;<span class="n">command</span><span class="p">(</span><span class="n">LCD_ENTRYMODESET</span> <span class="o">|</span> <span class="n">_displaymode</span><span class="p">);</span></div><div class='line' id='LC280'><span class="p">}</span></div><div class='line' id='LC281'><br/></div><div class='line' id='LC282'><span class="c1">// This will &#39;right justify&#39; text from the cursor</span></div><div class='line' id='LC283'><span class="kt">void</span> <span class="n">Adafruit_RGBLCDShield</span><span class="o">::</span><span class="n">autoscroll</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC284'>&nbsp;&nbsp;<span class="n">_displaymode</span> <span class="o">|=</span> <span class="n">LCD_ENTRYSHIFTINCREMENT</span><span class="p">;</span></div><div class='line' id='LC285'>&nbsp;&nbsp;<span class="n">command</span><span class="p">(</span><span class="n">LCD_ENTRYMODESET</span> <span class="o">|</span> <span class="n">_displaymode</span><span class="p">);</span></div><div class='line' id='LC286'><span class="p">}</span></div><div class='line' id='LC287'><br/></div><div class='line' id='LC288'><span class="c1">// This will &#39;left justify&#39; text from the cursor</span></div><div class='line' id='LC289'><span class="kt">void</span> <span class="n">Adafruit_RGBLCDShield</span><span class="o">::</span><span class="n">noAutoscroll</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC290'>&nbsp;&nbsp;<span class="n">_displaymode</span> <span class="o">&amp;=</span> <span class="o">~</span><span class="n">LCD_ENTRYSHIFTINCREMENT</span><span class="p">;</span></div><div class='line' id='LC291'>&nbsp;&nbsp;<span class="n">command</span><span class="p">(</span><span class="n">LCD_ENTRYMODESET</span> <span class="o">|</span> <span class="n">_displaymode</span><span class="p">);</span></div><div class='line' id='LC292'><span class="p">}</span></div><div class='line' id='LC293'><br/></div><div class='line' id='LC294'><span class="c1">// Allows us to fill the first 8 CGRAM locations</span></div><div class='line' id='LC295'><span class="c1">// with custom characters</span></div><div class='line' id='LC296'><span class="kt">void</span> <span class="n">Adafruit_RGBLCDShield</span><span class="o">::</span><span class="n">createChar</span><span class="p">(</span><span class="n">uint8_t</span> <span class="n">location</span><span class="p">,</span> <span class="n">uint8_t</span> <span class="n">charmap</span><span class="p">[])</span> <span class="p">{</span></div><div class='line' id='LC297'>&nbsp;&nbsp;<span class="n">location</span> <span class="o">&amp;=</span> <span class="mh">0x7</span><span class="p">;</span> <span class="c1">// we only have 8 locations 0-7</span></div><div class='line' id='LC298'>&nbsp;&nbsp;<span class="n">command</span><span class="p">(</span><span class="n">LCD_SETCGRAMADDR</span> <span class="o">|</span> <span class="p">(</span><span class="n">location</span> <span class="o">&lt;&lt;</span> <span class="mi">3</span><span class="p">));</span></div><div class='line' id='LC299'>&nbsp;&nbsp;<span class="k">for</span> <span class="p">(</span><span class="kt">int</span> <span class="n">i</span><span class="o">=</span><span class="mi">0</span><span class="p">;</span> <span class="n">i</span><span class="o">&lt;</span><span class="mi">8</span><span class="p">;</span> <span class="n">i</span><span class="o">++</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC300'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">write</span><span class="p">(</span><span class="n">charmap</span><span class="p">[</span><span class="n">i</span><span class="p">]);</span></div><div class='line' id='LC301'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC302'>&nbsp;&nbsp;<span class="n">command</span><span class="p">(</span><span class="n">LCD_SETDDRAMADDR</span><span class="p">);</span>  <span class="c1">// unfortunately resets the location to 0,0</span></div><div class='line' id='LC303'><span class="p">}</span></div><div class='line' id='LC304'><br/></div><div class='line' id='LC305'><span class="cm">/*********** mid level commands, for sending data/cmds */</span></div><div class='line' id='LC306'><br/></div><div class='line' id='LC307'><span class="kr">inline</span> <span class="kt">void</span> <span class="n">Adafruit_RGBLCDShield</span><span class="o">::</span><span class="n">command</span><span class="p">(</span><span class="n">uint8_t</span> <span class="n">value</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC308'>&nbsp;&nbsp;<span class="n">send</span><span class="p">(</span><span class="n">value</span><span class="p">,</span> <span class="n">LOW</span><span class="p">);</span></div><div class='line' id='LC309'><span class="p">}</span></div><div class='line' id='LC310'><br/></div><div class='line' id='LC311'><span class="cp">#if ARDUINO &gt;= 100</span></div><div class='line' id='LC312'><span class="kr">inline</span> <span class="n">size_t</span> <span class="n">Adafruit_RGBLCDShield</span><span class="o">::</span><span class="n">write</span><span class="p">(</span><span class="n">uint8_t</span> <span class="n">value</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC313'>&nbsp;&nbsp;<span class="n">send</span><span class="p">(</span><span class="n">value</span><span class="p">,</span> <span class="n">HIGH</span><span class="p">);</span></div><div class='line' id='LC314'>&nbsp;&nbsp;<span class="k">return</span> <span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC315'><span class="p">}</span></div><div class='line' id='LC316'><span class="cp">#else</span></div><div class='line' id='LC317'><span class="kr">inline</span> <span class="kt">void</span> <span class="n">Adafruit_RGBLCDShield</span><span class="o">::</span><span class="n">write</span><span class="p">(</span><span class="n">uint8_t</span> <span class="n">value</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC318'>&nbsp;&nbsp;<span class="n">send</span><span class="p">(</span><span class="n">value</span><span class="p">,</span> <span class="n">HIGH</span><span class="p">);</span></div><div class='line' id='LC319'><span class="p">}</span></div><div class='line' id='LC320'><span class="cp">#endif</span></div><div class='line' id='LC321'><br/></div><div class='line' id='LC322'><span class="cm">/************ low level data pushing commands **********/</span></div><div class='line' id='LC323'><br/></div><div class='line' id='LC324'><span class="c1">// little wrapper for i/o writes</span></div><div class='line' id='LC325'><span class="kt">void</span>  <span class="n">Adafruit_RGBLCDShield</span><span class="o">::</span><span class="n">_digitalWrite</span><span class="p">(</span><span class="n">uint8_t</span> <span class="n">p</span><span class="p">,</span> <span class="n">uint8_t</span> <span class="n">d</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC326'>&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">_i2cAddr</span> <span class="o">!=</span> <span class="mi">255</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC327'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// an i2c command</span></div><div class='line' id='LC328'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_i2c</span><span class="p">.</span><span class="n">digitalWrite</span><span class="p">(</span><span class="n">p</span><span class="p">,</span> <span class="n">d</span><span class="p">);</span></div><div class='line' id='LC329'>&nbsp;&nbsp;<span class="p">}</span> <span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC330'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// straightup IO</span></div><div class='line' id='LC331'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">digitalWrite</span><span class="p">(</span><span class="n">p</span><span class="p">,</span> <span class="n">d</span><span class="p">);</span></div><div class='line' id='LC332'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC333'><span class="p">}</span></div><div class='line' id='LC334'><br/></div><div class='line' id='LC335'><span class="c1">// Allows to set the backlight, if the LCD backpack is used</span></div><div class='line' id='LC336'><span class="kt">void</span> <span class="n">Adafruit_RGBLCDShield</span><span class="o">::</span><span class="n">setBacklight</span><span class="p">(</span><span class="n">uint8_t</span> <span class="n">status</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC337'>&nbsp;&nbsp;<span class="c1">// check if i2c or SPI</span></div><div class='line' id='LC338'>&nbsp;&nbsp;<span class="n">_i2c</span><span class="p">.</span><span class="n">digitalWrite</span><span class="p">(</span><span class="mi">8</span><span class="p">,</span> <span class="o">~</span><span class="p">(</span><span class="n">status</span> <span class="o">&gt;&gt;</span> <span class="mi">2</span><span class="p">)</span> <span class="o">&amp;</span> <span class="mh">0x1</span><span class="p">);</span></div><div class='line' id='LC339'>&nbsp;&nbsp;<span class="n">_i2c</span><span class="p">.</span><span class="n">digitalWrite</span><span class="p">(</span><span class="mi">7</span><span class="p">,</span> <span class="o">~</span><span class="p">(</span><span class="n">status</span> <span class="o">&gt;&gt;</span> <span class="mi">1</span><span class="p">)</span> <span class="o">&amp;</span> <span class="mh">0x1</span><span class="p">);</span></div><div class='line' id='LC340'>&nbsp;&nbsp;<span class="n">_i2c</span><span class="p">.</span><span class="n">digitalWrite</span><span class="p">(</span><span class="mi">6</span><span class="p">,</span> <span class="o">~</span><span class="n">status</span> <span class="o">&amp;</span> <span class="mh">0x1</span><span class="p">);</span></div><div class='line' id='LC341'><span class="p">}</span></div><div class='line' id='LC342'><br/></div><div class='line' id='LC343'><span class="c1">// little wrapper for i/o directions</span></div><div class='line' id='LC344'><span class="kt">void</span>  <span class="n">Adafruit_RGBLCDShield</span><span class="o">::</span><span class="n">_pinMode</span><span class="p">(</span><span class="n">uint8_t</span> <span class="n">p</span><span class="p">,</span> <span class="n">uint8_t</span> <span class="n">d</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC345'>&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">_i2cAddr</span> <span class="o">!=</span> <span class="mi">255</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC346'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// an i2c command</span></div><div class='line' id='LC347'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_i2c</span><span class="p">.</span><span class="n">pinMode</span><span class="p">(</span><span class="n">p</span><span class="p">,</span> <span class="n">d</span><span class="p">);</span></div><div class='line' id='LC348'>&nbsp;&nbsp;<span class="p">}</span> <span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC349'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// straightup IO</span></div><div class='line' id='LC350'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">pinMode</span><span class="p">(</span><span class="n">p</span><span class="p">,</span> <span class="n">d</span><span class="p">);</span></div><div class='line' id='LC351'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC352'><span class="p">}</span></div><div class='line' id='LC353'><br/></div><div class='line' id='LC354'><span class="c1">// write either command or data, with automatic 4/8-bit selection</span></div><div class='line' id='LC355'><span class="kt">void</span> <span class="n">Adafruit_RGBLCDShield</span><span class="o">::</span><span class="n">send</span><span class="p">(</span><span class="n">uint8_t</span> <span class="n">value</span><span class="p">,</span> <span class="n">uint8_t</span> <span class="n">mode</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC356'>&nbsp;&nbsp;<span class="n">_digitalWrite</span><span class="p">(</span><span class="n">_rs_pin</span><span class="p">,</span> <span class="n">mode</span><span class="p">);</span></div><div class='line' id='LC357'><br/></div><div class='line' id='LC358'>&nbsp;&nbsp;<span class="c1">// if there is a RW pin indicated, set it low to Write</span></div><div class='line' id='LC359'>&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">_rw_pin</span> <span class="o">!=</span> <span class="mi">255</span><span class="p">)</span> <span class="p">{</span> </div><div class='line' id='LC360'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_digitalWrite</span><span class="p">(</span><span class="n">_rw_pin</span><span class="p">,</span> <span class="n">LOW</span><span class="p">);</span></div><div class='line' id='LC361'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC362'>&nbsp;&nbsp;</div><div class='line' id='LC363'>&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">_displayfunction</span> <span class="o">&amp;</span> <span class="n">LCD_8BITMODE</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC364'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">write8bits</span><span class="p">(</span><span class="n">value</span><span class="p">);</span> </div><div class='line' id='LC365'>&nbsp;&nbsp;<span class="p">}</span> <span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC366'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">write4bits</span><span class="p">(</span><span class="n">value</span><span class="o">&gt;&gt;</span><span class="mi">4</span><span class="p">);</span></div><div class='line' id='LC367'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">write4bits</span><span class="p">(</span><span class="n">value</span><span class="p">);</span></div><div class='line' id='LC368'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC369'><span class="p">}</span></div><div class='line' id='LC370'><br/></div><div class='line' id='LC371'><span class="kt">void</span> <span class="n">Adafruit_RGBLCDShield</span><span class="o">::</span><span class="n">pulseEnable</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC372'>&nbsp;&nbsp;<span class="n">_digitalWrite</span><span class="p">(</span><span class="n">_enable_pin</span><span class="p">,</span> <span class="n">LOW</span><span class="p">);</span></div><div class='line' id='LC373'>&nbsp;&nbsp;<span class="n">delayMicroseconds</span><span class="p">(</span><span class="mi">1</span><span class="p">);</span>    </div><div class='line' id='LC374'>&nbsp;&nbsp;<span class="n">_digitalWrite</span><span class="p">(</span><span class="n">_enable_pin</span><span class="p">,</span> <span class="n">HIGH</span><span class="p">);</span></div><div class='line' id='LC375'>&nbsp;&nbsp;<span class="n">delayMicroseconds</span><span class="p">(</span><span class="mi">1</span><span class="p">);</span>    <span class="c1">// enable pulse must be &gt;450ns</span></div><div class='line' id='LC376'>&nbsp;&nbsp;<span class="n">_digitalWrite</span><span class="p">(</span><span class="n">_enable_pin</span><span class="p">,</span> <span class="n">LOW</span><span class="p">);</span></div><div class='line' id='LC377'>&nbsp;&nbsp;<span class="n">delayMicroseconds</span><span class="p">(</span><span class="mi">100</span><span class="p">);</span>   <span class="c1">// commands need &gt; 37us to settle</span></div><div class='line' id='LC378'><span class="p">}</span></div><div class='line' id='LC379'><br/></div><div class='line' id='LC380'><span class="kt">void</span> <span class="n">Adafruit_RGBLCDShield</span><span class="o">::</span><span class="n">write4bits</span><span class="p">(</span><span class="n">uint8_t</span> <span class="n">value</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC381'>&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">_i2cAddr</span> <span class="o">!=</span> <span class="mi">255</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC382'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">uint16_t</span> <span class="n">out</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC383'><br/></div><div class='line' id='LC384'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">out</span> <span class="o">=</span> <span class="n">_i2c</span><span class="p">.</span><span class="n">readGPIOAB</span><span class="p">();</span></div><div class='line' id='LC385'><br/></div><div class='line' id='LC386'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// speed up for i2c since its sluggish</span></div><div class='line' id='LC387'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">for</span> <span class="p">(</span><span class="kt">int</span> <span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="mi">4</span><span class="p">;</span> <span class="n">i</span><span class="o">++</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC388'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">out</span> <span class="o">&amp;=</span> <span class="o">~</span><span class="n">_BV</span><span class="p">(</span><span class="n">_data_pins</span><span class="p">[</span><span class="n">i</span><span class="p">]);</span></div><div class='line' id='LC389'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">out</span> <span class="o">|=</span> <span class="p">((</span><span class="n">value</span> <span class="o">&gt;&gt;</span> <span class="n">i</span><span class="p">)</span> <span class="o">&amp;</span> <span class="mh">0x1</span><span class="p">)</span> <span class="o">&lt;&lt;</span> <span class="n">_data_pins</span><span class="p">[</span><span class="n">i</span><span class="p">];</span></div><div class='line' id='LC390'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC391'><br/></div><div class='line' id='LC392'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// make sure enable is low</span></div><div class='line' id='LC393'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">out</span> <span class="o">&amp;=</span> <span class="o">~</span> <span class="n">_BV</span><span class="p">(</span><span class="n">_enable_pin</span><span class="p">);</span></div><div class='line' id='LC394'><br/></div><div class='line' id='LC395'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_i2c</span><span class="p">.</span><span class="n">writeGPIOAB</span><span class="p">(</span><span class="n">out</span><span class="p">);</span></div><div class='line' id='LC396'><br/></div><div class='line' id='LC397'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// pulse enable</span></div><div class='line' id='LC398'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">delayMicroseconds</span><span class="p">(</span><span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC399'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">out</span> <span class="o">|=</span> <span class="n">_BV</span><span class="p">(</span><span class="n">_enable_pin</span><span class="p">);</span></div><div class='line' id='LC400'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_i2c</span><span class="p">.</span><span class="n">writeGPIOAB</span><span class="p">(</span><span class="n">out</span><span class="p">);</span></div><div class='line' id='LC401'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">delayMicroseconds</span><span class="p">(</span><span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC402'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">out</span> <span class="o">&amp;=</span> <span class="o">~</span><span class="n">_BV</span><span class="p">(</span><span class="n">_enable_pin</span><span class="p">);</span></div><div class='line' id='LC403'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_i2c</span><span class="p">.</span><span class="n">writeGPIOAB</span><span class="p">(</span><span class="n">out</span><span class="p">);</span>   </div><div class='line' id='LC404'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">delayMicroseconds</span><span class="p">(</span><span class="mi">100</span><span class="p">);</span></div><div class='line' id='LC405'><br/></div><div class='line' id='LC406'>&nbsp;&nbsp;<span class="p">}</span> <span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC407'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">for</span> <span class="p">(</span><span class="kt">int</span> <span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="mi">4</span><span class="p">;</span> <span class="n">i</span><span class="o">++</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC408'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_pinMode</span><span class="p">(</span><span class="n">_data_pins</span><span class="p">[</span><span class="n">i</span><span class="p">],</span> <span class="n">OUTPUT</span><span class="p">);</span></div><div class='line' id='LC409'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_digitalWrite</span><span class="p">(</span><span class="n">_data_pins</span><span class="p">[</span><span class="n">i</span><span class="p">],</span> <span class="p">(</span><span class="n">value</span> <span class="o">&gt;&gt;</span> <span class="n">i</span><span class="p">)</span> <span class="o">&amp;</span> <span class="mh">0x01</span><span class="p">);</span></div><div class='line' id='LC410'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC411'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">pulseEnable</span><span class="p">();</span></div><div class='line' id='LC412'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC413'><span class="p">}</span></div><div class='line' id='LC414'><br/></div><div class='line' id='LC415'><span class="kt">void</span> <span class="n">Adafruit_RGBLCDShield</span><span class="o">::</span><span class="n">write8bits</span><span class="p">(</span><span class="n">uint8_t</span> <span class="n">value</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC416'>&nbsp;&nbsp;<span class="k">for</span> <span class="p">(</span><span class="kt">int</span> <span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="mi">8</span><span class="p">;</span> <span class="n">i</span><span class="o">++</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC417'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_pinMode</span><span class="p">(</span><span class="n">_data_pins</span><span class="p">[</span><span class="n">i</span><span class="p">],</span> <span class="n">OUTPUT</span><span class="p">);</span></div><div class='line' id='LC418'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_digitalWrite</span><span class="p">(</span><span class="n">_data_pins</span><span class="p">[</span><span class="n">i</span><span class="p">],</span> <span class="p">(</span><span class="n">value</span> <span class="o">&gt;&gt;</span> <span class="n">i</span><span class="p">)</span> <span class="o">&amp;</span> <span class="mh">0x01</span><span class="p">);</span></div><div class='line' id='LC419'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC420'>&nbsp;&nbsp;</div><div class='line' id='LC421'>&nbsp;&nbsp;<span class="n">pulseEnable</span><span class="p">();</span></div><div class='line' id='LC422'><span class="p">}</span></div><div class='line' id='LC423'><br/></div><div class='line' id='LC424'><span class="n">uint8_t</span> <span class="n">Adafruit_RGBLCDShield</span><span class="o">::</span><span class="n">readButtons</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC425'>&nbsp;&nbsp;<span class="n">uint8_t</span> <span class="n">reply</span> <span class="o">=</span> <span class="mh">0x1F</span><span class="p">;</span></div><div class='line' id='LC426'><br/></div><div class='line' id='LC427'>&nbsp;&nbsp;<span class="k">for</span> <span class="p">(</span><span class="n">uint8_t</span> <span class="n">i</span><span class="o">=</span><span class="mi">0</span><span class="p">;</span> <span class="n">i</span><span class="o">&lt;</span><span class="mi">5</span><span class="p">;</span> <span class="n">i</span><span class="o">++</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC428'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">reply</span> <span class="o">&amp;=</span> <span class="o">~</span><span class="p">((</span><span class="n">_i2c</span><span class="p">.</span><span class="n">digitalRead</span><span class="p">(</span><span class="n">_button_pins</span><span class="p">[</span><span class="n">i</span><span class="p">]))</span> <span class="o">&lt;&lt;</span> <span class="n">i</span><span class="p">);</span></div><div class='line' id='LC429'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC430'>&nbsp;&nbsp;<span class="k">return</span> <span class="n">reply</span><span class="p">;</span></div><div class='line' id='LC431'><span class="p">}</span></div></pre></div>
          </td>
        </tr>
      </table>
  </div>

          </div>
        </div>

        <a href="#jump-to-line" rel="facebox" data-hotkey="l" class="js-jump-to-line" style="display:none">Jump to Line</a>
        <div id="jump-to-line" style="display:none">
          <h2>Jump to Line</h2>
          <form accept-charset="UTF-8" class="js-jump-to-line-form">
            <input class="textfield js-jump-to-line-field" type="text">
            <div class="full-button">
              <button type="submit" class="button">Go</button>
            </div>
          </form>
        </div>

      </div>
    </div>
</div>

<div id="js-frame-loading-template" class="frame frame-loading large-loading-area" style="display:none;">
  <img class="js-frame-loading-spinner" src="https://a248.e.akamai.net/assets.github.com/images/spinners/octocat-spinner-128.gif?1347543525" height="64" width="64">
</div>


        </div>
      </div>
      <div class="context-overlay"></div>
    </div>

      <div id="footer-push"></div><!-- hack for sticky footer -->
    </div><!-- end of wrapper - hack for sticky footer -->

      <!-- footer -->
      <div id="footer">
  <div class="container clearfix">

      <dl class="footer_nav">
        <dt>GitHub</dt>
        <dd><a href="https://github.com/about">About us</a></dd>
        <dd><a href="https://github.com/blog">Blog</a></dd>
        <dd><a href="https://github.com/contact">Contact &amp; support</a></dd>
        <dd><a href="http://enterprise.github.com/">GitHub Enterprise</a></dd>
        <dd><a href="http://status.github.com/">Site status</a></dd>
      </dl>

      <dl class="footer_nav">
        <dt>Applications</dt>
        <dd><a href="http://mac.github.com/">GitHub for Mac</a></dd>
        <dd><a href="http://windows.github.com/">GitHub for Windows</a></dd>
        <dd><a href="http://eclipse.github.com/">GitHub for Eclipse</a></dd>
        <dd><a href="http://mobile.github.com/">GitHub mobile apps</a></dd>
      </dl>

      <dl class="footer_nav">
        <dt>Services</dt>
        <dd><a href="http://get.gaug.es/">Gauges: Web analytics</a></dd>
        <dd><a href="http://speakerdeck.com">Speaker Deck: Presentations</a></dd>
        <dd><a href="https://gist.github.com">Gist: Code snippets</a></dd>
        <dd><a href="http://jobs.github.com/">Job board</a></dd>
      </dl>

      <dl class="footer_nav">
        <dt>Documentation</dt>
        <dd><a href="http://help.github.com/">GitHub Help</a></dd>
        <dd><a href="http://developer.github.com/">Developer API</a></dd>
        <dd><a href="http://github.github.com/github-flavored-markdown/">GitHub Flavored Markdown</a></dd>
        <dd><a href="http://pages.github.com/">GitHub Pages</a></dd>
      </dl>

      <dl class="footer_nav">
        <dt>More</dt>
        <dd><a href="http://training.github.com/">Training</a></dd>
        <dd><a href="https://github.com/edu">Students &amp; teachers</a></dd>
        <dd><a href="http://shop.github.com">The Shop</a></dd>
        <dd><a href="/plans">Plans &amp; pricing</a></dd>
        <dd><a href="http://octodex.github.com/">The Octodex</a></dd>
      </dl>

      <hr class="footer-divider">


    <p class="right">&copy; 2013 <span title="0.04778s from fe17.rs.github.com">GitHub</span> Inc. All rights reserved.</p>
    <a class="left" href="https://github.com/">
      <span class="mega-icon mega-icon-invertocat"></span>
    </a>
    <ul id="legal">
        <li><a href="https://github.com/site/terms">Terms of Service</a></li>
        <li><a href="https://github.com/site/privacy">Privacy</a></li>
        <li><a href="https://github.com/security">Security</a></li>
    </ul>

  </div><!-- /.container -->

</div><!-- /.#footer -->


    

    

<div id="keyboard_shortcuts_pane" class="instapaper_ignore readability-extra" style="display:none">
  <h2>Keyboard Shortcuts <small><a href="#" class="js-see-all-keyboard-shortcuts">(see all)</a></small></h2>

  <div class="columns threecols">
    <div class="column first">
      <h3>Site wide shortcuts</h3>
      <dl class="keyboard-mappings">
        <dt>s</dt>
        <dd>Focus command bar</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>?</dt>
        <dd>Bring up this help dialog</dd>
      </dl>
    </div><!-- /.column.first -->

    <div class="column middle" style='display:none'>
      <h3>Commit list</h3>
      <dl class="keyboard-mappings">
        <dt>j</dt>
        <dd>Move selection down</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>k</dt>
        <dd>Move selection up</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>c <em>or</em> o <em>or</em> enter</dt>
        <dd>Open commit</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>y</dt>
        <dd>Expand URL to its canonical form</dd>
      </dl>
    </div><!-- /.column.first -->

    <div class="column last js-hidden-pane" style='display:none'>
      <h3>Pull request list</h3>
      <dl class="keyboard-mappings">
        <dt>j</dt>
        <dd>Move selection down</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>k</dt>
        <dd>Move selection up</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>o <em>or</em> enter</dt>
        <dd>Open issue</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt><span class="platform-mac">⌘</span><span class="platform-other">ctrl</span> <em>+</em> enter</dt>
        <dd>Submit comment</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt><span class="platform-mac">⌘</span><span class="platform-other">ctrl</span> <em>+</em> shift p</dt>
        <dd>Preview comment</dd>
      </dl>
    </div><!-- /.columns.last -->

  </div><!-- /.columns.equacols -->

  <div class="js-hidden-pane" style='display:none'>
    <div class="rule"></div>

    <h3>Issues</h3>

    <div class="columns threecols">
      <div class="column first">
        <dl class="keyboard-mappings">
          <dt>j</dt>
          <dd>Move selection down</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>k</dt>
          <dd>Move selection up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>x</dt>
          <dd>Toggle selection</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>o <em>or</em> enter</dt>
          <dd>Open issue</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="platform-mac">⌘</span><span class="platform-other">ctrl</span> <em>+</em> enter</dt>
          <dd>Submit comment</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="platform-mac">⌘</span><span class="platform-other">ctrl</span> <em>+</em> shift p</dt>
          <dd>Preview comment</dd>
        </dl>
      </div><!-- /.column.first -->
      <div class="column last">
        <dl class="keyboard-mappings">
          <dt>c</dt>
          <dd>Create issue</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>l</dt>
          <dd>Create label</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>i</dt>
          <dd>Back to inbox</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>u</dt>
          <dd>Back to issues</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>/</dt>
          <dd>Focus issues search</dd>
        </dl>
      </div>
    </div>
  </div>

  <div class="js-hidden-pane" style='display:none'>
    <div class="rule"></div>

    <h3>Issues Dashboard</h3>

    <div class="columns threecols">
      <div class="column first">
        <dl class="keyboard-mappings">
          <dt>j</dt>
          <dd>Move selection down</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>k</dt>
          <dd>Move selection up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>o <em>or</em> enter</dt>
          <dd>Open issue</dd>
        </dl>
      </div><!-- /.column.first -->
    </div>
  </div>

  <div class="js-hidden-pane" style='display:none'>
    <div class="rule"></div>

    <h3>Network Graph</h3>
    <div class="columns equacols">
      <div class="column first">
        <dl class="keyboard-mappings">
          <dt><span class="badmono">←</span> <em>or</em> h</dt>
          <dd>Scroll left</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="badmono">→</span> <em>or</em> l</dt>
          <dd>Scroll right</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="badmono">↑</span> <em>or</em> k</dt>
          <dd>Scroll up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="badmono">↓</span> <em>or</em> j</dt>
          <dd>Scroll down</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>t</dt>
          <dd>Toggle visibility of head labels</dd>
        </dl>
      </div><!-- /.column.first -->
      <div class="column last">
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">←</span> <em>or</em> shift h</dt>
          <dd>Scroll all the way left</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">→</span> <em>or</em> shift l</dt>
          <dd>Scroll all the way right</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">↑</span> <em>or</em> shift k</dt>
          <dd>Scroll all the way up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">↓</span> <em>or</em> shift j</dt>
          <dd>Scroll all the way down</dd>
        </dl>
      </div><!-- /.column.last -->
    </div>
  </div>

  <div class="js-hidden-pane" >
    <div class="rule"></div>
    <div class="columns threecols">
      <div class="column first js-hidden-pane" >
        <h3>Source Code Browsing</h3>
        <dl class="keyboard-mappings">
          <dt>t</dt>
          <dd>Activates the file finder</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>l</dt>
          <dd>Jump to line</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>w</dt>
          <dd>Switch branch/tag</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>y</dt>
          <dd>Expand URL to its canonical form</dd>
        </dl>
      </div>
    </div>
  </div>

  <div class="js-hidden-pane" style='display:none'>
    <div class="rule"></div>
    <div class="columns threecols">
      <div class="column first">
        <h3>Browsing Commits</h3>
        <dl class="keyboard-mappings">
          <dt><span class="platform-mac">⌘</span><span class="platform-other">ctrl</span> <em>+</em> enter</dt>
          <dd>Submit comment</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>escape</dt>
          <dd>Close form</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>p</dt>
          <dd>Parent commit</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>o</dt>
          <dd>Other parent commit</dd>
        </dl>
      </div>
    </div>
  </div>

  <div class="js-hidden-pane" style='display:none'>
    <div class="rule"></div>
    <h3>Notifications</h3>

    <div class="columns threecols">
      <div class="column first">
        <dl class="keyboard-mappings">
          <dt>j</dt>
          <dd>Move selection down</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>k</dt>
          <dd>Move selection up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>o <em>or</em> enter</dt>
          <dd>Open notification</dd>
        </dl>
      </div><!-- /.column.first -->

      <div class="column second">
        <dl class="keyboard-mappings">
          <dt>e <em>or</em> shift i <em>or</em> y</dt>
          <dd>Mark as read</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift m</dt>
          <dd>Mute thread</dd>
        </dl>
      </div><!-- /.column.first -->
    </div>
  </div>

</div>

    <div id="markdown-help" class="instapaper_ignore readability-extra">
  <h2>Markdown Cheat Sheet</h2>

  <div class="cheatsheet-content">

  <div class="mod">
    <div class="col">
      <h3>Format Text</h3>
      <p>Headers</p>
      <pre>
# This is an &lt;h1&gt; tag
## This is an &lt;h2&gt; tag
###### This is an &lt;h6&gt; tag</pre>
     <p>Text styles</p>
     <pre>
*This text will be italic*
_This will also be italic_
**This text will be bold**
__This will also be bold__

*You **can** combine them*
</pre>
    </div>
    <div class="col">
      <h3>Lists</h3>
      <p>Unordered</p>
      <pre>
* Item 1
* Item 2
  * Item 2a
  * Item 2b</pre>
     <p>Ordered</p>
     <pre>
1. Item 1
2. Item 2
3. Item 3
   * Item 3a
   * Item 3b</pre>
    </div>
    <div class="col">
      <h3>Miscellaneous</h3>
      <p>Images</p>
      <pre>
![GitHub Logo](/images/logo.png)
Format: ![Alt Text](url)
</pre>
     <p>Links</p>
     <pre>
http://github.com - automatic!
[GitHub](http://github.com)</pre>
<p>Blockquotes</p>
     <pre>
As Kanye West said:

> We're living the future so
> the present is our past.
</pre>
    </div>
  </div>
  <div class="rule"></div>

  <h3>Code Examples in Markdown</h3>
  <div class="col">
      <p>Syntax highlighting with <a href="http://github.github.com/github-flavored-markdown/" title="GitHub Flavored Markdown" target="_blank">GFM</a></p>
      <pre>
```javascript
function fancyAlert(arg) {
  if(arg) {
    $.facebox({div:'#foo'})
  }
}
```</pre>
    </div>
    <div class="col">
      <p>Or, indent your code 4 spaces</p>
      <pre>
Here is a Python code example
without syntax highlighting:

    def foo:
      if not bar:
        return true</pre>
    </div>
    <div class="col">
      <p>Inline code for comments</p>
      <pre>
I think you should use an
`&lt;addr&gt;` element here instead.</pre>
    </div>
  </div>

  </div>
</div>


    <div id="ajax-error-message" class="flash flash-error">
      <span class="mini-icon mini-icon-exclamation"></span>
      Something went wrong with that request. Please try again.
      <a href="#" class="mini-icon mini-icon-remove-close ajax-error-dismiss"></a>
    </div>

    
    
    <span id='server_response_time' data-time='0.04898' data-host='fe17'></span>
    
  </body>
</html>

