1 

Let $c(x)$ be student x in the class

Let $o(x)$ be x owns a red convertible

Let $g(x)$ be x has gotten a speeding ticket



| sequence | step                                  | reason                               |
| -------- | ------------------------------------- | ------------------------------------ |
| 1        | $\forall x (o(x) \rightarrow g(x))  $ | Premise                              |
| 2        | $o(Linda) \rightarrow g(Linda)$       | Universal instantiation using (1)    |
| 3        | $ o(Linda)$                           | Premise                              |
| 4        | $g(Linda)$                            | Modus ponens using (2) and (3)       |
| 5        | $c(Linda)$                            | Premise                              |
| 6        | $g(Linda) \wedge c(Linda)$            | Conjunction using (4) and (5)        |
| 7        | $\exist x (g(x) \wedge c(x))$         | Existential generalization using (6) |



2

Let $p(x)$ be movie x is produced by John Sayles.

Let $ w(x) $ be movie x produced by John sayles is wonderful.

Let $ c(x) $ be movie x  produced by John Sayles is about coal miners.



| order | step                               | reason                               |
| ----- | ---------------------------------- | ------------------------------------ |
| 1     | $\exists x(p(x) \wedge c(x))$      | Premise                              |
| 2     | $p(x) \wedge c(x)$                 | Existential instantiation using (1)  |
| 3     | $p(x)$                             | Simpliﬁcation using (2)              |
| 4     | $\forall x(p(x) \rightarrow w(x))$ | Premise                              |
| 5     | $p(x) \rightarrow w(x)$            | Universal instantiation using (4)    |
| 6     | $w(x)$                             | Modus ponens using (3) and (5)       |
| 7     | $c(x)$                             | Simpliﬁcation using (2)              |
| 8     | $w(x) \wedge c(x)$                 | Conjunction using (6) and (7)        |
| 9     | $\exists x(c(x) \wedge w(x))$      | Existential generalization using (8) |























