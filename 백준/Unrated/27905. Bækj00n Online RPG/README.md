# [Unrated] Bækj00n Online RPG - 27905 

[문제 링크](https://www.acmicpc.net/problem/27905) 

### 성능 요약

메모리: 108080 KB, 시간: 84 ms

### 분류

분류 없음

### 제출 일자

2024년 9월 12일 15:20:55

### 문제 설명

<blockquote>문제를 풀어서 강해져라! Bækj00n Online RPG</blockquote>

<p>Bækj00n Online RPG는 문제와 싸워서 캐릭터에게 알고리즘을 익히게 하고, 보스 문제들을 헤쳐나가며 알고리즘 문제풀이의 재미를 알고리즘 초심자도 느끼게 해 주는 잘 만들어진 게임입니다.</p>

<p>이 게임에는 <strong>문제</strong>와 <strong>사람</strong>이라고 부르는 두 종족이 있습니다. 오래 전부터 두 종족은 서로에게 상처를 안기는 방법을 알고 있었습니다.</p>

<ul>
	<li>사람은 공격적인 종족이며, 문제를 공격하는 행위는 "사람이 문제를 <strong>푼다</strong>"라고 합니다. 이 행위는 문제들에게는, 사람으로 치면, 본인의 치부를 다른 사람에게 전부 알리는 일이었고, 문제들은 이 행위를 상당히 수치스럽게 느꼈습니다.</li>
	<li>문제는 방어적인 종족이며, 사람을 공격하는 행위는 "문제가 사람에게 <strong>좌절감을 안긴다</strong>"라고 합니다. 이 행위는 사람들에게는 일상생활을 할 의지를 잃어버리는 일이었습니다. 하지만 문제를 풀 의지가 없는 사람들에게 문제는 사람에게 좌절감을 안길 수 없었습니다.</li>
</ul>

<p>어쩌다 두 종족은 서로 싸워서 결국 궁극의 문제풀이 비법을 얻은 사람족이 승리를 거머쥐었고, 문제들은 수치심을 주는 사람들을 피해 사람들이 모르는 지역을 찾아서 살았습니다.</p>

<p>그렇게 오랜 세월이 흘렀습니다. 궁극의 문제풀이 비법을 기억하는 사람은 이제 아무도 없을뿐더러 사람들은 이제 문제라는 종족 자체를 잊어버리기 시작했습니다. 그러던 어느 날, 문제족이 사람이 사는 곳에 흘러들어와 사람들의 호기심을 자극했습니다. 어떤 사람들은 만난 문제를 풀려고 시도했고, 이는 큰 좌절감으로 안겼습니다. 문제들은 사람 사회에, 말 그대로, 큰 문제로 다가왔습니다. 문제들이 평범한 사람들을 방해하고 복수하려는 것을 본 사람들은 참을 수 없었고, 결국 사람들의 지배자가 "우리는 다시 문제를 풀어야 한다"라고 외쳤습니다.</p>

<p>문제는, 사람이 사는 곳으로 뛰쳐나오는, 음, 문제는, 풀기에는 꽤나 어려운 문제였던 것이었습니다. 각오를 단단히 하고 사람이 사는 곳에 온 것이 틀림없었습니다. 그렇다고 궁극의 문제풀이 비법을 다시 찾아내기에는 너무 오랜 시간이 걸릴 것이었습니다. 당장 긴급한 사회 문제로 떠오른 문제풀이에 대해, 사람들은 두 종류의 역할을 나누어 맡는 것이 효과적일 것이라고 생각했습니다.</p>

<ul>
	<li>문제 제작자: 문제를 만듭니다. 백신과 같은 원리로, 문제를 만드는 것은 문제를 푸는 방법을 먼저 생각하여 만들 수도 있는 것이며, 그렇다면 문제를 풀지 못했을 때 푸는 법을 알려 주어 좌절감을 안기지 않게 할 수 있고, 그렇게 해서 문제를 푸는 법에 대한 지식을 쌓게 도와 주는 사람들입니다. 현 세계의 연구자와 비슷한 역할이라고 할 수 있겠습니다.</li>
	<li>수행자: 문제를 풉니다. 문제 제작자가 만든 문제를 풀어서 문제를 푸는 법에 대한 지식을 쌓습니다. 실제로 문제를 만났을 때, 좌절감을 느끼는 일이 없이 문제를 잘 풀어내는 훈련을 합니다. 현 세계의 대회 참가자와 비슷한 역할이라고 할 수 있겠습니다.</li>
</ul>

<p>문제 제작자가 수행자에게 문제를 만들어 던져 주니, 의도하지 않은 방법으로 문제를 풀어내는 수행자도 있었고, 수행자가 문제를 푸는 방법이 <strong>정형화됨</strong>을 발견했습니다. 문제 제작자가 이 현상을 연구했고, 일련의 정형화된 문제풀이 과정을 모아서 <strong>알고리즘</strong>이라는 단어로 부르기로 했습니다. 이 세계관에서 현재 개발된 알고리즘은 196종류입니다! 196은 14<sup>2</sup>인 것으로 유명합니다.</p>

<p>이 게임에서는 여러분이 사람들 중 한 명이 되어 문제 제작자가 될지, 수행자가 될지를 선택할 수 있습니다. 문제 제작자가 되면 문제를 만들고, 수행자가 되면 문제를 풉니다. 문제 제작자로서의 경험이 늘면 문제의 조건 등을 교묘하게 설정해 원하는 난이도의 문제를 높은 좌절감으로 만들어낼 수 있습니다. 좌절감이 높은 문제는 실제 문제와 비슷하다는 척도로 활용되기도 하고, 문제 제작자가 풀이를 알고 있기에 어쨌든 <strong>연습문제라는</strong> 점에서 수행을 많이 한 수행자들 사이에서 인기의 척도가 되기도 했습니다. 수행자로서의 경험이 늘면, 문제를 잘 풀 수 있습니다. 이것의 장점에 대해서는 더 설명할 필요가 있을지 잘 모르겠습니다. <em>여러분 모두 문제를 잘 풀고 싶지 않나요?</em></p>

<p>게임이 인기를 끌자 기획자들이 머리를 쥐어짜 내 추가한 기능인지는 몰라도, 문제 제작자와 수행자가 모의 전투를 벌일 수 있습니다. 이는 수행자가 실제로 문제들을 만났을 때를 대비해 문제 제작자가 적절한 난이도의 문제를 던져주는 것을 의미합니다. 모의 전투가 구체적으로 어떻게 동작하는지에 대해서는 아래에서 간단히 설명하겠습니다. 문제 제작자가 준비한 모든 문제를 수행자가 풀면 수행자가 승리하고, 그러지 못하거나 그러기 전에 수행자의 좌절감이 너무 높아지면 문제 제작자가 이깁니다. 음, 그래서 제가 무슨 얘기를 하려고 했었을까요? 아, 그래서 문제가 어떻게 구성되는지를 얘기하지 않았네요.</p>

<p>문제는 다음과 같은 다섯 가지 요소로 구성됩니다.</p>

<ul>
	<li><strong>실력 척도</strong>: 문제를 풀기 위해서 요구되는 수행자의 최소 레벨입니다. 이 게임에서 수행자의 최대 레벨은 30입니다. 실력 척도가 30을 넘는 문제는 존재할 수 있으나, 실력 척도가 32 이상인 연습문제는 아무 의미가 없기 때문에, 문제 제작자들이 그런 문제는 만들지 않습니다. 모의 전투에서는, 예외적으로 이 레벨을 1 깎아 주는 조건이 있는데 후술합니다. 따라서 실력 척도가 31인 문제는 존재할 수 있습니다. 앞으로 수식으로 표기할 일이 있으면 <em>L</em> 등 기울임꼴 알파벳 대문자로 적습니다.</li>
	<li><strong>좌절감 수치</strong>: 수행자가 문제를 풀지 못했을 때 더해지는 좌절감의 양 <em>y</em>입니다. 기존 수행자의 좌절감이 <em>x</em>일 때, 문제를 풀지 못했을 때 수행자의 좌절감은 log(e<sup><em>x</em></sup> + e<sup><em>y</em></sup>)로 계산됩니다. 당연히 로그는 자연 로그입니다. 지금 무슨 생각을 하고 계신 거예요... 모든 수치는 소수점 셋째 자리에서 반올림해 둘째 자리까지만 계산합니다. 앞으로 수식으로 표기할 일이 있으면 <em>y</em> 등 기울임꼴 알파벳 소문자로 적습니다.</li>
	<li><strong>알고리즘 대분류 척도</strong>: 문제를 풀기 위한 조건이 되는 척도입니다. 알고리즘 대분류는 다음과 같이 여덟 종류입니다: 수학, 구현, 탐욕법, 문자열, 자료 구조, 그래프, 동적 계획법, 기하. 수행자에게는 이 여덟 종류 각각에 대해 레벨이 존재합니다. 이 레벨의 상한은 <strong>없습니다</strong>. 이 값은 8차원 벡터로 나타낼 수 있으며, 실제로 그렇게 생각하는 것이 유용할 것입니다. 수행자가 이 문제를 풀기 위해서는 여덟 종류 중 <strong>문제의</strong> 알고리즘 대분류 척도 레벨이 가장 높은 세 개의 알고리즘 대분류 척도(같은 값이 있는 경우 수행자가 유리한 쪽으로 고름)를 포함하여 최소한 <strong>여섯 개</strong>의 알고리즘 대분류 척도에서 수행자의 알고리즘 대분류 레벨이 대응하는 문제의 알고리즘 대분류 척도보다 크거나 같아야 합니다. 여기서 모의 전투 상황에서는, 괄호 속의 "수행자가 유리한" 쪽이라는 것이 반드시 수행자가 문제를 푸는 쪽은 아니라는 것에 유의하세요. 수행자의 알고리즘 대분류 척도 레벨은, 대응하는 알고리즘 대분류 척도 레벨이 수행자의 레벨의 1.0~1.2배 사이인 경우 두 값의 산술평균으로 업데이트됩니다. 앞으로 수식으로 표기할 일이 있으면 <strong>v</strong> 등 굵은 글씨 알파벳 소문자로 적습니다.</li>
	<li><strong>알고리즘 소분류</strong>: 문제를 풀기 위해서 수행자가 반드시 알아야 하는 알고리즘 소분류들입니다. 알고리즘 소분류는, 상술하였듯이, 200종류 가까이 되기 때문에 여기에 다 열거할 수는 없습니다. 수행자가 이 문제를 풀기 위해서는 수행자가 알고 있는 알고리즘 소분류 집합이 문제의 알고리즘 소분류 집합을 완전히 포함해야 합니다. 앞으로 수식으로 표기할 일은 아마 없을 것입니다.</li>
	<li><strong>배우는 알고리즘 소분류</strong>: 문제를 풀어내는 경우, 수행자가 알게 되는 알고리즘 소분류입니다. <strong>최대 하나</strong>이며 <strong>없을 수도 있습니다</strong>. 수행자가 이 문제를 <strong>푸는 경우</strong>, 수행자는 앞으로 이 알고리즘 소분류를 알게 됩니다.</li>
</ul>

<p>모의 전투에서 실력 척도가 <em>A</em> 대신 (<em>T</em> - 1)로 적용되는 경우는 다음과 같습니다: 해당 모의 전투에서 직전 문제를 스킵하지 않았어야 하고, 전(직전일 필요는 없습니다)에 푼 문제가 있어야 하며, 전에 푼 문제의 <strong>k</strong>와 지금 풀고 있는 문제의 <strong>p</strong>의 cosine similarity가 0.95 이상이어야 합니다.</p>

<p>모의 전투를 진행하는 방법은 다음과 같습니다.</p>

<ol>
	<li>문제 제작자가 준비한 문제를 수행자에게 모두 보여줍니다.</li>
	<li>문제 제작자에게 남은 문제가 없을 경우, 수행자의 승리입니다. 그렇지 않을 경우, 문제 제작자에게 문제가 없을 때까지 다음을 반복합니다.
	<ol>
		<li>문제 제작자가 준비한 문제 중 하나를 수행자에게 제공합니다.</li>
		<li>수행자는 다음 둘 중 하나를 할 수 있습니다.
		<ul>
			<li>문제를 풀려고 시도합니다. 상술한 문제 풀이 조건을 만족한 경우 문제는 풀리고, 이 모의 전투에서 다시는 사용될 수 없습니다. 조건을 만족하지 않은 경우, 문제는 문제 제작자에게로 귀속되지 않는 <strong>일시 버림</strong> 상태에 있게 됩니다.</li>
			<li>문제를 스킵합니다. 문제는 일시 버림 상태가 되고, 수행자의 좌절감 수치가 1 줄어듭니다.</li>
		</ul>
		</li>
		<li>수행자의 좌절감이 수행자의 최대 좌절감 수치를 넘은 경우 수행자는 <strong>즉시</strong> 패배합니다.</li>
	</ol>
	</li>
	<li>2번 과정에서 제공된 모든 문제를 일시 버림한 경우 (즉, 수행자가 제공된/일시 버림 상태를 해제한 문제를 한 문제도 풀지 못한 경우) 문제 제작자의 승리입니다.</li>
	<li>모든 문제의 일시 버림 상태를 해제하고, 2번 과정으로 돌아갑니다.</li>
</ol>

<p>이 게임의 훌륭한 문제 제작자인 서윤이가 훌륭한 수행자인 서연이에게 모의 전투를 걸어 왔습니다. 양쪽이 최선을 다할 때, 누가 이길지를 출력하는 프로그램을 작성하세요.</p>

### 입력 

 <p>첫 줄에 수행자의 현재 레벨이 0 이상 30 이하의 정수로, 수행자의 초기 좌절감이 소수점 이하 최대 두 자리까지 들어오는 음이 아닌 실수로, 수행자의 최대 좌절감이 소수점 이하 최대 두 자리까지 들어오는 음이 아닌 실수로, 공백을 사이에 두고 주어집니다.</p>

<p>둘째 줄에 수행자의 알고리즘 대분류 레벨이 공백을 사이에 둔 0 이상의 양의 정수 여덟 개로 주어집니다. 각각은 순서대로 수행자의 알고리즘 대분류 "수학"의 레벨, 수행자의 알고리즘 대분류 "구현"의 레벨, 수행자의 알고리즘 대분류 "탐욕법"의 레벨, 수행자의 알고리즘 대분류 "문자열"의 레벨, 수행자의 알고리즘 대분류 "자료 구조"의 레벨, 수행자의 알고리즘 대분류 "그래프"의 레벨, 수행자의 알고리즘 대분류 "동적 계획법"의 레벨 그리고 수행자의 알고리즘 대분류 "기하"의 레벨입니다.</p>

<p>셋째 줄에 수행자가 알고 있는 알고리즘 소분류가 공백을 사이에 두고 주어집니다. 알고리즘 소분류는 <code>0_1_bfs</code>, <code>2_sat</code>, <code>a_star</code>, <code>ad_hoc</code>, <code>aho_corasick</code>, <code>alien</code>, <code>arbitrary_precision</code>, <code>arithmetic</code>, <code>articulation</code>, <code>backtracking</code>, <code>bayes</code>, <code>bellman_ford</code>, <code>berlekamp_massey</code>, <code>bfs</code>, <code>biconnected_component</code>, <code>bidirectional_search</code>, <code>binary_search</code>, <code>bipartite_graph</code>, <code>bipartite_matching</code>, <code>birthday</code>, <code>bitmask</code>, <code>bitset</code>, <code>bruteforcing</code>, <code>burnside</code>, <code>cactus</code>, <code>calculus</code>, <code>cartesian_tree</code>, <code>case_work</code>, <code>centroid</code>, <code>centroid_decomposition</code>, <code>chordal_graph</code>, <code>cht</code>, <code>circulation</code>, <code>combinatorics</code>, <code>constructive</code>, <code>convex_hull</code>, <code>coordinate_compression</code>, <code>crt</code>, <code>dancing_links</code>, <code>data_structures</code>, <code>degree_sequence</code>, <code>delaunay</code>, <code>deque</code>, <code>dfs</code>, <code>differential_cryptanalysis</code>, <code>dijkstra</code>, <code>directed_mst</code>, <code>discrete_kth_root</code>, <code>discrete_log</code>, <code>discrete_sqrt</code>, <code>disjoint_set</code>, <code>divide_and_conquer</code>, <code>divide_and_conquer_optimization</code>, <code>dominator_tree</code>, <code>dp</code>, <code>dp_bitfield</code>, <code>dp_connection_profile</code>, <code>dp_deque</code>, <code>dp_sum_over_subsets</code>, <code>dp_tree</code>, <code>dual_graph</code>, <code>duality</code>, <code>euclidean</code>, <code>euler_characteristic</code>, <code>euler_phi</code>, <code>euler_tour_technique</code>, <code>eulerian_path</code>, <code>exponentiation_by_squaring</code>, <code>extended_euclidean</code>, <code>fft</code>, <code>flow</code>, <code>floyd_warshall</code>, <code>flt</code>, <code>game_theory</code>, <code>gaussian_elimination</code>, <code>general_matching</code>, <code>generating_function</code>, <code>geometric_boolean_operations</code>, <code>geometry</code>, <code>geometry_3d</code>, <code>geometry_hyper</code>, <code>gradient_descent</code>, <code>graph_traversal</code>, <code>graphs</code>, <code>greedy</code>, <code>green</code>, <code>hackenbush</code>, <code>half_plane_intersection</code>, <code>hall</code>, <code>hash_set</code>, <code>hashing</code>, <code>heuristics</code>, <code>hirschberg</code>, <code>hld</code>, <code>hungarian</code>, <code>implementation</code>, <code>inclusion_and_exclusion</code>, <code>kitamasa</code>, <code>kmp</code>, <code>knapsack</code>, <code>knuth</code>, <code>knuth_x</code>, <code>lazyprop</code>, <code>lca</code>, <code>line_intersection</code>, <code>linear_algebra</code>, <code>linear_programming</code>, <code>linearity_of_expectation</code>, <code>link_cut_tree</code>, <code>linked_list</code>, <code>lis</code>, <code>lucas</code>, <code>majority_vote</code>, <code>manacher</code>, <code>math</code>, <code>matroid</code>, <code>mcmf</code>, <code>merge_sort_tree</code>, <code>mfmc</code>, <code>miller_rabin</code>, <code>min_enclosing_circle</code>, <code>mitm</code>, <code>mo</code>, <code>mobius_inversion</code>, <code>modular_multiplicative_inverse</code>, <code>monotone_queue_optimization</code>, <code>mst</code>, <code>multi_segtree</code>, <code>multipoint_evaluation</code>, <code>number_theory</code>, <code>numerical_analysis</code>, <code>offline_dynamic_connectivity</code>, <code>offline_queries</code>, <code>palindrome_tree</code>, <code>parametric_search</code>, <code>parsing</code>, <code>pbs</code>, <code>permutation_cycle_decomposition</code>, <code>physics</code>, <code>pick</code>, <code>pigeonhole_principle</code>, <code>planar_graph</code>, <code>point_in_convex_polygon</code>, <code>point_in_non_convex_polygon</code>, <code>pollard_rho</code>, <code>polygon_area</code>, <code>precomputation</code>, <code>prefix_sum</code>, <code>primality_test</code>, <code>priority_queue</code>, <code>probability</code>, <code>pst</code>, <code>pythagoras</code>, <code>queue</code>, <code>rabin_karp</code>, <code>randomization</code>, <code>rb_tree</code>, <code>recursion</code>, <code>regex</code>, <code>rope</code>, <code>rotating_calipers</code>, <code>scc</code>, <code>segtree</code>, <code>sieve</code>, <code>simulated_annealing</code>, <code>simulation</code>, <code>sliding_window</code>, <code>slope_trick</code>, <code>smaller_to_larger</code>, <code>sorting</code>, <code>sparse_table</code>, <code>splay_tree</code>, <code>sprague_grundy</code>, <code>sqrt_decomposition</code>, <code>stable_marriage</code>, <code>stack</code>, <code>statistics</code>, <code>stoer_wagner</code>, <code>string</code>, <code>suffix_array</code>, <code>suffix_tree</code>, <code>sweeping</code>, <code>ternary_search</code>, <code>top_tree</code>, <code>topological_sorting</code>, <code>tree_compression</code>, <code>tree_decomposition</code>, <code>tree_isomorphism</code>, <code>tree_set</code>, <code>trees</code>, <code>trie</code>, <code>tsp</code>, <code>two_pointer</code>, <code>utf8</code>, <code>voronoi</code> 또는 <code>z</code> 중 하나이며, 같은 문자열이 여러 번 들어오지 않습니다.</p>

<p>넷째 줄에 문제 제작자가 이번 모의 전투에 사용하는 문제의 개수가 0 이상의 정수로 주어집니다.</p>

<p>넷째 줄에 주어진 정수만큼 문제의 정보가 주어집니다. 문제 하나의 정보는 총 서너 줄로 주어집니다.</p>

<p>문제 정보의 첫 줄에는 문제의 실력 척도가 0 이상 31 이하의 정수로, 문제의 좌절감 수치가 소수점 이하 최대 두 자리까지 들어오는 양의 실수로, 공백을 사이에 두고 주어집니다.</p>

<p>문제 정보의 둘째 줄에는 문제의 알고리즘 대분류 척도가 공백을 사이에 둔 0 이상의 양의 정수 여덟 개로 주어집니다. 각각은 순서대로 문제의 알고리즘 대분류 "수학"의 척도, 문제의 알고리즘 대분류 "구현"의 척도, 문제의 알고리즘 대분류 "탐욕법"의 척도, 문제의 알고리즘 대분류 "문자열"의 척도, 문제의 알고리즘 대분류 "자료 구조"의 척도, 문제의 알고리즘 대분류 "그래프"의 척도, 문제의 알고리즘 대분류 "동적 계획법"의 척도 그리고 문제의 알고리즘 대분류 "기하"의 척도입니다.</p>

<p>문제 정보의 셋째 줄에는 문제의 알고리즘 소분류가 공백을 사이에 두고 주어집니다. 알고리즘 소분류는 셋째 줄에 주어질 수 있는 알고리즘 소분류 입력 중 하나이며, 같은 문자열이 여러 번 들어오지 않습니다.</p>

<p>이 문제에 배우는 알고리즘 소분류가 존재한다면, 문제 정보의 넷째 줄에는 문제의 배우는 알고리즘 소분류가 주어집니다. 알고리즘 소분류는 넷째 줄에 주어질 수 있는 알고리즘 소분류 입력 중 하나입니다.</p>

<p>입력은 게임을 해 보셨다면 유추할 수 있는 <strong>상식적인</strong> 범위 내에서 들어오며, 1MB를 넘지 않습니다. 상식적인 범위라는 것은, 예를 들어 가능한 196가지의 모든 알고리즘 소분류가 들어 있는 문제는... <a href="https://www.acmicpc.net/problem/18825" target="_blank">어...</a> <strong>아마도 <a href="https://twitter.com/shiftpsh/status/1510824775429799936" target="_blank">없다</a></strong>는 뜻입니다.</p>

### 출력 

 <p>첫 줄에, 모의 전투에서 양 선수가 최선을 다하는 경우 이기는 사람<span style="font-size: 0px;">의 이니셜</span>을 <span style="font-size: 0px;">영어 대문자 두 글자로 </span>출력합니다.</p>

