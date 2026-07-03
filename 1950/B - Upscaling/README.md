<h2><a href="https://codeforces.com/contest/1950/problem/B" target="_blank" rel="noopener noreferrer">1950B — Upscaling</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1950B](https://codeforces.com/contest/1950/problem/B) |

## Topics
`implementation`

---

## Problem Statement

<div class="header"><div class="title">B. Upscaling</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an integer $$$n$$$. Output a $$$2n \times 2n$$$ checkerboard made of $$$2 \times 2$$$ squares alternating '$$$\texttt{#}$$$' and '$$$\texttt{.}$$$', with the top-left cell being '$$$\texttt{#}$$$'. </p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/a63e1ab3fc712af5616d451c7ac0ba0903f34f1b.png" style="zoom: 100.0%;max-width: 100.0%;max-height: 100.0%;"><p><span class="tex-font-size-small">The picture above shows the answers for $$$n=1,2,3,4$$$.</span> </p></center></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer $$$t$$$ ($$$1 \leq t \leq 20$$$) — the number of test cases.</p><p>The only line of each test case contains a single integer $$$n$$$ ($$$1 \leq n \leq 20$$$) — it means you need to output a checkerboard of side length $$$2n$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output $$$2n$$$ lines, each containing $$$2n$$$ characters without spaces — the checkerboard, as described in the statement. Do <span class="tex-font-style-bf">not</span> output empty lines between test cases.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0018586705598246422" id="id006695089629842137" class="input-output-copier">Copy</div></div><pre id="id0018586705598246422"><div class="test-example-line test-example-line-even test-example-line-0">4</div><div class="test-example-line test-example-line-odd test-example-line-1">1</div><div class="test-example-line test-example-line-even test-example-line-2">2</div><div class="test-example-line test-example-line-odd test-example-line-3">3</div><div class="test-example-line test-example-line-even test-example-line-4">4</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005631887998259857" id="id006900473031540062" class="input-output-copier">Copy</div></div><pre id="id005631887998259857">##
##
##..
##..
..##
..##
##..##
##..##
..##..
..##..
##..##
##..##
##..##..
##..##..
..##..##
..##..##
##..##..
##..##..
..##..##
..##..##
</pre></div></div></div>