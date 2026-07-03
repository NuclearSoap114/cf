<h2><a href="https://codeforces.com/contest/1950/problem/E" target="_blank" rel="noopener noreferrer">1950E — Nearly Shortest Repeating Substring</a></h2>

| | |
|---|---|
| **Difficulty** | 1500 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1950E](https://codeforces.com/contest/1950/problem/E) |

## Topics
`brute force` `implementation` `number theory` `strings`

---

## Problem Statement

<div class="header"><div class="title">E. Nearly Shortest Repeating Substring</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a string $$$s$$$ of length $$$n$$$ consisting of lowercase Latin characters. Find the length of the shortest string $$$k$$$ such that several (possibly one) copies of $$$k$$$ can be concatenated together to form a string with the same length as $$$s$$$ and, at most, one different character.</p><p>More formally, find the length of the shortest string $$$k$$$ such that $$$c = \underbrace{k + \cdots + k}_{x\rm\ \text{times}}$$$ for some <span class="tex-font-style-it">positive integer</span> $$$x$$$, strings $$$s$$$ and $$$c$$$ has the same length and $$$c_i \neq s_i$$$ for at most one $$$i$$$ (i.e. there exist $$$0$$$ or $$$1$$$ such positions).</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \leq t \leq 10^3$$$) — the number of test cases.</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$1 \leq n \leq 2\cdot10^5$$$) — the length of string $$$s$$$.</p><p>The second line of each test case contains the string $$$s$$$, consisting of lowercase Latin characters.</p><p>The sum of $$$n$$$ over all test cases does not exceed $$$2\cdot10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print the length of the shortest string $$$k$$$ satisfying the constraints in the statement.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005244942452255411" id="id002755111803461453" class="input-output-copier">Copy</div></div><pre id="id005244942452255411"><div class="test-example-line test-example-line-even test-example-line-0">5</div><div class="test-example-line test-example-line-odd test-example-line-1">4</div><div class="test-example-line test-example-line-odd test-example-line-1">abaa</div><div class="test-example-line test-example-line-even test-example-line-2">4</div><div class="test-example-line test-example-line-even test-example-line-2">abba</div><div class="test-example-line test-example-line-odd test-example-line-3">13</div><div class="test-example-line test-example-line-odd test-example-line-3">slavicgslavic</div><div class="test-example-line test-example-line-even test-example-line-4">8</div><div class="test-example-line test-example-line-even test-example-line-4">hshahaha</div><div class="test-example-line test-example-line-odd test-example-line-5">20</div><div class="test-example-line test-example-line-odd test-example-line-5">stormflamestornflame</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0013276018124850664" id="id0039464359849178543" class="input-output-copier">Copy</div></div><pre id="id0013276018124850664">1
4
13
2
10
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, you can select $$$k = \texttt{a}$$$ and $$$k+k+k+k = \texttt{aaaa}$$$, which only differs from $$$s$$$ in the second position.</p><p>In the second test case, you cannot select $$$k$$$ of length one or two. We can have $$$k = \texttt{abba}$$$, which is equal to $$$s$$$.</p></div>