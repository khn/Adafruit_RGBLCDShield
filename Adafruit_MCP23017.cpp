  


<!DOCTYPE html>
<html>
  <head prefix="og: http://ogp.me/ns# fb: http://ogp.me/ns/fb# githubog: http://ogp.me/ns/fb/githubog#">
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
        <title>Adafruit-RGB-LCD-Shield-Library/Adafruit_MCP23017.cpp at master · adafruit/Adafruit-RGB-LCD-Shield-Library · GitHub</title>
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
      

        <link rel='permalink' href='/adafruit/Adafruit-RGB-LCD-Shield-Library/blob/13328dc8c517c20bf5696321464179e04bb636b4/Adafruit_MCP23017.cpp'>
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
              <a class="button" href="https://github.com/login?return_to=%2Fadafruit%2FAdafruit-RGB-LCD-Shield-Library%2Fblob%2Fmaster%2FAdafruit_MCP23017.cpp">Sign in</a>
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

                    <a href="/adafruit/Adafruit-RGB-LCD-Shield-Library/blob/master/Adafruit_MCP23017.cpp" class="js-navigation-open select-menu-item-text js-select-button-text" data-name="master" rel="nofollow">master</a>

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
          


<!-- blob contrib key: blob_contributors:v21:23304d2eb8d0af97f2e79ae485c3d5e6 -->
<!-- blob contrib frag key: views10/v8/blob_contributors:v21:23304d2eb8d0af97f2e79ae485c3d5e6 -->

