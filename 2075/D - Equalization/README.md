<h2><a href="https://codeforces.com/contest/2075/problem/D" target="_blank" rel="noopener noreferrer">2075D — Equalization</a></h2>

| | |
|---|---|
| **Difficulty** | 2000 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2075D](https://codeforces.com/contest/2075/problem/D) |

## Topics
`bitmasks` `brute force` `dp` `graphs` `math`

---

## Problem Statement

<div class="header"><div class="title">D. Equalization</div><div class="time-limit"><div class="property-title">time limit per test</div>3.5 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given two non-negative integers $$$x$$$ and $$$y$$$.</p><p>You can perform the following operation any number of times (possibly zero): choose a positive integer $$$k$$$ and divide either $$$x$$$ or $$$y$$$ by $$$2^k$$$ rounding down. The cost of this operation is $$$2^k$$$. However, there is an additional constraint: you cannot select the same value of $$$k$$$ more than once.</p><p>Your task is to calculate the minimum possible cost in order to make $$$x$$$ equal to $$$y$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 10^5$$$) — the number of test cases.</p><p>The only line of each test case contains two integers $$$x$$$ and $$$y$$$ ($$$0 \le x, y \le 10^{17}$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print a single integer — the minimum possible cost in order to make $$$x$$$ equal to $$$y$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0010642287138154227" id="id001673428814024306" class="input-output-copier">Copy</div></div><pre id="id0010642287138154227"><div class="test-example-line test-example-line-even test-example-line-0">5</div><div class="test-example-line test-example-line-odd test-example-line-1">0 1</div><div class="test-example-line test-example-line-even test-example-line-2">6 2</div><div class="test-example-line test-example-line-odd test-example-line-3">3 3</div><div class="test-example-line test-example-line-even test-example-line-4">13 37</div><div class="test-example-line test-example-line-odd test-example-line-5">4238659325782394 12983091057341925</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00310142060011815" id="id00305210045315233" class="input-output-copier">Copy</div></div><pre id="id00310142060011815">2
6
0
26
32764
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, you can proceed as follows: choose $$$k=1$$$ and divide $$$y$$$ by $$$2$$$. After that, $$$x$$$ and $$$y$$$ are equal to $$$0$$$.</p><p>In the second example, you can proceed as follows: choose $$$k=2$$$ and divide $$$x$$$ by $$$4$$$; choose $$$k=1$$$ and divide $$$y$$$ by $$$2$$$. After that, $$$x$$$ and $$$y$$$ are equal to $$$1$$$.</p><p>In the third example, numbers already are equal.</p></div>