<h2><a href="https://codeforces.com/contest/2151/problem/B" target="_blank" rel="noopener noreferrer">2151B — Incremental Path</a></h2>

| | |
|---|---|
| **Difficulty** | Unrated |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2151B](https://codeforces.com/contest/2151/problem/B) |

## Topics
_No tags available_

---

## Problem Statement

<div class="header"><div class="title">B. Incremental Path</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><div class="epigraph"><div class="epigraph-text"><span class="tex-font-style-it"><a href="https://soundcloud.com/rymdkraft/rymdsylt">Rymdkraft - Rymdsylt</a></span></div><div class="epigraph-source">⠀</div></div><p><span class="tex-font-style-bf">Hacks are disabled in this problem.</span></p><p>There is a strip containing $$$10^9$$$ cells, numbered from $$$1$$$ to $$$10^9$$$. Each cell is either black or white. Initially, $$$m$$$ distinct cells $$$a_1, a_2, \ldots, a_m$$$ are black, and the others are white.</p><p>If a person is on some cell $$$x$$$, he might be given two types of commands:</p><ul> <li> $$$\texttt{A}$$$: jump to the next cell, i.e. cell $$$x + 1$$$; </li><li> $$$\texttt{B}$$$: jump to the next white cell, i.e. the minimum $$$y  \gt  x$$$ such that cell $$$y$$$ is white. </li></ul><p>There is a string $$$s$$$ of length $$$n$$$, consisting of $$$n$$$ commands. For each $$$i$$$ from $$$1$$$ to $$$n$$$ in order, a person </p><ul> <li> starts from cell $$$1$$$; </li><li> executes the first $$$i$$$ commands in the string; </li><li> colors the last visited cell black (if it was already black, it remains black). </li></ul><p>You wonder which cells are black at the end of the process. Print them in increasing order.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 10^4$$$). The description of the test cases follows. </p><p>The first line of each test case contains two integers $$$n$$$ and $$$m$$$ ($$$1 \leq n \leq 10^5$$$, $$$1 \leq m \leq 10^5$$$) — the number of commands and the number of black cells at the beginning.</p><p>The second line of each test case contains a string $$$s$$$ of length $$$n$$$, consisting of characters $$$\texttt{A}$$$ and $$$\texttt{B}$$$, representing the commands.</p><p>The third line of each test case contains $$$m$$$ integers $$$a_1, a_2, \ldots, a_m$$$ ($$$1 \leq a_1  \lt  a_2  \lt  \ldots  \lt  a_m \leq 10^9$$$) — the initial black cells.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$10^5$$$, and the sum of $$$m$$$ over all test cases does not exceed $$$10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print two lines:</p><ul> <li> in the first line, print a single integer $$$k$$$: the number of black cells at the end; </li><li> in the second line, print the labels of the black cells, in increasing order. </li></ul></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007988794443700168" id="id008983561158229053" class="input-output-copier">Copy</div></div><pre data-content="5
3 2
BAB
2 5
3 4
ABA
1 4 9 10
5 2
ABABB
1 7
3 1
BBA
6
1 4
A
1 3 4 1000000000
" id="id007988794443700168"><div class="test-example-line test-example-line-even test-example-line-0">5</div><div class="test-example-line test-example-line-odd test-example-line-1">3 2</div><div class="test-example-line test-example-line-odd test-example-line-1">BAB</div><div class="test-example-line test-example-line-odd test-example-line-1">2 5</div><div class="test-example-line test-example-line-even test-example-line-2">3 4</div><div class="test-example-line test-example-line-even test-example-line-2">ABA</div><div class="test-example-line test-example-line-even test-example-line-2">1 4 9 10</div><div class="test-example-line test-example-line-odd test-example-line-3">5 2</div><div class="test-example-line test-example-line-odd test-example-line-3">ABABB</div><div class="test-example-line test-example-line-odd test-example-line-3">1 7</div><div class="test-example-line test-example-line-even test-example-line-4">3 1</div><div class="test-example-line test-example-line-even test-example-line-4">BBA</div><div class="test-example-line test-example-line-even test-example-line-4">6</div><div class="test-example-line test-example-line-odd test-example-line-5">1 4</div><div class="test-example-line test-example-line-odd test-example-line-5">A</div><div class="test-example-line test-example-line-odd test-example-line-5">1 3 4 1000000000</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006014621113613243" id="id009811905115470085" class="input-output-copier">Copy</div></div><pre data-content="4
2 3 5 6 
7
1 2 3 4 6 9 10 
7
1 2 3 5 6 7 9 
3
2 4 6 
5
1 2 3 4 1000000000 
" id="id006014621113613243"><div class="test-example-line test-example-line-odd test-example-line-1">4</div><div class="test-example-line test-example-line-odd test-example-line-1">2 3 5 6 </div><div class="test-example-line test-example-line-even test-example-line-2">7</div><div class="test-example-line test-example-line-even test-example-line-2">1 2 3 4 6 9 10 </div><div class="test-example-line test-example-line-odd test-example-line-3">7</div><div class="test-example-line test-example-line-odd test-example-line-3">1 2 3 5 6 7 9 </div><div class="test-example-line test-example-line-even test-example-line-4">3</div><div class="test-example-line test-example-line-even test-example-line-4">2 4 6 </div><div class="test-example-line test-example-line-odd test-example-line-5">5</div><div class="test-example-line test-example-line-odd test-example-line-5">1 2 3 4 1000000000 </div></pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, initially the only black cells are $$$2$$$ and $$$5$$$.</p><p>Person $$$1$$$:</p><ul> <li> starts from cell $$$1$$$; </li><li> executes command $$$\texttt{B}$$$, going to the next white cell ($$$3$$$); </li><li> colors cell $$$3$$$ black. </li></ul><p>Person $$$2$$$:</p><ul> <li> starts from cell $$$1$$$; </li><li> executes command $$$\texttt{B}$$$, going to the next white cell ($$$4$$$); </li><li> executes command $$$\texttt{A}$$$, going to the next cell ($$$5$$$); </li><li> colors cell $$$5$$$ black (it was already black, so it remains black). </li></ul><p>Person $$$3$$$:</p><ul> <li> starts from cell $$$1$$$; </li><li> executes command $$$\texttt{B}$$$, going to the next white cell ($$$4$$$); </li><li> executes command $$$\texttt{A}$$$, going to the next cell ($$$5$$$); </li><li> executes command $$$\texttt{B}$$$, going to the next white cell ($$$6$$$); </li><li> colors cell $$$6$$$ black. </li></ul><p>At the end, the black cells are $$$\{2, 3, 5, 6\}$$$.</p><p>In the second test case, the three people end up in cells $$$2$$$, $$$3$$$, and $$$6$$$, respectively.</p></div>