<div id="slider">


    <div class="frame-meta">

      <p title="This is a placeholder element" class="js-history-link-replace hidden"></p>
      <div class="breadcrumb">
        <span class='bold'><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/adafruit/Adafruit-RGB-LCD-Shield-Library" class="js-slide-to" data-direction="back" itemscope="url"><span itemprop="title">Adafruit-RGB-LCD-Shield-Library</span></a></span></span> / <strong class="final-path">Adafruit_MCP23017.cpp</strong> <span class="js-zeroclipboard zeroclipboard-button" data-clipboard-text="Adafruit_MCP23017.cpp" data-copied-hint="copied!" title="copy to clipboard"><span class="mini-icon mini-icon-clipboard"></span></span>
      </div>

      <a href="/adafruit/Adafruit-RGB-LCD-Shield-Library/find/master" class="js-slide-to" data-hotkey="t" style="display:none">Show File Finder</a>

        
  <div class="commit file-history-tease">
    <img class="main-avatar" height="24" src="https://secure.gravatar.com/avatar/3f7ca151e1f7f7dead8b2db60aa744c1?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png" width="24" />
    <span class="author"><a href="/ladyada" rel="author">ladyada</a></span>
    <time class="js-relative-date" datetime="2012-02-20T10:24:50-08:00" title="2012-02-20 10:24:50">February 20, 2012</time>
    <div class="commit-title">
        <a href="/adafruit/Adafruit-RGB-LCD-Shield-Library/commit/74c512950df38e153e83f6444ba0cb28ce93f5d8" class="message">include the mcp23017 library</a>
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
      <div class="frame" data-permalink-url="/adafruit/Adafruit-RGB-LCD-Shield-Library/blob/13328dc8c517c20bf5696321464179e04bb636b4/Adafruit_MCP23017.cpp" data-title="Adafruit-RGB-LCD-Shield-Library/Adafruit_MCP23017.cpp at master · adafruit/Adafruit-RGB-LCD-Shield-Library · GitHub" data-type="blob">

        <div id="files" class="bubble">
          <div class="file">
            <div class="meta">
              <div class="info">
                <span class="icon"><b class="mini-icon mini-icon-text-file"></b></span>
                <span class="mode" title="File Mode">file</span>
                  <span>231 lines (184 sloc)</span>
                <span>4.775 kb</span>
              </div>
              <ul class="button-group actions">
                  <li>
                      <a class="grouped-button minibutton bigger lighter js-entice" href=""
                         data-entice="You must be signed in and on a branch to make or propose changes">Edit</a>
                  </li>
                <li><a href="/adafruit/Adafruit-RGB-LCD-Shield-Library/raw/master/Adafruit_MCP23017.cpp" class="button minibutton grouped-button bigger lighter" id="raw-url">Raw</a></li>
                  <li><a href="/adafruit/Adafruit-RGB-LCD-Shield-Library/blame/master/Adafruit_MCP23017.cpp" class="button minibutton grouped-button bigger lighter">Blame</a></li>
                <li><a href="/adafruit/Adafruit-RGB-LCD-Shield-Library/commits/master/Adafruit_MCP23017.cpp" class="button minibutton grouped-button bigger lighter" rel="nofollow">History</a></li>
              </ul>

            </div>
                <div class="data type-c js-blob-data">
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
</pre>
          </td>
          <td width="100%">
                  <div class="highlight"><pre><div class='line' id='LC1'><span class="cm">/*************************************************** </span></div><div class='line' id='LC2'><span class="cm">  This is a library for the MCP23017 i2c port expander</span></div><div class='line' id='LC3'><br/></div><div class='line' id='LC4'><span class="cm">  These displays use I2C to communicate, 2 pins are required to  </span></div><div class='line' id='LC5'><span class="cm">  interface</span></div><div class='line' id='LC6'><span class="cm">  Adafruit invests time and resources providing this open source code, </span></div><div class='line' id='LC7'><span class="cm">  please support Adafruit and open-source hardware by purchasing </span></div><div class='line' id='LC8'><span class="cm">  products from Adafruit!</span></div><div class='line' id='LC9'><br/></div><div class='line' id='LC10'><span class="cm">  Written by Limor Fried/Ladyada for Adafruit Industries.  </span></div><div class='line' id='LC11'><span class="cm">  BSD license, all text above must be included in any redistribution</span></div><div class='line' id='LC12'><span class="cm"> ****************************************************/</span></div><div class='line' id='LC13'><br/></div><div class='line' id='LC14'><span class="cp">#include &lt;Wire.h&gt;</span></div><div class='line' id='LC15'><span class="cp">#include &lt;avr/pgmspace.h&gt;</span></div><div class='line' id='LC16'><span class="cp">#include &quot;Adafruit_MCP23017.h&quot;</span></div><div class='line' id='LC17'><br/></div><div class='line' id='LC18'><span class="cp">#if ARDUINO &gt;= 100</span></div><div class='line' id='LC19'>&nbsp;<span class="cp">#include &quot;Arduino.h&quot;</span></div><div class='line' id='LC20'><span class="cp">#else</span></div><div class='line' id='LC21'>&nbsp;<span class="cp">#include &quot;WProgram.h&quot;</span></div><div class='line' id='LC22'><span class="cp">#endif</span></div><div class='line' id='LC23'><br/></div><div class='line' id='LC24'><span class="c1">// minihelper</span></div><div class='line' id='LC25'><span class="k">static</span> <span class="kr">inline</span> <span class="kt">void</span> <span class="n">wiresend</span><span class="p">(</span><span class="n">uint8_t</span> <span class="n">x</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC26'><span class="cp">#if ARDUINO &gt;= 100</span></div><div class='line' id='LC27'>&nbsp;&nbsp;<span class="n">Wire</span><span class="p">.</span><span class="n">write</span><span class="p">((</span><span class="n">uint8_t</span><span class="p">)</span><span class="n">x</span><span class="p">);</span></div><div class='line' id='LC28'><span class="cp">#else</span></div><div class='line' id='LC29'>&nbsp;&nbsp;<span class="n">Wire</span><span class="p">.</span><span class="n">send</span><span class="p">(</span><span class="n">x</span><span class="p">);</span></div><div class='line' id='LC30'><span class="cp">#endif</span></div><div class='line' id='LC31'><span class="p">}</span></div><div class='line' id='LC32'><br/></div><div class='line' id='LC33'><span class="k">static</span> <span class="kr">inline</span> <span class="n">uint8_t</span> <span class="n">wirerecv</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC34'><span class="cp">#if ARDUINO &gt;= 100</span></div><div class='line' id='LC35'>&nbsp;&nbsp;<span class="k">return</span> <span class="n">Wire</span><span class="p">.</span><span class="n">read</span><span class="p">();</span></div><div class='line' id='LC36'><span class="cp">#else</span></div><div class='line' id='LC37'>&nbsp;&nbsp;<span class="k">return</span> <span class="n">Wire</span><span class="p">.</span><span class="n">receive</span><span class="p">();</span></div><div class='line' id='LC38'><span class="cp">#endif</span></div><div class='line' id='LC39'><span class="p">}</span></div><div class='line' id='LC40'><br/></div><div class='line' id='LC41'><span class="c1">////////////////////////////////////////////////////////////////////////////////</span></div><div class='line' id='LC42'><br/></div><div class='line' id='LC43'><span class="kt">void</span> <span class="n">Adafruit_MCP23017</span><span class="o">::</span><span class="n">begin</span><span class="p">(</span><span class="n">uint8_t</span> <span class="n">addr</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC44'>&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">addr</span> <span class="o">&gt;</span> <span class="mi">7</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC45'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">addr</span> <span class="o">=</span> <span class="mi">7</span><span class="p">;</span></div><div class='line' id='LC46'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC47'>&nbsp;&nbsp;<span class="n">i2caddr</span> <span class="o">=</span> <span class="n">addr</span><span class="p">;</span></div><div class='line' id='LC48'><br/></div><div class='line' id='LC49'>&nbsp;&nbsp;<span class="n">Wire</span><span class="p">.</span><span class="n">begin</span><span class="p">();</span></div><div class='line' id='LC50'><br/></div><div class='line' id='LC51'>&nbsp;&nbsp;</div><div class='line' id='LC52'>&nbsp;&nbsp;<span class="c1">// set defaults!</span></div><div class='line' id='LC53'>&nbsp;&nbsp;<span class="n">Wire</span><span class="p">.</span><span class="n">beginTransmission</span><span class="p">(</span><span class="n">MCP23017_ADDRESS</span> <span class="o">|</span> <span class="n">i2caddr</span><span class="p">);</span></div><div class='line' id='LC54'>&nbsp;&nbsp;<span class="n">wiresend</span><span class="p">(</span><span class="n">MCP23017_IODIRA</span><span class="p">);</span></div><div class='line' id='LC55'>&nbsp;&nbsp;<span class="n">wiresend</span><span class="p">(</span><span class="mh">0xFF</span><span class="p">);</span>  <span class="c1">// all inputs on port A</span></div><div class='line' id='LC56'>&nbsp;&nbsp;<span class="n">Wire</span><span class="p">.</span><span class="n">endTransmission</span><span class="p">();</span></div><div class='line' id='LC57'><br/></div><div class='line' id='LC58'>&nbsp;&nbsp;<span class="n">Wire</span><span class="p">.</span><span class="n">beginTransmission</span><span class="p">(</span><span class="n">MCP23017_ADDRESS</span> <span class="o">|</span> <span class="n">i2caddr</span><span class="p">);</span></div><div class='line' id='LC59'>&nbsp;&nbsp;<span class="n">wiresend</span><span class="p">(</span><span class="n">MCP23017_IODIRB</span><span class="p">);</span></div><div class='line' id='LC60'>&nbsp;&nbsp;<span class="n">wiresend</span><span class="p">(</span><span class="mh">0xFF</span><span class="p">);</span>  <span class="c1">// all inputs on port B</span></div><div class='line' id='LC61'>&nbsp;&nbsp;<span class="n">Wire</span><span class="p">.</span><span class="n">endTransmission</span><span class="p">();</span></div><div class='line' id='LC62'><span class="p">}</span></div><div class='line' id='LC63'><br/></div><div class='line' id='LC64'><br/></div><div class='line' id='LC65'><span class="kt">void</span> <span class="n">Adafruit_MCP23017</span><span class="o">::</span><span class="n">begin</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC66'>&nbsp;&nbsp;<span class="n">begin</span><span class="p">(</span><span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC67'><span class="p">}</span></div><div class='line' id='LC68'><br/></div><div class='line' id='LC69'><span class="kt">void</span> <span class="n">Adafruit_MCP23017</span><span class="o">::</span><span class="n">pinMode</span><span class="p">(</span><span class="n">uint8_t</span> <span class="n">p</span><span class="p">,</span> <span class="n">uint8_t</span> <span class="n">d</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC70'>&nbsp;&nbsp;<span class="n">uint8_t</span> <span class="n">iodir</span><span class="p">;</span></div><div class='line' id='LC71'>&nbsp;&nbsp;<span class="n">uint8_t</span> <span class="n">iodiraddr</span><span class="p">;</span></div><div class='line' id='LC72'><br/></div><div class='line' id='LC73'>&nbsp;&nbsp;<span class="c1">// only 16 bits!</span></div><div class='line' id='LC74'>&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">p</span> <span class="o">&gt;</span> <span class="mi">15</span><span class="p">)</span></div><div class='line' id='LC75'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span><span class="p">;</span></div><div class='line' id='LC76'><br/></div><div class='line' id='LC77'>&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">p</span> <span class="o">&lt;</span> <span class="mi">8</span><span class="p">)</span></div><div class='line' id='LC78'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">iodiraddr</span> <span class="o">=</span> <span class="n">MCP23017_IODIRA</span><span class="p">;</span></div><div class='line' id='LC79'>&nbsp;&nbsp;<span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC80'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">iodiraddr</span> <span class="o">=</span> <span class="n">MCP23017_IODIRB</span><span class="p">;</span></div><div class='line' id='LC81'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">p</span> <span class="o">-=</span> <span class="mi">8</span><span class="p">;</span></div><div class='line' id='LC82'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC83'><br/></div><div class='line' id='LC84'>&nbsp;&nbsp;<span class="c1">// read the current IODIR</span></div><div class='line' id='LC85'>&nbsp;&nbsp;<span class="n">Wire</span><span class="p">.</span><span class="n">beginTransmission</span><span class="p">(</span><span class="n">MCP23017_ADDRESS</span> <span class="o">|</span> <span class="n">i2caddr</span><span class="p">);</span></div><div class='line' id='LC86'>&nbsp;&nbsp;<span class="n">wiresend</span><span class="p">(</span><span class="n">iodiraddr</span><span class="p">);</span>	</div><div class='line' id='LC87'>&nbsp;&nbsp;<span class="n">Wire</span><span class="p">.</span><span class="n">endTransmission</span><span class="p">();</span></div><div class='line' id='LC88'>&nbsp;&nbsp;</div><div class='line' id='LC89'>&nbsp;&nbsp;<span class="n">Wire</span><span class="p">.</span><span class="n">requestFrom</span><span class="p">(</span><span class="n">MCP23017_ADDRESS</span> <span class="o">|</span> <span class="n">i2caddr</span><span class="p">,</span> <span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC90'>&nbsp;&nbsp;<span class="n">iodir</span> <span class="o">=</span> <span class="n">wirerecv</span><span class="p">();</span></div><div class='line' id='LC91'><br/></div><div class='line' id='LC92'>&nbsp;&nbsp;<span class="c1">// set the pin and direction</span></div><div class='line' id='LC93'>&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">d</span> <span class="o">==</span> <span class="n">INPUT</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC94'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">iodir</span> <span class="o">|=</span> <span class="mi">1</span> <span class="o">&lt;&lt;</span> <span class="n">p</span><span class="p">;</span> </div><div class='line' id='LC95'>&nbsp;&nbsp;<span class="p">}</span> <span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC96'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">iodir</span> <span class="o">&amp;=</span> <span class="o">~</span><span class="p">(</span><span class="mi">1</span> <span class="o">&lt;&lt;</span> <span class="n">p</span><span class="p">);</span></div><div class='line' id='LC97'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC98'><br/></div><div class='line' id='LC99'>&nbsp;&nbsp;<span class="c1">// write the new IODIR</span></div><div class='line' id='LC100'>&nbsp;&nbsp;<span class="n">Wire</span><span class="p">.</span><span class="n">beginTransmission</span><span class="p">(</span><span class="n">MCP23017_ADDRESS</span> <span class="o">|</span> <span class="n">i2caddr</span><span class="p">);</span></div><div class='line' id='LC101'>&nbsp;&nbsp;<span class="n">wiresend</span><span class="p">(</span><span class="n">iodiraddr</span><span class="p">);</span></div><div class='line' id='LC102'>&nbsp;&nbsp;<span class="n">wiresend</span><span class="p">(</span><span class="n">iodir</span><span class="p">);</span>	</div><div class='line' id='LC103'>&nbsp;&nbsp;<span class="n">Wire</span><span class="p">.</span><span class="n">endTransmission</span><span class="p">();</span></div><div class='line' id='LC104'><span class="p">}</span></div><div class='line' id='LC105'><br/></div><div class='line' id='LC106'><span class="n">uint16_t</span> <span class="n">Adafruit_MCP23017</span><span class="o">::</span><span class="n">readGPIOAB</span><span class="p">()</span> <span class="p">{</span></div><div class='line' id='LC107'>&nbsp;&nbsp;<span class="n">uint16_t</span> <span class="n">ba</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC108'>&nbsp;&nbsp;<span class="n">uint8_t</span> <span class="n">a</span><span class="p">;</span></div><div class='line' id='LC109'><br/></div><div class='line' id='LC110'>&nbsp;&nbsp;<span class="c1">// read the current GPIO output latches</span></div><div class='line' id='LC111'>&nbsp;&nbsp;<span class="n">Wire</span><span class="p">.</span><span class="n">beginTransmission</span><span class="p">(</span><span class="n">MCP23017_ADDRESS</span> <span class="o">|</span> <span class="n">i2caddr</span><span class="p">);</span></div><div class='line' id='LC112'>&nbsp;&nbsp;<span class="n">wiresend</span><span class="p">(</span><span class="n">MCP23017_GPIOA</span><span class="p">);</span>	</div><div class='line' id='LC113'>&nbsp;&nbsp;<span class="n">Wire</span><span class="p">.</span><span class="n">endTransmission</span><span class="p">();</span></div><div class='line' id='LC114'>&nbsp;&nbsp;</div><div class='line' id='LC115'>&nbsp;&nbsp;<span class="n">Wire</span><span class="p">.</span><span class="n">requestFrom</span><span class="p">(</span><span class="n">MCP23017_ADDRESS</span> <span class="o">|</span> <span class="n">i2caddr</span><span class="p">,</span> <span class="mi">2</span><span class="p">);</span></div><div class='line' id='LC116'>&nbsp;&nbsp;<span class="n">a</span> <span class="o">=</span> <span class="n">wirerecv</span><span class="p">();</span></div><div class='line' id='LC117'>&nbsp;&nbsp;<span class="n">ba</span> <span class="o">=</span> <span class="n">wirerecv</span><span class="p">();</span></div><div class='line' id='LC118'>&nbsp;&nbsp;<span class="n">ba</span> <span class="o">&lt;&lt;=</span> <span class="mi">8</span><span class="p">;</span></div><div class='line' id='LC119'>&nbsp;&nbsp;<span class="n">ba</span> <span class="o">|=</span> <span class="n">a</span><span class="p">;</span></div><div class='line' id='LC120'><br/></div><div class='line' id='LC121'>&nbsp;&nbsp;<span class="k">return</span> <span class="n">ba</span><span class="p">;</span></div><div class='line' id='LC122'><span class="p">}</span></div><div class='line' id='LC123'><br/></div><div class='line' id='LC124'><span class="kt">void</span> <span class="n">Adafruit_MCP23017</span><span class="o">::</span><span class="n">writeGPIOAB</span><span class="p">(</span><span class="n">uint16_t</span> <span class="n">ba</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC125'>&nbsp;&nbsp;<span class="n">Wire</span><span class="p">.</span><span class="n">beginTransmission</span><span class="p">(</span><span class="n">MCP23017_ADDRESS</span> <span class="o">|</span> <span class="n">i2caddr</span><span class="p">);</span></div><div class='line' id='LC126'>&nbsp;&nbsp;<span class="n">wiresend</span><span class="p">(</span><span class="n">MCP23017_GPIOA</span><span class="p">);</span>	</div><div class='line' id='LC127'>&nbsp;&nbsp;<span class="n">wiresend</span><span class="p">(</span><span class="n">ba</span> <span class="o">&amp;</span> <span class="mh">0xFF</span><span class="p">);</span></div><div class='line' id='LC128'>&nbsp;&nbsp;<span class="n">wiresend</span><span class="p">(</span><span class="n">ba</span> <span class="o">&gt;&gt;</span> <span class="mi">8</span><span class="p">);</span></div><div class='line' id='LC129'>&nbsp;&nbsp;<span class="n">Wire</span><span class="p">.</span><span class="n">endTransmission</span><span class="p">();</span></div><div class='line' id='LC130'><span class="p">}</span></div><div class='line' id='LC131'><br/></div><div class='line' id='LC132'><span class="kt">void</span> <span class="n">Adafruit_MCP23017</span><span class="o">::</span><span class="n">digitalWrite</span><span class="p">(</span><span class="n">uint8_t</span> <span class="n">p</span><span class="p">,</span> <span class="n">uint8_t</span> <span class="n">d</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC133'>&nbsp;&nbsp;<span class="n">uint8_t</span> <span class="n">gpio</span><span class="p">;</span></div><div class='line' id='LC134'>&nbsp;&nbsp;<span class="n">uint8_t</span> <span class="n">gpioaddr</span><span class="p">,</span> <span class="n">olataddr</span><span class="p">;</span></div><div class='line' id='LC135'><br/></div><div class='line' id='LC136'>&nbsp;&nbsp;<span class="c1">// only 16 bits!</span></div><div class='line' id='LC137'>&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">p</span> <span class="o">&gt;</span> <span class="mi">15</span><span class="p">)</span></div><div class='line' id='LC138'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span><span class="p">;</span></div><div class='line' id='LC139'><br/></div><div class='line' id='LC140'>&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">p</span> <span class="o">&lt;</span> <span class="mi">8</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC141'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">olataddr</span> <span class="o">=</span> <span class="n">MCP23017_OLATA</span><span class="p">;</span></div><div class='line' id='LC142'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gpioaddr</span> <span class="o">=</span> <span class="n">MCP23017_GPIOA</span><span class="p">;</span></div><div class='line' id='LC143'>&nbsp;&nbsp;<span class="p">}</span> <span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC144'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">olataddr</span> <span class="o">=</span> <span class="n">MCP23017_OLATB</span><span class="p">;</span></div><div class='line' id='LC145'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gpioaddr</span> <span class="o">=</span> <span class="n">MCP23017_GPIOB</span><span class="p">;</span></div><div class='line' id='LC146'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">p</span> <span class="o">-=</span> <span class="mi">8</span><span class="p">;</span></div><div class='line' id='LC147'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC148'><br/></div><div class='line' id='LC149'>&nbsp;&nbsp;<span class="c1">// read the current GPIO output latches</span></div><div class='line' id='LC150'>&nbsp;&nbsp;<span class="n">Wire</span><span class="p">.</span><span class="n">beginTransmission</span><span class="p">(</span><span class="n">MCP23017_ADDRESS</span> <span class="o">|</span> <span class="n">i2caddr</span><span class="p">);</span></div><div class='line' id='LC151'>&nbsp;&nbsp;<span class="n">wiresend</span><span class="p">(</span><span class="n">olataddr</span><span class="p">);</span>	</div><div class='line' id='LC152'>&nbsp;&nbsp;<span class="n">Wire</span><span class="p">.</span><span class="n">endTransmission</span><span class="p">();</span></div><div class='line' id='LC153'>&nbsp;&nbsp;</div><div class='line' id='LC154'>&nbsp;&nbsp;<span class="n">Wire</span><span class="p">.</span><span class="n">requestFrom</span><span class="p">(</span><span class="n">MCP23017_ADDRESS</span> <span class="o">|</span> <span class="n">i2caddr</span><span class="p">,</span> <span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC155'>&nbsp;&nbsp;&nbsp;<span class="n">gpio</span> <span class="o">=</span> <span class="n">wirerecv</span><span class="p">();</span></div><div class='line' id='LC156'><br/></div><div class='line' id='LC157'>&nbsp;&nbsp;<span class="c1">// set the pin and direction</span></div><div class='line' id='LC158'>&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">d</span> <span class="o">==</span> <span class="n">HIGH</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC159'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gpio</span> <span class="o">|=</span> <span class="mi">1</span> <span class="o">&lt;&lt;</span> <span class="n">p</span><span class="p">;</span> </div><div class='line' id='LC160'>&nbsp;&nbsp;<span class="p">}</span> <span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC161'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gpio</span> <span class="o">&amp;=</span> <span class="o">~</span><span class="p">(</span><span class="mi">1</span> <span class="o">&lt;&lt;</span> <span class="n">p</span><span class="p">);</span></div><div class='line' id='LC162'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC163'><br/></div><div class='line' id='LC164'>&nbsp;&nbsp;<span class="c1">// write the new GPIO</span></div><div class='line' id='LC165'>&nbsp;&nbsp;<span class="n">Wire</span><span class="p">.</span><span class="n">beginTransmission</span><span class="p">(</span><span class="n">MCP23017_ADDRESS</span> <span class="o">|</span> <span class="n">i2caddr</span><span class="p">);</span></div><div class='line' id='LC166'>&nbsp;&nbsp;<span class="n">wiresend</span><span class="p">(</span><span class="n">gpioaddr</span><span class="p">);</span></div><div class='line' id='LC167'>&nbsp;&nbsp;<span class="n">wiresend</span><span class="p">(</span><span class="n">gpio</span><span class="p">);</span>	</div><div class='line' id='LC168'>&nbsp;&nbsp;<span class="n">Wire</span><span class="p">.</span><span class="n">endTransmission</span><span class="p">();</span></div><div class='line' id='LC169'><span class="p">}</span></div><div class='line' id='LC170'><br/></div><div class='line' id='LC171'><span class="kt">void</span> <span class="n">Adafruit_MCP23017</span><span class="o">::</span><span class="n">pullUp</span><span class="p">(</span><span class="n">uint8_t</span> <span class="n">p</span><span class="p">,</span> <span class="n">uint8_t</span> <span class="n">d</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC172'>&nbsp;&nbsp;<span class="n">uint8_t</span> <span class="n">gppu</span><span class="p">;</span></div><div class='line' id='LC173'>&nbsp;&nbsp;<span class="n">uint8_t</span> <span class="n">gppuaddr</span><span class="p">;</span></div><div class='line' id='LC174'><br/></div><div class='line' id='LC175'>&nbsp;&nbsp;<span class="c1">// only 16 bits!</span></div><div class='line' id='LC176'>&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">p</span> <span class="o">&gt;</span> <span class="mi">15</span><span class="p">)</span></div><div class='line' id='LC177'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span><span class="p">;</span></div><div class='line' id='LC178'><br/></div><div class='line' id='LC179'>&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">p</span> <span class="o">&lt;</span> <span class="mi">8</span><span class="p">)</span></div><div class='line' id='LC180'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gppuaddr</span> <span class="o">=</span> <span class="n">MCP23017_GPPUA</span><span class="p">;</span></div><div class='line' id='LC181'>&nbsp;&nbsp;<span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC182'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gppuaddr</span> <span class="o">=</span> <span class="n">MCP23017_GPPUB</span><span class="p">;</span></div><div class='line' id='LC183'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">p</span> <span class="o">-=</span> <span class="mi">8</span><span class="p">;</span></div><div class='line' id='LC184'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC185'><br/></div><div class='line' id='LC186'><br/></div><div class='line' id='LC187'>&nbsp;&nbsp;<span class="c1">// read the current pullup resistor set</span></div><div class='line' id='LC188'>&nbsp;&nbsp;<span class="n">Wire</span><span class="p">.</span><span class="n">beginTransmission</span><span class="p">(</span><span class="n">MCP23017_ADDRESS</span> <span class="o">|</span> <span class="n">i2caddr</span><span class="p">);</span></div><div class='line' id='LC189'>&nbsp;&nbsp;<span class="n">wiresend</span><span class="p">(</span><span class="n">gppuaddr</span><span class="p">);</span>	</div><div class='line' id='LC190'>&nbsp;&nbsp;<span class="n">Wire</span><span class="p">.</span><span class="n">endTransmission</span><span class="p">();</span></div><div class='line' id='LC191'>&nbsp;&nbsp;</div><div class='line' id='LC192'>&nbsp;&nbsp;<span class="n">Wire</span><span class="p">.</span><span class="n">requestFrom</span><span class="p">(</span><span class="n">MCP23017_ADDRESS</span> <span class="o">|</span> <span class="n">i2caddr</span><span class="p">,</span> <span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC193'>&nbsp;&nbsp;<span class="n">gppu</span> <span class="o">=</span> <span class="n">wirerecv</span><span class="p">();</span></div><div class='line' id='LC194'><br/></div><div class='line' id='LC195'>&nbsp;&nbsp;<span class="c1">// set the pin and direction</span></div><div class='line' id='LC196'>&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">d</span> <span class="o">==</span> <span class="n">HIGH</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC197'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gppu</span> <span class="o">|=</span> <span class="mi">1</span> <span class="o">&lt;&lt;</span> <span class="n">p</span><span class="p">;</span> </div><div class='line' id='LC198'>&nbsp;&nbsp;<span class="p">}</span> <span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC199'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gppu</span> <span class="o">&amp;=</span> <span class="o">~</span><span class="p">(</span><span class="mi">1</span> <span class="o">&lt;&lt;</span> <span class="n">p</span><span class="p">);</span></div><div class='line' id='LC200'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC201'><br/></div><div class='line' id='LC202'>&nbsp;&nbsp;<span class="c1">// write the new GPIO</span></div><div class='line' id='LC203'>&nbsp;&nbsp;<span class="n">Wire</span><span class="p">.</span><span class="n">beginTransmission</span><span class="p">(</span><span class="n">MCP23017_ADDRESS</span> <span class="o">|</span> <span class="n">i2caddr</span><span class="p">);</span></div><div class='line' id='LC204'>&nbsp;&nbsp;<span class="n">wiresend</span><span class="p">(</span><span class="n">gppuaddr</span><span class="p">);</span></div><div class='line' id='LC205'>&nbsp;&nbsp;<span class="n">wiresend</span><span class="p">(</span><span class="n">gppu</span><span class="p">);</span>	</div><div class='line' id='LC206'>&nbsp;&nbsp;<span class="n">Wire</span><span class="p">.</span><span class="n">endTransmission</span><span class="p">();</span></div><div class='line' id='LC207'><span class="p">}</span></div><div class='line' id='LC208'><br/></div><div class='line' id='LC209'><span class="n">uint8_t</span> <span class="n">Adafruit_MCP23017</span><span class="o">::</span><span class="n">digitalRead</span><span class="p">(</span><span class="n">uint8_t</span> <span class="n">p</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC210'>&nbsp;&nbsp;<span class="n">uint8_t</span> <span class="n">gpioaddr</span><span class="p">;</span></div><div class='line' id='LC211'><br/></div><div class='line' id='LC212'>&nbsp;&nbsp;<span class="c1">// only 16 bits!</span></div><div class='line' id='LC213'>&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">p</span> <span class="o">&gt;</span> <span class="mi">15</span><span class="p">)</span></div><div class='line' id='LC214'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC215'><br/></div><div class='line' id='LC216'>&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">p</span> <span class="o">&lt;</span> <span class="mi">8</span><span class="p">)</span></div><div class='line' id='LC217'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gpioaddr</span> <span class="o">=</span> <span class="n">MCP23017_GPIOA</span><span class="p">;</span></div><div class='line' id='LC218'>&nbsp;&nbsp;<span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC219'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gpioaddr</span> <span class="o">=</span> <span class="n">MCP23017_GPIOB</span><span class="p">;</span></div><div class='line' id='LC220'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">p</span> <span class="o">-=</span> <span class="mi">8</span><span class="p">;</span></div><div class='line' id='LC221'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC222'><br/></div><div class='line' id='LC223'>&nbsp;&nbsp;<span class="c1">// read the current GPIO</span></div><div class='line' id='LC224'>&nbsp;&nbsp;<span class="n">Wire</span><span class="p">.</span><span class="n">beginTransmission</span><span class="p">(</span><span class="n">MCP23017_ADDRESS</span> <span class="o">|</span> <span class="n">i2caddr</span><span class="p">);</span></div><div class='line' id='LC225'>&nbsp;&nbsp;<span class="n">wiresend</span><span class="p">(</span><span class="n">gpioaddr</span><span class="p">);</span>	</div><div class='line' id='LC226'>&nbsp;&nbsp;<span class="n">Wire</span><span class="p">.</span><span class="n">endTransmission</span><span class="p">();</span></div><div class='line' id='LC227'>&nbsp;&nbsp;</div><div class='line' id='LC228'>&nbsp;&nbsp;<span class="n">Wire</span><span class="p">.</span><span class="n">requestFrom</span><span class="p">(</span><span class="n">MCP23017_ADDRESS</span> <span class="o">|</span> <span class="n">i2caddr</span><span class="p">,</span> <span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC229'>&nbsp;&nbsp;<span class="k">return</span> <span class="p">(</span><span class="n">wirerecv</span><span class="p">()</span> <span class="o">&gt;&gt;</span> <span class="n">p</span><span class="p">)</span> <span class="o">&amp;</span> <span class="mh">0x1</span><span class="p">;</span></div><div class='line' id='LC230'><span class="p">}</span></div></pre></div>
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


    <p class="right">&copy; 2013 <span title="0.04740s from fe17.rs.github.com">GitHub</span> Inc. All rights reserved.</p>
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

    
    
    <span id='server_response_time' data-time='0.04859' data-host='fe17'></span>
    
  </body>
</html>

