

The complementary graph of the first graph has those edges
$$
\{a,b\},\{a,c\},\{a,e\},\{a,d\},\{a,g\},\{b,c\},\{b,d\},\{b,e\},\{b,g\},\{c,d\},\{c,e\},\{c,f\},\{d,e\},\{d,f\},\{f,g\}
$$


The complementary graph of the second graph has those edges
$$
\{a,g\},\{e,f\},\{e,h\},\{e,g\},\{f,h\}
$$


The first one is bipartite, it can be partitioned into two sets V1= {V1,V3,V5} and V2={V2,V4,V6}

The first one is bipartite, it can be partitioned into two sets V1= {a,c} and V2={b,d,e}





3.

​	First of all, `be friends` is obviously undirected, which means if a is friend of b, then b must be friend of a. Also, there are not multiple edges and loops in the frends graph. So we can use simple graph to represent the relation `be friends`. We let G = (V,E) be the sample graph.

​	Suppose there does not exist two people in the group, and they have the same number of friends. Which means for $\forall x,y \in V, deg(x) \neq deg(y)$. Also, we know for any $x \in V, 0<=deg(x)<=n-1$. Because there does not exist two people in the group, and they have the same number of friends. So there must $\exist x,y, deg(x) = 0, deg(y) = n-1$, but this is impossible. So the assumption is wrong.

​	Thus there must be two people who are friends with the same number of other people in the group. 

