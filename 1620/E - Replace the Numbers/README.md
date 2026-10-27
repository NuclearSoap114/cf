<h2><a href="https://codeforces.com/contest/1620/problem/E" target="_blank" rel="noopener noreferrer">1620E — Replace the Numbers</a></h2>

| | |
|---|---|
| **Difficulty** | 1900 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1620E](https://codeforces.com/contest/1620/problem/E) |

## Topics
`constructive algorithms` `data structures` `dsu` `implementation`

---

## Problem Statement

<div class="header"><div class="title">E. Replace the Numbers</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You have an array of integers (initially empty).</p><p>You have to perform $$$q$$$ queries. Each query is of one of two types: </p><ul> <li> "$$$1$$$ $$$x$$$" — add the element $$$x$$$ to the end of the array; </li><li> "$$$2$$$ $$$x$$$ $$$y$$$" — replace all occurrences of $$$x$$$ in the array with $$$y$$$. </li></ul><p>Find the resulting array after performing all the queries.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$q$$$ ($$$1 \le q \le 5 \cdot 10^5$$$) — the number of queries.</p><p>Next $$$q$$$ lines contain queries (one per line). Each query is of one of two types: </p><ul> <li> "$$$1$$$ $$$x$$$" ($$$1 \le x \le 5 \cdot 10^5$$$); </li><li> "$$$2$$$ $$$x$$$ $$$y$$$" ($$$1 \le x, y \le 5 \cdot 10^5$$$). </li></ul><p>It's guaranteed that there is at least one query of the first type.</p></div><div class="output-specification"><div class="section-title">Output</div><p>In a single line, print $$$k$$$ integers — the resulting array after performing all the queries, where $$$k$$$ is the number of queries of the first type.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007445857270219897" id="id0049006526316708976" class="input-output-copier">Copy</div></div><pre id="id007445857270219897">7
1 3
1 1
2 1 2
1 2
1 1
1 2
2 1 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00959119796018231" id="id0012754546854936444" class="input-output-copier">Copy</div></div><pre id="id00959119796018231">3 2 2 3 2 </pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id001582306735682253" id="id0009352164447627653" class="input-output-copier">Copy</div></div><pre id="id001582306735682253">4
1 1
1 2
1 1
2 2 2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007781338319587229" id="id008457547957818121" class="input-output-copier">Copy</div></div><pre id="id007781338319587229">1 2 1 </pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007586935713472456" id="id009819056402260262" class="input-output-copier">Copy</div></div><pre id="id007586935713472456">8
2 1 4
1 1
1 4
1 2
2 2 4
2 4 3
1 2
2 2 7
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0029133108416365905" id="id00804598957637756" class="input-output-copier">Copy</div></div><pre id="id0029133108416365905">1 3 3 7 </pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, the array changes as follows:</p><p>$$$[]$$$ $$$\rightarrow$$$ $$$[3]$$$ $$$\rightarrow$$$ $$$[3, 1]$$$ $$$\rightarrow$$$ $$$[3, 2]$$$ $$$\rightarrow$$$ $$$[3, 2, 2]$$$ $$$\rightarrow$$$ $$$[3, 2, 2, 1]$$$ $$$\rightarrow$$$ $$$[3, 2, 2, 1, 2]$$$ $$$\rightarrow$$$ $$$[3, 2, 2, 3, 2]$$$.</p><p>In the second example, the array changes as follows:</p><p>$$$[]$$$ $$$\rightarrow$$$ $$$[1]$$$ $$$\rightarrow$$$ $$$[1, 2]$$$ $$$\rightarrow$$$ $$$[1, 2, 1]$$$ $$$\rightarrow$$$ $$$[1, 2, 1]$$$.</p><p>In the third example, the array changes as follows:</p><p>$$$[]$$$ $$$\rightarrow$$$ $$$[]$$$ $$$\rightarrow$$$ $$$[1]$$$ $$$\rightarrow$$$ $$$[1, 4]$$$ $$$\rightarrow$$$ $$$[1, 4, 2]$$$ $$$\rightarrow$$$ $$$[1, 4, 4]$$$ $$$\rightarrow$$$ $$$[1, 3, 3]$$$ $$$\rightarrow$$$ $$$[1, 3, 3, 2]$$$ $$$\rightarrow$$$ $$$[1, 3, 3, 7]$$$.</p></div>