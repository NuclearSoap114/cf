<h2><a href="https://codeforces.com/contest/1971/problem/D" target="_blank" rel="noopener noreferrer">1971D — Binary Cut</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1971D](https://codeforces.com/contest/1971/problem/D) |

## Topics
`dp` `greedy` `implementation` `sortings` `strings`

---

## Problem Statement

<div class="header"><div class="title">D. Binary Cut</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a binary string$$$^{\dagger}$$$. Please find the minimum number of pieces you need to cut it into, so that the resulting pieces can be rearranged into a sorted binary string.</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/d5649738d6458ef48c0f2a5c9984ece694ec3277.png" style="zoom: 100.0%;max-width: 100.0%;max-height: 100.0%;"> </center><p>Note that: </p><ul> <li> each character must lie in exactly one of the pieces; </li><li> the pieces must be contiguous substrings of the original string; </li><li> you must use all the pieces in the rearrangement. </li></ul><p>$$$^{\dagger}$$$ A <span class="tex-font-style-it">binary string</span> is a string consisting of characters $$$\texttt{0}$$$ and $$$\texttt{1}$$$. A <span class="tex-font-style-it">sorted binary string</span> is a binary string such that all characters $$$\texttt{0}$$$ come before all characters $$$\texttt{1}$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \leq t \leq 500$$$) — the number of test cases.</p><p>The only line of each test case contains a single string $$$s$$$ ($$$1 \leq |s| \leq 500$$$) consisting of characters $$$\texttt{0}$$$ and $$$\texttt{1}$$$, where $$$|s|$$$ denotes the length of the string $$$s$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output a single integer — the minimum number of pieces needed to be able to rearrange the string into a sorted binary string.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007400827832892655" id="id0001495300698276969" class="input-output-copier">Copy</div></div><pre id="id007400827832892655"><div class="test-example-line test-example-line-even test-example-line-0">6</div><div class="test-example-line test-example-line-odd test-example-line-1">11010</div><div class="test-example-line test-example-line-even test-example-line-2">00000000</div><div class="test-example-line test-example-line-odd test-example-line-3">1</div><div class="test-example-line test-example-line-even test-example-line-4">10</div><div class="test-example-line test-example-line-odd test-example-line-5">0001111</div><div class="test-example-line test-example-line-even test-example-line-6">0110</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008814415860928748" id="id001871079252865696" class="input-output-copier">Copy</div></div><pre id="id008814415860928748">3
1
1
2
1
2
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>The first test case is pictured in the statement. It can be proven that you can't use fewer than $$$3$$$ pieces.</p><p>In the second and third test cases, the binary string is already sorted, so only $$$1$$$ piece is needed.</p><p>In the fourth test case, you need to make a single cut between the two characters and rearrange them to make the string $$$\texttt{01}$$$.</p></div>