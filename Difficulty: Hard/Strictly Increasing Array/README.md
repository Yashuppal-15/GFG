<h2><a href="https://www.geeksforgeeks.org/problems/convert-to-strictly-increasing-array3351/1?page=1&category=Arrays&difficulty=Hard&sortBy=submissions">Strictly Increasing Array</a></h2><h3>Difficulty Level : Difficulty: Hard</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">Given an array <strong>nums</strong> of <strong>n</strong> positive integers. Find the minimum number of operations required to modify the array such that array elements are in <strong>strictly increasing</strong> order (nums[i] &lt; nums[i+1]).<br>Changing&nbsp;a number to <strong>greater </strong>or <strong>lesser </strong>than an original number is counted as one operation.</span></p>
<p><span style="font-size: 14pt;"><strong>Note:</strong> Array elements can become negative after applying the operation.</span></p>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>n = 6, nums = [1, 2, 3, 6, 5, 4]
<strong>Output: </strong>2
<strong>Explanation: </strong>By decreasing 6 by 2 and increasing 4 by 2, nums will be like [1, 2, 3, 4, 5, 6] which is stricly increasing.
</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input:</strong> n = 4, nums = [1, 1, 1, 1]
<strong>Output: </strong>3
<strong>Explanation: </strong>One such array after operation can be [-2, -1, 0, 1]. We require atleast 3 operations for this example.
</span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:&nbsp;</strong><br>1 &lt;= n &lt;= 10<sup>3</sup><br>1 &lt;= nums[i] &lt;= 10<sup>9</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Microsoft</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Dynamic Programming</code>&nbsp;<code>Algorithms</code>&nbsp;<code>Arrays</code>&nbsp;<code>Data Structures</code>&nbsp;