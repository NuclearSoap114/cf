<h2><a href="https://codeforces.com/contest/2075/problem/A" target="_blank" rel="noopener noreferrer">2075A — To Zero</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2075A](https://codeforces.com/contest/2075/problem/A) |

## Topics
`greedy` `math`

---

## Problem Statement

<div class="header"><div class="title">A. To Zero</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>512 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given two integers $$$n$$$ and $$$k$$$; $$$k$$$ is an odd number not less than $$$3$$$. Your task is to turn $$$n$$$ into $$$0$$$.</p><p>To do this, you can perform the following operation any number of times: choose a number $$$x$$$ from $$$1$$$ to $$$k$$$ and subtract it from $$$n$$$. However, if the <span class="tex-font-style-bf">current</span> value of $$$n$$$ is even (divisible by $$$2$$$), then $$$x$$$ must also be even, and if the <span class="tex-font-style-bf">current</span> value of $$$n$$$ is odd (not divisible by $$$2$$$), then $$$x$$$ must be odd.</p><p>In different operations, you can choose the same values of $$$x$$$, but you don't have to. So, there are no limitations on using the same value of $$$x$$$.</p><p>Calculate the minimum number of operations required to turn $$$n$$$ into $$$0$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 10000$$$) — the number of test cases.</p><p>Each test case consists of one line containing two integers $$$n$$$ and $$$k$$$ ($$$3 \le k \le n \le 10^9$$$, $$$k$$$ is odd).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output one integer — the minimum number of operations required to turn $$$n$$$ into $$$0$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0031057362928127363" id="id003022928199318491" class="input-output-copier">Copy</div></div><pre id="id0031057362928127363"><div class="test-example-line test-example-line-even test-example-line-0">8</div><div class="test-example-line test-example-line-odd test-example-line-1">39 7</div><div class="test-example-line test-example-line-even test-example-line-2">9 3</div><div class="test-example-line test-example-line-odd test-example-line-3">6 3</div><div class="test-example-line test-example-line-even test-example-line-4">999967802 3</div><div class="test-example-line test-example-line-odd test-example-line-5">5 5</div><div class="test-example-line test-example-line-even test-example-line-6">6 5</div><div class="test-example-line test-example-line-odd test-example-line-7">999999999 3</div><div class="test-example-line test-example-line-even test-example-line-8">1000000000 3</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0005663787425683953" id="id008453146706935051" class="input-output-copier">Copy</div></div><pre id="id0005663787425683953">7
4
3
499983901
1
2
499999999
500000000
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example from the statement, you can first subtract $$$5$$$ from $$$39$$$ to get $$$34$$$. Then subtract $$$6$$$ five times to get $$$4$$$. Finally, subtract $$$4$$$ to get $$$0$$$.</p><p>In the second example, you can subtract $$$3$$$ once, and then subtract $$$2$$$ three times.</p><p>In the third example, you can subtract $$$2$$$ three times.</p></div>