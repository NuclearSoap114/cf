<h2><a href="https://codeforces.com/contest/2050/problem/D" target="_blank" rel="noopener noreferrer">2050D — Digital string maximization</a></h2>

| | |
|---|---|
| **Difficulty** | 1300 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2050D](https://codeforces.com/contest/2050/problem/D) |

## Topics
`brute force` `greedy` `math` `strings`

---

## Problem Statement

<div class="header"><div class="title">D. Digital string maximization</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a string $$$s$$$, consisting of digits from $$$0$$$ to $$$9$$$. In one operation, you can pick any digit in this string, except for $$$0$$$ or the leftmost digit, decrease it by $$$1$$$, and then swap it with the digit left to the picked.</p><p>For example, in one operation from the string $$$1023$$$, you can get $$$1103$$$ or $$$1022$$$.</p><p>Find the lexicographically maximum string you can obtain after any number of operations.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input consists of an integer $$$t$$$ ($$$1 \le t \le 10^4$$$)  — the number of test cases.</p><p>Each test case consists of a single line consisting of a digital string $$$s$$$ ($$$1 \le |s| \le 2\cdot 10^5$$$), where $$$|s|$$$ denotes the length of $$$s$$$. The string does not contain leading zeroes.</p><p>It is guaranteed that the sum of $$$|s|$$$ of all test cases doesn't exceed $$$2\cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print the answer on a separate line.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0035681851413085686" id="id00006030709569927906" class="input-output-copier">Copy</div></div><pre id="id0035681851413085686"><div class="test-example-line test-example-line-even test-example-line-0">6</div><div class="test-example-line test-example-line-odd test-example-line-1">19</div><div class="test-example-line test-example-line-even test-example-line-2">1709</div><div class="test-example-line test-example-line-odd test-example-line-3">11555</div><div class="test-example-line test-example-line-even test-example-line-4">51476</div><div class="test-example-line test-example-line-odd test-example-line-5">9876543210</div><div class="test-example-line test-example-line-even test-example-line-6">5891917899</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0003842834219536051" id="id007899688386949894" class="input-output-copier">Copy</div></div><pre id="id0003842834219536051">81
6710
33311
55431
9876543210
7875567711
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, the following sequence of operations is suitable: $$$19 \rightarrow 81$$$.</p><p>In the second example, the following sequence of operations is suitable: $$$1709 \rightarrow 1780 \rightarrow 6180 \rightarrow 6710$$$.</p><p>In the fourth example, the following sequence of operations is suitable: $$$51476 \rightarrow 53176 \rightarrow 53616 \rightarrow 53651 \rightarrow 55351 \rightarrow 55431$$$.</p></div>