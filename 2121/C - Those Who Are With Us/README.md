<h2><a href="https://codeforces.com/contest/2121/problem/C" target="_blank" rel="noopener noreferrer">2121C — Those Who Are With Us</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2121C](https://codeforces.com/contest/2121/problem/C) |

## Topics
`greedy` `implementation`

---

## Problem Statement

<div class="header"><div class="title">C. Those Who Are With Us</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a matrix of integers with $$$n$$$ rows and $$$m$$$ columns. The cell at the intersection of the $$$i$$$-th row and the $$$j$$$-th column contains the number $$$a_{ij}$$$.</p><p>You can perform the following operation <span class="tex-font-style-bf">exactly once</span>:</p><ul><li> Choose two numbers $$$1 \leq r \leq n$$$ and $$$1 \leq c \leq m$$$.</li><li> For all cells $$$(i, j)$$$ in the matrix such that $$$i = r$$$ or $$$j = c$$$, decrease $$$a_{ij}$$$ by one.</li></ul><p>You need to find the minimal possible maximum value in the matrix $$$a$$$ after performing exactly one such operation.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test consists of multiple test cases. The first line contains a single integer $$$t$$$ ($$$1 \leq t \leq 10^4$$$) — the number of test cases. The description of the test cases follows.</p><p>The first line of each test case contains two integers $$$n$$$ and $$$m$$$ ($$$1 \leq n \cdot m \leq 10^5$$$) — the number of rows and columns in the matrix.</p><p>The next $$$n$$$ lines of each test case describe the matrix $$$a$$$. The $$$i$$$-th line contains $$$m$$$ integers $$$a_{i1}, a_{i2}, \ldots, a_{im}$$$ ($$$1 \leq a_{ij} \leq 100$$$) — the elements in the $$$i$$$-th row of the matrix.</p><p>It is guaranteed that the sum of $$$n \cdot m$$$ across all test cases does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output the minimum maximum value in the matrix $$$a$$$ after performing exactly one operation.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id002210877102563561" id="id0018119717933885615" class="input-output-copier">Copy</div></div><pre data-content="10
1 1
1
1 2
1 2
2 1
2
1
2 2
4 2
3 4
3 4
1 2 3 2
3 2 1 3
2 1 3 2
4 3
1 5 1
3 1 3
5 5 5
3 5 1
4 4
1 3 3 2
2 3 2 2
1 2 2 1
3 3 2 3
2 2
2 2
1 2
3 2
1 2
2 1
1 2
3 3
2 1 1
1 2 1
1 1 2
" id="id002210877102563561"><div class="test-example-line test-example-line-even test-example-line-0">10</div><div class="test-example-line test-example-line-odd test-example-line-1">1 1</div><div class="test-example-line test-example-line-odd test-example-line-1">1</div><div class="test-example-line test-example-line-even test-example-line-2">1 2</div><div class="test-example-line test-example-line-even test-example-line-2">1 2</div><div class="test-example-line test-example-line-odd test-example-line-3">2 1</div><div class="test-example-line test-example-line-odd test-example-line-3">2</div><div class="test-example-line test-example-line-odd test-example-line-3">1</div><div class="test-example-line test-example-line-even test-example-line-4">2 2</div><div class="test-example-line test-example-line-even test-example-line-4">4 2</div><div class="test-example-line test-example-line-even test-example-line-4">3 4</div><div class="test-example-line test-example-line-odd test-example-line-5">3 4</div><div class="test-example-line test-example-line-odd test-example-line-5">1 2 3 2</div><div class="test-example-line test-example-line-odd test-example-line-5">3 2 1 3</div><div class="test-example-line test-example-line-odd test-example-line-5">2 1 3 2</div><div class="test-example-line test-example-line-even test-example-line-6">4 3</div><div class="test-example-line test-example-line-even test-example-line-6">1 5 1</div><div class="test-example-line test-example-line-even test-example-line-6">3 1 3</div><div class="test-example-line test-example-line-even test-example-line-6">5 5 5</div><div class="test-example-line test-example-line-even test-example-line-6">3 5 1</div><div class="test-example-line test-example-line-odd test-example-line-7">4 4</div><div class="test-example-line test-example-line-odd test-example-line-7">1 3 3 2</div><div class="test-example-line test-example-line-odd test-example-line-7">2 3 2 2</div><div class="test-example-line test-example-line-odd test-example-line-7">1 2 2 1</div><div class="test-example-line test-example-line-odd test-example-line-7">3 3 2 3</div><div class="test-example-line test-example-line-even test-example-line-8">2 2</div><div class="test-example-line test-example-line-even test-example-line-8">2 2</div><div class="test-example-line test-example-line-even test-example-line-8">1 2</div><div class="test-example-line test-example-line-odd test-example-line-9">3 2</div><div class="test-example-line test-example-line-odd test-example-line-9">1 2</div><div class="test-example-line test-example-line-odd test-example-line-9">2 1</div><div class="test-example-line test-example-line-odd test-example-line-9">1 2</div><div class="test-example-line test-example-line-even test-example-line-10">3 3</div><div class="test-example-line test-example-line-even test-example-line-10">2 1 1</div><div class="test-example-line test-example-line-even test-example-line-10">1 2 1</div><div class="test-example-line test-example-line-even test-example-line-10">1 1 2</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003445916734212454" id="id0024045946966231035" class="input-output-copier">Copy</div></div><pre id="id003445916734212454">0
1
1
3
2
4
3
1
1
2
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first three test cases, you can choose $$$r = 1$$$ and $$$c = 1$$$.</p><p>In the fourth test case, you can choose $$$r = 1$$$ and $$$c = 2$$$.</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/c17767a6920a311231f92f0369c10b9b6a34d491.png" style="max-width: 100.0%;max-height: 100.0%;"> </center><p>In the fifth test case, you can choose $$$r = 2$$$ and $$$c = 3$$$.</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/45bddc965ec3fa397cb2b518c9236cd1e45f846e.png" style="max-width: 100.0%;max-height: 100.0%;"> </center><p>In the sixth test case, you can choose $$$r = 3$$$ and $$$c = 2$$$.</p></div>