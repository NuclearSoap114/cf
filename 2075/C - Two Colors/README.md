<h2><a href="https://codeforces.com/contest/2075/problem/C" target="_blank" rel="noopener noreferrer">2075C — Two Colors</a></h2>

| | |
|---|---|
| **Difficulty** | 1500 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2075C](https://codeforces.com/contest/2075/problem/C) |

## Topics
`binary search` `combinatorics` `math`

---

## Problem Statement

<div class="header"><div class="title">C. Two Colors</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Monocarp has installed a new fence at his summer house. The fence consists of $$$n$$$ planks of the same size arranged in a row.</p><p>Monocarp decided that he would paint his fence according to the following rules:</p><ul> <li> each plank of the fence will be painted in exactly one color; </li><li> the number of different colors that the planks will be painted in is <span class="tex-font-style-bf">exactly</span> two; </li><li> the planks of the fence that are painted in the same color must form a continuous sequence, meaning that for all pairs of planks painted in the same color, there will be no planks painted in a different color between them. </li></ul><p>Monocarp has $$$m$$$ different paints, and the paint of the $$$i$$$-th color is sufficient to paint no more than $$$a_i$$$ planks of the fence. Monocarp will not buy any additional paints.</p><p>Your task is to determine the number of different ways to paint the fence that satisfy all of Monocarp's described wishes. Two ways to paint are considered different if there exists a plank that is painted in different colors in these two ways.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases.</p><p>The first line of each test case contains two integers $$$n$$$ and $$$m$$$ ($$$2 \le n, m \le 2 \cdot 10^5$$$) — the number of planks in the fence and the number of different colors of paint that Monocarp has.</p><p>The second line contains $$$m$$$ integers $$$a_1, a_2, \dots, a_m$$$ ($$$1 \le a_i \le n$$$), where $$$a_i$$$ is the maximum number of planks that can be painted with the paint of color $$$i$$$. </p><p>The sum of $$$n$$$ over all test cases does not exceed $$$2 \cdot 10^5$$$. The sum of $$$m$$$ over all test cases does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output the number of different ways to paint the fence that satisfy all of Monocarp's described wishes.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0003213450559315345" id="id005251384108866601" class="input-output-copier">Copy</div></div><pre data-content="3
5 2
2 4
5 2
3 4
12 3
5 9 8
" id="id0003213450559315345"><div class="test-example-line test-example-line-even test-example-line-0">3</div><div class="test-example-line test-example-line-odd test-example-line-1">5 2</div><div class="test-example-line test-example-line-odd test-example-line-1">2 4</div><div class="test-example-line test-example-line-even test-example-line-2">5 2</div><div class="test-example-line test-example-line-even test-example-line-2">3 4</div><div class="test-example-line test-example-line-odd test-example-line-3">12 3</div><div class="test-example-line test-example-line-odd test-example-line-3">5 9 8</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007569906165364011" id="id004753016119361566" class="input-output-copier">Copy</div></div><pre id="id007569906165364011">4
6
22
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, there are $$$4$$$ different ways to paint the fence (the sequences of color numbers in which the planks can be painted from left to right are listed below):</p><ol> <li> $$$[1, 2, 2, 2, 2]$$$; </li><li> $$$[1, 1, 2, 2, 2]$$$; </li><li> $$$[2, 2, 2, 1, 1]$$$; </li><li> $$$[2, 2, 2, 2, 1]$$$. </li></ol><p>In the second test case, there are $$$6$$$ different ways to paint the fence (the sequences of color numbers in which the planks can be painted from left to right are listed below):</p><ol> <li> $$$[1, 2, 2, 2, 2]$$$; </li><li> $$$[1, 1, 2, 2, 2]$$$; </li><li> $$$[1, 1, 1, 2, 2]$$$; </li><li> $$$[2, 2, 1, 1, 1]$$$; </li><li> $$$[2, 2, 2, 1, 1]$$$; </li><li> $$$[2, 2, 2, 2, 1]$$$. </li></ol></div>