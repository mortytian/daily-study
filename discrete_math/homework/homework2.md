(1)

method1 : derivation 

PDNF:
$$
\begin{align}
&(\neg p \wedge q) \vee(\neg p \wedge \neg q \wedge r) \vee r \\
& \equiv (\neg p \wedge q \wedge (r \vee \neg r)) \vee(\neg p \wedge \neg q \wedge r) \vee(r \wedge (\neg p \wedge p) \wedge(\neg q \wedge q)) \\
& \equiv((\neg p \wedge q \wedge r) \vee (\neg p \wedge q \wedge \neg r)) \vee (\neg p \wedge \neg q \wedge r) \vee (r \wedge(\neg p \vee p) \wedge (\neg q \vee q)) \\
& \equiv(\neg p \wedge q \wedge r) \vee (\neg p \wedge q \wedge \neg r) \vee (\neg p \wedge \neg q \wedge r) \vee (r \wedge(\neg p \vee p) \wedge (\neg q \vee q)) \\
& \equiv(\neg p \wedge q \wedge r) \vee (\neg p \wedge q \wedge \neg r) \vee (\neg p \wedge \neg q \wedge r) \vee ((r \wedge(\neg p \vee p) \wedge \neg q) \vee (r \wedge(\neg p \vee p) \wedge  q)  \\
& \equiv(\neg p \wedge q \wedge r) \vee (\neg p \wedge q \wedge \neg r) \vee (\neg p \wedge \neg q \wedge r) \vee (r \wedge \neg p \wedge \neg q) \vee (r \wedge \ p \wedge \neg q) \vee (r \wedge \neg p \wedge q)  \vee (r \wedge  p \wedge q)  \\
& \equiv (p \wedge q \wedge  r ) \vee (\ p \wedge \neg q \wedge r) \vee( p \wedge\neg q \wedge \neg r) \vee (\neg p \wedge q \wedge \neg r) \vee(\neg p \wedge \neg q \wedge \neg r)




\end{align}
$$



PCNF:
$$
\begin{align}
&(\neg p \wedge q) \vee(\neg p \wedge \neg q \wedge r) \vee r \\
& \equiv(\neg p \vee \neg p \vee r) \wedge(\neg p \vee \neg q \vee r)\wedge(\neg p \vee r \vee r) \wedge (q \vee \neg p \vee r) \wedge (q \vee \neg q \vee r) \wedge (q \vee r \vee r)\\
& \equiv (\neg p \vee r)\wedge (\neg p \vee \neg q \vee r)\wedge (\neg p \vee r)\wedge(\neg p \vee q \vee r) \wedge (q \vee r) \\
& \equiv (\neg p \vee r) \wedge (\neg p \vee \neg q \vee r) \wedge(\neg p \vee q \vee r) \wedge (q \vee r) \\
& \equiv(\neg p \vee r \vee (q \wedge \neg q)) \wedge(\neg p \vee \neg q \vee r)\wedge(\neg p \vee q \vee r) \wedge(q \vee r \vee (\neg p \wedge p))\\
& \equiv(\neg p \vee q \vee r) \wedge (\neg p \vee \neg q \vee r) \wedge (\neg p \vee \neg q \vee r) \wedge(\neg p \vee q \vee r)\wedge(\neg p \vee q \vee r) \wedge(p \vee q \vee r) \\
& \equiv (p \vee q \vee r ) \wedge (\neg p \vee q \vee r) \wedge(\neg p \vee \neg q \vee r)

\end{align}
$$


method2: through truth table get PCNF and PDNF directly.

Truth table

| $p$  | $q$  | $r$  | $\neg p$ | $\neg q$ | $\neg p \wedge q$ | $\neg p \wedge \neg q \wedge r$ | $(\neg p \wedge q) \vee(\neg p \wedge \neg q \wedge r) \vee r$ |
| ---- | ---- | ---- | -------- | -------- | ----------------- | ------------------------------- | ------------------------------------------------------------ |
| 0    | 0    | 0    | 1        | 1        | 0                 | 0                               | 0                                                            |
| 0    | 0    | 1    | 1        | 1        | 0                 | 1                               | 1                                                            |
| 0    | 1    | 0    | 1        | 0        | 1                 | 0                               | 1                                                            |
| 0    | 1    | 1    | 1        | 0        | 1                 | 0                               | 1                                                            |
| 1    | 0    | 0    | 0        | 1        | 0                 | 0                               | 0                                                            |
| 1    | 0    | 1    | 0        | 1        | 0                 | 0                               | 1                                                            |
| 1    | 1    | 0    | 0        | 0        | 0                 | 0                               | 0                                                            |
| 1    | 1    | 1    | 0        | 0        | 0                 | 0                               | 1                                                            |

PCNF:
$$
\begin{align}
&(\neg p \wedge q) \vee(\neg p \wedge \neg q \wedge r) \vee r \\
& \equiv M_{000} \wedge M_{100} \wedge M_{110} \\
& \equiv (p \vee q \vee r ) \wedge (\neg p \vee q \vee r) \wedge(\neg p \vee \neg q \vee r)


\end{align}
$$


PDNF:
$$
\begin{align}
&(\neg p \wedge q) \vee(\neg p \wedge \neg q \wedge r) \vee r \\
& \equiv M_{001} \vee M_{010} \vee M_{011} \vee M_{101} \vee M_{111} \\
& \equiv (p \wedge q \wedge \neg r ) \vee (\ p \wedge \neg q \wedge r) \vee( p \wedge\neg q \wedge \neg r) \vee (\neg p \wedge q \wedge \neg r) \vee(\neg p \wedge \neg q \wedge \neg r)



\end{align}
$$


（2）

It is satisfiable. This is the truth table. When p,q,r is the value list here, then it is true.

| $p$  | $q$  | $r$  | $(\neg p \wedge q) \vee(\neg p \wedge \neg q \wedge r) \vee r$ |
| ---- | ---- | ---- | ------------------------------------------------------------ |
| 0    | 0    | 1    | 1                                                            |
| 0    | 1    | 0    | 1                                                            |
| 0    | 1    | 1    | 1                                                            |
| 1    | 0    | 1    | 1                                                            |
| 1    | 1    | 1    | 1                                                            |