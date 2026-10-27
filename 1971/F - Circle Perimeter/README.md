<h2><a href="https://codeforces.com/contest/1971/problem/F" target="_blank" rel="noopener noreferrer">1971F — Circle Perimeter</a></h2>

| | |
|---|---|
| **Difficulty** | 1600 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1971F](https://codeforces.com/contest/1971/problem/F) |

## Topics
`binary search` `brute force` `dfs and similar` `geometry` `implementation` `math`

---

## Problem Statement

<div class="header"><div class="title">F. Circle Perimeter</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Given an integer $$$r$$$, find the number of lattice points that have a Euclidean distance from $$$(0, 0)$$$ <span class="tex-font-style-bf">greater than or equal to</span> $$$r$$$ but <span class="tex-font-style-bf">strictly less</span> than $$$r+1$$$.</p><p>A <span class="tex-font-style-it">lattice point</span> is a point with integer coordinates. The <span class="tex-font-style-it">Euclidean distance</span> from $$$(0, 0)$$$ to the point $$$(x,y)$$$ is $$$\sqrt{x^2 + y^2}$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \leq t \leq 1000$$$) — the number of test cases.</p><p>The only line of each test case contains a single integer $$$r$$$ ($$$1 \leq r \leq 10^5$$$).</p><p>The sum of $$$r$$$ over all test cases does not exceed $$$10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output a single integer — the number of lattice points that have an Euclidean distance $$$d$$$ from $$$(0, 0)$$$ such that $$$r \leq d  \lt  r+1$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007581871457142486" id="id009821631127745157" class="input-output-copier">Copy</div></div><pre id="id007581871457142486"><div class="test-example-line test-example-line-even test-example-line-0">6</div><div class="test-example-line test-example-line-odd test-example-line-1">1</div><div class="test-example-line test-example-line-even test-example-line-2">2</div><div class="test-example-line test-example-line-odd test-example-line-3">3</div><div class="test-example-line test-example-line-even test-example-line-4">4</div><div class="test-example-line test-example-line-odd test-example-line-5">5</div><div class="test-example-line test-example-line-even test-example-line-6">1984</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0046746443036894714" id="id0007376138393914089" class="input-output-copier">Copy</div></div><pre id="id0046746443036894714">8
16
20
24
40
12504
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>The points for the first three test cases are shown below. </p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/5fc6e2d468e278c2f3d25f3567124ea0bb45d02b.png" style="zoom: 50.0%;max-width: 100.0%;max-height: 100.0%;"> </center></div>