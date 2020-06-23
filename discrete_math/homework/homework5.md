$$
\begin{aligned}
&((\neg \mathrm{p} \vee \mathrm{r}) \wedge(\mathrm{p} \vee \mathrm{q})) \rightarrow(\mathrm{q} \vee \mathrm{r})\\
&\equiv \neg((\neg \mathrm{p} \vee \mathrm{r}) \wedge(\mathrm{p} \vee \mathrm{q})) \vee(\mathrm{q} \vee \mathrm{r})\\
&\equiv \neg(\neg \mathrm{p} \vee \mathrm{r}) \vee \neg(\mathrm{p} \vee \mathrm{q}) \vee(\mathrm{q} \vee \mathrm{r})\\
&\equiv(p \wedge \neg r) \vee(\neg p \wedge \neg q) \vee(q \vee r) \\
& \equiv ((p \wedge \neg r) \vee \neg p)\wedge((p\wedge\neg r) \vee \neg q) \vee(q \vee r)\\
&\equiv (p \vee \neg p) \wedge (p \vee \neg q) \wedge (\neg r \vee \neg q)\vee(q \vee r)\\
& \equiv (\neg p \vee \neg r \vee q \vee r)\wedge(p \vee\neg q\vee q \vee r) \wedge(\neg r\vee \neg q \vee q\vee r)\\
& \equiv T \wedge T \wedge T\\
& \equiv T
\end{aligned}
$$





|      | step                   | reason                                  |
| ---- | ---------------------- | --------------------------------------- |
| 1    | $p \rightarrow s$      | premise                                 |
| 2    | $\neg s$               | premise                                 |
| 3    | $\neg p$               | modus tollens using (1) and (2)         |
| 4    | $p \vee q$             | premise                                 |
| 5    | $q$                    | Disjunctive syllogism using (3) and (4) |
| 6    | $ q \rightarrow r$     | premise                                 |
| 7    | $r$                    | modeus ponens using (5) and (6)         |
| 8    | $ r \wedge (p \vee q)$ | conjuction using (4) and 7              |



