<h2><a href="https://codeforces.com/contest/1490/problem/A" target="_blank" rel="noopener noreferrer">1490A — Dense Array</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1490A](https://codeforces.com/contest/1490/problem/A) |

## Topics
`greedy` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Dense Array</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Polycarp calls an array dense if the greater of any two adjacent elements is not more than twice bigger than the smaller. More formally, for any <span class="MathJax_Preview" style="color: inherit;"><span class="MJXp-math" id="MJXp-Span-1"><span class="MJXp-mi MJXp-italic" id="MJXp-Span-2">i</span></span></span>$i$ (<span class="MathJax_Preview" style="color: inherit;"><span class="MJXp-math" id="MJXp-Span-3"><span class="MJXp-mn" id="MJXp-Span-4">1</span><span class="MJXp-mo" id="MJXp-Span-5" style="margin-left: 0.333em; margin-right: 0.333em;">≤</span><span class="MJXp-mi MJXp-italic" id="MJXp-Span-6">i</span><span class="MJXp-mo" id="MJXp-Span-7" style="margin-left: 0.333em; margin-right: 0.333em;">≤</span><span class="MJXp-mi MJXp-italic" id="MJXp-Span-8">n</span><span class="MJXp-mo" id="MJXp-Span-9" style="margin-left: 0.267em; margin-right: 0.267em;">−</span><span class="MJXp-mn" id="MJXp-Span-10">1</span></span></span>$1 \le i \le n-1$), this condition must be satisfied: <span class="MathJax_Preview" style="color: inherit;"><span class="MJXp-math" id="MJXp-Span-11"><span class="MJXp-mfrac" id="MJXp-Span-12"><span class="MJXp-box"><span class="MJXp-mo" id="MJXp-Span-13">max</span></span></span></span></span>$\frac{\max(a[i], a[i+1])}{\min(a[i], a[i+1])} \le 2$</p><p>For example, the arrays <span class="MathJax_Preview">[1, 2, 3, 4, 3]</span>$[1, 2, 3, 4, 3]$, <span class="MathJax_Preview">[1, 1, 1]</span>$[1, 1, 1]$ and <span class="MathJax_Preview">[5, 10]</span>$[5, 10]$ are dense. And the arrays <span class="MathJax_Preview">[5, 11]</span>$[5, 11]$, <span class="MathJax_Preview">[1, 4, 2]</span>$[1, 4, 2]$, <span class="MathJax_Preview">[6, 6, 1]</span>$[6, 6, 1]$ are <span class="tex-font-style-bf">not</span> dense.</p><p>You are given an array <span class="MathJax_Preview">a</span>$a$ of <span class="MathJax_Preview">n</span>$n$ integers. What is the minimum number of numbers you need to add to an array to make it dense? You can insert numbers anywhere in the array. If the array is already dense, no numbers need to be added.</p><p>For example, if <span class="MathJax_Preview">a=[4,2,10,1]</span>$a=[4,2,10,1]$, then the answer is <span class="MathJax_Preview">5</span>$5$, and the array itself after inserting elements into it may look like this: <span class="MathJax_Preview">a=[4,2,\underline{\textbf{3}},\underline{\textbf{5}},10,\underline{\textbf{6}},\underline{\textbf{4}},\underline{\textbf{2}},1]</span>$a=[4,2,\underline{\textbf{3}},\underline{\textbf{5}},10,\underline{\textbf{6}},\underline{\textbf{4}},\underline{\textbf{2}},1]$ (there are other ways to build such <span class="MathJax_Preview">a</span>$a$).</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer <span class="MathJax_Preview">t</span>$t$ (<span class="MathJax_Preview">1 \le t \le 1000</span>$1 \le t \le 1000$). Then <span class="MathJax_Preview">t</span>$t$ test cases follow.</p><p>The first line of each test case contains one integer <span class="MathJax_Preview">n</span>$n$ (<span class="MathJax_Preview">2 \le n \le 50</span>$2 \le n \le 50$) — the length of the array <span class="MathJax_Preview">a</span>$a$.</p><p>The next line contains <span class="MathJax_Preview">n</span>$n$ integers <span class="MathJax_Preview">a_1, a_2, \ldots, a_n</span>$a_1, a_2, \ldots, a_n$ (<span class="MathJax_Preview">1 \le a_i \le 50</span>$1 \le a_i \le 50$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output one integer — the minimum number of numbers that must be added to the array to make it dense.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007619551488778294" id="id0045012042573416666" class="input-output-copier">Copy</div></div><pre id="id007619551488778294">6
4
4 2 10 1
2
1 3
2
6 1
3
1 4 2
5
1 2 3 4 3
12
4 31 25 50 30 20 34 46 42 16 15 16
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007459408883349641" id="id00991728099338188" class="input-output-copier">Copy</div></div><pre id="id007459408883349641">5
1
2
1
0
3
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>The first test case is explained in the statements.</p><p>In the second test case, you can insert one element, <span class="MathJax_Preview">a=[1,\underline{\textbf{2}},3]</span>$a=[1,\underline{\textbf{2}},3]$.</p><p>In the third test case, you can insert two elements, <span class="MathJax_Preview">a=[6,\underline{\textbf{4}},\underline{\textbf{2}},1]</span>$a=[6,\underline{\textbf{4}},\underline{\textbf{2}},1]$.</p><p>In the fourth test case, you can insert one element, <span class="MathJax_Preview">a=[1,\underline{\textbf{2}},4,2]</span>$a=[1,\underline{\textbf{2}},4,2]$.</p><p>In the fifth test case, the array <span class="MathJax_Preview">a</span>$a$ is already dense.</p></div>