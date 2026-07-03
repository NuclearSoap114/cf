<h2><a href="https://codeforces.com/contest/1950/problem/D" target="_blank" rel="noopener noreferrer">1950D — Product of Binary Decimals</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1950D](https://codeforces.com/contest/1950/problem/D) |

## Topics
`brute force` `dp` `implementation` `number theory`

---

## Problem Statement

<div class="header"><div class="title">D. Product of Binary Decimals</div><div class="time-limit"><div class="property-title">time limit per test</div>3 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Let's call a number a <span class="tex-font-style-it">binary decimal</span> if it is a positive integer and all digits in its decimal notation are either $$$0$$$ or $$$1$$$. For example, $$$1\,010\,111$$$ is a binary decimal, while $$$10\,201$$$ and $$$787\,788$$$ are not.</p><p>Given a number $$$n$$$, you are asked whether or not it is possible to represent $$$n$$$ as a product of some (not necessarily distinct) binary decimals.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \leq t \leq 5 \cdot 10^4$$$) — the number of test cases.</p><p>The only line of each test case contains a single integer $$$n$$$ ($$$1 \leq n \leq 10^5$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output "<span class="tex-font-style-tt">YES</span>" (without quotes) if $$$n$$$ can be represented as a product of binary decimals, and "<span class="tex-font-style-tt">NO</span>" (without quotes) otherwise.</p><p>You can output "<span class="tex-font-style-tt">YES</span>" and "<span class="tex-font-style-tt">NO</span>" in any case (for example, strings "<span class="tex-font-style-tt">yES</span>", "<span class="tex-font-style-tt">yes</span>", and "<span class="tex-font-style-tt">Yes</span>" will be recognized as a positive response).</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0011230840862882085" id="id0027318259408652945" class="input-output-copier">Copy</div></div><pre id="id0011230840862882085"><div class="test-example-line test-example-line-even test-example-line-0">11</div><div class="test-example-line test-example-line-odd test-example-line-1">121</div><div class="test-example-line test-example-line-even test-example-line-2">1</div><div class="test-example-line test-example-line-odd test-example-line-3">14641</div><div class="test-example-line test-example-line-even test-example-line-4">12221</div><div class="test-example-line test-example-line-odd test-example-line-5">10110</div><div class="test-example-line test-example-line-even test-example-line-6">100000</div><div class="test-example-line test-example-line-odd test-example-line-7">99</div><div class="test-example-line test-example-line-even test-example-line-8">112</div><div class="test-example-line test-example-line-odd test-example-line-9">2024</div><div class="test-example-line test-example-line-even test-example-line-10">12421</div><div class="test-example-line test-example-line-odd test-example-line-11">1001</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0021660863504202488" id="id008932026600760411" class="input-output-copier">Copy</div></div><pre id="id0021660863504202488">YES
YES
YES
YES
YES
YES
NO
NO
NO
NO
YES
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>The first five test cases can be represented as a product of binary decimals as follows: </p><ul> <li> $$$121 = 11 \times 11$$$. </li><li> $$$1 = 1$$$ is already a binary decimal. </li><li> $$$14\,641 = 11 \times 11 \times 11 \times 11$$$. </li><li> $$$12\,221 = 11 \times 11 \times 101$$$. </li><li> $$$10\,110 = 10\,110$$$ is already a binary decimal. </li></ul></div>