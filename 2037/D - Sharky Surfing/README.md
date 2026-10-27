<h2><a href="https://codeforces.com/contest/2037/problem/D" target="_blank" rel="noopener noreferrer">2037D — Sharky Surfing</a></h2>

| | |
|---|---|
| **Difficulty** | 1300 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2037D](https://codeforces.com/contest/2037/problem/D) |

## Topics
`data structures` `greedy` `two pointers`

---

## Problem Statement

<div class="header"><div class="title">D. Sharky Surfing</div><div class="time-limit"><div class="property-title">time limit per test</div>3 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p><span class="tex-font-style-it">Mualani loves surfing on her sharky surfboard!</span></p><p>Mualani's surf path can be modeled by a number line. She starts at position $$$1$$$, and the path ends at position $$$L$$$. When she is at position $$$x$$$ with a jump power of $$$k$$$, she can jump to any <span class="tex-font-style-bf">integer</span> position in the interval $$$[x, x+k]$$$. Initially, her jump power is $$$1$$$. </p><p>However, her surf path isn't completely smooth. There are $$$n$$$ hurdles on her path. Each hurdle is represented by an interval $$$[l, r]$$$, meaning she cannot jump to any position in the interval $$$[l, r]$$$. </p><p>There are also $$$m$$$ power-ups at certain positions on the path. Power-up $$$i$$$ is located at position $$$x_i$$$ and has a value of $$$v_i$$$. When Mualani is at position $$$x_i$$$, she has the option to collect the power-up to increase her jump power by $$$v_i$$$. There may be multiple power-ups at the same position. When she is at a position with some power-ups, she may choose to take or ignore each individual power-up. No power-up is in the interval of any hurdle.</p><p>What is the minimum number of power-ups she must collect to reach position $$$L$$$ to finish the path? If it is not possible to finish the surf path, output $$$-1$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer $$$t$$$ ($$$1 \leq t \leq 10^4$$$) — the number of test cases.</p><p>The first line of each test case contains three integers $$$n$$$, $$$m$$$, and $$$L$$$ ($$$1 \leq n, m \leq 2 \cdot 10^5, 3 \leq L \leq 10^9$$$) — the number of hurdles, the number of power-ups, and the position of the end.</p><p>The following $$$n$$$ lines contain two integers $$$l_i$$$ and $$$r_i$$$ ($$$2 \leq l_i \leq r_i \leq L-1$$$) — the bounds of the interval for the $$$i$$$'th hurdle. It is guaranteed that $$$r_i + 1  \lt  l_{i+1}$$$ for all $$$1 \leq i  \lt  n$$$ (i.e. all hurdles are non-overlapping, sorted by increasing positions, and the end point of a previous hurdle is not consecutive with the start point of the next hurdle).</p><p>The following $$$m$$$ lines contain two integers $$$x_i$$$ and $$$v_i$$$ ($$$1 \leq x_i, v_i \leq L$$$) — the position and the value for the $$$i$$$'th power-up. There may be multiple power-ups with the same $$$x$$$. It is guaranteed that $$$x_i \leq x_{i+1}$$$ for all $$$1 \leq i  \lt  m$$$ (i.e. the power-ups are sorted by non-decreasing position) and no power-up is in the interval of any hurdle.</p><p>It is guaranteed the sum of $$$n$$$ and the sum of $$$m$$$ over all test cases does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output the minimum number of power-ups she must collect to reach position $$$L$$$. If it is not possible, output $$$-1$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006341746600609793" id="id00961499084421623" class="input-output-copier">Copy</div></div><pre data-content="4
2 5 50
7 14
30 40
2 2
3 1
3 5
18 2
22 32
4 3 50
4 6
15 18
20 26
34 38
1 2
8 2
10 2
1 4 17
10 14
1 6
1 2
1 2
16 9
1 2 10
5 9
2 3
2 2
" id="id006341746600609793"><div class="test-example-line test-example-line-even test-example-line-0">4</div><div class="test-example-line test-example-line-odd test-example-line-1">2 5 50</div><div class="test-example-line test-example-line-odd test-example-line-1">7 14</div><div class="test-example-line test-example-line-odd test-example-line-1">30 40</div><div class="test-example-line test-example-line-odd test-example-line-1">2 2</div><div class="test-example-line test-example-line-odd test-example-line-1">3 1</div><div class="test-example-line test-example-line-odd test-example-line-1">3 5</div><div class="test-example-line test-example-line-odd test-example-line-1">18 2</div><div class="test-example-line test-example-line-odd test-example-line-1">22 32</div><div class="test-example-line test-example-line-even test-example-line-2">4 3 50</div><div class="test-example-line test-example-line-even test-example-line-2">4 6</div><div class="test-example-line test-example-line-even test-example-line-2">15 18</div><div class="test-example-line test-example-line-even test-example-line-2">20 26</div><div class="test-example-line test-example-line-even test-example-line-2">34 38</div><div class="test-example-line test-example-line-even test-example-line-2">1 2</div><div class="test-example-line test-example-line-even test-example-line-2">8 2</div><div class="test-example-line test-example-line-even test-example-line-2">10 2</div><div class="test-example-line test-example-line-odd test-example-line-3">1 4 17</div><div class="test-example-line test-example-line-odd test-example-line-3">10 14</div><div class="test-example-line test-example-line-odd test-example-line-3">1 6</div><div class="test-example-line test-example-line-odd test-example-line-3">1 2</div><div class="test-example-line test-example-line-odd test-example-line-3">1 2</div><div class="test-example-line test-example-line-odd test-example-line-3">16 9</div><div class="test-example-line test-example-line-even test-example-line-4">1 2 10</div><div class="test-example-line test-example-line-even test-example-line-4">5 9</div><div class="test-example-line test-example-line-even test-example-line-4">2 3</div><div class="test-example-line test-example-line-even test-example-line-4">2 2</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007005082072181484" id="id00712195623620965" class="input-output-copier">Copy</div></div><pre id="id007005082072181484">4
-1
1
2
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, she can collect power-ups $$$1$$$, $$$2$$$, $$$3$$$, and $$$5$$$ to clear all hurdles.</p><p>In the second test case, she cannot jump over the first hurdle.</p><p>In the fourth test case, by collecting both power-ups, she can jump over the hurdle.</p></div>