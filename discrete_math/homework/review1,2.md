1.

a)
$$
\exist x （ S(x) \wedge M(x)）
$$
b)
$$
\forall x （S(x) \rightarrow M(x)）
$$


2. 

$$
\begin{align}
\neg(r \rightarrow p) \wedge p \wedge q \\ 
& =\neg(\neg r \vee p)\wedge p \wedge q \\
& = r \wedge \neg p  \wedge p \wedge q  \\
& = r \wedge F \wedge q \\
& = F\\
&这个式子为永假式，因为没有成真指派所以只有主合取范式\\
PCNF &= (p\vee q \vee r) \wedge (p \vee q \vee \neg r) \wedge (p \vee \neg q \vee r) \wedge(p \vee \neg q \vee \neg r) \\
& \wedge (\neg p \vee q\vee r) \wedge(\neg p \vee q \vee \neg r) \wedge (\neg p \vee \neg q \vee r) \wedge(\neg p \vee \neg q \vee \neg r )
\end{align}
$$



3.
$$
\begin{align}
\neg (p \vee (\neg p \wedge q)) &= (\neg p \wedge (p \vee \neg q)) \\
&= (\neg p \wedge p) \vee (p \wedge \neg q) \\
& = F \vee (\neg p \wedge \neg q) \\
& = \neg p \wedge \neg q
\end{align}
$$




4.

a)

​	Beacause $\forall a \forall b(a \neq b \rightarrow f(a) \neq f(b))$ so f is one to one, but g(a) = g(d), so g is not one to one.

b)

​	Because for any y in {a,b,c,d} $\forall y \exist x (f(x) = y)$ so f is onto, but there does not exist x that g(x) = 4, so g is not on to.

c)

​	 Because f is one-to-one correspondence  so f have inverse. $f^{-1}(d)=1$, $f^{-1}(c)=2$ ,$f^{-1}(a)=3$, $f^{-1}(b)=4$



5.

​	Suppose x is in the left-hand side. Then x must be in A but in nither B or C. That is  $x \in A - C $ but $x \notin B$ ,so x is in the right-hand side. Next, suppose x is in the right-hand side. Thus X must be in A-C but not in B. That is $x \in A-B$ but $x \notin C$ , so x is in the left-hand side.


$$
\begin{array}{l}
(A-B)-C=\{x \in U ; x \in(A-B) \wedge x \notin C\} \\
=\{x \in U ; x \in A \wedge x \notin B \wedge x \notin C\}
\end{array}
$$

$$
\begin{array}{l}
(A-C)-B=\{x \in U ; x \in(A-C) \wedge x \notin B\} \\
=\{x \in U ; x \in A \wedge x \notin B \wedge x \notin C\}
\end{array}
$$

