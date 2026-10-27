<h2><a href="https://codeforces.com/contest/463/problem/D" target="_blank" rel="noopener noreferrer">463D — Gargari and Permutations</a></h2>

| | |
|---|---|
| **Difficulty** | 1900 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 463D](https://codeforces.com/contest/463/problem/D) |

## Topics
`dfs and similar` `dp` `graphs` `implementation`

---

## Problem Statement

<div class="header"><div class="title">D. Gargari and Permutations</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" style="font-weight: bold"><div class="property-title">input</div>stdin</div><div class="output-file output-standard" style="font-weight: bold"><div class="property-title">output</div>stdout</div></div><div><p>Gargari got bored to play with the bishops and now, after solving the problem about them, he is trying to do math homework. In a math book he have found <span class="tex-span"><i>k</i></span> permutations. Each of them consists of numbers <span class="tex-span">1, 2, ..., <i>n</i></span> in some order. Now he should find the length of the longest common subsequence of these permutations. Can you help Gargari?</p><p>You can read about longest common subsequence there: <span class="tex-font-style-tt">https://en.wikipedia.org/wiki/Longest_common_subsequence_problem</span></p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains two integers <span class="tex-span"><i>n</i></span> and <span class="tex-span"><i>k</i></span> <span class="tex-span">(1 ≤ <i>n</i> ≤ 1000; 2 ≤ <i>k</i> ≤ 5)</span>. Each of the next <span class="tex-span"><i>k</i></span> lines contains integers <span class="tex-span">1, 2, ..., <i>n</i></span> in some order — description of the current permutation.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print the length of the longest common subsequence.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0008331680171875755" id="id007733343006532785" class="input-output-copier">Copy</div></div><pre id="id0008331680171875755">4 3<br>1 4 2 3<br>4 1 2 3<br>1 2 4 3<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00732185419969632" id="id002519255530678469" class="input-output-copier">Copy</div></div><pre id="id00732185419969632">3<br></pre></div></div></div><div class="note"><div class="section-title">Note</div><p>The answer for the first test sample is subsequence [1, 2, 3].</p></div>