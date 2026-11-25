<h2><a href="https://codeforces.com/contest/1923/problem/D" target="_blank" rel="noopener noreferrer">1923D — Slimes</a></h2>

| | |
|---|---|
| **Difficulty** | 1800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1923D](https://codeforces.com/contest/1923/problem/D) |

## Topics
`binary search` `constructive algorithms` `data structures` `greedy` `two pointers`

---

## Problem Statement

<div class="header"><div class="title">D. Slimes</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>There are $$$n$$$ slimes placed in a line. The slimes are numbered from $$$1$$$ to $$$n$$$ in order from left to right. The size of the $$$i$$$-th slime is $$$a_i$$$.</p><p>Every second, the following happens: <span class="tex-font-style-bf">exactly one</span> slime eats one of its neighbors and increases its size by the eaten neighbor's size. A slime can eat its neighbor only if it is strictly bigger than this neighbor. If there is no slime which is strictly bigger than one of its neighbors, the process ends.</p><p>For example, suppose $$$n = 5$$$, $$$a = [2, 2, 3, 1, 4]$$$. The process can go as follows:</p><ul> <li> first, the $$$3$$$-rd slime eats the $$$2$$$-nd slime. The size of the $$$3$$$-rd slime becomes $$$5$$$, the $$$2$$$-nd slime is eaten. </li><li> then, the $$$3$$$-rd slime eats the $$$1$$$-st slime (they are neighbors since the $$$2$$$-nd slime is already eaten). The size of the $$$3$$$-rd slime becomes $$$7$$$, the $$$1$$$-st slime is eaten. </li><li> then, the $$$5$$$-th slime eats the $$$4$$$-th slime. The size of the $$$5$$$-th slime becomes $$$5$$$, the $$$4$$$-th slime is eaten. </li><li> then, the $$$3$$$-rd slime eats the $$$5$$$-th slime (they are neighbors since the $$$4$$$-th slime is already eaten). The size of the $$$3$$$-rd slime becomes $$$12$$$, the $$$5$$$-th slime is eaten. </li></ul><p>For each slime, calculate the minimum number of seconds it takes for this slime to be eaten by another slime (among all possible ways the process can go), or report that it is impossible.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases.</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$1 \le n \le 3 \cdot 10^5$$$) — the number of slimes.</p><p>The second line contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$1 \le a_i \le 10^9$$$).</p><p>The sum of $$$n$$$ over all test cases doesn't exceed $$$3 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print $$$n$$$ integers. The $$$i$$$-th integer should be equal to the minimum number of seconds it takes for the $$$i$$$-th slime to be eaten by another slime or <span class="tex-font-style-tt">-1</span> if it is impossible.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008585860572725681" id="id00765766983635577" class="input-output-copier">Copy</div></div><pre data-content="4
4
3 2 4 2
3
1 2 3
5
2 2 3 1 1
7
4 2 3 6 1 1 8
" id="id008585860572725681"><div class="test-example-line test-example-line-even test-example-line-0">4</div><div class="test-example-line test-example-line-odd test-example-line-1">4</div><div class="test-example-line test-example-line-odd test-example-line-1">3 2 4 2</div><div class="test-example-line test-example-line-even test-example-line-2">3</div><div class="test-example-line test-example-line-even test-example-line-2">1 2 3</div><div class="test-example-line test-example-line-odd test-example-line-3">5</div><div class="test-example-line test-example-line-odd test-example-line-3">2 2 3 1 1</div><div class="test-example-line test-example-line-even test-example-line-4">7</div><div class="test-example-line test-example-line-even test-example-line-4">4 2 3 6 1 1 8</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005376942517220219" id="id008531574127170773" class="input-output-copier">Copy</div></div><pre id="id005376942517220219">2 1 2 1 
1 1 -1 
2 1 -1 1 2 
2 1 1 3 1 1 4 
</pre></div></div></div>