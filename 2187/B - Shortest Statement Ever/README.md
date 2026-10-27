<h2><a href="https://codeforces.com/contest/2187/problem/B" target="_blank" rel="noopener noreferrer">2187B — Shortest Statement Ever</a></h2>

| | |
|---|---|
| **Difficulty** | 1800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2187B](https://codeforces.com/contest/2187/problem/B) |

## Topics
`bitmasks` `constructive algorithms` `dp` `greedy`

---

## Problem Statement

<div class="header"><div class="title">B. Shortest Statement Ever</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p> </p><p>You are given two non-negative integers $$$x$$$, $$$y$$$. Find two non-negative integers $$$p$$$ and $$$q$$$ such that $$$p\;\&\;q=0$$$, and $$$|x-p|+|y-q|$$$ is minimized. Here, $$$\&$$$ denotes the <a href="https://en.wikipedia.org/wiki/Bitwise_operation#AND">bitwise AND operation</a>. </p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 10^4$$$). The description of the test cases follows. </p><p>The only line of each test case contains two non-negative integers $$$x$$$ and $$$y$$$ ($$$0 \le x,y  \lt  2^{30}$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output two non-negative integers $$$p$$$ and $$$q$$$ you found. If there are multiple pairs of $$$p$$$ and $$$q$$$ satisfying the conditions, you may output any of them.</p><p>It can be proven that under the constraints of the problem, any valid solution satisfies $$$\max(p,q) \lt 2^{31}$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005485619836155324" id="id004946389199528386" class="input-output-copier">Copy</div></div><pre data-content="7
0 0
1 1
3 6
7 11
4 4
123 321
1073741823 1073741822
" id="id005485619836155324"><div class="test-example-line test-example-line-even test-example-line-0">7</div><div class="test-example-line test-example-line-odd test-example-line-1">0 0</div><div class="test-example-line test-example-line-even test-example-line-2">1 1</div><div class="test-example-line test-example-line-odd test-example-line-3">3 6</div><div class="test-example-line test-example-line-even test-example-line-4">7 11</div><div class="test-example-line test-example-line-odd test-example-line-5">4 4</div><div class="test-example-line test-example-line-even test-example-line-6">123 321</div><div class="test-example-line test-example-line-odd test-example-line-7">1073741823 1073741822</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0045398538317666004" id="id009565984479070522" class="input-output-copier">Copy</div></div><pre data-content="0 0
2 1
3 8
6 9
4 3
128 321
1073741824 1073741822
" id="id0045398538317666004"><div class="test-example-line test-example-line-odd test-example-line-1">0 0</div><div class="test-example-line test-example-line-even test-example-line-2">2 1</div><div class="test-example-line test-example-line-odd test-example-line-3">3 8</div><div class="test-example-line test-example-line-even test-example-line-4">6 9</div><div class="test-example-line test-example-line-odd test-example-line-5">4 3</div><div class="test-example-line test-example-line-even test-example-line-6">128 321</div><div class="test-example-line test-example-line-odd test-example-line-7">1073741824 1073741822</div></pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, one valid pair would be $$$p=0$$$ and $$$q=0$$$, as $$$0\,\&\,0=0$$$ and $$$|x-p|+|y-q|=|0-0|+|0-0|=0$$$ is the minimum over all pairs of $$$p$$$ and $$$q$$$.</p><p>In the third test case, one valid pair would be $$$p=3$$$ and $$$q=8$$$, as $$$3\,\&\,8=0$$$ and $$$|x-p|+|y-q|=|3-3|+|8-6|=2$$$ is the minimum over all pairs of $$$p$$$ and $$$q$$$. Note that $$$(p,q)=(3,4)$$$ is also a valid pair.</p></div>